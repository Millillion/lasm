**Windows consumer preparation — 2026-09-26.** Retained `.37` remains accepted on all four Linux/Mac targets. Native ARM64 SDK and Lean 4.34.1 builds are running. ARM64 leantar is validated and retained.

Windows packaging and the installed-package campaign are prepared. The isolation harness's ancestor ACL update timed out on both architectures before Lean execution; evidence is preserved separately. It now uses the documented non-propagating handle API, retaining file restrictions. Native controls must pass before acceptance. The Windows guard also monitors disk reserve; its deadline control checks normal disk samples without inducing pressure.

README reviewed against the CLI and platform policy: `.37` instructions and restrictions remain accurate; Windows remains unsupported. Next: pass isolation controls, run candidate `.38` on Windows x64 and validate native ARM64 tools. No npm publication. Completion ETA is not yet estimable.
