# Decisions made while the user was unavailable

From 2026-10-24 the user asked that work continue without pausing for
questions. Each choice below was made on the best available evidence and can be
walked back. Newest last.

| When (UTC) | Decision | Reasoning | How to undo |
| --- | --- | --- | --- |
| 2026-10-24 | 0.1.0 is taken to "release PR green and ready" but is not merged until the user has run the one-time npm bootstrap (`scripts/release/bootstrap-npm.mjs`). | Publishing needs the user's npm login and 2FA; merging without trusted publishing would make `release.yml` fail mid-release. | Run the bootstrap, then merge the release PR. |
| 2026-10-24 | The Windows/macOS build time (Hono 65.6 s on the Windows runner after the speedups) is treated as part of the 0.1.0 build-speed blocker. | The user's build-speed requirement applies to every platform. | — |
| 2026-10-24 | The 0.1.0 release PR (branch `release-0.1.0`) is opened against `main` with `release-checks` running on it, and is not merged. | The process (RELEASING.md) puts the checks on the PR; merging must wait for the user's npm bootstrap, without which `release.yml` cannot publish. | Close the PR, or merge it after the bootstrap. |
| 2026-10-24 | The published `@lasm/cli` README is the repository README (relative links pinned to tag `v<version>`, LF newlines), not the candidate's "install this tarball" text (`scripts/npm-dist/build.mjs`, release mode only). | npm shows the package README; the candidate text would tell npm users to install a local tarball. LF keeps the tarball byte-identical across runners. | Drop the `publishedReadme` step in `build.mjs`. |
| 2026-10-24 | The release notes keep the `GATE_SUMMARY` placeholder until the gate summary is written; the PR description says it must be filled before merge. | The launch gate is still running; its summary comes from the agent writing it. | — |
| 2026-10-24 | README's install section makes `npm create lasm` / `npx @lasm/cli` primary and keeps a short maintainers' candidate-tarball section. | The packaging step (`scripts/candidate-readme.mjs`) rewrites that section for every candidate, including the release candidate; removing it would fail packaging. | — |
