# Linux Node acceptance

Completed 2026-09-26: native Linux x86-64 and ARM64 passed the complete basic
application workflow using the same npm tarball. The candidate remains unpublished
to npm.

This report covers the first milestone in [PLAN.md](PLAN.md): ordinary Lean
`main`, a Node/npm-only installation, managed build tools, a tiny Lake project,
and independent Node deployment. It does not establish complete Lean language,
standard-library, filesystem or HTTP parity.

## Exact candidate

| Item | Value |
| --- | --- |
| Package | `@lasm/compiler@0.1.0-experimental.32`, unpublished private candidate |
| Package source | `368d757c166c5fba5a4f658ed062ccc4a8684d64` |
| Tarball SHA-256 | `0b2451cd8ef21ebd145a1da9214694cc1c2ea4f86843b5dae41cad4d9e9e9374` |
| Tarball bytes | 65,325,240 |
| Package unpacked bytes | 377,739,519 across 228 files, before npm dependencies |
| Node / npm | 26.10.0 / 11.19.1 |
| Lean / Lake | 4.34.1, Lean commit `5045d0056413266e57c625dcd7c365b10e377c52` |
| Managed SDK | Emscripten 6.0.9, including LLVM/Binaryen and sysroot |
| Managed Python / Git | Python 3.13.15 (20260901); Git 2.53.0 (dugite-native v2.53.0-4) |
| Runtime manifest SHA-256 | `4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d` |

Two independent `npm pack` invocations produced identical bytes. The runtime was
built from source at `3485d74917eb003718744b9a99793ef67ec60606`, then authenticated
before packaging. Its source build and relocated native-versus-Node smoke test
passed in [runtime CI](https://github.com/Millillion/lasm/actions/runs/36214598592).
The runtime handoff archive SHA-256 is
`b00ba194c398a2acf9f384f5fb192214510daeff90a5e4a00c9fbf8f3bd192ca`.
Full source/tool identities and bounded build records are preserved in the
[runtime evidence](evidence/node-linux-ci-runtime-2026-09-26.json).

The exact tested archive and checksum are retained in an
[unpublished GitHub draft](https://github.com/Millillion/lasm/releases/tag/untagged-b7f976257db5637e4783)
under `node-linux-candidate-36221743804`, accessible to repository maintainers.
A downloaded copy was independently SHA-256-verified at
`.work/node-linux-tested-36221743804/lasm-compiler-0.1.0-experimental.32.tgz`.
The [candidate receipt](evidence/node-linux-candidate-2026-09-26.json) records the
release assets and verification. Subsequent evidence/documentation commits do
not replace the tested archive.

## Native matrix

Both jobs consume the same tarball in
[installed-package CI](https://github.com/Millillion/lasm/actions/runs/36221743804).
The packaging gate also passed 80 Node tests and three small Python controls for
the CI cache adviser.

| Native target | Result | Observed OS / kernel / libc | Evidence |
| --- | --- | --- | --- |
| Linux x86-64 | Pass | Ubuntu 24.04.5 LTS; 6.17.0-1022-azure; glibc 2.39 | [Job](https://github.com/Millillion/lasm/actions/runs/36221743804/job/108348340717), [full record](evidence/node-linux-x64-2026-09-26.json) |
| Linux ARM64 | Pass | Ubuntu 24.04.5 LTS; 6.17.0-1022-azure; glibc 2.39 | [Job](https://github.com/Millillion/lasm/actions/runs/36221743804/job/108349855894), [full record](evidence/node-linux-arm64-2026-09-26.json) |

Each job passed 24 checked CLI/native commands, three startup samples, six
download/cache recovery controls, and three independently copied applications
with four execution cases. Expected negative cases include compilation failure,
unsupported Lean pins, integrity failures and the program's requested exit 23.

The checks use the actual installed `npm`/`npx` commands from the README in an
initially empty project with spaces and Unicode in its path. They cover exact
Hello World output, build without execution, arguments including an empty string,
ordinary Lake imports, imported-source invalidation, unchanged-build reuse,
tool/runtime tampering, and interrupted/truncated/unavailable downloads or
incomplete/damaged caches. A damaged completed cache is repaired with the documented remove-and-retry
procedure.

Landlock prevents access to the checkout and preinstalled Lean, Python, Git and
compilers. Only stock Node/npm, standard OS facilities, the candidate and a fresh
private workspace are exposed. Private empty npm/Git configuration excludes
runner-specific settings. CI's Python orchestration is outside that restricted
consumer and is unavailable to the installed product. The real CLI provisions
all its own additional tools from an absent cache.

Offline controls deny TCP in the kernel and verify `EACCES`. Deployment controls
copy all of `dist/` and a stock Node executable to another directory, then deny
the original source, package, tools, cache and output files. Plain Node executes
the copied applications with matching native-Lean output and exit status.

## Measurements

These are observations from individual CI runners, not an architecture benchmark
or a performance guarantee. Bytes below are logical regular-file sizes, excluding
symlink lengths and filesystem block-sharing effects. Download totals are pinned
compressed tool archives, including Git for Lake; HTTP/TLS overhead and npm
dependencies are additional.

| Measurement | Linux x86-64 | Linux ARM64 |
| --- | ---: | ---: |
| Installed `node_modules`, bytes | 380,728,839 | 380,728,839 |
| Managed tools/cache after all fixtures, bytes | 5,650,308,852 | 5,598,306,764 |
| Compressed tool downloads, bytes | 979,054,712 | 910,904,894 |
| Complete Hello World deployment, bytes | 180,484,156 | 180,484,160 |
| `npm install` candidate, seconds | 7.01 | 5.10 |
| First `npx lasm Main.lean`, seconds | 224.70 | 217.41 |
| Cached build-only command, seconds | 15.50 | 14.99 |
| Offline cached `npx` run, seconds | 17.17 | 15.11 |
| Median plain-Node first output, seconds | 1.904 | 1.437 |
| Whole guarded acceptance peak, GiB | 4.48 | 4.53 |

The first run includes cold tool provisioning, compilation and execution; npm
installation is measured separately. Startup is time from a fresh Node process
to its first stdout event, using warm deployment files, separately from shutdown.
The x86-64 samples were 1.904, 1.896 and 1.977 seconds; ARM64 samples were 1.439,
1.437 and 1.436 seconds. Native Lean is an
output/exit-status oracle; these timings are not a native-versus-Wasm benchmark.

Memory is the peak charge for the complete cgroup, including descendants, kernel
memory and file cache. All builds retain the proactive stop, no swap, no
`MemoryHigh`, base pages, one build/Binaryen worker, an 8 GiB host reserve and a
4 GiB disk reserve. A CI-only sidecar requests eviction of completed immutable
tool and application-cache pages using `POSIX_FADV_DONTNEED`; it does not change
file contents, limits, package isolation or deployment files. Cached CLI timings
include that memory profile. Stock Node needs no user-supplied engine flags.

Both runs had zero OOM events and no resource abort, and released their guards.
Maximum observed reductions in runner free disk were 8,199,856,128 bytes on x86-64
and 8,188,338,176 bytes on ARM64 across multiple fixtures and deployment copies.
These are separate from the disk requirement of one application. The full CI control requires 12 GiB initially free; builds
were validated on standard 16 GB runners. Smaller-memory hosts remain unverified.

## Preserved earlier attempts

These attempts do not count as complete platform passes. No OOM occurred.

| Attempt | Result and correction |
| --- | --- |
| [Combined packaging](https://github.com/Millillion/lasm/actions/runs/36219307441) | Proactive resource stop. Sequential extraction/packing guards reduced packing peak to about 1 GiB. [Record](evidence/node-linux-packaging-resource-abort-2026-09-26.json). |
| [Cold tool cache](https://github.com/Millillion/lasm/actions/runs/36219476165) | Proactive stop dominated by inactive file cache. Added scoped completed-tool cache advice. [Record](evidence/node-linux-cold-file-cache-abort-2026-09-26.json). |
| [Git configuration](https://github.com/Millillion/lasm/actions/runs/36220144960) | Cold Hello World passed; Lake hit a denied runner system-config include. Private test configs resolved the isolation mismatch. [Record](evidence/node-linux-cold-hello-git-isolation-2026-09-26.json). |
| [Later import rebuild](https://github.com/Millillion/lasm/actions/runs/36220732483) | Twenty command checks passed before a proactive stop. Included completed application build caches in scoped advice. [Record](evidence/node-linux-rebuild-resource-abort-2026-09-26.json). |

## Support boundary

Use Node 26.10.0 on either validated Ubuntu 24.04.5 architecture. The candidate requires
glibc 2.39 or newer and rejects incompatible OS/architecture, Node and Lean pins.
Other distributions and versions remain unverified. Deploy the entire output
directory on the same OS/architecture with the pinned Node version; cross-platform
deployment is not this milestone's contract.

The initial download, multi-gigabyte tool cache, roughly 180 MB Hello World
deployment and roughly 1.4–1.9 second median first output are material current costs.
Broader libraries, API parity, macOS/Windows, other engines and serverless adapters
remain separate work. See [NODE_SUPPORT.md](NODE_SUPPORT.md) and
[README.md](../README.md) for the supported workflow and recovery instructions.
