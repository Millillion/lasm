# Node acceptance: Linux, macOS and Windows x64

The same **0.1.0-experimental.44** archive passed native installed-package and
independent-deployment checks on Linux and macOS, each on x86-64 and ARM64, plus
Windows x86-64 on 2026-09-28. Ahead-of-time restrictions are enforced and there
is no runtime-compiler fallback. **Windows ARM64 remains unaccepted. Nothing is
published to npm.**

## Exact artifact and installation

| Item | Value |
| --- | --- |
| Package | `@lasm/compiler@0.1.0-experimental.44` |
| Source revision | `40e9c0598c831bef49dfaebbdd4c5bd4b6696d1a` |
| Archive SHA-256 | `999389fdd7c27e3ef346977ece892456dd6367b961ff107657b1242bc56cd146` |
| Archive bytes | 65,337,349 |
| Node / npm | 26.10.0 / 11.19.1 |
| Lean / Lake | 4.34.1; commit `5045d0056413266e57c625dcd7c365b10e377c52` |
| Managed build tools | Emscripten 6.0.9, Python 3.13.15, Git 2.53.0 |
| Runtime manifest SHA-256 | `4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d` |

Two independent packs produced identical bytes. The [retention workflow](https://github.com/Millillion/lasm/actions/runs/36398226921)
rechecked every native job's successful report against this exact archive and
package source revision. The [retention evidence](evidence/node44-five-platform-retention-2026-09-28.json)
verifies GitHub's stored archive digest, size and the combined acceptance receipt.
The archive remains [an unpublished draft](https://github.com/Millillion/lasm/releases/tag/untagged-1bcaed31d70e517ff80b).

A maintainer with repository access can retrieve it:

```sh
gh release download node-linux-candidate-36398226921 --repo Millillion/lasm --pattern 'lasm-compiler-0.1.0-experimental.44.tgz' --pattern SHA256SUMS.txt
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
| linux-x64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node44-linux-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36392920262/job/108832580155) |
| linux-arm64 | Ubuntu 24.04.5 LTS, glibc 2.39 | [Passed report](evidence/node44-linux-arm64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36392920262/job/108832580217) |
| darwin-x64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node44-darwin-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36392911964/job/108832553852) |
| darwin-arm64 | macOS 15.7.9 (24G830) | [Passed report](evidence/node44-darwin-arm64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36392911964/job/108832554084) |
| win32-x64 | Windows 10.0.26100.33438 (`windows-2025`) | [Passed report](evidence/node44-win32-x64-2026-09-28.json), [job](https://github.com/Millillion/lasm/actions/runs/36389214996/job/108821105094) |

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

| Measurement | Linux x86-64 | Linux ARM64 | Mac x86-64 | Mac ARM64 | Windows x86-64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| Installed node_modules, bytes | 380,767,845 | 380,767,845 | 380,767,861 | 380,767,861 | 380,769,336 |
| Managed tool/cache files, bytes | 5,663,886,334 | 5,611,884,246 | 5,261,006,925 | 5,528,697,964 | 6,105,578,350 |
| Compressed tool downloads, bytes | 979,054,712 | 910,904,894 | 919,472,748 | 925,010,880 | 1,312,233,267 |
| Hello deployment, bytes | 3,212,096 | 3,227,010 | 3,626,808 | 3,279,120 | 3,042,522 |
| Largest tested deployment, bytes | 3,594,975 | 3,609,889 | 4,009,687 | 3,661,999 | 3,425,401 |
| npm install, seconds | 5.21 | 5.25 | 40.65 | 8.51 | 31.15 |
| First npx including downloads, seconds | 256.84 | 308.76 | 1041.65 | 332.53 | 915.08 |
| Cached build, seconds | 19.30 | 16.60 | 81.63 | 27.84 | 10.27 |
| Offline cached run, seconds | 19.07 | 16.82 | 59.93 | 23.13 | 14.22 |
| Median Node start to first output, seconds | 0.230 | 0.240 | 0.501 | 0.445 | 0.292 |
| Campaign memory peak, bytes | 4,675,952,640 | 4,710,600,704 | 2,358,824,960 | 2,597,945,344 | 2,808,406,016 |

Linux peaks use cgroup accounting with zero recorded OOM events, no throttling
and no resource abort. Builds used base pages and one build/Binaryen worker.
macOS peaks are sampled process-tree RSS, **not kernel-enforced aggregate limits**.
Both Mac monitors released tracked processes without a resource abort. Windows
uses a Job Object cap and a lower proactive stop; peak committed memory was
2.62 GiB. Restricted-token checks, process cleanup, offline firewall restoration
and all platform disk reserves passed.

## Preserved history and remaining platform work

The [earlier `.37` report and subsequent investigations](NODE_ACCEPTANCE_37_2026-09-26.md)
retain Linux/macOS acceptance and the Windows failures preceding this pass.
The [Windows byte-preservation repair](evidence/windows-stdio-bytes-2026-09-28.json)
and [native C-oracle launch control](evidence/windows-native-oracle-launch-2026-09-28.json)
have separate failure and regression evidence. Earlier archives remain unchanged.

Windows ARM64's native Lean distribution has passed build, relocation, retention
and archive auditing and is available as a managed download. Candidate `.45`
passed the five targets above but exposed an SDK defect with Unicode paths on
ARM64. The repair passed native SDK execution and archive-relocation checks;
the [distribution tracker](WINDOWS_TOOLCHAINS.md) records the evidence. Candidate
`.46` connects the repaired tools and must pass its own exact-archive campaign
before Windows ARM64 becomes supported.
