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
The exact archive, checksum and authenticated prior-job reports are retained in
[an unpublished draft](https://github.com/Millillion/lasm/releases/tag/untagged-ddc65284c1ee0a0203ad)
for repository maintainers. [Retention passed separately](https://github.com/Millillion/lasm/actions/runs/36271125055)
after the original release step returned HTTP 403. The acceptance workflow's
overall failure is that retention failure, not a product-test failure. Do not
substitute the older `.34` archive for this policy; it allowed runtime evaluation
and its large fallback.
An independent local download matched the expected checksum; the
[retention receipt](evidence/aot-candidate-2026-09-26.json) records its exact assets.

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

## Candidate `.36` Linux regression — 2026-09-26

The Mac-capable candidate `.36` also passed all eight installed and isolated
deployment checks on both native Linux architectures. Its source is
`0e66c4d46950c50b62bff158c47b9137cc695130`; its 65,336,536-byte archive has SHA-256
`c71616146d9f3decf9b6a93d4a142f9cabae02ee63e2ec50f8d8cdd95827c5f7`.
The [x86-64 evidence](evidence/node36-linux-x64-2026-09-26.json) and
[ARM64 evidence](evidence/node36-linux-arm64-2026-09-26.json) preserve the exact
reports. Peaks were 4,651,085,824 and 4,726,444,032 bytes, with no resource abort,
zero OOM events, released guards and maintained disk reserves.

[Run 36271563489](https://github.com/Millillion/lasm/actions/runs/36271563489)
is red because its earlier Mac jobs failed; both Linux jobs succeeded. Mac
rechecks use the unchanged archive with corrected validation controls. Native
Mac acceptance and retention of a four-platform candidate remain pending.
The quick start still uses retained candidate `.35` above.

## Candidate `.37` partial matrix — 2026-09-26

Candidate `.37` fixes the Mac directory ABI and temporary-name failures recorded
above. Its source is `804d751d022ec914a389c81e023e2f9576ad0f85`; two independent
packing runs produced the same 65,336,595-byte archive, SHA-256
`622abcb5fa5aac5887f31cd3cc776fc44fa087c55ce5ede54e75d40c2ee8b32e`.
All 132 focused controls passed before native acceptance.

[Apple Silicon](evidence/node37-darwin-arm64-2026-09-26.json) and
[Linux x86-64](evidence/node37-linux-x64-2026-09-26.json) passed all eight installed
and isolated copied deployments in [run 36276053827](https://github.com/Millillion/lasm/actions/runs/36276053827).
The Mac used macOS 15.7.9 (24G830), Node 26.10.0, npm 11.19.1 and Lean 4.34.1.
Its complete deployments were 2,740,973–3,661,550 bytes. The sampled process-tree
RSS peak was 2,561,228,800 bytes; host available memory stayed above 2,914,582,528
bytes. Its monitor released all tracked processes with no resource abort. This
Mac monitor is not a kernel-enforced aggregate memory cap. Both jobs maintained
their disk reserves; Linux recorded zero OOM events.

Intel Mac and Linux ARM64 are still running. Retention of `.37` waits for the
whole matrix; this partial result does not replace the retained `.35` quick start.

Both macOS 15.7.9 targets now pass candidate `.37` (SHA-256 `622abcb5fa5aac5887f31cd3cc776fc44fa087c55ce5ede54e75d40c2ee8b32e`). [Intel evidence](evidence/node37-darwin-x64-2026-09-26.json) records all eight isolated copied deployments, no resource abort, a 2,363,092,992-byte sampled RSS peak and a 7,815,147,520-byte minimum host availability. Mac monitoring is sampled, not a kernel memory cap. Linux ARM64 regression and full-matrix retention are still running.
