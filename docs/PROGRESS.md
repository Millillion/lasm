**Language coverage Phase 3: ecosystem (2026-10-21), complete, awaiting review.** Candidate `.39677808414` (source `a6a546e`, runtime unchanged) passed five-platform acceptance and the cold-installation gate. Tier A (Batteries, Cli, LSpec, Plausible, Aesop + Qq, Mathlib's dependency set), Tier B (leansqlite, UnicodeBasic, lean4-parser, MD4Lean, lean-zip, lean-redis) and Millillion/fetch pass on all five targets wherever they build natively; `import Lean` + Json runs. Zero Lasm-caused failures; Phase 2 harnesses show no regressions. Compatibility list: [COMPATIBILITY.md](COMPATIBILITY.md); details: [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md). Next: review stop, then Phase 4.

**Language coverage Phase 2: core and I/O completion (2026-10-21), awaiting review.** Zero Lasm-caused failures outside Lean-as-a-library on all five targets with candidate `.39500947696`; 8 bugs fixed; the three-run cold-installation gate passed. Details: [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md). Next: review stop, then Phase 3 (ecosystem).

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
