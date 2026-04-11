# 00 · Setup

Bevor du den ersten Code auf den ESP32 übertragen kannst, brauchst du zwei Programme und einen Treiber. Die Einrichtung dauert ca. 10–15 Minuten und muss nur einmal gemacht werden.

---

## Übersicht

```
Schritt 1  →  VSCode installieren
Schritt 2  →  PlatformIO installieren (als VSCode-Erweiterung)
Schritt 3  →  USB-Treiber installieren
Schritt 4  →  Verbindung testen
```

---

## [Schritt 1 & 2 · VSCode + PlatformIO](./01_vscode_platformio.md)

VSCode ist der Code-Editor. PlatformIO ist die Erweiterung darin, die den ESP32 versteht — sie lädt automatisch alle benötigten Bibliotheken und überträgt den Code auf den Controller.

## [Schritt 3 · USB-Treiber](./02_treiber.md)

Damit dein Computer den ESP32 über USB erkennt, braucht er einen speziellen Treiber. Welcher das ist, hängt vom Betriebssystem und Chip des Boards ab.

## [Schritt 4 · Erste Verbindung testen](./03_erster_upload.md)

Ein einfacher Test bestätigt, dass alles funktioniert — bevor du mit dem eigentlichen Workshop-Inhalt anfängst.
