# Filesystem and HTTP dependency inventory

This inventory traces the pinned Lean 4.32.0 `IO.FS` and `Std.Http` APIs through
Lean's compiled intermediate representation (IR). It locates primitive
dependencies; it does **not** establish behavioral or test coverage.

The [graph](lean-4.32.0-api-dependencies.json) contains the same 2,131 roots as
the [API inventory](lean-4.32.0-api.json): 193 filesystem declarations and 1,938
HTTP declarations, including generated declarations. Native Lean and the frozen
v127 Node compiler produce identical graphs. Across 8,980 nodes, 7,684 have
compiled bodies and 227 are extern declarations using 217 distinct C symbols.
The remaining 1,069 nodes are original API roots without standalone IR bodies;
they include types, constructors, projections, and generated logical helpers.
No referenced non-root dependency lacks a compiled body or extern mapping.
Absence of a standalone body is not classified as a missing implementation.

The following independently specified primitive paths are checked whenever the
inventory runs:

| API | Required reachable primitives |
| --- | --- |
| `IO.FS.readFile` | `lean_io_prim_handle_mk`, `lean_io_prim_handle_read` |
| `IO.FS.createDirAll` | `lean_io_create_dir` |
| `Std.Http.Server.serve` | `lean_uv_tcp_bind`, `lean_uv_tcp_listen` |

The [evidence](../evidence/api-dependencies-2026-09-22.json) records commands,
input/output hashes, compiler pins, resource reports, and earlier audit attempts.
An initial source-expression traversal produced matching native/Node output
but missed the real body of partial functions such as `createDirAll`; Lean's
logical body can be a placeholder. The maintained extractor instead uses the
compiler's own `IR.collectUsedDecls`, including initializer dependencies and
`implemented_by` replacements. Earlier output is retained as an inadequate audit,
not a conformance failure.

## Reproduce

Run from the repository root, with no other heavy workload active. Choose a new
output directory and the pinned native or full-engine `lean` executable:

```sh
node scripts/full-lean/run-bounded.mjs \
  --report .work/api-dependencies-native.resources.json -- \
  python3 scripts/full-lean/base-pages.py \
  python3 scripts/upstream/api-dependencies.py \
  .work/api-dependencies-native /absolute/path/to/lean-4.32.0/bin/lean
```

The tool verifies the compiler commit, preserves stdout/stderr and its source,
checks the original root inventory and graph references, and records results in
`execution.json`. Its output directory cannot already exist. Compare the recorded
`outputSha256` across compilers; `stdout.log` contains the complete JSON graph.

## Limits

The graph follows named calls, closure targets, and initializers represented in
Lean IR. It does not resolve arbitrary caller-provided callbacks, enumerate every
function a C primitive calls internally, or prove that each reachable branch runs.
Type/projection lowering and generated logical declarations need interpretation
separate from ordinary function bodies. An extern mapping identifies a symbol;
it does not prove which platform-specific C implementation is selected or whether
that implementation matches native behavior. Runtime comparisons, complete-suite
runs, and native platform validation remain required. The
[IO limitations checklist](../../IO_LIMITATIONS.md) stays open.
