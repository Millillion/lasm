# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.

## Repository

- **Housekeeping (no behaviour change).** The repository's root `lean-toolchain` names Lean 4.35.0 instead of the retired 4.32.0 (it is read only by editors and by pin-less fixtures; the published `@lasm/cli` is unchanged), eight Node diagnostic reports committed by accident are deleted (and ignored from now on), and docs/RELEASE.md no longer describes the removed `npm run test:release`.
