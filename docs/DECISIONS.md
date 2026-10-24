# Decisions made while the user was unavailable

From 2026-10-24 the user asked that work continue without pausing for
questions. Each choice below was made on the best available evidence and can be
walked back. Newest last.

| When (UTC) | Decision | Reasoning | How to undo |
| --- | --- | --- | --- |
| 2026-10-24 | 0.1.0 is taken to "release PR green and ready" but is not merged until the user has run the one-time npm bootstrap (`scripts/release/bootstrap-npm.mjs`). | Publishing needs the user's npm login and 2FA; merging without trusted publishing would make `release.yml` fail mid-release. | Run the bootstrap, then merge the release PR. |
| 2026-10-24 | The Windows/macOS build time (Hono 65.6 s on the Windows runner after the speedups) is treated as part of the 0.1.0 build-speed blocker. | The user's build-speed requirement applies to every platform. | — |
