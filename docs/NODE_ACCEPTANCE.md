# Node acceptance: ahead-of-time Linux candidate

Native Linux x86-64 and ARM64 passed candidate **0.1.0-experimental.35** on
2026-09-26. This candidate rejects runtime Lean compiler/interpreter/module-data
operations; it never emits the former multi-gigabyte compatibility fallback.
macOS and Windows are not accepted by this report. Nothing is published to npm.

## Exact artifact

| Item | Value |
| --- | --- |
| Package | `@lasm/compiler@0.1.0-experimental.35` |
| Source revision | `74ce410b596f536068f38dc19cfb3e67d8e4b89a` |
| Archive SHA-256 | `6cc376cf19ad3302c92a1b1497cbd1b20e0017bd28b95a533eb7c46362d8f2aa` |
| Archive bytes | 65,336,561 |
| Node / npm | 26.10.0 / 11.19.1 |
| Lean / Lake | 4.34.1; Lean commit `5045d0056413266e57c625dcd7c365b10e377c52` |
| Managed build tools | Emscripten 6.0.9, Python 3.13.15, Git 2.53.0 |
| Runtime manifest SHA-256 | `4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d` |

Two independent packing invocations produced identical archives. The runtime
handoff is unchanged from [the original authenticated build](evidence/node-linux-ci-runtime-2026-09-26.json).
The archive remains in the exact CI candidate cache. Draft retention is being
retried separately: its first GitHub release step returned HTTP 403 after both
native tests passed. The overall workflow's failure is a retention failure,
not a product-test failure. Do not substitute the older `.34` archive for this
policy; it allowed runtime evaluation and its large fallback.

## Native evidence

[CI run](https://github.com/Millillion/lasm/actions/runs/36268146208):

| Target | Installed/deployment result | Complete evidence |
| --- | --- | --- |
| Linux x86-64 | Passed | [Report](evidence/aot-linux-x64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36268146208/job/108476996198) |
| Linux ARM64 | Passed | [Report](evidence/aot-linux-arm64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36268146208/job/108480521455) |

Both use Ubuntu 24.04.5 LTS, kernel 6.17.0-1022-azure and glibc 2.39. Each installs
the same archive into an empty project with spaces and Unicode in its path.
Landlock denies the checkout and preinstalled developer tools. Only stock
Node/npm and ordinary OS facilities are exposed; Lasm provisions its own tools.
Offline checks deny TCP in the kernel. Copied deployments run with source,
original outputs, package, compiler and caches denied.

Eight applications pass native-versus-Node comparisons: Hello World, arguments
and exit status, local Lake imports, two language fixtures, filesystem operations,
compile-time macros/proofs and 1,000 unreachable definitions. Runtime evaluation
and module-path fixtures fail during the build, create no deployment, and leave
no failed staging directories. Cache reuse, invalidation, integrity, download
recovery, diagnostics and size budgets also pass.

This is bounded acceptance, not proof of complete Lean/API parity. See the
[README restrictions](../README.md#lean-support-and-restrictions).

## Observed measurements

These are individual CI observations, not performance guarantees. File sizes
are logical regular-file bytes. Download totals exclude HTTP/npm overhead.

| Measurement | x86-64 | ARM64 |
| --- | ---: | ---: |
| Installed node_modules, bytes | 380,757,258 | 380,757,258 |
| Managed tool/cache files after fixtures, bytes | 5,663,886,334 | 5,611,884,246 |
| Compressed tool downloads, bytes | 979,054,712 | 910,904,894 |
| Complete Hello World deployment, bytes | 3,210,886 | 3,225,800 |
| Largest tested deployment, bytes | 3,593,765 | 3,608,679 |
| Candidate npm install, seconds | 7.07 | 4.79 |
| First npx command including downloads, seconds | 289.28 | 259.71 |
| Cached build-only command, seconds | 14.93 | 20.33 |
| Offline cached run, seconds | 14.80 | 19.24 |
| Median fresh Node process to first output, seconds | 0.274 | 0.230 |
| Whole guarded campaign peak, bytes | 4,675,096,576 | 4,707,758,080 |

Both resource guards released their units, recorded zero OOM events and no
resource abort, and maintained the disk reserve. Builds used base pages, one
build/Binaryen worker and scoped advice to release completed cache file pages.

Historical reports remain under their original versions:
[initial `.32` acceptance](NODE_ACCEPTANCE_32_2026-09-26.md),
[`.34` size reduction and former fallback](BUNDLE_SIZE.md).
