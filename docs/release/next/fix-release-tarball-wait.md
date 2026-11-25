## Internals (no change to how programs build or run)

- Release tooling: `scripts/release/publish.mjs` now waits, for at most 30 minutes with progress each round, until the registry serves every package's `dist.tarball` with HTTP 200 and the built sha512 integrity, before `release.yml` verifies `npm create @lasm@<version>`. The registry document can list a version minutes before its CDN serves the tarball, which failed the 0.11.0 release's verification with a 404 on `cli-0.11.0.tgz`. Other bytes still fail at once, and nothing is republished.
