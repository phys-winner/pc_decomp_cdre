package org.crashday.port;

import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

/** Port-owned UI follows the selected game language. Russian text stays at each call site. */
public final class PortText {
    private PortText() { }
    private static final String[] LANGUAGES = {"english", "german", "italian", "turkish", "hungarian", "brazilian", "spanish", "polish"};
    private static final String[][] ROWS = {
        {"Cannot open mods", "Mods können nicht geöffnet werden", "Impossibile aprire le mod", "Modlar açılamıyor", "A modok nem nyithatók meg", "Não foi possível abrir os mods", "No se pueden abrir los mods", "Nie można otworzyć modów"},
        {"Back to launcher", "Zurück zum Launcher", "Torna al launcher", "Başlatıcıya dön", "Vissza az indítóhoz", "Voltar ao inicializador", "Volver al lanzador", "Powrót do programu uruchamiającego"},
        {"CRASHDAY COMMUNITY", "CRASHDAY-COMMUNITY", "COMMUNITY DI CRASHDAY", "CRASHDAY TOPLULUĞU", "CRASHDAY KÖZÖSSÉG", "COMUNIDADE CRASHDAY", "COMUNIDAD DE CRASHDAY", "SPOŁECZNOŚĆ CRASHDAY"},
        {"● Checking API", "● API wird geprüft", "● Verifica API", "● API kontrol ediliyor", "● API ellenőrzése", "● Verificando API", "● Comprobando API", "● Sprawdzanie API"},
        {"CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  ", "CRASHDAY  ·  "},
        {" mods active", " Mods aktiv", " mod attive", " mod etkin", " mod aktív", " mods ativos", " mods activos", " modów aktywnych"},
        {"Explore", "Entdecken", "Esplora", "Keşfet", "Böngészés", "Explorar", "Explorar", "Przeglądaj"},
        {"Installed", "Installiert", "Installate", "Yüklü", "Telepítve", "Instalados", "Instalados", "Zainstalowane"},
        {"Downloads", "Downloads", "Download", "İndirmeler", "Letöltések", "Downloads", "Descargas", "Pobieranie"},
        {"Search cars, tracks, mods…", "Autos, Strecken, Mods suchen…", "Cerca auto, piste, mod…", "Araba, pist, mod ara…", "Autók, pályák, modok keresése…", "Buscar carros, pistas, mods…", "Buscar coches, circuitos, mods…", "Szukaj aut, tras, modów…"},
        {"Search", "Suchen", "Cerca", "Ara", "Keresés", "Buscar", "Buscar", "Szukaj"},
        {"All", "Alle", "Tutte", "Tümü", "Összes", "Todos", "Todos", "Wszystkie"},
        {"Add by link", "Per Link hinzufügen", "Aggiungi tramite link", "Bağlantıyla ekle", "Hozzáadás hivatkozással", "Adicionar por link", "Añadir por enlace", "Dodaj przez link"},
        {"Finding your next favourite mod…", "Dein nächster Lieblingsmod wird gesucht…", "Cerchiamo la tua prossima mod preferita…", "Yeni favori modun aranıyor…", "A következő kedvenc mod keresése…", "Procurando seu próximo mod favorito…", "Buscando tu próximo mod favorito…", "Szukamy twojego kolejnego ulubionego moda…"},
        {"Workshop did not respond", "Workshop antwortet nicht", "Workshop non risponde", "Workshop yanıt vermedi", "A Workshop nem válaszolt", "O Workshop não respondeu", "Workshop no ha respondido", "Workshop nie odpowiada"},
        {"Try again", "Erneut versuchen", "Riprova", "Tekrar dene", "Újra", "Tentar novamente", "Reintentar", "Spróbuj ponownie"},
        {"Open Steam", "Steam öffnen", "Apri Steam", "Steam'i aç", "Steam megnyitása", "Abrir Steam", "Abrir Steam", "Otwórz Steam"},
        {" community creations", " Community-Inhalte", " creazioni della community", " topluluk içeriği", " közösségi alkotás", " criações da comunidade", " creaciones de la comunidad", " prac społeczności"},
        {"Nothing here yet", "Noch keine Ergebnisse", "Nessun risultato", "Henüz bir şey yok", "Még nincs találat", "Nada por aqui ainda", "Aún no hay nada", "Na razie tu pusto"},
        {"Try a different category or a shorter search.", "Versuche eine andere Kategorie oder einen kürzeren Suchbegriff.", "Prova un'altra categoria o una ricerca più breve.", "Farklı bir kategori veya daha kısa bir arama dene.", "Próbálj másik kategóriát vagy rövidebb keresést.", "Tente outra categoria ou uma busca mais curta.", "Prueba otra categoría o una búsqueda más corta.", "Wybierz inną kategorię lub krótsze hasło."},
        {"Previous", "Zurück", "Precedente", "Önceki", "Előző", "Anterior", "Anterior", "Poprzednia"},
        {"Next", "Weiter", "Successiva", "Sonraki", "Következő", "Próxima", "Siguiente", "Następna"},
        {"Details: ", "Details: ", "Dettagli: ", "Ayrıntılar: ", "Részletek: ", "Detalhes: ", "Detalles: ", "Szczegóły: "},
        {"Details", "Details", "Dettagli", "Ayrıntılar", "Részletek", "Detalhes", "Detalles", "Szczegóły"},
        {"In downloads", "In den Downloads", "Nei download", "İndirmelerde", "A letöltések között", "Nos downloads", "En descargas", "W pobieranych"},
        {"Update", "Aktualisieren", "Aggiorna", "Güncelle", "Frissítés", "Atualizar", "Actualizar", "Aktualizuj"},
        {"Retry", "Erneut versuchen", "Riprova", "Tekrar dene", "Újra", "Tentar novamente", "Reintentar", "Ponów"},
        {"Download", "Herunterladen", "Scarica", "İndir", "Letöltés", "Baixar", "Descargar", "Pobierz"},
        {"Trending", "Beliebt", "Di tendenza", "Popüler", "Népszerű", "Em alta", "Tendencias", "Popularne"},
        {"Newest", "Neueste", "Più recenti", "En yeni", "Legújabb", "Mais recentes", "Más recientes", "Najnowsze"},
        {"Most subscribed", "Meistabonniert", "Più sottoscritte", "En çok abone olunan", "Legtöbb feliratkozó", "Mais inscritos", "Más suscripciones", "Najwięcej subskrypcji"},
        {"Sort Workshop", "Workshop sortieren", "Ordina Workshop", "Workshop'u sırala", "Workshop rendezése", "Ordenar Workshop", "Ordenar Workshop", "Sortuj Workshop"},
        {"Cancel", "Abbrechen", "Annulla", "İptal", "Mégse", "Cancelar", "Cancelar", "Anuluj"},
        {"Workshop link or item ID", "Workshop-Link oder Objekt-ID", "Link Workshop o ID del contenuto", "Workshop bağlantısı veya öğe kimliği", "Workshop-hivatkozás vagy elemazonosító", "Link do Workshop ou ID do item", "Enlace de Workshop o ID del artículo", "Link do Workshop lub ID przedmiotu"},
        {"Add from Steam", "Aus Steam hinzufügen", "Aggiungi da Steam", "Steam'den ekle", "Hozzáadás a Steamről", "Adicionar do Steam", "Añadir desde Steam", "Dodaj ze Steam"},
        {"Find", "Suchen", "Trova", "Bul", "Keresés", "Encontrar", "Buscar", "Znajdź"},
        {"Enter a Crashday Workshop link or numeric ID", "Crashday-Workshop-Link oder numerische ID eingeben", "Inserisci un link del Workshop di Crashday o un ID numerico", "Crashday Workshop bağlantısı veya sayısal kimlik gir", "Adj meg egy Crashday Workshop-hivatkozást vagy számazonosítót", "Insira um link do Workshop de Crashday ou um ID numérico", "Introduce un enlace de Workshop de Crashday o un ID numérico", "Wpisz link do Workshop Crashday lub numeryczne ID"},
        {"Reading item details…", "Details werden geladen…", "Caricamento dettagli…", "Öğe ayrıntıları alınıyor…", "Elemadatok betöltése…", "Carregando detalhes do item…", "Leyendo detalles…", "Pobieranie szczegółów…"},
        {"Workshop mods enabled", "Workshop-Mods aktiviert", "Mod Workshop attive", "Workshop modları etkin", "Workshop-modok engedélyezve", "Mods do Workshop ativados", "Mods de Workshop activados", "Mody Workshop włączone"},
        {"Changes apply after a complete restart of the game", "Änderungen gelten nach einem vollständigen Neustart des Spiels", "Le modifiche si applicano dopo il riavvio completo del gioco", "Değişiklikler oyun tamamen yeniden başlatıldığında uygulanır", "A módosítások a játék teljes újraindítása után lépnek életbe", "As alterações entram em vigor após reiniciar o jogo por completo", "Los cambios se aplican al reiniciar completamente el juego", "Zmiany zadziałają po całkowitym ponownym uruchomieniu gry"},
        {"Enable all", "Alle aktivieren", "Attiva tutte", "Tümünü etkinleştir", "Összes engedélyezése", "Ativar todos", "Activar todos", "Włącz wszystkie"},
        {"Disable all", "Alle deaktivieren", "Disattiva tutte", "Tümünü devre dışı bırak", "Összes letiltása", "Desativar todos", "Desactivar todos", "Wyłącz wszystkie"},
        {"Delete all", "Alle löschen", "Elimina tutte", "Tümünü sil", "Összes törlése", "Excluir todos", "Eliminar todos", "Usuń wszystkie"},
        {"Delete all downloaded mods?", "Alle heruntergeladenen Mods löschen?", "Eliminare tutte le mod scaricate?", "İndirilen tüm modlar silinsin mi?", "Törlöd az összes letöltött modot?", "Excluir todos os mods baixados?", "¿Eliminar todos los mods descargados?", "Usunąć wszystkie pobrane mody?"},
        {"All downloaded mods will be removed. Their current updates will be cancelled.", "Alle heruntergeladenen Mods werden entfernt. Ihre laufenden Updates werden abgebrochen.", "Tutte le mod scaricate verranno rimosse. I loro aggiornamenti in corso verranno annullati.", "İndirilen tüm modlar kaldırılacak. Devam eden güncellemeleri iptal edilecek.", "Minden letöltött mod törlődik. A folyamatban lévő frissítéseik megszakadnak.", "Todos os mods baixados serão removidos. Suas atualizações em andamento serão canceladas.", "Se eliminarán todos los mods descargados y se cancelarán sus actualizaciones en curso.", "Wszystkie pobrane mody zostaną usunięte. Ich trwające aktualizacje zostaną anulowane."},
        {"Local mod options  ▾", "Lokale Mod-Optionen  ▾", "Opzioni mod locali  ▾", "Yerel mod seçenekleri  ▾", "Helyi modok beállításai  ▾", "Opções de mods locais  ▾", "Opciones de mods locales  ▾", "Opcje lokalnych modów  ▾"},
        {"Your garage is waiting", "Deine Garage wartet", "Il tuo garage ti aspetta", "Garajın seni bekliyor", "A garázsod rád vár", "Sua garagem está esperando", "Tu garaje te espera", "Twój garaż czeka"},
        {"Download a car, track or mod from Explore. Installed items stay available offline.", "Lade unter Entdecken ein Auto, eine Strecke oder einen Mod herunter. Installierte Inhalte sind auch offline verfügbar.", "Scarica un'auto, una pista o una mod da Esplora. I contenuti installati restano disponibili offline.", "Keşfet'ten araba, pist veya mod indir. Yüklü içerikler çevrimdışı kullanılabilir.", "Tölts le autót, pályát vagy modot a Böngészés lapon. A telepített elemek offline is elérhetők.", "Baixe um carro, pista ou mod em Explorar. Itens instalados continuam disponíveis sem conexão.", "Descarga un coche, circuito o mod desde Explorar. El contenido instalado sigue disponible sin conexión.", "Pobierz auto, trasę lub mod w zakładce Przeglądaj. Zainstalowane przedmioty działają offline."},
        {"Explore Workshop", "Workshop entdecken", "Esplora Workshop", "Workshop'u keşfet", "Workshop böngészése", "Explorar Workshop", "Explorar Workshop", "Przeglądaj Workshop"},
        {"LOAD ORDER  ·  Earlier items load first", "LADEREIHENFOLGE  ·  Obere Inhalte werden zuerst geladen", "ORDINE  ·  I primi contenuti vengono caricati prima", "YÜKLEME SIRASI  ·  Üstteki öğeler önce yüklenir", "BETÖLTÉSI SORREND  ·  A felső elemek töltődnek be először", "ORDEM  ·  Os primeiros itens são carregados antes", "ORDEN DE CARGA  ·  Los primeros se cargan antes", "KOLEJNOŚĆ  ·  Wyższe przedmioty wczytują się wcześniej"},
        {"Enabled", "Aktiviert", "Attiva", "Etkin", "Engedélyezve", "Ativado", "Activado", "Włączony"},
        {"All Workshop mods are currently disabled", "Alle Workshop-Mods sind derzeit deaktiviert", "Tutte le mod Workshop sono attualmente disattivate", "Tüm Workshop modları şu anda devre dışı", "Jelenleg minden Workshop-mod le van tiltva", "Todos os mods do Workshop estão desativados", "Todos los mods de Workshop están desactivados", "Wszystkie mody Workshop są obecnie wyłączone"},
        {"Move up: ", "Nach oben: ", "Sposta su: ", "Yukarı taşı: ", "Feljebb: ", "Mover para cima: ", "Subir: ", "Przesuń w górę: "},
        {"Move down: ", "Nach unten: ", "Sposta giù: ", "Aşağı taşı: ", "Lejjebb: ", "Mover para baixo: ", "Bajar: ", "Przesuń w dół: "},
        {"Remove: ", "Entfernen: ", "Rimuovi: ", "Kaldır: ", "Eltávolítás: ", "Remover: ", "Eliminar: ", "Usuń: "},
        {"Mod development mode", "Mod-Entwicklungsmodus", "Modalità sviluppo mod", "Mod geliştirme modu", "Modfejlesztői mód", "Modo de desenvolvimento de mods", "Modo de desarrollo de mods", "Tryb tworzenia modów"},
        {"Also load your local testing mods", "Auch lokale Test-Mods laden", "Carica anche le mod locali di prova", "Yerel test modlarını da yükle", "A helyi tesztmodokat is betölti", "Carregar também seus mods locais de teste", "Cargar también los mods locales de prueba", "Wczytuj też lokalne mody testowe"},
        {"Local mods", "Lokale Mods", "Mod locali", "Yerel modlar", "Helyi modok", "Mods locais", "Mods locales", "Lokalne mody"},
        {"Done", "Fertig", "Fine", "Tamam", "Kész", "Concluído", "Hecho", "Gotowe"},
        {"Ready for the next race", "Bereit für das nächste Rennen", "Pronti per la prossima gara", "Sonraki yarışa hazır", "Készen a következő versenyre", "Tudo pronto para a próxima corrida", "Listo para la próxima carrera", "Gotowi na kolejny wyścig"},
        {"Downloads continue when you return to the launcher. Failed downloads can be retried.", "Downloads laufen auch im Launcher weiter. Fehlgeschlagene Downloads können erneut gestartet werden.", "I download continuano tornando al launcher. Puoi riprovare quelli non riusciti.", "Başlatıcıya döndüğünde indirmeler devam eder. Başarısız indirmeler tekrar denenebilir.", "A letöltések az indítóba visszatérve is folytatódnak. A sikertelen letöltések újraindíthatók.", "Os downloads continuam ao voltar ao inicializador. Downloads com falha podem ser repetidos.", "Las descargas continúan al volver al lanzador. Puedes reintentar las que fallen.", "Pobieranie trwa po powrocie do programu uruchamiającego. Nieudane pobieranie można ponowić."},
        {"Cancel download", "Download abbrechen", "Annulla download", "İndirmeyi iptal et", "Letöltés megszakítása", "Cancelar download", "Cancelar descarga", "Anuluj pobieranie"},
        {"Remove", "Entfernen", "Rimuovi", "Kaldır", "Eltávolítás", "Remover", "Eliminar", "Usuń"},
        {"All clear", "Alles erledigt", "Tutto fatto", "Her şey tamam", "Nincs teendő", "Tudo pronto", "Todo listo", "Wszystko gotowe"},
        {"New downloads will appear here. Your installed mods are in the next tab.", "Neue Downloads erscheinen hier. Installierte Mods findest du auf dem anderen Tab.", "I nuovi download appariranno qui. Le mod installate sono nell'altra scheda.", "Yeni indirmeler burada görünür. Yüklü modların diğer sekmededir.", "Az új letöltések itt jelennek meg. A telepített modok a másik lapon vannak.", "Novos downloads aparecem aqui. Seus mods instalados estão na outra aba.", "Las nuevas descargas aparecerán aquí. Tus mods instalados están en la otra pestaña.", "Tutaj pojawią się nowe pobrania. Zainstalowane mody są w drugiej zakładce."},
        {"Waiting in queue", "In der Warteschlange", "In coda", "Sırada bekliyor", "Sorban áll", "Na fila", "En cola", "W kolejce"},
        {"Downloading and verifying", "Wird heruntergeladen und geprüft", "Download e verifica", "İndiriliyor ve doğrulanıyor", "Letöltés és ellenőrzés", "Baixando e verificando", "Descargando y verificando", "Pobieranie i weryfikacja"},
        {"Download failed", "Download fehlgeschlagen", "Download non riuscito", "İndirme başarısız", "Sikertelen letöltés", "Falha no download", "Error de descarga", "Pobieranie nieudane"},
        {"Cancelled", "Abgebrochen", "Annullato", "İptal edildi", "Megszakítva", "Cancelado", "Cancelado", "Anulowano"},
        {"Download started", "Download gestartet", "Download avviato", "İndirme başladı", "A letöltés elindult", "Download iniciado", "Descarga iniciada", "Rozpoczęto pobieranie"},
        {"Close", "Schließen", "Chiudi", "Kapat", "Bezárás", "Fechar", "Cerrar", "Zamknij"},
        {"Showing saved details. ", "Gespeicherte Details werden angezeigt. ", "Vengono mostrati i dettagli salvati. ", "Kayıtlı ayrıntılar gösteriliyor. ", "A mentett részletek láthatók. ", "Exibindo detalhes salvos. ", "Mostrando los detalles guardados. ", "Wyświetlanie zapisanych szczegółów. "},
        {"No description provided.", "Keine Beschreibung vorhanden.", "Nessuna descrizione disponibile.", "Açıklama sağlanmadı.", "Nincs megadva leírás.", "Nenhuma descrição fornecida.", "No hay descripción.", "Brak opisu."},
        {"Disable", "Deaktivieren", "Disattiva", "Devre dışı bırak", "Letiltás", "Desativar", "Desactivar", "Wyłącz"},
        {"Enable", "Aktivieren", "Attiva", "Etkinleştir", "Engedélyezés", "Ativar", "Activar", "Włącz"},
        {"Steam has not provided a public download for this item.", "Steam stellt für diesen Inhalt keinen öffentlichen Download bereit.", "Steam non ha fornito un download pubblico per questo contenuto.", "Steam bu öğe için herkese açık bir indirme sunmadı.", "A Steam nem biztosított nyilvános letöltést ehhez az elemhez.", "O Steam não disponibilizou um download público deste item.", "Steam no ofrece una descarga pública de este artículo.", "Steam nie udostępnił publicznego pobierania tego przedmiotu."},
        {"Community mod", "Community-Mod", "Mod della community", "Topluluk modu", "Közösségi mod", "Mod da comunidade", "Mod de la comunidad", "Mod społeczności"},
        {"Remove mod?", "Mod entfernen?", "Rimuovere la mod?", "Mod kaldırılsın mı?", "Eltávolítod a modot?", "Remover mod?", "¿Eliminar el mod?", "Usunąć mod?"},
        {"The downloaded copy will be removed. You can download it again from Workshop.", "Die heruntergeladene Kopie wird entfernt. Du kannst sie erneut aus dem Workshop herunterladen.", "La copia scaricata verrà rimossa. Potrai scaricarla di nuovo dal Workshop.", "İndirilen kopya kaldırılacak. Workshop'tan tekrar indirebilirsin.", "A letöltött példány törlődik. Később újra letöltheted a Workshopból.", "A cópia baixada será removida. Você pode baixá-la novamente pelo Workshop.", "Se eliminará la copia descargada. Puedes volver a descargarla desde Workshop.", "Pobrana kopia zostanie usunięta. Możesz pobrać ją ponownie z Workshop."},
        {"Keep", "Behalten", "Mantieni", "Tut", "Megtartás", "Manter", "Conservar", "Zachowaj"},
        {"checking…", "wird geprüft…", "verifica…", "kontrol ediliyor…", "ellenőrzés…", "verificando…", "comprobando…", "sprawdzanie…"},
        {"online", "verfügbar", "disponibile", "çevrimiçi", "elérhető", "disponível", "disponible", "dostępne"},
        {"offline", "nicht verfügbar", "non disponibile", "çevrimdışı", "nem elérhető", "indisponível", "no disponible", "niedostępne"},
        {". Tap to check again", ". Zum erneuten Prüfen antippen", ". Tocca per verificare di nuovo", ". Tekrar kontrol etmek için dokun", ". Érintsd meg az új ellenőrzéshez", ". Toque para verificar novamente", ". Toca para volver a comprobar", ". Dotknij, aby sprawdzić ponownie"},
        {"No browser is available", "Kein Browser verfügbar", "Nessun browser disponibile", "Tarayıcı bulunamadı", "Nincs elérhető böngésző", "Nenhum navegador disponível", "No hay ningún navegador disponible", "Brak dostępnej przeglądarki"},
        {"Cars", "Autos", "Auto", "Arabalar", "Autók", "Carros", "Coches", "Samochody"},
        {"Tracks", "Strecken", "Piste", "Pistler", "Pályák", "Pistas", "Circuitos", "Trasy"},
        {"Track Pieces", "Streckenteile", "Elementi della pista", "Pist parçaları", "Pályaelemek", "Peças de pista", "Piezas de circuito", "Elementy tras"},
        {"Ambience", "Umgebung", "Ambiente", "Ortam", "Környezet", "Ambiente", "Entorno", "Otoczenie"},
        {"Misc", "Sonstiges", "Varie", "Diğer", "Egyéb", "Diversos", "Varios", "Różne"},
        {"Mixed", "Gemischt", "Miste", "Karma", "Vegyes", "Mistos", "Mixtos", "Mieszane"},
        {"More cars. More tracks.", "Mehr Autos. Mehr Strecken.", "Più auto. Più piste.", "Daha çok araba. Daha çok pist.", "Több autó. Több pálya.", "Mais carros. Mais pistas.", "Más coches. Más circuitos.", "Więcej aut. Więcej tras."},
        {"Discover mods, download them and build your own collection for the next race.", "Entdecke Mods, lade sie herunter und stelle deine Sammlung für das nächste Rennen zusammen.", "Scopri e scarica mod per creare la tua collezione per la prossima gara.", "Modları keşfet, indir ve sonraki yarış için kendi koleksiyonunu oluştur.", "Fedezz fel és tölts le modokat, és állítsd össze saját gyűjteményed a következő versenyre.", "Descubra mods, baixe e monte sua coleção para a próxima corrida.", "Descubre mods, descárgalos y crea tu colección para la próxima carrera.", "Odkrywaj mody, pobieraj je i twórz kolekcję na kolejny wyścig."},
        {"Open Workshop", "Workshop öffnen", "Apri Workshop", "Workshop'u aç", "Workshop megnyitása", "Abrir Workshop", "Abrir Workshop", "Otwórz Workshop"},
        {"ADDITIONAL SETTINGS", "ZUSÄTZLICHE EINSTELLUNGEN", "IMPOSTAZIONI AGGIUNTIVE", "EK AYARLAR", "TOVÁBBI BEÁLLÍTÁSOK", "CONFIGURAÇÕES ADICIONAIS", "AJUSTES ADICIONALES", "USTAWIENIA DODATKOWE"}
    };
    private static final Map<String, String[]> WORDS = new HashMap<>();
    static { for (String[] row : ROWS) WORDS.put(row[0], row); }

    public static String get(String language, String english, String russian) {
        String resolved = GameLanguage.resolve(language, Locale.getDefault());
        if ("russian".equals(resolved)) return russian;
        String[] row = WORDS.get(english);
        if (row != null) for (int i = 0; i < LANGUAGES.length; ++i) if (LANGUAGES[i].equals(resolved)) return row[i];
        return english;
    }
}
