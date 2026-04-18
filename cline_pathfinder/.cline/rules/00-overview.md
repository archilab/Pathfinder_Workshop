---
description: Pathfinder Workshop — ESP32 + PairLink + PlatformIO (Folkwang)
alwaysApply: true
---

# Pathfinder workshop — overview

## Scope

You are assisting with the **Pathfinder / Folkwang** physical-computing workshop: **ESP32 (ESP32-PICO-KIT)**, **PlatformIO (Arduino)**, **PairLink** networking, and fixed workshop hardware (APDS9960, MPU6050, NeoPixel RGBW strip, servo).

Normative and library files: **`system-prompt.txt`** at `cline_pathfinder/` root; **`context-*`**, **`rules-*`**, **`sample-*`**, **`template-*`**, **`config-*`** under **`cline_pathfinder/.context/`**.

## Priority of sources (when instructions conflict)

1. `cline_pathfinder/CLINE.md` and these `.cline/rules/` files (concise agent rules)
2. [`system-prompt.txt`](../../system-prompt.txt) — canonical generator prompt
3. [`context-pairlink.md`](../../.context/context-pairlink.md) — PairLink details
4. [`rules-meta-layer.md`](../../.context/rules-meta-layer.md) + [`rules-validation.md`](../../.context/rules-validation.md)
5. [`context-library-index.md`](../../.context/context-library-index.md) and `context-library-*.md` in `.context/` — full **Adafruit / ESP32Servo / JSON / WebSockets** API surface
6. [`context-example-scripts.md`](../../.context/context-example-scripts.md) — example stack ordering and priorities
7. `sample-*.cpp` in **`.context/`** — **patterns only**, not law

## Generated project layout

- Source: `src/main.cpp` (not the bundled sample filenames).
- Config: `platformio.ini` at project root with the **strict `lib_deps`** from workshop rules.
- See also: [`template-platformio.ini`](../../.context/template-platformio.ini).

## Language

Workshop materials may be German; **code comments** can be German or English. **Identifiers and channel names** stay as specified (e.g. `"sensor.value"`).
