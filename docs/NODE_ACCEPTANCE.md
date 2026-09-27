# Node acceptance: Linux and macOS

Native Linux and macOS, each on x86-64 and ARM64, passed the same **0.1.0-experimental.37** archive on 2026-09-26. This candidate enforces ahead-of-time execution, with no runtime-compiler fallback. Windows implementation is in progress. Nothing is published to npm.

## Exact artifact and installation

| Item | Value |
| --- | --- |
| Package | `@lasm/compiler@0.1.0-experimental.37` |
| Source revision | `804d751d022ec914a389c81e023e2f9576ad0f85` |
| Archive SHA-256 | `622abcb5fa5aac5887f31cd3cc776fc44fa087c55ce5ede54e75d40c2ee8b32e` |
| Archive bytes | 65,336,595 |
| Node / npm | 26.10.0 / 11.19.1 |
| Lean / Lake | 4.34.1; commit `5045d0056413266e57c625dcd7c365b10e377c52` |
| Managed build tools | Emscripten 6.0.9, Python 3.13.15, Git 2.53.0 |
| Runtime manifest SHA-256 | `4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d` |

Two independent packs produced identical bytes; 132 focused tests passed before native acceptance. The exact tested archive and checksum are retained in [an unpublished draft](https://github.com/Millillion/lasm/releases/tag/untagged-b26e111f0a54582cf8d7) for maintainers. GitHub's retained-asset digest matches the package checksum. The [complete CI campaign](https://github.com/Millillion/lasm/actions/runs/36276053827), including retention, passed.

A maintainer with repository access can download the candidate using:

```sh
gh release download node-linux-candidate-36276053827 --repo Millillion/lasm --pattern 'lasm-compiler-0.1.0-experimental.37.tgz' --pattern SHA256SUMS.txt
```

Give the unchanged tarball to the developer, who needs only Node/npm. Follow the [README quick start](../README.md#get-started); GitHub CLI is a maintainer retrieval tool, not a Lasm prerequisite.

## Native evidence

| Target | Tested OS | Complete evidence |
| --- | --- | --- |
| linux-x64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node37-linux-x64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36276053827/job/108499108754) |
| linux-arm64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node37-linux-arm64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36276053827/job/108502713293) |
| darwin-x64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node37-darwin-x64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36276053827/job/108499108743) |
| darwin-arm64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node37-darwin-arm64-2026-09-26.json), [job](https://github.com/Millillion/lasm/actions/runs/36276053827/job/108499108768) |

Each job installs the same archive into a fresh project containing spaces and Unicode. Linux Landlock and macOS sandbox-exec deny checkout data and preinstalled developer tools. The consumer receives stock Node/npm and ordinary OS facilities; Lasm provisions its own build tools. Offline phases deny network access. Copied deployments run with source, package, original build output and development tools/cache denied.

Eight applications pass native-versus-Node comparisons: Hello World, arguments/exit status, local Lake imports, two language fixtures, filesystem operations, compile-time macros/proofs, and 1,000 unreachable definitions. Runtime evaluation and module-path fixtures fail during build, create no deployment, and leave no failed staging directories. Cache reuse, invalidation, integrity, interrupted-download recovery, diagnostics and size budgets also pass.

This is a defined release contract, not complete Lean or API parity. See the [exact README restrictions](../README.md#lean-support-and-restrictions).

## Observed measurements

These are individual CI measurements, not performance guarantees. File sizes count logical regular-file bytes; downloads exclude HTTP/npm overhead.

| Measurement | Linux x86-64 | Linux ARM64 | Mac x86-64 | Mac ARM64 |
| --- | ---: | ---: | ---: | ---: |
| Installed node_modules, bytes | 380,758,988 | 380,758,988 | 380,759,004 | 380,759,004 |
| Managed tool/cache files, bytes | 5,663,886,334 | 5,611,884,246 | 5,261,006,925 | 5,528,697,964 |
| Compressed tool downloads, bytes | 979,054,712 | 910,904,894 | 919,472,748 | 925,010,880 |
| Hello deployment, bytes | 3,211,647 | 3,226,561 | 3,626,359 | 3,278,671 |
| Largest tested deployment, bytes | 3,594,526 | 3,609,440 | 4,009,238 | 3,661,550 |
| npm install, seconds | 7.16 | 5.17 | 16.75 | 8.32 |
| First npx including downloads, seconds | 287.60 | 235.66 | 567.32 | 373.26 |
| Cached build, seconds | 18.24 | 12.26 | 28.93 | 16.54 |
| Offline cached run, seconds | 18.60 | 12.82 | 22.87 | 15.06 |
| Median Node start to first output, seconds | 0.278 | 0.265 | 0.330 | 0.175 |
| Campaign memory peak, bytes | 4,650,860,544 | 4,726,091,776 | 2,363,092,992 | 2,561,228,800 |

Linux memory peaks use cgroup accounting; both guards released, recorded zero OOM events and no resource abort. Linux builds used base pages and one build/Binaryen worker. Mac peaks are sampled process-tree RSS, **not kernel-enforced aggregate limits**. Mac monitors released tracked processes with no resource abort; minimum available host memory was 7.82 GB (Intel) and 2.91 GB (ARM64). All jobs maintained their disk reserves.

Original failures are preserved: [Intel directory ABI](evidence/darwin-x64-directory-failure-2026-09-26.json), [ARM64 temporary names](evidence/darwin-arm64-temporary-failure-2026-09-26.json), and earlier resource/control failures. Both fixes have [native regression controls](evidence/darwin-filesystem-controls-2026-09-26.json). Earlier archives and reports remain unchanged: [`.35` Linux acceptance and `.36` history](NODE_ACCEPTANCE_35_2026-09-26.md), [initial `.32`](NODE_ACCEPTANCE_32_2026-09-26.md), [size reduction and former fallback](BUNDLE_SIZE.md).

The later `.39` campaign also passed [Linux x86-64](evidence/node39-linux-x64-2026-09-27.json),
[Linux ARM64](evidence/node39-linux-arm64-2026-09-27.json),
[Mac x86-64](evidence/node39-darwin-x64-2026-09-27.json), and
[Mac ARM64](evidence/node39-darwin-arm64-2026-09-27.json), but
[failed Windows](evidence/node39-windows-long-path-2026-09-27.json).
It was not retained as the accepted release. These results do not establish
acceptance of later source changes or Windows support.
