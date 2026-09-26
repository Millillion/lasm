**Windows consumer preparation — 2026-09-26.** Retained `.37` remains accepted on all four Linux/Mac targets. Native ARM64 SDK and Lean 4.34.1 builds are running. ARM64 leantar is validated and retained.

Windows packaging and the installed-package campaign are prepared. Both native deadline/disk controls passed below their caps. Isolation setup then hit a Windows sharing violation: maximum-access directory handles requested deletion rights. Evidence is preserved. Ancestor updates now use the documented object-level security API with only permission-management rights, preserving existing inheritance flags and avoiding the volume walk. Native isolation controls must still pass before acceptance.

README reviewed against the CLI and platform policy: `.37` instructions and restrictions remain accurate; Windows remains unsupported. Next: pass isolation controls, run candidate `.38` on Windows x64 and validate native ARM64 tools. No npm publication. Completion ETA is not yet estimable.
