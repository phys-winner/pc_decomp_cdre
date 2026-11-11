package org.crashday.port;

import java.util.Locale;

final class GameLanguage {
    static final String[] VALUES = {"system", "english", "german", "italian", "russian", "turkish", "hungarian", "brazilian", "spanish", "polish"};
    static final String[] NAMES = {"System", "English", "Deutsch", "Italiano", "Русский", "Türkçe", "Magyar", "Português (Brasil)", "Español", "Polski"};

    static String validate(String value) {
        for (String language : VALUES) if (language.equals(value)) return language;
        return "system";
    }

    static String resolve(String value, Locale locale) {
        value = validate(value);
        if (!"system".equals(value)) return value;
        String[] codes = {"en", "de", "it", "ru", "tr", "hu", "pt", "es", "pl"};
        for (int i = 0; i < codes.length; ++i) if (codes[i].equals(locale.getLanguage())) return VALUES[i + 1];
        return "english";
    }
}
