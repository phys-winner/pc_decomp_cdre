package org.crashday.port.launcher;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/** Public Steam metadata; IDs remain decimal strings, including unsigned 64-bit IDs. */
public final class WorkshopItem {
    public final String id, title, description, previewUrl, fileUrl, fileName;
    public final long size, updated;
    public final List<String> tags;

    WorkshopItem(JSONObject value) throws IOException {
        id = WorkshopApi.extractId(value.optString("publishedfileid"));
        int app = value.optInt("consumer_app_id", value.optInt("consumer_appid", 0));
        if (app != WorkshopApi.APP_ID || value.optInt("result", 1) != 1 || value.optInt("banned", 0) != 0 || value.optBoolean("banned", false))
            throw new IOException("This Workshop item is unavailable or belongs to another game");
        title = value.optString("title", id);
        description = value.optString("description", value.optString("short_description", ""));
        previewUrl = value.optString("preview_url", "");
        fileUrl = value.optString("file_url", "");
        fileName = value.optString("filename", "");
        size = value.optLong("file_size", 0);
        updated = Math.max(0, value.optLong("time_updated", 0));
        if (size < 0 || size > WorkshopApi.MAX_FILE_SIZE) throw new IOException("Workshop file is too large");
        List<String> found = new ArrayList<>();
        JSONArray array = value.optJSONArray("tags");
        for (int i = 0; array != null && i < array.length() && i < 64; ++i) {
            JSONObject tag = array.optJSONObject(i);
            String text = tag == null ? array.optString(i) : tag.optString("tag");
            if (!text.isEmpty() && text.length() <= 100 && !found.contains(text)) found.add(text);
        }
        tags = Collections.unmodifiableList(found);
    }

    public boolean downloadable() {
        try { return size > 0 && WorkshopApi.validCdn(fileUrl, false) != null; }
        catch (IOException invalid) { return false; }
    }

    JSONObject json() throws JSONException {
        JSONObject value = new JSONObject();
        value.put("publishedfileid", id).put("consumer_app_id", WorkshopApi.APP_ID)
            .put("title", title).put("description", description).put("preview_url", previewUrl)
            .put("file_url", fileUrl).put("filename", fileName).put("file_size", size)
            .put("time_updated", updated);
        JSONArray array = new JSONArray();
        for (String tag : tags) array.put(new JSONObject().put("tag", tag));
        return value.put("tags", array);
    }
}
