# Project workflow

- Keep work in this local repository on `main` unless the user directs otherwise.
- Make unsigned commits at meaningful milestones (`git -c commit.gpgsign=false commit`).
- Do not create a remote or push without an explicit user request.
- Separate experimentally verified behavior from design proposals and open questions.
- Keep downloaded toolchains, third-party source trees, caches, and generated
  experiment artifacts in ignored `.cache/` or `.work/` directories.
- Run heavy builds, compiler probes, and upstream suites through
  `scripts/full-lean/run-bounded.mjs`. The build/suite entry points apply it
  automatically. Run only one heavy workload at a time, with one CTest job and
  at most two build jobs on this host. The cap covers all descendants. Do not
  bypass it or overlap engine suites; previous overlaps caused confirmed host
  OOM kills of ChatGPT. Record resource aborts separately from test failures.
  Do not induce OOM or use `MemoryHigh` throttling to test the guard: ancestor
  `systemd-oomd` policy killed ChatGPT even with ample free RAM. Use proactive
  termination below the 10 GiB kernel cap and verify only below-cap allocations.
- For full Wasm linker builds on this host, use `scripts/full-lean/base-pages.py`
  inside the resource guard, with one build/Binaryen worker. This avoids observed
  huge-page allocation pressure without changing host settings or guard limits.
- The user approved the recommendations in `docs/PLAN.md`; proceed through the
  implementation milestones. Do not present a limited implementation as a
  complete Lean runtime port or production compiler.
