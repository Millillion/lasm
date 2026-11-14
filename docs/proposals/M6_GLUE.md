# M6: the CLI's pure glue in Lean, compiled by Lasm

Status: **first slice implemented (2026-11-14, PR #286), measured against the bar below.** Milestone M6 of
[IRREDUCIBLE.md](IRREDUCIBLE.md#6-recommended-incremental-path): move the pure
glue into Lean, compiled by Lasm, and delete the JavaScript copies, so that
each move removes a model differential, because the model is the code. This
page chooses the first slice, how the CLI runs it, and the bar it must meet
before it merges. No public Lean API changes: everything here is under
`verification/cli/` and `src/`.

## 1. The first slice: `src/edge/edge-initializers.mjs`

The candidates are the M4 models that are already proved and differential
tested ([verification/MODELS.md](../../verification/MODELS.md), modelled). The
choice weighs three things: how much of the module the model covers, how
often the code runs, and how big its inputs are.

| Module | Model covers | Runs | Verdict |
| --- | --- | --- | --- |
| `src/edge/edge-initializers.mjs` | all of it (two functions, nothing else) | once per edge or browser link | **chosen** |
| `src/cli-arguments.mjs` | the whole parser | at every CLI start | adds the glue's start-up to every command |
| `src/init.mjs` (`parseInitArguments`) | argument parsing only | `lasm init` | the module stays mostly JavaScript (templates, files) |
| `src/serverless/zip.mjs`, `src/wasi/*.mjs` | byte for byte | WASI and function packaging | inputs of megabytes over `List UInt8` models: needs fast versions first |
| `src/handle-table.mjs`, `src/process-launcher.mjs`, the framing | the logic | inside running programs (the Node host) | the program's hot path, not the CLI's |

`edge-initializers.mjs` is the cheapest whole module to replace: its model
(`verification/cli/Lasm/Cli/Model/EdgeInitializers.lean`) is the whole
module, the schedule's main property is proved
(`schedule_reached_kept_first`), it runs once per edge or browser link (never
at CLI start), and it is part of the "link and initialization plans" that M6
names.

**The model is the specification; a proved fast version is the code.** The
model reads `seen`, `keep` and `calls` as lists, so a schedule costs time
quadratic in the plan: compiled natively it takes 77 ms on a plan the size of
the web template's (2,807 initializers, 6 kept), 401 ms with 50 kept, and
seconds on larger plans, where the JavaScript takes 6 to 24 ms. So the slice
adds `Lasm/Cli/Fast/EdgeInitializers.lean`: the same functions over
`Std.HashMap` and `Std.HashSet`, with theorems that they equal the model's,
registered as `@[csimp]`. Lean's compiler then compiles every call of the
model's `compactInitializerWrappers` to the fast one, so the program the CLI
runs is the model as compiled, by a proved rewrite. A third `csimp` theorem
replaces the model's name check, which copies each name's characters five
times, by one that reads them once. Natively the whole generator then takes
3.2 ms on the web template's plan size. The proofs are checked with the others (`library-proofs`).

## 2. How the CLI runs it

- **One glue program.** `verification/cli/LasmGlue.lean` runs
  `Lasm.Cli.Glue.main` (`Lasm/Cli/Glue.lean`): it reads an operation and its
  arguments from stdin, as length-prefixed UTF-8 fields, and writes `ok:` and
  the result or `error:` and a message to stdout. Later slices add
  operations to the same program, so they share the Lean runtime the first
  slice pays for.
- **Built by the published Lasm, as a WASI command.** `--target wasi` needs no
  JavaScript host and only `wasi_snapshot_preview1`. The build uses the
  pinned published `@lasm/cli`, not the checkout, so the glue never depends on
  the CLI it is part of (the WASI link does not use compact initializers
  anyway). `.github/workflows/glue.yml` rebuilds it on every change to
  `verification/cli/` or `src/glue/` and fails unless the bytes equal the
  committed `src/glue/lasm-glue.wasm` (as `library/prebuilt` is generated and
  committed).
- **Run in process, with Node only.** `src/glue/glue.mjs` compiles the module
  once per process (lazily, at the first call) and instantiates it per call
  with a minimal WASI host written for it: stdin is the request, stdout and
  stderr are collected, there are no files, no environment and no clocks
  beyond the standard ones; every other WASI call fails with `ENOSYS`. It
  uses only `WebAssembly` and `Buffer`, so it runs under Node, Bun and Deno,
  as the CLI does, and works from the published npm package (the `.wasm` is
  in `src/`, which ships). The calls stay synchronous, so callers do not
  change.
- **The JavaScript left behind** is the adapter: the plan's shape check (now
  also requiring string names and arrays of calls) and the field encoding,
  reading `calls` as its own entries (`Object.entries`), which is exactly the
  model's reading (the model's old caveat about `Object.prototype` names goes
  away). No JavaScript fallback: if the glue cannot run, the edge link fails
  with the error.

## 3. The bar (measured in CI before merging)

The slice merges only if all of these hold; otherwise the result is recorded
here and the JavaScript stays.

1. **Correctness.** Every existing test of the module passes unchanged
   (`test/edge-initializers.test.mjs`, the link-plan, browser and edge
   tests), and the model differential (`cli-models`) passes: it now compares
   the Lasm-compiled program with the model run by native Lean, so it checks
   the compilation and the field codec instead of a JavaScript copy.
2. **CLI start-up unchanged.** No module loaded at start imports the glue;
   `lasm --version` and `lasm --help` stay within noise of main.
3. **Link cost.** A cold call (compile, instantiate, run, in a fresh
   process) on the web template's plan size costs at most 100 ms more than
   the JavaScript, and a warm call at most 25 ms more; larger plans scale no
   worse than linearly.
4. **Package size.** The npm tarball grows by at most 300 KiB for the first
   slice (the Lean runtime, paid once; later slices add only their code).
5. **Mutation scores held.** The `edge-build` group's score does not drop
   below its threshold with the adapter and `src/glue/glue.mjs` mutated.

## 4. Results

Measured by `scripts/glue/measure.mjs` (the `glue` workflow's last steps;
synthetic plans shaped like real ones, `scripts/glue/plans.mjs`), against
main's JavaScript. Locally (Node 24.22.1, linux-x64, 2026-11-14):

| Plan (initializers, kept) | Cold, glue | Cold, JavaScript | Warm, glue | Warm, JavaScript |
| --- | ---: | ---: | ---: | ---: |
| 2807, 6 | 68.0 ms | 5.9 ms | 23.8 ms | 1.3 ms |
| 2807, 50 | 76.5 ms | 12.5 ms | 24.7 ms | 4.5 ms |
| 8000, 200 | 132.7 ms | 24.2 ms | 62.5 ms | 9.5 ms |

In CI (`glue` run 43564552237, Node 26.13.0, ubuntu-24.04; the glue also
passed its smoke test under Bun 1.4.4 and Deno 2.9.6):

| Plan (initializers, kept) | Cold, glue | Cold, JavaScript | Warm, glue | Warm, JavaScript |
| --- | ---: | ---: | ---: | ---: |
| 2807, 6 | 61.6 ms | 4.9 ms | 15.4 ms | 1.0 ms |
| 2807, 50 | 67.8 ms | 9.3 ms | 19.1 ms | 3.0 ms |
| 8000, 200 | 120.9 ms | 17.1 ms | 49.4 ms | 6.6 ms |

`lasm --version` and `lasm --help`: 53.7 ms on the branch, 53.9 ms on main.

- **Start-up:** unchanged (`lasm --version` and `lasm --help` within noise of
  main: nothing loaded at start imports the glue).
- **Link cost:** within the bar, but not by much. A call costs about 20 ms
  more than the JavaScript warm and 60 ms cold on the web template's plan
  size, once per edge or browser link (which takes seconds). Of a warm call,
  about 3 ms is instantiating the program (the Lean runtime and its 16 MiB
  memory) and about 15 ms is the compiled Lean, about 5 times slower than the
  same Lean compiled natively (3.2 ms): the WASI build is size-optimized
  (`-Oz`) and lowered from memory64. The first version took 34 ms warm; the
  request encoding (one string instead of a Buffer per field) and the fast
  name check brought it to 24.
- **Size:** `lasm-glue.wasm` is 648,488 bytes, 163,005 gzipped, plus 2 KiB
  for `glue.mjs` and the notices: within the 300 KiB bar. Later slices
  share the runtime.
- **Correctness and mutation:** see the PR's checks (unit, `cli-models`,
  `library-proofs`, `mutation`, `glue` under Node, Bun and Deno).

What would make the next slices cheaper: a WASI build optimized for speed
(`-O2`) for the glue, and one instance reused across calls (a reactor
instead of a command), which would remove the 3 ms per call.
