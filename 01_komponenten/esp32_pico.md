# ESP32-PICO-D4 · Mikrocontroller

![ESP32-PICO-D4](./bilder/ESP32_Pico.jpg)

Der **ESP32-PICO-D4** ist ein System-in-Package (SiP) von Espressif — der ESP32-Chip, 4 MB Flash, Quarzoszillator und Filterkondensatoren sind in einem einzigen 7×7 mm Gehäuse integriert. Er ist der zentrale Baustein des Workshops: führt den Code aus, kommuniziert mit Sensoren und Aktoren und verbindet sich über WLAN mit anderen Geräten.

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

---

## Technische Spezifikation

| Merkmal | Wert |
|---|---|
| Chip | ESP32-D0WDQ6 (Xtensa LX6, Dual-Core, 240 MHz) |
| Package | SiP 7×7 mm (System-in-Package) |
| Flash | 4 MB integriert |
| RAM | 520 KB SRAM |
| WLAN | 802.11 b/g/n (2.4 GHz) |
| Bluetooth | BT 4.2 + BLE |
| GPIO | 34 programmierbare Pins |
| ADC | 12-bit, 18 Kanäle |
| I²C | 2× (im Workshop: SDA=21, SCL=22) |
| PlatformIO Board-ID | `pico32` |

## Referenzen & Dokumentation

| Ressource | Link |
|---|---|
| **ESP32-PICO-D4 Datenblatt** (Espressif) | [espressif.com · PDF](https://www.espressif.com/sites/default/files/documentation/esp32-pico-d4_datasheet_en.pdf) |
| ESP32 Technical Reference Manual | [docs.espressif.com · PDF](https://www.espressif.com/sites/default/files/documentation/esp32_technical_reference_manual_en.pdf) |
| ESP32-PICO-KIT Getting Started Guide | [docs.espressif.com](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/hw-reference/esp32/get-started-pico-kit.html) |
| Arduino-ESP32 Dokumentation | [docs.espressif.com/arduino-esp32](https://docs.espressif.com/projects/arduino-esp32/en/latest/) |
| Arduino-ESP32 GitHub | [github.com/espressif/arduino-esp32](https://github.com/espressif/arduino-esp32) |
| PlatformIO `pico32` Board-Konfiguration | [docs.platformio.org/boards/pico32](https://docs.platformio.org/en/latest/boards/espressif32/pico32.html) |
| Espressif32 PlatformIO Platform (GitHub) | [github.com/platformio/platform-espressif32](https://github.com/platformio/platform-espressif32) |
