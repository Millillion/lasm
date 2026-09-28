# Node acceptance: Linux, macOS and Windows

The same **0.1.0-experimental.46** archive passed native installed-package and
independent-deployment checks on **Linux, macOS and Windows, each on x86-64 and
ARM64**, on 2026-09-28. Ahead-of-time restrictions are enforced, with no
runtime-compiler fallback. **Nothing is published to npm.**

The initial matrix passed five targets. Its ARM64 consumer passed cold and Lake
builds before CI's independent native reference compiler encountered missing
OpenSSL import libraries. A CI-only dependency correction allowed the
[unchanged-archive ARM64 retry](https://github.com/Millillion/lasm/actions/runs/36433387126)
to pass every gate. Package bytes and Lean fixtures were unchanged; the failed
attempt remains preserved. This report combines those six successful native jobs.

## Exact artifact and installation

| Item | Value |
| --- | --- |
| Package | `@lasm/compiler@0.1.0-experimental.46` |
| Source revision | `8fe54124c1dfc393f6d0a96aed171e75124dd57a` |
| Archive SHA-256 | `c566d2dfa621808d70b7c411ee0821da1017c3d366d0b02f1896bf8d349b70ae` |
| Archive bytes | 65,337,774 |
| Node / npm | 26.10.0 / 11.19.1 |
| Lean / Lake | 4.34.1; commit `5045d0056413266e57c625dcd7c365b10e377c52` |
| Managed build tools | Emscripten 6.0.9, Python 3.13.15, Git 2.53.0 |
| Runtime manifest SHA-256 | `4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d` |

Two independent packs produced identical bytes. Official Node and Lean release
feeds were checked at 2026-09-28 13:31 UTC before the campaign; the exact versions
above stayed pinned throughout it. The [retention workflow](https://github.com/Millillion/lasm/actions/runs/36439263093)
rechecked every native job's successful report against this exact archive and
package source revision. The [retention evidence](evidence/node46-six-platform-retention-2026-09-28.json)
verifies GitHub's stored digests and independently downloaded bytes for the
archive and combined acceptance receipt. The local archive audit used a
512-MiB cap, peaked at 88.4 MiB, and recorded no resource abort or OOM event.
The archive remains [an unpublished draft](https://github.com/Millillion/lasm/releases/tag/untagged-eb0c5838d8d247a9d10d).

A maintainer with repository access can retrieve it:

```sh
gh release download node-linux-candidate-36439263093 --repo Millillion/lasm --pattern 'lasm-compiler-0.1.0-experimental.46.tgz' --pattern SHA256SUMS.txt
```

Give the unchanged tarball to the developer, who needs only Node/npm. Follow the
[README quick start](../README.md#get-started). GitHub CLI is only a maintainer
retrieval tool. The README and support guide embedded in this unchanged archive
predate completion of these tests; the linked repository documentation records
the current acceptance status. Repacking documentation would require a new hash
and acceptance campaign.

## Native evidence

| Target | Tested OS | Complete evidence |
| --- | --- | --- |
| linux-x64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node46-linux-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36429228696/job/108951274962) |
| linux-arm64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node46-linux-arm64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36429228696/job/108960024579) |
| darwin-x64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node46-darwin-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36429228696/job/108951274991) |
| darwin-arm64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node46-darwin-arm64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36429228696/job/108951275132) |
| win32-x64 | Windows Server 2025 Datacenter, 10.0.26100.33438 (`windows-2025`) | [Passed report](evidence/node46-win32-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36429228696/job/108951275003) |
| win32-arm64 | Windows 11 Enterprise, 10.0.26200.9457 (`windows-11-arm`) | [Passed report](evidence/node46-win32-arm64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36433387126/job/108965030474) |

Each job installs the same archive into a fresh project with spaces and Unicode.
Linux Landlock, macOS sandbox-exec, and Windows restricted-token/ACL controls deny
checkout data and preinstalled developer tools. Consumers receive stock Node/npm
and ordinary OS facilities; Lasm provisions the build tools itself. Offline phases
deny network access. Copied deployments run with source, original outputs,
installed package and development tools/cache denied.

Eight applications pass exact native-versus-Node output and exit-code comparisons:
Hello World, arguments, local Lake imports, two language fixtures, selected
filesystem operations, compile-time macros/proofs, and 1,000 unreachable
definitions. Runtime evaluation and module-data fixtures fail at build time
without producing deployments. Cache reuse, source invalidation, six recovery
controls, diagnostics and deployment-size checks pass. Windows native and Node
comparisons consume identical fixture bytes; Git CRLF conversion is recorded
separately and program output is not normalized.

This defines the release contract; it does not establish complete Lean or standard
library parity. See the [exact restrictions](../README.md#lean-support-and-restrictions).

## Observed measurements

These are individual CI measurements, not performance guarantees. Sizes count
logical regular-file bytes. Downloads exclude HTTP/npm overhead.

| Measurement | Linux x86-64 | Linux ARM64 | Mac x86-64 | Mac ARM64 | Windows x86-64 | Windows ARM64 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Installed node_modules, bytes | 380,770,245 | 380,770,245 | 380,770,261 | 380,770,261 | 380,771,736 | 380,771,736 |
| Managed tool/cache files, bytes | 5,663,886,334 | 5,611,884,246 | 5,261,006,925 | 5,528,697,964 | 6,105,578,350 | 4,178,116,237 |
| Compressed tool downloads, bytes | 979,054,712 | 910,904,894 | 919,472,748 | 925,010,880 | 1,312,233,267 | 1,018,654,299 |
| Hello deployment, bytes | 3,212,096 | 3,226,994 | 3,626,808 | 3,279,120 | 3,042,522 | 3,332,953 |
| Largest tested deployment, bytes | 3,594,975 | 3,609,889 | 4,009,687 | 3,661,999 | 3,425,401 | 3,715,832 |
| npm install, seconds | 7.01 | 4.90 | 22.09 | 6.57 | 26.47 | 13.98 |
| First npx including downloads, seconds | 293.84 | 283.05 | 836.01 | 386.19 | 926.95 | 745.31 |
| Cached build, seconds | 15.06 | 13.40 | 36.13 | 17.63 | 19.02 | 23.84 |
| Offline cached run, seconds | 15.45 | 13.33 | 32.37 | 15.37 | 18.20 | 23.16 |
| Median Node start to first output, seconds | 0.294 | 0.231 | 0.426 | 0.187 | 0.338 | 0.414 |
| Campaign memory peak, bytes | 4,652,646,400 | 4,708,052,992 | 2,357,952,512 | 2,592,604,160 | 2,799,775,744 | 2,664,058,880 |

Linux peaks use cgroup accounting with zero recorded OOM events, no throttling
and no resource abort. Builds used base pages and one build/Binaryen worker.
macOS peaks are sampled process-tree RSS, **not kernel-enforced aggregate limits**.
Both Mac monitors released tracked processes without a resource abort. Windows
uses a Job Object cap and a lower proactive stop; peak committed memory was
2.61 GiB on x86-64 and 2.48 GiB on ARM64. Restricted-token checks, process cleanup,
offline firewall restoration and all platform disk reserves passed.

## Preserved history and scope

The [earlier `.44` report](NODE_ACCEPTANCE_44_2026-09-28.md) preserves the
five-platform baseline and its exact archive. The
[`.45` campaign](evidence/node45-six-platform-campaign-2026-09-28.json) retains
the original ARM64 Unicode-path failure. The
[SDK repair and distribution evidence](evidence/windows-arm64-sdk-utf8-distribution-2026-09-28.json)
and [`.46` reference-compiler setup failure](evidence/node46-windows-arm64-native-reference-2026-09-28.json)
record the fixes preceding this pass. The [Windows toolchain history](WINDOWS_TOOLCHAINS.md)
contains the native compiler, license, relocation and archive audits.

The scoped six-platform installation/build/deployment milestone is complete.
Complete `IO.FS`, `Std.Http`, concurrency, broad third-party libraries, full Lean
upstream-suite parity, other engines and serverless adapters remain separate
work. Runtime compiler/evaluation/module-data and executable-plugin capabilities
remain explicitly unavailable under the ahead-of-time policy.
