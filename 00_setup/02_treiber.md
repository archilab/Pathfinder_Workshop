# USB-Treiber installieren

Der ESP32 kommuniziert über einen USB-Chip mit deinem Computer. Damit das Betriebssystem diesen Chip versteht, braucht es einen Treiber.

---

## Welcher Treiber?

Die im Workshop verwendeten ESP32-Boards nutzen in der Regel den **CP210x**-Chip von Silicon Labs.

**Download:** [https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers)

→ Seite öffnen → unter *Downloads* das passende Paket für dein Betriebssystem wählen → installieren → Rechner neu starten.

---

## macOS-Hinweis

Unter macOS Ventura und neuer kann es sein, dass der Treiber beim ersten Mal blockiert wird. In diesem Fall:

1. **Systemeinstellungen** öffnen
2. → **Datenschutz & Sicherheit**
3. → unten den Hinweis zum blockierten Treiber suchen
4. → **Trotzdem erlauben** klicken

---

## Windows-Hinweis

Falls Windows nach dem Anschließen des ESP32 keinen COM-Port anzeigt, hilft es, den Treiber manuell im Geräte-Manager zuzuweisen. Im Geräte-Manager erscheint der ESP32 dann unter *Anschlüsse (COM & LPT)*.

---

## Verbindung prüfen

Nach der Installation und einem Neustart:

1. ESP32 per USB anschließen
2. In VSCode unten in der blauen Statusleiste sollte ein Port erscheinen, z.B. `COM3` (Windows) oder `/dev/cu.usbserial-...` (macOS/Linux)

Wenn ein Port erscheint: Treiber funktioniert.

---

→ Weiter: [Erste Verbindung testen](./03_erster_upload.md)
