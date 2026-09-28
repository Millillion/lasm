**Windows ARM64 metadata repair — 2026-09-28.** Candidate `.45` passed five
targets; ARM64 still fails the original Unicode-path SDK bug. Its complete
campaign evidence is preserved, with no six-target acceptance claim.

Native repair run `36423388374` passed seven regression controls, then stopped
before repaired execution: Windows resource updating moved the COFF debug table
without updating its pointer. No SDK archive was created. The repair now corrects
that pointer only after finding one unique, byte-exact original table. Missing,
changed or ambiguous tables fail. Nine local regression tests pass, including
stale-pointer recovery and rejection controls. Code/data, relocation-table and
loader-setting preservation remain required.

Remaining: validate the native repair and fresh SDK relocation, audit/distribute
its archive, then pass one exact npm candidate on all six targets. README still
marks ARM64 unsupported. No npm publication. Completion ETA is not yet estimable.
