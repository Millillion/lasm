# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Repository

- **Housekeeping (no behaviour change).** The repository's root `lean-toolchain` names Lean 4.35.0 instead of the retired 4.32.0 (it is read only by editors and by pin-less fixtures; the published `@lasm/cli` is unchanged), eight Node diagnostic reports committed by accident are deleted (and ignored from now on), and docs/RELEASE.md no longer describes the removed `npm run test:release`.
