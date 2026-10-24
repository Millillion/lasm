# Decisions made while the user was unavailable

From 2026-10-24 the user asked that work continue without pausing for
questions. Each choice below was made on the best available evidence and can be
walked back. Newest last.

| When (UTC) | Decision | Reasoning | How to undo |
| --- | --- | --- | --- |
| 2026-10-24 | 0.1.0 is taken to "release PR green and ready" but is not merged until the user has run the one-time npm bootstrap (`scripts/release/bootstrap-npm.mjs`). | Publishing needs the user's npm login and 2FA; merging without trusted publishing would make `release.yml` fail mid-release. | Run the bootstrap, then merge the release PR. |
| 2026-10-24 | The Windows/macOS build time (Hono 65.6 s on the Windows runner after the speedups) is treated as part of the 0.1.0 build-speed blocker. | The user's build-speed requirement applies to every platform. | — |
| 2026-10-24 | The full launch gate waits for build-speed round 2 instead of running on 460b4f4. | Round 2 changes release output (parallel initializer translation units) and is needed for the build-time requirement (macOS Hono rebuild 44 s, first builds 27-66 s); gating 460b4f4 would be invalidated immediately. | Gate 460b4f4 and ship round 2 in 0.1.1. |
| 2026-10-24 | Edits to release PR #1 are batched into one push after the gate. | Every PR push re-runs the full candidate checks (hours of macOS/Windows), competing with the gate. | Push edits as they're made. |
| 2026-10-24 | Phase 7.1 (edge prototype) started early on branch `phase-7` with Linux-only CI. | Uses idle capacity without touching main or the macOS/Windows runners the gate needs. | Pause the branch. |
