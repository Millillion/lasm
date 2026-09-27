**Windows path and launcher fixes ready for `.41` — 2026-09-27.** Native Lake configuration passes, but child compilation still exposed upstream MAX_PATH handling. Managed Lean now uses a verified temporary junction. Local junction and artifact tests passed (38 checks); native validation is next.

Installed Windows `.40` reached Wasm linking, then failed the loader's LF template check. A bounded compiler probe reproduced the CRLF failure and verified explicit LF output; both programs ran correctly. The linker now requests LF without weakening semantic checks. [Evidence and implementation](WINDOWS_TOOLCHAINS.md) preserve both failures. Required source/notices companions are verified before compiler use.

README reviewed against all CLI commands, examples and support boundaries. Retained `.37` remains accepted; Windows is not supported yet. ARM64 Lean is still building. Next: native `.41` checks and ARM64 distribution. No npm publication. Completion ETA is not yet estimable.
