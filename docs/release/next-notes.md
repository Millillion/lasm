# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.

## Documentation

- **`repr` of a large value on WASI, the edge and the browser (#179).** Lean's formatter recurses about twice per element, so `repr` of an Array prints at most 1,801 elements on wasmtime's default stack, 3,233 to 4,254 on the edge engines (V8, as in Chromium; SpiderMonkey, as in Firefox; Bun; WebKit was not measured), and 3,914 on `node:wasi`; Node and native Lean print millions. The engine's stack is what stops it, never the C stack, so Lasm cannot raise it on those platforms (on wasmtime, `-W max-wasm-stack` does). `toString` is iterative and prints 100,000 elements everywhere. [FUNDAMENTAL_LIMITATIONS.md](../../FUNDAMENTAL_LIMITATIONS.md#printing-a-large-value-with-repr-issue-179) has the numbers, and `scripts/ci/stack-depth.mjs` measures them on every target.
