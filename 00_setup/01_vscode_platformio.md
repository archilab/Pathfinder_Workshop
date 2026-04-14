# VSCode + PlatformIO installieren

## Git installieren (Voraussetzung)

Falls auf deinem System noch kein **Git** installiert ist, installiere es zuerst — ohne Git kann PlatformIO viele Bibliotheken (z.B. von GitHub) nicht automatisch laden.

**Installation:** [git-scm.com · Install](https://git-scm.com/install/) — Betriebssystem wählen und der Anleitung folgen.

*(Hinweis: Das ist die **Git**-Kommandozeilen-Software. Sie ist nicht dasselbe wie die GitHub-Website oder ein separater „GitHub-Client“ — für diesen Workshop reicht der offizielle Git-Installer.)*

---

## 1. Visual Studio Code

VSCode ist der Editor, in dem du den vom GPT generierten Code einfügst und den Upload startest.

**Download:** [https://code.visualstudio.com](https://code.visualstudio.com)

→ Betriebssystem auswählen → Installer herunterladen → installieren.

---

## 2. PlatformIO IDE (als Erweiterung in VSCode)

PlatformIO ist eine Erweiterung für VSCode, die speziell für Mikrocontroller wie den ESP32 entwickelt wurde. Sie übernimmt automatisch:

- das Herunterladen aller benötigten Bibliotheken
- die Kommunikation mit dem ESP32 über USB
- die Fehlermeldungen beim Upload

**Installation:**

1. VSCode öffnen
2. Links in der Seitenleiste auf das **Extensions-Symbol** klicken (vier Quadrate)
3. Oben in die Suchzeile `PlatformIO IDE` eingeben
4. Auf **Install** klicken
5. VSCode neu starten wenn gefragt

Nach der Installation erscheint in der linken Seitenleiste das **PlatformIO-Symbol** (ein Ameisenkopf).

---

## Was danach passiert

Beim ersten Öffnen eines Projekts lädt PlatformIO automatisch alle notwendigen Werkzeuge nach. Das kann beim ersten Mal 2–3 Minuten dauern — das ist normal.

---

→ Weiter: [USB-Treiber installieren](./02_treiber.md)
