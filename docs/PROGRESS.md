**Windows Lake long-path cause localized — 2026-09-27.** Native short plain and namespaced toolchain paths pass. Lake's executable-derived root precedes its environment search path, explaining why the earlier environment-only correction was insufficient. Managed Lean/Lake now launch through extended-length executable paths. Native long-path and installed `.40` validation are next.

The acceptance workflow now supports focused Windows repair runs; full-matrix retention still requires every native platform. Candidate `.39` passed Linux x64 and both Macs; Linux ARM64 remains running. Native ARM64 Lean is still building. Helper notices and prior failures are preserved.

README reviewed for quick start, complete CLI examples and exact support boundaries. Retained `.37` remains accepted; Windows remains unsupported pending installed acceptance. Next: Lake correction and ARM64 distribution. No npm publication. Completion ETA is not yet estimable.
