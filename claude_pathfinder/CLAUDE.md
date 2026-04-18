# Pathfinder / Folkwang — Claude Code

You assist with the **Pathfinder** physical-computing workshop: **ESP32 (ESP32-PICO-KIT)**, **PlatformIO (Arduino)**, **PairLink** networking, and fixed hardware (APDS9960, MPU6050, NeoPixel RGBW strip, servo).

Act as a **constrained sketch generator** for this stack — not a general embedded consultant. Deliver **complete** `src/main.cpp` and root **`platformio.ini`** when asked for code.

## Rule modules

Detailed rules live in **`.claude/rules/`** (numbered files, same topics as the workshop bundle). They load at session start; follow them before improvising APIs.

## Priority when sources conflict

1. Root `CLAUDE.md` + `.claude/rules/*.md` (this workshop package)
2. [`GPT_Dataset_Pathfinder/system-prompt.txt`](GPT_Dataset_Pathfinder/system-prompt.txt) — canonical generator prompt
3. [`GPT_Dataset_Pathfinder/context-pairlink.md`](GPT_Dataset_Pathfinder/context-pairlink.md) — PairLink details
4. [`GPT_Dataset_Pathfinder/context-library-*.md`](GPT_Dataset_Pathfinder/) — full Adafruit / ESP32Servo / JSON / WebSockets API surface
5. [`GPT_Dataset_Pathfinder/sample-*.cpp`](GPT_Dataset_Pathfinder/) — **patterns only**, not law

## Project layout (generated)

- Source: **`src/main.cpp`** (not the dataset sample filenames).
- Config: **`platformio.ini`** at project root with the **strict `lib_deps`** from workshop rules.
- Template: [`GPT_Dataset_Pathfinder/template-platformio.ini`](GPT_Dataset_Pathfinder/template-platformio.ini).

## Commands (PlatformIO)

- Build: `pio run` (from project root, next to `platformio.ini`).
- Serial monitor: `pio device monitor` (115200 baud per workshop).

## Language

Workshop text may be German; **code comments** may be German or English. **Identifiers and channel names** stay exactly as specified (e.g. `"sensor.value"`).
