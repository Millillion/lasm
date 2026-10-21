**Language coverage Phase 3: ecosystem (2026-10-21), in progress.** Verified on Linux x64 (source, Phase 2 runtime): runtime initialization planning keeps build-time-only modules (Aesop, Qq, `import Lean` elaborators) out of the link, so `import Lean` + Json now runs; Lake packages' bundled C (leansqlite, UnicodeBasic, MD4Lean, lean-zip) compiles for Node; prebuilt libraries are named. 19 of 20 ecosystem projects match native (lean-regex fails natively on 4.35). Millillion/fetch implemented (Node, libcurl, curl transports; tests pass natively and under Lasm). Remaining: candidate, five-platform ecosystem and coverage regression runs, Tier C, docs, gate. ETA: not yet estimable.

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
