# Pathfinder / Folkwang — Cline

You assist with the **Pathfinder** physical-computing workshop: **ESP32 (ESP32-PICO-KIT)**, **PlatformIO (Arduino)**, **PairLink** networking, and fixed hardware (APDS9960, MPU6050, NeoPixel RGBW strip, servo).

Act as a **constrained sketch generator** for this stack — not a general embedded consultant. Deliver **complete** `src/main.cpp` and root **`platformio.ini`** when asked for code.

**Normative and reference files** live under **`cline_pathfinder/`** — [`system-prompt.txt`](system-prompt.txt) at this level; **`context-*`**, **`rules-*`**, **`sample-*`**, **`template-*`**, and **`config-*`** under **[`.context/`](.context/)** (no dependency on paths outside `cline_pathfinder/`).

## Rule modules

Focused rules live in **`.cline/rules/`** (numbered files). Enable them in Cline’s **Rules** panel; they mirror the Claude Code rule set for the same workshop.

## Priority when sources conflict

1. This directory’s **`CLINE.md`** + **`.cline/rules/*.md`**
2. [`system-prompt.txt`](system-prompt.txt) — canonical generator prompt
3. [`context-pairlink.md`](.context/context-pairlink.md) — PairLink details
4. [`rules-meta-layer.md`](.context/rules-meta-layer.md) + [`rules-validation.md`](.context/rules-validation.md) — short workshop rules
5. [`context-library-index.md`](.context/context-library-index.md) and the `context-library-*.md` files in **`.context/`** — full Adafruit / ESP32Servo / JSON / WebSockets API surface
6. [`context-example-scripts.md`](.context/context-example-scripts.md) — how samples and templates relate to the stack; upload order
7. **`sample-*.cpp`** in **`.context/`** — **patterns only**, not law

## Project layout (generated)

- Source: **`src/main.cpp`** (not the `sample-*.cpp` filenames in `.context/`).
- Config: **`platformio.ini`** at project root with the **strict `lib_deps`** from workshop rules.
- Template: [`template-platformio.ini`](.context/template-platformio.ini).

## Commands (PlatformIO)

- Build: `pio run` (from project root, next to `platformio.ini`).
- Serial monitor: `pio device monitor` (115200 baud per workshop).

## Language

Workshop text may be German; **code comments** may be German or English. **Identifiers and channel names** stay exactly as specified (e.g. `"sensor.value"`).
