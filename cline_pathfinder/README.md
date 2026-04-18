# Cline rules — Pathfinder / Folkwang ESP32 workshop

This folder contains an **optimized rule set** for [Cline](https://cline.bot) (VS Code extension), derived from [`GPT_Dataset_Pathfinder/`](../GPT_Dataset_Pathfinder/). Use it so Cline follows the same constraints as the FolkwangESP-GPT / PairLink workshop when editing sketches and `platformio.ini`.

## Install (workspace root)

Copy the rules directory to the **repository root** (same level as `GPT_Dataset_Pathfinder/`):

```bash
cp -r cline_pathfinder/clinerules .clinerules
```

Or on Windows (PowerShell, from repo root):

```powershell
Copy-Item -Recurse -Force cline_pathfinder\clinerules .clinerules
```

Restart VS Code or reload Cline if rules do not appear. Enable rules in the Cline **Rules** panel (scale icon).

## What’s inside `clinerules/`

| File | Purpose |
|------|---------|
| `00-overview.md` | Scope, priority vs. full dataset |
| `01-agent-behavior.md` | Role, always/never, value model |
| `02-hardware-pins.md` | ESP32-PICO-KIT, fixed GPIO |
| `03-pairlink-networking.md` | PairLink object, channels, `update()` |
| `04-platformio-dependencies.md` | `lib_deps`, board, monitor speed |
| `05-sensors-actuators.md` | APDS9960, MPU6050, NeoPixel, Servo |
| `06-validation-forbidden.md` | Meta rules, validation checklist |

Markdown links inside `clinerules/*.md` point at `../GPT_Dataset_Pathfinder/` — they resolve correctly **after** you copy the folder to **`.clinerules`** at the repository root (next to `GPT_Dataset_Pathfinder/`).

## Full API reference

Cline rules stay **short**. For complete library APIs and long-form context, use:

- [`GPT_Dataset_Pathfinder/context-library-index.md`](../GPT_Dataset_Pathfinder/context-library-index.md)
- Individual `context-library-*.md` files in that folder

## Updating

When workshop constraints change in `GPT_Dataset_Pathfinder/system-prompt.txt` or rules files, sync the relevant sections into `cline_pathfinder/clinerules/*.md`.
