# Lasm next (unreleased)

Notes for the next release, collected as changes land.

## Testing (no change to how programs build or run)

- **CI in four tiers** ([CI.md](../CI.md)): PR, nightly, weekly and release. Pull requests run Linux-first checks filtered by path, and use macOS only when macOS-specific code changes, so they wait less for scarce macOS runners. The unit suite now runs on every pull request. The release suites (browser, edge and Bun/Deno, WASI and Fastly, Lasm.UI, fullstack, the dev loop and the Lasm.JS stress test), which used to run only for a release, now run on `main` every night. A weekly tier adds 100-minute differential campaigns and a 200-run Lasm.JS soak. The release checks themselves are unchanged.
