# Jordan's checklist

Only add, remove, or change requirements when explicitly directed by Jordan. Mark
items complete only with verified evidence. The order below reflects Jordan's
priorities.

- [ ] Reduce final deployable build size
- [ ] Reduce `.cache` size
- [x] Ensure good DX during first build that might take minutes
- [ ] Create uninstall capabilities that completely remove everything Lasm installed globally
- [ ] Create tests for all of the major Node server/serverless platforms if possible locally and in CI/CD

Item 3 is verified in the current source with focused progress/download tests and
a real guarded Lean build; see [the evidence](evidence/first-build-progress-2026-09-26.json).
The previously accepted `.32` archive is unchanged; these improvements need to be
included in the next release candidate.
