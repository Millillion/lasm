**Language coverage Phase 1 (formerly L1): baseline and quick fixes (2026-10-20), reviewed.**
`LeanExport` is packaged in the Wasm runtime (re-pinned in source, `bd390b6`) and
ahead-of-time rejections now print the dependency chain and the narrow imports to
use. Every runtime-capable 4.35.0 upstream registration ran on Linux x64 through
candidate `.39310029213`: 428 tests and 3,603 actions pass, 420 tests are rejected
by the AOT policy (Lean as a library), 8 are Lasm bugs (one runtime-environment
bug, one fixed in source). A 62-test subset passes on all five targets; macOS
shows an `init.lean` import-shadowing bug. Ranked fixes and a proposal to merge
L2/L3 (now Phase 2) and bring Lean-as-a-library forward (the user chose option C: ecosystem first, now Phase 3): [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md).
Next: review stop. see PLAN.md for the renumbered phases. README reviewed; npm unpublished.
