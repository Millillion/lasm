# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.
- **Lasm.JS: an object field named `__proto__` crosses as a field.** A Lean
  `Data.object` with a `__proto__` key used to set the JavaScript object's
  prototype instead (on Node and on the edge); it is now an own property, as
  `JSON.parse` makes it. The JavaScript reader also refuses what Lean's reader
  refuses, so the two agree on every input: text that is not UTF-8, and
  bigint text other than Lean's (`String.toInt?`). Lean never writes either,
  so no program sees a difference. Found by the new `lasm-js-wire` fuzz target,
  which checks the JavaScript codec against Lean's on every input
  (docs/TESTING.md, "Fuzzing at the boundaries").
