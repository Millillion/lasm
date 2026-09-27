# Windows toolchain implementation

Windows remains unsupported until the installed Node package passes its native
acceptance gates. The README identifies the currently accepted release.

Managed native Lean/Lake execute through a stable directory junction under
`os.tmpdir()/lasm-tools/<hash>`. The junction points to the complete verified
toolchain in Lasm's versioned cache; it contains no copied compiler files. This
keeps upstream Lean's child-process paths short without asking developers to
move their cache or change Windows settings. Lasm checks the junction's target
on every use and refuses to repoint a conflicting path. It can be removed when
no build is running and will be recreated. Native validation of this correction
is pending; the previous [child-path failure](evidence/windows-lake-child-path-failure-2026-09-27.json)
is preserved.

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
Lean 4.34.1 native compiler is still building. The reproducible
[source/notices companion](evidence/windows-arm64-tool-notices-2026-09-27.json)
must match the compiler's actual GMP version and leantar identity before it is
connected to that distribution. No Windows ARM64 download catalog entry or
public tool publication is established yet.
