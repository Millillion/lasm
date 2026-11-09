# Lasm (next release)

Nothing user-facing has landed on main since 0.6.0 besides benchmark records; the work since then raises mutation-testing scores across the JavaScript of `src/` (every module now has behavioural tests that a changed line fails). The fixes those tests found are below.

## Fixes

- **`lasm build --target workers` no longer keeps a generated `workers/wrangler.toml` once the project has its own.** A project that added `wrangler.toml`, `wrangler.json` or `wrangler.jsonc` at its root after an earlier build still had the earlier generated `workers/wrangler.toml` when the program had not changed (an unchanged rebuild keeps the output directory as it was). It is now removed, as a build from scratch leaves none.
