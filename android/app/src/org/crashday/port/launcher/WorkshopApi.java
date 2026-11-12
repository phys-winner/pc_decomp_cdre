package org.crashday.port.launcher;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URL;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/** Steam's public metadata and the structured JSON that its Workshop catalogue renders. */
public final class WorkshopApi {
    public static final int APP_ID = 508980;
    // shortcut: the native manifest accepts signed 32-bit sizes; verify its readers before raising this limit.
    static final long MAX_FILE_SIZE = Integer.MAX_VALUE;
    private static final int MAX_METADATA = 4 * 1024 * 1024;
    private static final String DETAILS = "https://api.steampowered.com/ISteamRemoteStorage/GetPublishedFileDetails/v1/";
    // shortcut: Steam publishes browse data in its SSR page; update this parser if Valve changes that format.
    private static final Pattern SSR = Pattern.compile("<script\\b[^>]*\\bid=[\"']valve-ssr-data[\"'][^>]*>(.*?)</script\\s*>", Pattern.CASE_INSENSITIVE | Pattern.DOTALL);

    private WorkshopApi() { }

    public static final class Page {
        public final List<WorkshopItem> items;
        public final List<String> categories;
        public final int page, pages, total;

        Page(List<WorkshopItem> items, List<String> categories, int page, int pages, int total) {
            this.items = Collections.unmodifiableList(items);
            this.categories = Collections.unmodifiableList(categories);
            this.page = page; this.pages = pages; this.total = total;
        }
        public boolean hasMore() { return page < pages; }
    }

    public static Page browse(String query, String tag, String sort, int page) throws IOException {
        return parseBrowse(text(catalogUrl(query, tag, sort, page), null));
    }

    static String catalogUrl(String query, String tag, String sort, int page) throws IOException {
        if (page < 1 || page > 1000) throw new IOException("Invalid Workshop page");
        if (query == null) query = "";
        if (tag == null) tag = "";
        if (query.length() > 256 || tag.length() > 100) throw new IOException("Workshop search is too long");
        if (!"trend".equals(sort) && !"mostrecent".equals(sort) && !"totaluniquesubscribers".equals(sort))
            throw new IOException("Invalid Workshop sort");
        return "https://steamcommunity.com/workshop/browse/?appid=" + APP_ID
            + "&section=readytouseitems&l=english&browsesort=" + sort + "&p=" + page + "&days=7"
            + "&searchtext=" + encode(query) + (tag.isEmpty() ? "" : "&requiredtags%5B0%5D=" + encode(tag));
    }

    static Page parseBrowse(String html) throws IOException {
        try {
            Matcher match = SSR.matcher(html);
            if (!match.find()) throw new IOException("Steam catalogue format changed; open Workshop in the browser");
            JSONObject data = new JSONObject(match.group(1));
            if (!"/workshop/browse".equals(data.optString("route"))) throw new IOException("Unexpected Steam catalogue response");
            Set<String> categories = new LinkedHashSet<>();
            JSONArray loaders = data.optJSONArray("loaderData");
            boolean appMatched = false;
            for (int i = 0; loaders != null && i < loaders.length(); ++i) {
                JSONObject loader = object(loaders.opt(i));
                if (loader == null) continue;
                JSONObject app = loader.optJSONObject("app");
                if (app != null && app.optInt("appid") == APP_ID) appMatched = true;
                JSONObject declared = loader.optJSONObject("declaredTags");
                JSONArray groups = declared == null ? null : declared.optJSONArray("readytouse_tags");
                for (int j = 0; groups != null && j < groups.length(); ++j) {
                    JSONObject group = groups.optJSONObject(j);
                    JSONArray tags = group == null ? null : group.optJSONArray("tags");
                    for (int k = 0; tags != null && k < tags.length(); ++k) {
                        JSONObject item = tags.optJSONObject(k);
                        if (item == null || item.optBoolean("admin_only")) continue;
                        String name = item.optString("name");
                        if (!name.isEmpty() && name.length() <= 100) categories.add(name);
                    }
                }
            }
            if (!appMatched) throw new IOException("Steam returned another game's catalogue");
            JSONObject render = data.optJSONObject("renderContext");
            JSONObject state = render == null ? null : object(render.opt("queryData"));
            JSONArray queries = state == null ? null : state.optJSONArray("queries");
            for (int i = 0; queries != null && i < queries.length(); ++i) {
                JSONObject query = queries.optJSONObject(i);
                JSONObject entry = query == null ? null : query.optJSONObject("state");
                JSONObject result = entry == null ? null : entry.optJSONObject("data");
                if (result == null || !result.has("total_count") || !result.has("results")) continue;
                if (result.optInt("eresult") != 1) throw new IOException("Steam catalogue is unavailable");
                JSONArray array = result.optJSONArray("results");
                if (array == null || array.length() > 100) throw new IOException("Invalid Steam catalogue size");
                List<WorkshopItem> items = new ArrayList<>();
                Set<String> ids = new LinkedHashSet<>();
                for (int j = 0; j < array.length(); ++j) {
                    WorkshopItem item = new WorkshopItem(array.getJSONObject(j));
                    if (ids.add(item.id)) items.add(item);
                }
                int page = result.optInt("current_page", 1), pages = result.optInt("total_pages", 0), total = result.optInt("total_count", 0);
                if (page < 1 || pages < 0 || total < 0) throw new IOException("Invalid Steam pagination");
                return new Page(items, new ArrayList<>(categories), page, pages, total);
            }
            throw new IOException("Steam catalogue did not contain a mod list");
        } catch (JSONException invalid) { throw new IOException("Invalid Steam catalogue data", invalid); }
    }

    public static WorkshopItem details(String id) throws IOException {
        id = extractId(id);
        String body = "itemcount=1&publishedfileids%5B0%5D=" + id;
        return parseDetails(text(DETAILS, body), id);
    }

    static WorkshopItem parseDetails(String json, String id) throws IOException {
        try {
            JSONObject response = new JSONObject(json).getJSONObject("response");
            JSONArray items = response.getJSONArray("publishedfiledetails");
            if (items.length() != 1) throw new IOException("Steam API did not return this mod");
            WorkshopItem item = new WorkshopItem(items.getJSONObject(0));
            if (!item.id.equals(id)) throw new IOException("Steam API returned another Workshop item");
            return item;
        } catch (JSONException invalid) { throw new IOException("Invalid Steam API response", invalid); }
    }

    public static boolean probe() throws IOException {
        return details("1108844007").id.equals("1108844007");
    }

    public static String extractId(String text) throws IOException {
        if (text == null) throw new IOException("Enter a Workshop link or item ID");
        String value = text.trim();
        if (!value.matches("[1-9][0-9]{0,19}")) {
            try {
                URI uri = new URI(value);
                if (!"https".equalsIgnoreCase(uri.getScheme()) || !"steamcommunity.com".equalsIgnoreCase(uri.getHost())
                    || uri.getUserInfo() != null || (uri.getPort() != -1 && uri.getPort() != 443)
                    || !("/sharedfiles/filedetails/".equals(uri.getPath()) || "/sharedfiles/filedetails".equals(uri.getPath())
                        || "/workshop/filedetails/".equals(uri.getPath()) || "/workshop/filedetails".equals(uri.getPath())))
                    throw new IOException("Use a Steam Workshop item link");
                value = "";
                String query = uri.getRawQuery();
                for (String pair : query == null ? new String[0] : query.split("&"))
                    if (pair.startsWith("id=")) value = pair.substring(3);
            } catch (URISyntaxException invalid) { throw new IOException("Invalid Workshop link", invalid); }
        }
        if (!value.matches("[1-9][0-9]{0,19}") || value.length() == 20 && value.compareTo("18446744073709551615") > 0)
            throw new IOException("Invalid Workshop item ID");
        return value;
    }

    public static byte[] preview(String url) throws IOException {
        validCdn(url, true);
        HttpURLConnection connection = open(url, null, true, true);
        try (InputStream in = connection.getInputStream()) { return readLimited(in, 2 * 1024 * 1024); }
        finally { connection.disconnect(); }
    }

    static URL validCdn(String value, boolean preview) throws IOException {
        URL url = checkedUrl(value);
        String host = url.getHost().toLowerCase(Locale.ROOT);
        if (!(host.equals("steamusercontent.com") || host.endsWith(".steamusercontent.com")
            || host.equals("steamusercontent-a.akamaihd.net") || host.equals("steamuserimages-a.akamaihd.net")
            || preview && (host.equals("steamstatic.com") || host.endsWith(".steamstatic.com"))))
            throw new IOException("Workshop file must be hosted by Steam");
        return url;
    }

    private static URL checkedUrl(String text) throws IOException {
        try {
            URI uri = new URI(text);
            if (!"https".equalsIgnoreCase(uri.getScheme()) || uri.getHost() == null || uri.getUserInfo() != null
                || (uri.getPort() != -1 && uri.getPort() != 443)) throw new IOException("Steam requires a secure HTTPS link");
            return uri.toURL();
        } catch (URISyntaxException | IllegalArgumentException invalid) { throw new IOException("Invalid Steam URL", invalid); }
    }

    static HttpURLConnection open(String value, String body, boolean cdn, boolean preview) throws IOException {
        URL url = cdn ? validCdn(value, preview) : checkedUrl(value);
        for (int redirects = 0; redirects <= 4; ++redirects) {
            if (!cdn && !("steamcommunity.com".equals(url.getHost()) || "api.steampowered.com".equals(url.getHost())))
                throw new IOException("Unexpected Steam API host");
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            connection.setInstanceFollowRedirects(false);
            connection.setConnectTimeout(15000); connection.setReadTimeout(20000);
            connection.setRequestProperty("User-Agent", "Crashday-Android-Workshop/1.0");
            connection.setRequestProperty("Accept-Encoding", "identity");
            try {
                if (body != null) {
                    byte[] bytes = body.getBytes(StandardCharsets.UTF_8);
                    connection.setRequestMethod("POST"); connection.setDoOutput(true);
                    connection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded; charset=UTF-8");
                    connection.setFixedLengthStreamingMode(bytes.length);
                    try (java.io.OutputStream out = connection.getOutputStream()) { out.write(bytes); }
                }
                int status = connection.getResponseCode();
                if (status == 200) return connection;
                if (status == 301 || status == 302 || status == 303 || status == 307 || status == 308) {
                    String target = connection.getHeaderField("Location");
                    if (target == null || redirects == 4 || body != null) throw new IOException("Unexpected Steam redirect");
                    URL next = new URL(url, target);
                    url = cdn ? validCdn(next.toString(), preview) : checkedUrl(next.toString());
                    connection.disconnect();
                    continue;
                }
                throw new IOException((cdn ? "Steam CDN" : "Steam") + " returned HTTP " + status);
            } catch (IOException failure) { connection.disconnect(); throw failure; }
        }
        throw new IOException("Too many Steam redirects");
    }

    private static String text(String url, String body) throws IOException {
        HttpURLConnection connection = open(url, body, false, false);
        try (InputStream in = connection.getInputStream()) {
            if (connection.getContentLengthLong() > MAX_METADATA) throw new IOException("Steam response is too large");
            return new String(readLimited(in, MAX_METADATA), StandardCharsets.UTF_8);
        } finally { connection.disconnect(); }
    }

    static byte[] readLimited(InputStream in, int limit) throws IOException {
        ByteArrayOutputStream out = new ByteArrayOutputStream();
        byte[] buffer = new byte[16384];
        int count;
        while ((count = in.read(buffer)) != -1) {
            if (count > limit - out.size()) throw new IOException("Steam response is too large");
            out.write(buffer, 0, count);
        }
        return out.toByteArray();
    }

    private static String encode(String value) throws IOException { return URLEncoder.encode(value, "UTF-8"); }
    private static JSONObject object(Object value) throws JSONException {
        return value instanceof JSONObject ? (JSONObject) value : value instanceof String ? new JSONObject((String) value) : null;
    }
}
