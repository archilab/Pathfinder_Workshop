# Erste Verbindung testen

Bevor du mit den Workshop-Beispielen anfängst, testest du einmal den kompletten Upload-Prozess. Dafür verwendest du direkt eines der Beispiele aus diesem Repository.

---

## Ein Beispielprojekt öffnen

1. Den Ordner `04_beispiele/beispiel_01_geste_licht/code/` aus diesem Repository auf deinen Computer kopieren
2. In VSCode: **Datei → Ordner öffnen** → den `code`-Ordner auswählen
3. PlatformIO erkennt die `platformio.ini` automatisch und lädt alle Bibliotheken — das dauert beim ersten Mal 2–3 Minuten

---

## Upload starten

1. ESP32 per USB anschließen
2. Unten in der blauen Leiste auf den **Pfeil nach rechts** (→ Upload) klicken — oder in der PlatformIO-Seitenleiste auf **Upload**
3. Im Terminal-Bereich unten siehst du den Fortschritt

Ein erfolgreicher Upload endet mit:
```
SUCCESS
```

---

## Serial Monitor öffnen

Nach dem Upload kannst du über den **Serial Monitor** sehen, was der ESP32 tut:

1. In der blauen Leiste unten auf das **Stecker-Symbol** klicken (Serial Monitor)
2. Baudrate: `115200`
3. Der ESP32 gibt dort Statusmeldungen aus — z.B. ob er im WLAN ist oder Sensordaten liest

---

## Häufige Fehler

| Fehler | Ursache | Lösung |
|---|---|---|
| `No device found on port` | ESP32 nicht erkannt | Treiber prüfen, USB-Kabel tauschen |
| `[Error] Upload failed` | Falscher Port | In PlatformIO den richtigen COM-Port manuell setzen |
| Bibliotheken fehlen | Kein Internet beim ersten Build | Einmalig mit Internet verbinden |

---

Wenn der Upload klappt und der Serial Monitor Ausgaben zeigt, ist das Setup vollständig.

→ Weiter: [Komponenten kennenlernen](../01_komponenten/README.md)
