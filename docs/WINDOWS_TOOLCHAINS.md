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
recorded relocation controls and are retained as unpublished drafts. The new
Lean 4.34.1 native compiler [reached its deadline while linking](evidence/windows-arm64-lean-release-deadline-2026-09-27.json), with a 1.91-GiB peak and no completed distribution. The reproducible
[source/notices companion](evidence/windows-arm64-tool-notices-2026-09-27.json)
must match the compiler's actual GMP version and leantar identity before it is
connected to that distribution. No Windows ARM64 download catalog entry or
public tool publication is established yet.

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
