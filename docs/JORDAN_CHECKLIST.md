# Jordan's checklist

Only add, remove, or change requirements when explicitly directed by Jordan. Mark
items complete only with verified evidence. The order below reflects Jordan's
priorities.

- [x] Reduce final deployable build size
- [ ] Reduce `.cache` size
- [x] Ensure good DX during first build that might take minutes
- [ ] Create uninstall capabilities that completely remove everything Lasm installed globally
- [ ] Create tests for all of the major Node server/serverless platforms if possible locally and in CI/CD

Item 1 is verified within Jordan's approved ahead-of-time scope. Candidate `.35`
passed native Linux x86-64 and ARM64 with eight copied deployments of 2.67–3.61 MB.
The former 2.39 GB fallback is removed; runtime compiler/module/evaluation
dependencies fail during the build. Code elimination follows linker reachability
and does not use a per-language-feature allowlist. This is not a fixed size limit
or an absolute minimum for every application. See [current acceptance](NODE_ACCEPTANCE.md)
and [the runtime exclusions](../README.md#lean-support-and-restrictions). Historical
measurements and failures remain in [the size report](BUNDLE_SIZE.md).

Item 3 is verified by focused progress/download tests, a guarded local Lean build,
and the same candidate's cold installation/build on both architectures. The
[original progress evidence](evidence/first-build-progress-2026-09-26.json) and
[native acceptance logs](evidence/bundle-size-linux-x64-recheck-2026-09-26.json)
record the first-build notice, download progress and timed phase updates.
