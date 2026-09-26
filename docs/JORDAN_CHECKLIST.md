# Jordan's checklist

Only add, remove, or change requirements when explicitly directed by Jordan. Mark
items complete only with verified evidence. The order below reflects Jordan's
priorities.

- [ ] Reduce final deployable build size
- [ ] Reduce `.cache` size
- [x] Ensure good DX during first build that might take minutes
- [ ] Create uninstall capabilities that completely remove everything Lasm installed globally
- [ ] Create tests for all of the major Node server/serverless platforms if possible locally and in CI/CD

Item 1 remains open: Jordan clarified that multi-gigabyte deployments are
unacceptable. Candidate `.34` verifies the ordinary-application reduction on
native Linux x86-64 and ARM64 (Hello 3.21–3.22 MB), but the 2.39 GB fallback means
the broader bundle-size requirement is unfinished. See [the size report](BUNDLE_SIZE.md)
for verified results and the proposed remaining work. Existing acceptance evidence
is preserved.

Item 3 is verified by focused progress/download tests, a guarded local Lean build,
and the same candidate's cold installation/build on both architectures. The
[original progress evidence](evidence/first-build-progress-2026-09-26.json) and
[native acceptance logs](evidence/bundle-size-linux-x64-recheck-2026-09-26.json)
record the first-build notice, download progress and timed phase updates.
