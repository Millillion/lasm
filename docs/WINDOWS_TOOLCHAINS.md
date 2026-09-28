# Windows toolchain implementation

Windows x64 candidate `.44` has passed the installed Node package's native
acceptance gates, as have both Linux and macOS architectures. The exact archive
and combined receipt are [retained](evidence/node44-five-platform-retention-2026-09-28.json).
ARM64 remains unverified as an installed Lasm application. The README identifies
the currently available release and platform boundaries.

The native Lean 4.34.1 archive now passed build, relocation, retention and a
streaming archive audit. Its public tool download and required source/notices
companion are connected in the source catalog for candidate `.45`. The SDK had
already passed a fresh native public-download consumer. The next acceptance
workflow uses one identical package on all six OS/architecture targets.
The investigations below preserve earlier candidates and failures.

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
was checked against the successful compiler's actual GMP version and leantar
identity before connection to its distribution. Native Lean download details are
recorded below; complete installed Lasm acceptance remains pending.

Read-only archive audits verified the retained [SDK and its named licenses](evidence/windows-arm64-sdk-notice-audit-2026-09-27.json) and [leantar executable](evidence/windows-arm64-leantar-archive-audit-2026-09-27.json). They streamed compressed bytes and inventoried native identities without extracting full toolchains locally. The SDK contains 27 recorded native ARM64 files plus the two explicitly unused upstream source launchers; its LLVM, Binaryen, and Emscripten license texts are recorded by hash. These audits establish archive integrity, not complete installed application acceptance.

The application host selector now uses the existing small Windows adapter rather
than copying all native platforms. [Local real-vendor measurements and regression
controls](evidence/windows-application-bundle-selection-2026-09-27.json) record
1,066,984 native bytes for x64 and 1,357,304 for ARM64, down from 13,335,796.
These are the adapter payloads, not complete Lean deployment sizes. Loaders and
licenses remain included. Later `.44` x64 acceptance includes that selection;
ARM64 installed acceptance remains pending.

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

The resumed `.43` x64 attempt [failed during prerequisite discovery](evidence/windows-discovery-timeout-2026-09-28.json), before installed execution. Resolving every ordinary path while traversing the runner's large CodeQL tree exhausted the parent setup deadline. Discovery now uses cached directory metadata and resolves roots and reparse entries only; full coverage, junction traversal, file denials, memory limits and deadlines are unchanged. The unchanged package is being retried with native directory/junction controls. The source/notices companion was first retained in the draft recorded in its original evidence receipt.

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
records retrieval without GitHub credentials. Fresh native run `36390222907`
downloaded from this catalog, compiled a C-to-Wasm program, checked its output
and exit status, and verified cache reuse. Cold compilation took 101.4 seconds;
peak committed memory was 237,989,888 bytes under a 4-GiB Job Object cap and
3.2-GiB proactive stop. Its 4-GiB disk reserve remained intact. Tool publication
does not establish Windows Lasm support or publish an npm package.

The [source/notices companion](https://github.com/Millillion/lasm/releases/tag/windows-arm64-tool-notices-v1)
is also public. [Anonymous retrieval](evidence/windows-arm64-tool-notices-public-2026-09-28.json)
verified its original 14,639,815 bytes and checksum under a 512-MiB local cap;
peak memory was 30.3 MiB. It covers the recorded leantar commit and GMP 6.3.0-2.
The native Lean archive must match those identities before this companion is
attached to its download catalog entry.

Candidate `.44` [passed full Windows x64 acceptance](evidence/node44-win32-x64-2026-09-28.json)
in run `36389214996`: cold Node/npm-only provisioning, ordinary Lean and local
Lake imports, offline cache reuse, invalidation/recovery, runtime restrictions,
and all eight independent copied deployments. Native oracle and Node fixture
bytes match; expected output was not normalized. The Hello deployment is
3,042,522 bytes and the largest fixture is 3,425,401 bytes. Cold Hello took
915.1 seconds in this run. Peak committed memory was 2,808,406,016 bytes,
below the 6,869,744,025-byte proactive stop; cleanup and disk reserves passed.
The same archive is being checked on Linux (`36392920262`) and macOS
(`36392911964`) on both native architectures. This pass does not establish
Windows ARM64 or broad API parity.

The two-job ARM64 retry [completed its native build and relocation](evidence/windows-arm64-lean-retention-failure-2026-09-28.json)
in run `36380911268`, including Lean/Lake execution, C generation and all 15
native executable/DLL identities. The guarded operation took 170.2 minutes and
peaked at 2,711,216,128 committed bytes, with no memory abort. The subsequent
compiler-cache draft request failed with HTTP 403 while targeting the older
source commit; its failure caused the distribution-retention step to be skipped.
Neither archive survived, so this remains build evidence only.

Draft cache targets now use the existing `main` branch, with the exact source
revision preserved in receipts. Before a retry builds anything, a small control
creates a draft, uploads and retrieves identical bytes, then deletes that control.
Successful native distributions are retained before the cache, with an explicit
independent condition. A cache-upload failure cannot skip their retention.
The retry also includes the already-fixed upstream `LICENSES` bundle directly.

The [early retention control passed](evidence/windows-arm64-retention-preflight-2026-09-28.json)
on native ARM64 in run `36396705986`, including byte-exact retrieval and cleanup.
The next control failed in tar compression before any compiler rebuild, at a
60,944,384-byte peak. Its small hard-link input is now constructed synchronously;
the actual streaming notice append and all preservation assertions are unchanged.
Both local versions passed under a 512-MiB guard; the revised fixture
subsequently passed the native Windows recheck below.

That revised notice control and the draft-storage preflight passed on native ARM64
in run `36397277364`. The [compiler build, retained distribution and archive
audit passed](evidence/windows-arm64-lean-distribution-2026-09-28.json).
The build took 169.8 minutes and peaked at 2,728,611,840 committed bytes;
its native execution, relocation and local Lake C-generation checks all passed.
Both distribution and completed-object cache retention succeeded.

The [native Lean tool prerelease](https://github.com/Millillion/lasm/releases/tag/windows-arm64-lean-bootstrap-36397277364)
contains 778,111,723 compressed bytes, with SHA-256
`202ad6c1403970b98cac5ea10259a54e049b131836b9b2a97d5a82fab5ab4ae0`.
The local streaming audit checked all 18,437 archive entries, all 15 native ARM64
executable/DLL identities, and the exact upstream `LICENSES` bundle. Its 87.1-MiB
peak stayed below the 512-MiB cap. The archive's GMP 6.3.0-2 and leantar executable
match the published source/notices companion. Candidate `.45` connects these
verified inputs and enables the complete six-target installed/deployment matrix;
those package-level checks are still required before claiming ARM64 support.

Candidate `.45` failed its first native ARM64 installed build after provisioning
the verified tools. The [preserved failure](evidence/node45-windows-arm64-unicode-failure-2026-09-28.json)
shows `wasm-emscripten-finalize` replacing Unicode path characters with `?` while
opening its output; memory peaked at 1,073,655,808 bytes and disk reserves held.
A focused native differential now compares the unchanged SDK with copied
Binaryen executables containing a process UTF-8 manifest. It checks that loaded
code/data sections and entry-point identities are unchanged, reproduces the
original Unicode failure, then exercises Unicode paths and C++ thread/exception
applications in both Wasm widths. This is a proposed tool-distribution repair,
not an accepted SDK or application result. It uses [Microsoft's process code
page mechanism](https://learn.microsoft.com/en-us/windows/apps/design/globalizing/use-utf8-code-page)
and changes no global Windows settings.
