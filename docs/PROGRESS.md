**Native Windows standalone long paths pass — 2026-09-27.** A native regression reproduced upstream failure and verified execution/C generation with extended search paths at 287 characters. Lake workspace loading still fails; fresh-workspace native CLI and interpreter controls will isolate it.

The native ARM64 helper's 71 locked source packages and notices are verified, including Rust standard-library notices from the pinned official compiler archive. Collection stayed below 170 MB with zero OOM events. Final distribution packaging remains separate. Native ARM64 Lean is still building. Candidate `.39` passed Linux x64 and macOS ARM64; other results remain pending or failing.

README reviewed for quick start, complete CLI examples and exact support boundaries. Retained `.37` remains accepted; Windows remains unsupported pending installed acceptance. Next: Lake correction and ARM64 distribution. No npm publication. Completion ETA is not yet estimable.
