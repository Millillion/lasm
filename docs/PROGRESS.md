**Windows Lake loading isolated from the adapter — 2026-09-27.** Extended library paths pass native standalone execution/C generation at 287 characters. Both native Windows Lake and the interpreter adapter reject the ordinary Lean configuration, while the same configuration passes native Linux Lean 4.34.1. Further controls compare short paths and namespace prefixes; no workaround is accepted yet.

The native ARM64 helper's locked-source and Rust notices are verified. Native ARM64 Lean is still building. Candidate `.39` passed Linux x64 and both Macs; Linux ARM64 remains running. Prior failures and below-cap resource reports are preserved.

README reviewed for quick start, complete CLI examples and exact support boundaries. Retained `.37` remains accepted; Windows remains unsupported pending installed acceptance. Next: Lake correction and ARM64 distribution. No npm publication. Completion ETA is not yet estimable.
