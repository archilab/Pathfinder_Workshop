# Pathfinder Workshop
### Folkwang Universität der Künste

Dieser Workshop zeigt, wie interaktive Installationen mit dem ESP32 entstehen — ohne Programmiervorkenntnisse. Der Schlüssel ist ein Custom GPT, der auf Basis einer künstlerischen Idee fertigen, lauffähigen Code erzeugt. Du beschreibst, was passieren soll. Der GPT schreibt den Code. Du überträgst ihn auf den Controller.

---

## 🔗 Custom GPT

**[→ FOLWANG-PairLink-starter öffnen](https://chatgpt.com/g/g-69b6eda5e8888191b2000af26055b60b-folwang-pairlink-starter)**

**[→ Custom GPT Dataset herunterladen](./GPT_Dataset_Pathfinder.zip)** — System Prompt + alle Trainingsdateien als ZIP

---

## Der Prozess in drei Schritten

```
1. GPT-Anfrage stellen   →   Idee in Sprache beschreiben
2. Code in PlatformIO    →   Einfügen, fertig
3. Auf Controller laden  →   Upload, testen
```

Kein manuelles Programmieren. Kein Verständnis von Syntax notwendig.

---

## Inhalt

| Abschnitt | Inhalt |
|---|---|
| [00 Setup](./00_setup/README.md) | VSCode, PlatformIO und Treiber installieren |
| [01 Komponenten](./01_komponenten/README.md) | Alle Bauteile erklärt |
| [02 PairLink](./02_pairlink/README.md) | Das Netzwerkprotokoll des Workshops |
| [03 Workflow](./03_workflow/README.md) | Der 3-Schritt-Prozess im Detail |
| [04 Beispiele](./04_beispiele/README.md) | Drei vollständige Workflow-Durchläufe |
| [05 Custom GPT](./05_custom_gpt/README.md) | Wie der GPT funktioniert — und wie du deinen eigenen baust |

---

## Hardware des Workshops

- ESP32-PICO-D4 (Mikrocontroller, SiP 7×7 mm)
- APDS9960 (Gestensensor)
- MPU6050 (Bewegungssensor)
- NeoPixel LED-Strip (6 Pixel)
- Servo

Alle Komponenten sind vorkonfiguriert. Pins und Bibliotheken sind fest im GPT eingebaut — du musst nichts konfigurieren.

---

*Folkwang Universität der Künste · Workshop Interaktive Systeme*
