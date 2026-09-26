# Project workflow

- Keep work in this local repository on `main` unless the user directs otherwise.
- Make unsigned commits at meaningful milestones (`git -c commit.gpgsign=false commit`).
  Never GPG-sign commits; keep local commit signing disabled.
- The user authorized `origin` at `git@github.com:Millillion/lasm.git`. Push after
  every commit and keep `main` synchronized with `origin/main`; never force-push
  or discard remote work. Push failures must not pause development or local
  commits. Per the user's latest instruction, attempt a push at least once after
  each commit; if it fails, retain the commit locally, continue work, and try
  again after the next commit. npm publication remains unauthorized.
- Prioritize the basic ordinary Lean-on-Node installed workflow in
  `docs/PLAN.md`, on native Linux x86-64 and Linux ARM64 first. macOS, Windows,
  broader language/API parity, other engines and experimental helper integration
  are deferred. Preserve their source, tests, artifacts and failures. Recheck
  official Node/Lean releases before a new acceptance campaign and pin exact
  versions within it. Keep Lean selectable through `lean-toolchain`.
- GitHub Actions CI/CD is authorized autonomously within the user's existing
  plan/public-repository allowances and with no additional costs. Configure and
  run workflows, inspect failures, and manage this repo's artifacts/caches as
  needed, especially for native macOS/Windows and ARM64 validation. Verify the
  no-cost eligibility of runners/features and bound storage/retention to included
  allowances. Do not enable paid larger runners, upgrades, services, or overages;
  use no-cost alternatives and keep progressing. Follow `docs/PLAN.md` for scope.
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
  Compiler-suite tests also invoke the linker: run their campaigns with
  `--base-pages --build-jobs 1`. Keep earlier pressure-aborted campaigns intact
  and use a new output directory when changing the resource profile.
- The user approved the recommendations in `docs/PLAN.md`; proceed through the
  implementation milestones. Do not present a limited implementation as a
  complete Lean runtime port or production compiler.
