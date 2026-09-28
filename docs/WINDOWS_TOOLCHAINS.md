# Windows toolchain implementation

Windows remains unsupported until the installed Node package passes its native
acceptance gates. The README identifies the currently accepted release.

Managed native Lean/Lake execute from a short physical `bin` directory under
`os.tmpdir()/lasm-tools/<hash>`. Its files are hard links to the verified cache
when they share a volume; across volumes, copies are necessary. Library, source,
and other large directories are junctions to the original verified cache.
Every executable file and junction is rechecked before reuse, and new prefixes
are published atomically. These temporary execution directories can be removed
when no build is running and will be recreated. Removing the main tool cache
alone does not remove its temporary hard links or copies.

[Native Windows x64 validation passed](evidence/windows-lean-physical-prefix-2026-09-27.json): standalone Lean, Lake configurations, the interpreter adapter, and local-import C generation all work with a 289-character original module path. The unchanged upstream-path negative control still fails. Full installed-package acceptance remains separate. A [whole-directory junction
failed](evidence/windows-lean-junction-failure-2026-09-27.json): Lean 4.34.1's
`IO.appDir` resolves the physical path, and Lake overrides the child's library
search path. A physically short bin directory addresses that lookup without
changing a developer's chosen tool cache or Windows settings.

Candidate `.41` [timed out during prerequisite setup](evidence/node41-windows-prerequisite-timeout-2026-09-27.json), before installed application checks. The harness now preserves intermediate setup reports and permits 1200 seconds instead of 480, with the same 1-GiB memory cap and assertions. This is a new bounded run, not a reclassification of the timeout.

The pinned Emscripten linker receives `--output-eol=linux` on all platforms.
Its default Windows CRLF output failed the strict loader-template check.
A [compiler differential](evidence/windows-glue-line-ending-controls-2026-09-27.json)
reproduced that failure and verified the LF format without loosening semantic
checks. Complete Windows installed acceptance remains separate.

For maintained distributions, a host entry in a Lean release's `notices` catalog
can declare a required companion source/notices archive. Lasm verifies and
caches it before using the compiler, rechecks it on cached builds, and records
its identity in build information. Compiler download retries reuse a verified
companion. These build-tool sources do not become application deployment files.

The native ARM64 [SDK](evidence/windows-arm64-sdk-2026-09-27.json) and
[leantar helper](evidence/windows-arm64-leantar-2026-09-26.json) passed their
recorded relocation controls. The SDK is now a public tool prerelease; leantar
remains a retained bootstrap draft. The new
Lean 4.34.1 native compiler [reached its deadline while linking](evidence/windows-arm64-lean-release-deadline-2026-09-27.json), with a 1.91-GiB peak and no completed distribution. The reproducible
[source/notices companion](evidence/windows-arm64-tool-notices-2026-09-27.json)
must match the compiler's actual GMP version and leantar identity before it is
connected to that distribution. The Windows ARM64 Lean download catalog entry
and complete installed Lasm acceptance remain pending.

Read-only archive audits verified the retained [SDK and its named licenses](evidence/windows-arm64-sdk-notice-audit-2026-09-27.json) and [leantar executable](evidence/windows-arm64-leantar-archive-audit-2026-09-27.json). They streamed compressed bytes and inventoried native identities without extracting full toolchains locally. The SDK contains 27 recorded native ARM64 files plus the two explicitly unused upstream source launchers; its LLVM, Binaryen, and Emscripten license texts are recorded by hash. These audits establish archive integrity, not complete installed application acceptance.

The application host selector now uses the existing small Windows adapter rather
than copying all native platforms. [Local real-vendor measurements and regression
controls](evidence/windows-application-bundle-selection-2026-09-27.json) record
1,066,984 native bytes for x64 and 1,357,304 for ARM64, down from 13,335,796.
These are the adapter payloads, not complete Lean deployment sizes. Loaders and
licenses remain included; installed candidate `.43` validation is pending.

On resumption, `.42` and the queued `.43` run were confirmed cancelled following
the user's pause. `.42` had passed prerequisite isolation and was still in its
cold installed build; neither cancellation is a compatibility result.
[Resume evidence](evidence/windows-resume-controls-2026-09-28.json) preserves the
partial report and the new small compiler-cache controls.

The ARM64 retry uses two native build jobs under the unchanged memory cap, a
four-hour build deadline, and a six-hour job limit that leaves time for setup and
checkpointing. Only completed ccache objects can be retained in unpublished
drafts, after the build's entire guarded process tree exits. Restoration requires
the exact recipe, tool hashes, MSYS package inventory, archive checksum, and
per-file hashes. It always starts a fresh build tree and reruns native execution
and relocation checks. A cache checkpoint never counts as distribution acceptance.
Cache size is capped at 1 GiB and at most four checkpoint drafts are allowed.

The resumed `.43` x64 attempt [failed during prerequisite discovery](evidence/windows-discovery-timeout-2026-09-28.json), before installed execution. Resolving every ordinary path while traversing the runner's large CodeQL tree exhausted the parent setup deadline. Discovery now uses cached directory metadata and resolves roots and reparse entries only; full coverage, junction traversal, file denials, memory limits and deadlines are unchanged. The unchanged package is being retried with native directory/junction controls. The source/notices companion is now retained in the unpublished draft recorded in its evidence receipt.

The custom Lean packer now includes upstream `LICENSES` as well as `LICENSE`.
[Archive-repair controls](evidence/windows-lean-notice-repair-controls-2026-09-28.json)
cover the bootstrap that was already running when the omission was found. The
existing distribution workflow accepts a retained draft and exact checksum,
adds only the verified upstream notice bundle, and compares every original
member's bytes, type, mode and hardlink target. It skips source compilation and
requires fresh native Lean/Lake and local C-generation checks before retaining
the repaired archive. Bootstrap inputs stay unpublished throughout; the repaired
archive has a new checksum and still needs installed Lasm acceptance.

The next `.43` x64 run passed discovery and isolation, built its first Lean
program, then [failed the exact stdout comparison](evidence/windows-stdio-bytes-2026-09-28.json):
CRLF instead of native Lean's LF. The host now sets binary mode on its owned
standard descriptors, matching Lean initialization without changing the embedding
Node process's descriptors. Eight local controls passed, including redirected
files, pipes, arbitrary bytes and direct/worker file IO. Native Windows x64 and
ARM64 both passed the four byte controls and complete online/offline isolation
in run `36385212836`; the byte tests peaked at 138,870,784 and 139,710,464 bytes.
Candidate `.44` packed reproducibly with SHA-256
`999389fdd7c27e3ef346977ece892456dd6367b961ff107657b1242bc56cd146`
passed cold installed execution, cached reuse and the local Lake project on
x64. Its Hello deployment is 3,042,522 bytes. No expected output was normalized.

The `.44` run then [failed while preparing its independent native C oracle](evidence/windows-native-oracle-launch-2026-09-28.json), before the offline and copied-deployment phases.
Upstream `leanc` substitutes the sysroot into `ROOT/bin/clang.exe`; a Windows
namespace combined with those forward slashes caused the launch failure.
The maintainer harness now supplies its verified short ordinary prefix only to
that C invocation. Native run `36388782468` reproduced the original error and
compiled/ran the identical generated C after changing only that environment
value. Its long-path and Lake checks also passed, with a 2,371,014,656-byte peak
below the 3.2-GiB proactive stop. Run `36389214996` retries the unchanged `.44`
archive through full installed acceptance.

The [maintained ARM64 SDK download](https://github.com/Millillion/lasm/releases/tag/windows-arm64-sdk-bootstrap-36278363560)
is pinned in `src/sdk-tools.json`. Its public archive has the same 174,792,332
bytes and checksum as the native relocation and notices audits. The
[anonymous download receipt](evidence/windows-arm64-sdk-public-download-2026-09-28.json)
records retrieval without GitHub credentials. A fresh `managed-sdk.yml` run with
`scope=win32-arm64` checks the public catalog under a 4-GiB Job Object cap,
3.2-GiB proactive stop and 4-GiB disk reserve. Tool publication does not establish
Windows Lasm support or publish an npm package.
