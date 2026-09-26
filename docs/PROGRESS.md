**Windows consumer preparation — 2026-09-26.** Retained `.37` remains accepted on all four Linux/Mac targets. Native ARM64 SDK and Lean 4.34.1 builds are running. ARM64 leantar is validated and retained.

Both native deadline/disk controls passed below their caps. Ancestor metadata grants and cleanup now work on both Windows architectures. Node loaded successfully; a harness assertion exposed Windows' AppContainer redirection of LOCALAPPDATA. The harness now records that real default-cache root and reuses one isolated identity across cold/offline phases. Added actual stock npm.cmd/npx.cmd and child-cache controls. Failure evidence is preserved; no Lean acceptance is claimed yet.

README reviewed against the CLI and platform policy: `.37` instructions and restrictions remain accurate; Windows remains unsupported. Next: pass isolation controls, run candidate `.38` on Windows x64 and validate native ARM64 tools. No npm publication. Completion ETA is not yet estimable.
