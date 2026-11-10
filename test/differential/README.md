# Differential regressions

Each `.lean` file here is one case found by the differential tester
(`scripts/differential/run.mjs`, [docs/TESTING.md](../../docs/TESTING.md#differential-testing)):
a `def r_<name> : IO Unit` (plus helpers) written against the generator's preamble
(`PREAMBLE` in `scripts/differential/generate.mjs`). Every output line starts with
the case name. The regression run renders all of them into one program, builds it
natively and for every target, and requires identical stdout, stderr and exit status:

    node scripts/differential/run.mjs --lasm …/bin/lasm.mjs --regressions test/differential/regressions --programs 0

A failing campaign writes `WORK/repros/<name>/<name>.lean` in this format; copy it
here with the fix (or with the issue number in its comment while the fix is open).
Cases that use `IO.FS` run only on targets with a file system (node, WASI).
