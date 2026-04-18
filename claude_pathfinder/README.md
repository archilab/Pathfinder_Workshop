# Claude Code — Pathfinder / Folkwang ESP32 workshop

This folder contains an **optimized instruction and rule set** for [Claude Code](https://code.claude.com/docs), derived from [`GPT_Dataset_Pathfinder/`](../GPT_Dataset_Pathfinder/). Use it so Claude follows the same constraints as the FolkwangESP-GPT / PairLink workshop when editing sketches and `platformio.ini`.

Rules stay **short**; full library APIs remain in the dataset (`context-library-*.md`).

## Install (repository root)

From the **repository root** (same level as `GPT_Dataset_Pathfinder/`):

1. Copy the **root** workshop instructions (merge with an existing `CLAUDE.md` if you already have one):

   ```bash
   cp claude_pathfinder/CLAUDE.md ./CLAUDE.md
   ```

2. Copy **rules** into `.claude/rules/`:

   ```bash
   mkdir -p .claude/rules
   cp claude_pathfinder/.claude/rules/*.md .claude/rules/
   ```

Windows (PowerShell, from repo root):

```powershell
Copy-Item -Force claude_pathfinder\CLAUDE.md .\CLAUDE.md
New-Item -ItemType Directory -Force -Path .claude\rules | Out-Null
Copy-Item -Force claude_pathfinder\.claude\rules\*.md .claude\rules\
```

Start a new Claude Code session or use `/memory` to confirm `CLAUDE.md` and rule files loaded.

### Optional

If you prefer not to add a root `CLAUDE.md`, merge the **Priority** and **Project layout** sections from `claude_pathfinder/CLAUDE.md` into `.claude/CLAUDE.md` per [Claude Code memory docs](https://code.claude.com/docs/en/memory).

Markdown links in **`.claude/rules/*.md`** use `../../GPT_Dataset_Pathfinder/` — they resolve when `.claude/rules/` lives at the repository root (after install).

## What’s inside

| Path | Purpose |
|------|---------|
| `CLAUDE.md` | Short project instructions — copy to **repository root** |
| `.claude/rules/00-overview.md` | Scope, priority vs. full dataset |
| `.claude/rules/01-agent-behavior.md` | Role, always/never, value model |
| `.claude/rules/02-hardware-pins.md` | ESP32-PICO-KIT, fixed GPIO |
| `.claude/rules/03-pairlink-networking.md` | PairLink object, channels, `update()` |
| `.claude/rules/04-platformio-dependencies.md` | `lib_deps`, board, monitor speed |
| `.claude/rules/05-sensors-actuators.md` | APDS9960, MPU6050, NeoPixel, Servo |
| `.claude/rules/06-validation-forbidden.md` | Meta rules, validation checklist |

## Full API reference

- [`GPT_Dataset_Pathfinder/context-library-index.md`](../GPT_Dataset_Pathfinder/context-library-index.md)
- Individual `context-library-*.md` files in that folder

## Updating

When workshop constraints change in `GPT_Dataset_Pathfinder/system-prompt.txt` or rules files, sync the relevant sections into `claude_pathfinder/CLAUDE.md` and `claude_pathfinder/.claude/rules/*.md`.
