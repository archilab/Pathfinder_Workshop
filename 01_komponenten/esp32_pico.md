# ESP32 Pico · Mikrocontroller

![ESP32 Pico](./bilder/ESP32_Pico.jpg)

Der ESP32 ist der zentrale Baustein des Workshops. Er führt den Code aus, kommuniziert mit Sensoren und Aktoren, und verbindet sich über WLAN mit anderen Geräten.

---

## Was er kann

- Code ausführen (Arduino-Framework)
- Über I²C mit Sensoren kommunizieren (APDS9960, MPU6050)
- Digitale Signale senden (NeoPixel, Servo)
- Sich über WLAN mit einem WebSocket-Server verbinden (PairLink)

## Feste Pins im Workshop

Alle Anschlüsse sind vorbestimmt — der GPT kennt sie und verwendet sie automatisch:

| Funktion | Pin |
|---|---|
| Button (Pairing) | GPIO 0 |
| Status-LED | GPIO 2 |
| Servo | GPIO 12 |
| NeoPixel | GPIO 14 |
| I²C SDA (Sensoren) | GPIO 21 |
| I²C SCL (Sensoren) | GPIO 22 |

Du musst diese Nummern nicht kennen. Sie sind im GPT hinterlegt.
