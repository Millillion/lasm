# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Documentation

- **`repr` of a large value on WASI, the edge and the browser (#179).** Lean's formatter recurses about twice per element, so `repr` of an Array prints at most 1,801 elements on wasmtime's default stack, 3,233 to 4,254 on the edge engines and in browsers, and 3,914 on `node:wasi`; Node and native Lean print millions. The engine's stack is what stops it, never the C stack, so Lasm cannot raise it on those platforms (on wasmtime, `-W max-wasm-stack` does). `toString` is iterative and prints 100,000 elements everywhere. [FUNDAMENTAL_LIMITATIONS.md](../../FUNDAMENTAL_LIMITATIONS.md#printing-a-large-value-with-repr-issue-179) has the numbers, and `scripts/ci/stack-depth.mjs` measures them on every target.
