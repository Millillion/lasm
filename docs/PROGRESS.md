**Six-platform campaign: ARM64 path bug isolated — 2026-09-28.** The native Lean
archive passed build, retention, integrity/notices checks and anonymous download.
Commit `9e78403` connected it and started reproducible candidate `.45` in run
`36416852657`. Linux x64 passed; remaining platform results are being collected.

Windows ARM64 passed prerequisite isolation and byte controls, then failed its
cold build: the SDK finalizer replaced Unicode path characters with question
marks. Its roughly 1-GiB memory peak and disk reserves exclude a resource abort.
The original failure is preserved. New native controls compare the unchanged
SDK with per-executable UTF-8 manifests, verify code/data sections stay unchanged,
and exercise Unicode C++ threads/exceptions on wasm32 and wasm64. The installed
Unicode test remains unchanged. README still lists ARM64 as unsupported.

Remaining: validate and distribute the SDK repair, then accept one exact npm
candidate on all six targets. No npm publication. Completion ETA is not yet estimable.
