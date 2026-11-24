## Breaking changes

- **`Lasm.JS.Class` and the builtin module `lasm:class` are deleted** (A6.2, PR #385). Migration: write the class in JavaScript in a project `.mjs` file, its methods calling Lean functions passed with `Function.ofSyncFn` / `ofFn` (docs/JS_BINDINGS.md, "JavaScript classes").
