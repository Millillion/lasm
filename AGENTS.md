# Project workflow

- Keep work in this local repository on `main` unless the user directs otherwise.
- Make unsigned commits at meaningful milestones (`git -c commit.gpgsign=false commit`).
- Do not create a remote or push without an explicit user request.
- Separate experimentally verified behavior from design proposals and open questions.
- Keep downloaded toolchains, third-party source trees, caches, and generated
  experiment artifacts in ignored `.cache/` or `.work/` directories.
- The user approved the recommendations in `docs/PLAN.md`; proceed through the
  implementation milestones. Do not present a limited implementation as a
  complete Lean runtime port or production compiler.
