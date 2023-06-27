// [number of languages][number of texts][max. length of text]

static const char myLanguage[9][70][85] = {
  { "English",                        // English
    "Rotary direction changed",
    "Please release button",
    "Screen flipped",
    "Calibrate analog meter",
    "Release button when ready",
    "encoder set to optical",
    "encoder set to standard",
    "FM/AM receiver",
    "Tuner: !None!",
    "Volume:",
    "Converter:",
    "Low band edge:",
    "High band edge:",
    "RF Level offset:",
    "Stereo threshold:",
    "High Cut corner:",
    "Highcut threshold:",
    "Low level threshold:",
    "Contrast:",
    "Set volume",
    "Set converter offset",
    "Set low band edge",
    "Set high band edge",
    "Set level offset",
    "Set Stereo sep. threshold",
    "Set high cut corner frequency",
    "Set High cut threshold",
    "Set low level threshold",
    "Set Display brightness",
    "Off",
    "Screen is muted!",
    "To unmute uncheck RF+ box",
    "OFF",
    "SCANNING...",
    "Tuner not detected",
    "Tuner version set: v",
    "Please restart tuner",
    "Show RDS errors",
    "Language",
    "Choose language",
    "PRESS MODE TO EXIT AND STORE",
    "On",
    "Softmute FM",
    "Softmute AM",
    "Beep at band edge",
    "Region",
    "Europe",
    "USA",
    "Show underscore in RDS",
    "USB mode",
    "Wi-Fi active",
    "Configure Wi-Fi",
    "Connect to: ",
    "to configure Wi-Fi",
    "Trying to connect with Wi-Fi",
    "FAILED.. WiFi disabled",
    "CONNECTED!",
    "Stationlist client IP",
    "Show SW wavelength",
    "RDS filter",
    "Dynamic PI",
    "Show squelch",
    "Modulation meter",
    "AM Noise blanker",
    "FM Noise blanker",
    "Defaults loaded",
    "Audio output",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Nederlands",                     // Dutch
    "Rotary richting aangepast",
    "Laat aub de knop los",
    "Scherm gedraaid",
    "Kalibratie analoge meter",
    "Laat knop los indien gereed",
    "encoder ingesteld als optisch",
    "encoder ingesteld als standaard",
    "FM/AM ontvanger",
    "Tuner: !Geen!",
    "Volume:",
    "Converter:",
    "Lage bandgrens:",
    "Hoge bandgrens:",
    "RF niveau afwijking:",
    "Stereo grens:",
    "Hoge tonen afval:",
    "Hoog afval grens:",
    "Laag signaal grens:",
    "Helderheid:",
    "Audio volume",
    "Converter offset",
    "Band ondergrens",
    "Band bovengrens",
    "Signaalafwijking",
    "Stereo signaalgrens",
    "Hoge tonen afval frequentie",
    "Hoge tonen afval signaalniveau",
    "Laag signaalgrens",
    "Stel helderheid in",
    "Uit",
    "Scherm is bevroren!",
    "Schakel RF+ uit om weer te activeren",
    "UIT",
    "ZOEKEN...",
    "Tuner niet herkend!",
    "Tuner ingesteld: v",
    "Herstart de tuner",
    "Toon RDS fouten",
    "Taal",
    "Kies taal",
    "DRUK OP MODE OM AF TE SLUITEN",
    "Aan",
    "Softmute FM",
    "Softmute AM",
    "Piep op bandeinde",
    "Regio",
    "Europa",
    "USA",
    "Toon underscore in RDS",
    "USB mode",
    "Wi-Fi aktief",
    "Configureer Wi-Fi",
    "Verbind met: ",
    "om Wi-Fi in te stellen",
    "Verbinden met Wi-Fi...",
    "MISLUKT! WiFi uitgeschakeld",
    "VERBONDEN!",
    "Stationlist client IP",
    "Toon SW golflengte",
    "RDS filter",
    "Dynamische PI",
    "Toon squelch",
    "Modulatie meter",
    "AM ruis filter",
    "FM ruis filter",
    "Opnieuw geconfigureerd",
    "Audio uitgang",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Polski",                         // Polish
    "Kierunek obrotu zmieniony",
    "Zwolnij przycisk",
    "Obrocono ekran",
    "Kalibracja analogowego miernika",
    "Zwolnij przycisk gdy gotowe",
    "wybrano enkoder optyczny",
    "wybrano standardowy enkoder",
    "Odbiornik FM/AM",
    "Tuner: !Brak!",
    "Glosnosc:",
    "Konwerter:",
    "Dolna granica pasma:",
    "Gorna granica pasma:",
    "Odchylenie poziomu RF:",
    "Prog Stereo:",
    "Krawedz dolnoprzep..:",
    "Prog dolnoprzepust.:",
    "Prog niskiego sygnalu:",
    "Kontrast:",
    "Ustaw glosnosc",
    "Ustaw odchylenie konwertera",
    "Ustaw dolna granice pasma",
    "Ustaw gorna granice pasma",
    "Ustaw odchylenie sygnalu",
    "Ustaw prog separacji Stereo",
    "Czest. gran. filtra dolnoprzep.",
    "Ustaw prog dolnoprzep.",
    "Ustaw dolna granice sygnalu",
    "Ustaw jasnosc wyswietlacza",
    "Wyl.",
    "Ekran jest wyciszony!",
    "Aby wyl. wyciszenie odznacz RF+",
    "WYL.",
    "SKANOWANIE...",
    "Nie wykryto tunera",
    "Ustawiono wersje tunera: v",
    "Prosze uruchomic pon. tuner",
    "Pokaz bledy RDS",
    "Jezyk",
    "Wybierz swoj jezyk",
    "WCISNIJ MODE ABY ZAMKNAC I ZAPISAC",
    "Wlacz.",
    "Lagodne wyciszanie FM",
    "Lagodne wyciszanie AM",
    "Beep na krawedzi pasma",
    "Region",
    "Europa",
    "USA",
    "Pokaz podkreslenia w RDS",
    "Tryb USB",
    "Wi-Fi aktywne",
    "Konfiguracja Wi-Fi",
    "Polacz z: ",
    "aby skonfigurowac Wi-Fi",
    "Proba polaczenia z Wi-Fi",
    "BLAD.. WiFi wylaczone",
    "POLACZONO!",
    "IP klienta Stationlist",
    "Pokaz dlugosci fal SW",
    "Filtr RDS",
    "Dynamiczne PI",
    "Pokaz blokade szumow",
    "Wskaznik modulacji",
    "Reduktor szumow AM",
    "Reduktor szumow FM",
    "Zaladowano domyslne",
    "Wyjscie dzwieku",
    "Kroki co 30 kHz na FM OIRT",
    "Display color invert"
  },

  { "Hrvatski",                       // Croatian
    "Smjer enkodera promij.",
    "Otpustite gumb",
    "Zaslon je okrenut",
    "Kalibracija analog. mjerača",
    "Otpustite gumb",
    "Optički enkoder postav.",
    "Standardni enkoder postav.",
    "FM/AM prijemnik",
    "Prijemnik: !Nije pronađen!",
    "Pomak glasnoće:",
    "Pomak konvertera:",
    "Donja granica opsega:",
    "Gornja granica opsega:",
    "Pomak RF razine:",
    "Razina stereo signala:",
    "Granična frekvencija:",
    "Razina granične frekv.:",
    "Donja granica za signal:",
    "Svjetlina:",
    "Pomak glasnoće",
    "Pomak konvertera",
    "Donja granica frekv. opsega",
    "Gornja granica frekv. opsega",
    "Pomak signala",
    "Razina stereo signala",
    "Granična frekvencija",
    "Razina granične frekv.",
    "Donja granica za signal",
    "Svjetlina zaslona",
    "Isključeno",
    "Zaslon je isključen!",
    "Da biste uključili zaslon, poništite kvadratić RF+",
    "ISK.",
    "SKENIRANJE...",
    "Prijemnik nije pronađen",
    "Postavljena verzija prijemnika: v",
    "Molim, ponovno pokrenite prijemnik",
    "Prikaži RDS pogreške",
    "Jezik",
    "Odaberite jezik",
    "PRITISNITE MODE ZA IZLAZ I SPREMANJE",
    "Uključeno",
    "Softmute FM",
    "Softmute AM",
    "Beep na rubu frekv. opsega",
    "Regija",
    "Europa",
    "SAD",
    "Prikaži donju crtu u RDS-u",
    "Način rada USB-a",
    "Wi-Fi",
    "Wi-Fi postavke",
    "Spojite se na: ",
    "kako biste konfigurirali Wi-Fi",
    "Spajanje na Wi-Fi mrežu..",
    "NEUSPJEŠNO.. Wi-Fi onemogućen",
    "SPOJENO!",
    "IP klijenta StationList",
    "Prikaži valnu duljinu KV-a",
    "RDS filter",
    "Dinamičan PI",
    "Prikaži squelch",
    "Mjerač modulacije",
    "AM prigušivač šuma",
    "FM prigušivač šuma",
    "Zadane postavke učitane",
    "Audio izlaz",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Ελληνικά",                       // Greek
    "Η διεύθυνση του ρότορα άλλαξε",
    "Ελευθερώστε το πλήκτρο",
    "Η οθόνη αναποδογύρισε",
    "Βαθμονόμηση αναλογικού μετρητή",
    "Αφήστε το πλήκτρο όταν είστε έτοιμοι",
    "ο κωδικοποιητής ρυθμίστηκε σε οπτικός",
    "ο κωδικοποιητής ρυθμίστηκε σε στάνταρ",
    "FM/AM δέκτης",
    "Tuner: !Κανένα!",
    "Ένταση ήχου:",
    "Μετατροπέας:",
    "Κάτω όριο μπάντας:",
    "Άνω όριο μπάντας:",
    "Ολίσθηση επιπέδου RF:",
    "Κατώφλι στέρεο:",
    "Όριο υψηλής αποκοπής:",
    "Κατώφλι υψηλής αποκοπής:",
    "Κατώφλι χαμηλού επιπέδου:",
    "Αντίθεση:",
    "Ορισμός έντασης ήχου",
    "Ολίσθηση (offset) κωδικοποιητή",
    "Κάτω όριο μπάντας",
    "Άνω όριο μπάντας",
    "Επίπεδο ολίσθησης",
    "Κατώφλι διαχωρισμού στέρεο",
    "Συχνότητα ορίου υψηλής αποκοπής",
    "Κατώφλι υψηλής αποκοπής",
    "Κατώφλι χαμηλού επιπέδου",
    "Φωτεινότητα οθόνης",
    "Ανενεργό",
    "Οθόνη σε σίγαση!",
    "Για επαναφορά ήχου τσεκάρετε το RF+",
    "ΑΝΕΝ.",
    "ΑΝΙΧΝΕΥΣΗ...",
    "Το tuner δεν εντοπίστηκε",
    "Η έκδοση tuner ορίστηκε σε: v",
    "Παρακαλώ επανεκκινήστε το tuner",
    "Εμφάνιση σφαλμάτων RDS",
    "Γλώσσα",
    "Επιλογή γλώσσας",
    "ΠΙΕΣΤΕ MODE ΓΙΑ ΕΞΟΔΟ & ΑΠΟΘΗΚΕΥΣΗ",
    "Ενεργό",
    "Ήπια σίγαση FM",
    "Ήπια σίγαση AM",
    "Ηχητικό σήμα στο όριο μπάντας",
    "Περιοχή",
    "Ευρώπη",
    "Η.Π.Α.",
    "Εμφάνιση κάτω παύλας στο RDS",
    "USB λειτουργία",
    "Wi-Fi ενεργό",
    "Ρύθμιση Wi-Fi",
    "Συνδεθείτε στο: ",
    "για ρύθμιση του Wi-Fi",
    "Προσπάθεια σύνδεσης με το Wi-Fi",
    "ΑΠΟΤΥΧΙΑ.. WiFi ανενεργό",
    "ΣΕ ΣΥΝΔΕΣΗ!",
    "IP πελάτη λίστας σταθμών",
    "Εμφάνιση μήκους κύματος SW",
    "Φίλτρο RDS",
    "Δυναμικό PI",
    "Εμφάνιση squelch",
    "Μετρητής διαμόρφωσης",
    "Απαλοιφή θορύβου AM",
    "Απαλοιφή θορύβου FM",
    "Οι προεπιλογές φορτώθηκαν",
    "Έξοδος ήχου",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Romana",                         // Romanian
    "Sens rotire schimbat",
    "Eliberati butonul",
    "Ecran inversat",
    "Calibrati S-metrul analog",
    "Eliberati butonul cand terminati",
    "Encoderul setat pe Optic",
    "Encoderul setat pe Standard",
    "Receptor FM/AM ",
    "Nu exista Tuner !",
    "Volum:",
    "Convertor:",
    "Limita inferioara a benzii:",
    "Limita superioara a benzii:",
    "offset ptr. nivel RF:",
    "Prag ptr. Stereo :",
    "Limita taiere inalte:",
    "Prag taiere inalte:",
    "Prag taiere joase:",
    "Contrast:",
    "Seteaza volum",
    "Seteaza offset ptr convertor ",
    "Seteaza marginea de jos a benzii",
    "Seteaza marginea de sus a benzii",
    "Seteaza nivel offset",
    "Seteaza prag separare Stereo",
    "Seteaza limita de sus inalte",
    "Seteaza prag taiere inalte",
    "Seteaza pragul nivelului de jos",
    "Seteaza luminozitatea ptr. Display ",
    "Oprit",
    "Ecran oprit",
    "Ptr a porni debifati RF+ box",
    "Oprit",
    "Scanare...",
    "Tunerul nu este detectat",
    "Versiune Tuner: v",
    "Va rog restartati tuner",
    "Arata erorile RDS",
    "Limba",
    "Alege Limba",
    "Apasa MODE pentru a salva si iesi",
    "Pornit",
    "FM fara sonor",
    "AM fara sonor",
    "Sunet la marginea Benzii",
    "Regiune",
    "Europa",
    "SUA",
    "Arata evidentiat in RDS",
    "USB mode",
    "Wi-Fi active",
    "Configure Wi-Fi",
    "Connect to: ",
    "to configure Wi-Fi",
    "Trying to connect with Wi-Fi",
    "FAILED.. WiFi disabled",
    "CONNECTED!",
    "Stationlist client IP",
    "Show SW wavelength",
    "RDS filter",
    "Dynamic PI",
    "Show squelch",
    "Modulation meter",
    "AM Noise blanker",
    "FM Noise blanker",
    "Defaults loaded",
    "Audio output",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Deutsch",                        // German
    "Drehrichtung geändert",
    "Bitte Taste loslassen",
    "Bildschirm gedreht",
    "Analogmeter kalibrieren",
    "Taste loslassen wenn bereit",
    "Enkoder auf optisch setzen",
    "Enkoder auf standard setzen",
    "FM/AM Empfänger",
    "!Kein! Tuner",
    "Lautstärke:",
    "Konverter:",
    "Unteres Bandende:",
    "Oberes Bandende:",
    "RF Level Offset:",
    "Stereoschwelle:",
    "High Cut corner:",
    "Highcut Schwelle:",
    "Low level Schwelle:",
    "Kontrast:",
    "Lautstärke setzen",
    "Konverteroffset setzen",
    "Unteres Bandende setzen",
    "Oberes Bandende setzen",
    "Level offset setzen",
    "Stereo sep. Schwelle setzen",
    "High cut Eckfrequenz setzen",
    "High cut Schwelle setzen",
    "Low-level-Schwelle setzen",
    "Displayhelligkeit setzen",
    "Aus",
    "Bildschirm abgeschaltet!",
    "RF+ abwählen, um einzuschalten",
    "AUS",
    "SCANNE...",
    "Tuner nicht erkannt",
    "Tunerversion: v",
    "Bitte Tuner neustarten",
    "Zeige RDS Fehler",
    "Sprache",
    "Sprache wählen",
    "MODE DRÜCKEN ZUM BEENDEN UND SICHERN",
    "Ein",
    "Softmute FM",
    "Softmute AM",
    "Piepston bei Bandende",
    "Region",
    "Europa",
    "USA",
    "Zeige Unterstrich im RDS",
    "USB Modus",
    "WLAN aktiv",
    "WLAN konfigurieren",
    "Verbinde mit:",
    "um WLAN einzustellen",
    "Versuche WLAN zu verbinden",
    "FEHLER.. WLAN deaktiviert",
    "VERBUNDEN!",
    "Stationlist Client IP",
    "Zeige KW-Wellenlänge",
    "RDS-Filter",
    "Dynamisches PI",
    "Zeige Rauschsperre",
    "Modulationspegel",
    "AM Rauschunterdrücker",
    "UKW Rauschunterdrücker",
    "Werkseinstellung geladen",
    "Audioausgabe",
    "UKW OIRT 30 kHz Schritte",
    "Display color invert"
  },

  { "Czech",                          // Czech
    "Směr enkóderu byl změněn",
    "Prosím, pusťte tlačítko",
    "Obrazovka otočena",
    "Kalibrace analog. měřiče",
    "Po dokončení pusťte tlačítko",
    "enkóder nastaven na optický",
    "enkóder nastaven na standardní",
    "FM/AM přijímač",
    "Tuner: !ŽÁDNÝ!",
    "Hlasitost:",
    "Konvertor:",
    "Spodek pásma:",
    "Vrch pásma:",
    "Offset frekvence:",
    "Práh pro stereo:",
    "Práh utlumeni:",
    "Práh zvuku:",
    "Práh nizkého signálu:",
    "Kontrast:",
    "Hlasitost",
    "Offset frekvence",
    "Spodek pásma",
    "Vrch pásma",
    "Offset signálu",
    "Práh pro stereo",
    "Práh utlumení",
    "Práh signálu pro utlumení",
    "Práh nízkého signálu",
    "Jas",
    "Vyp",
    "Obrazovka je ztlumena!",
    "Pro spuštění zrušte RF+",
    "VYP",
    "SKENUJI...",
    "Tuner nedetekován",
    "Verze tuneru nastavena: v",
    "Prosím, restartujte tuner",
    "Zobrazit chyby v RDS",
    "Jazyk",
    "Vyberte jazyk",
    "ZMÁČKNĚTE MODE PRO VYPNUTÍ A ULOŽENÍ",
    "Zap",
    "Softmute FM",
    "Softmute AM",
    "Pípnutí na konci pásma",
    "Region",
    "Evropa",
    "USA",
    "Zobrazit podtržítka v RDS",
    "USB mode",
    "Wi-Fi active",
    "Configure Wi-Fi",
    "Connect to: ",
    "to configure Wi-Fi",
    "Trying to connect with Wi-Fi",
    "FAILED.. WiFi disabled",
    "CONNECTED!",
    "Stationlist client IP",
    "Show SW wavelength",
    "RDS filter",
    "Dynamic PI",
    "Show squelch",
    "Modulation meter",
    "AM Noise blanker",
    "FM Noise blanker",
    "Defaults loaded",
    "Audio output",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },

  { "Slovak",                         // Slovak
    "Smer enkóderu bol zmenený",
    "Prosím, pusťte tlačidlo",
    "Obrazovka otočená",
    "Kalibrácia analog. merača",
    "Po dokončení pusťte tlačidlo",
    "enkóder nastavený na optický",
    "enkóder nastavený na štandardný",
    "FM/AM prijímač",
    "Tuner: !ŽIADNY!",
    "Hlasitosť:",
    "Konvertor:",
    "Spodok pásma:",
    "Vrch pásma:",
    "Offset frekvencie:",
    "Prah pre stereo:",
    "Prah utlmenia:",
    "Prah zvuku:",
    "Prah nizkeho signálu:",
    "Kontrast:",
    "Hlasitost",
    "Offset frekvencie",
    "Spodok pásma",
    "Vrch pásma",
    "Offset signálu",
    "Prah pro stereo",
    "Prah utlmenia",
    "Prah signálu pre utlmenie",
    "Prah nízkého signálu",
    "Jas",
    "Vyp",
    "Obrazovka je stlmená!",
    "Pre spustenie odčiarknite RF+",
    "VYP",
    "SKENUJEM...",
    "Tuner nedetekovaný",
    "Verzia tuneru nastavená: v",
    "Prosím, reštartujte tuner",
    "Zobraziť chyby v RDS",
    "Jazyk",
    "Vyberte jazyk",
    "STLAČTE MODE PRE VYPNUTIE A ULOŽENIE",
    "Zap",
    "Softmute FM",
    "Softmute AM",
    "Pípnutie na konci pásma",
    "Region",
    "Európa",
    "USA",
    "Zobraziť podtržítka v RDS",
    "USB mode",
    "Wi-Fi active",
    "Configure Wi-Fi",
    "Connect to: ",
    "to configure Wi-Fi",
    "Trying to connect with Wi-Fi",
    "FAILED.. WiFi disabled",
    "CONNECTED!",
    "Stationlist client IP",
    "Show SW wavelength",
    "RDS filter",
    "Dynamic PI",
    "Show squelch",
    "Modulation meter",
    "AM Noise blanker",
    "FM Noise blanker",
    "Defaults loaded",
    "Audio output",
    "FM OIRT 30 kHz steps",
    "Display color invert"
  },
};
