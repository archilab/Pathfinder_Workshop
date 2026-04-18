---
description: Pathfinder Workshop — ESP32 + PairLink + PlatformIO (Folkwang)
alwaysApply: true
---

# Pathfinder workshop — Cline context

You are assisting with the **Pathfinder / Folkwang** physical-computing workshop: **ESP32 (ESP32-PICO-KIT)**, **PlatformIO (Arduino)**, **PairLink** networking, and fixed workshop hardware (APDS9960, MPU6050, NeoPixel RGBW strip, servo).

## Priority of sources (when instructions conflict)

1. These `.clinerules` files (concise agent rules)
2. [`GPT_Dataset_Pathfinder/system-prompt.txt`](../GPT_Dataset_Pathfinder/system-prompt.txt) — canonical generator prompt
3. [`GPT_Dataset_Pathfinder/context-pairlink.md`](../GPT_Dataset_Pathfinder/context-pairlink.md) — PairLink details
4. [`GPT_Dataset_Pathfinder/context-library-*.md`](../GPT_Dataset_Pathfinder/) — full **Adafruit / ESP32Servo / JSON / WebSockets** API surface
5. Example sketches under `GPT_Dataset_Pathfinder/sample-*.cpp` — **patterns only**, not law

## Generated project layout

- Source: `src/main.cpp` (not the dataset sample filenames).
- Config: `platformio.ini` at project root with the **strict `lib_deps`** from workshop rules.
- See also: [`GPT_Dataset_Pathfinder/template-platformio.ini`](../GPT_Dataset_Pathfinder/template-platformio.ini).

## Language

Workshop materials may be German; **code comments** can be German or English. **Identifiers and channel names** stay as specified (e.g. `"sensor.value"`).
