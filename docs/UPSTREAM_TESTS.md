# Testing against Lean itself

Lasm uses Lean 4.32.0, commit
`8c9756b28d64dab099da31a4c09229a9e6a2ef35`. The source downloaded by
`npm run setup` includes Lean's own [test suite](https://github.com/leanprover/lean4/tree/v4.32.0/tests).
Its [README](https://github.com/leanprover/lean4/blob/v4.32.0/tests/README.md)
describes the piles, test drivers and expected-output files.

## What runs in Node

`scripts/upstream-tests.mjs` builds ordinary `main` programs and adapts runtime
`#eval`/`#guard` commands into ordinary IO functions. The original expressions are
preserved. Each command emits execution markers so native elaboration alone
cannot count as execution in Node. Native and Wasm output, errors, exit status and
completed command IDs are compared in separate working directories.

The original file also runs under native Lean to check its `#guard_msgs`
expectations. Those checks belong to the native baseline. They do not establish
that Lean's elaborator, kernel, LSP, Lake, or compiler runs inside Node.
Compiler-monad evaluations, missing native externs, unsupported test drivers,
timeouts and adaptations that fail elaboration remain explicit failures or gaps.
An expected exception that agrees with native Lean is reported separately from an
exception-free match.

```sh
npm ci
npm run setup
# Inventory every .lean source, including auxiliary and disabled files:
node scripts/upstream-tests.mjs --inventory
# Inventory upstream's actual CMake/CTest registrations (requires CMake):
node scripts/upstream/inventory.mjs
# Actual Std.Http tests, compiled and executed in Node:
node scripts/upstream-tests.mjs --suite http
# Filesystem, console, async and synchronization candidates:
node scripts/upstream-tests.mjs --suite io
# All candidate runtime sources, including compiler benchmarks:
node scripts/upstream-tests.mjs --suite all --output .work/upstream-all
```

Use `--match REGEX`, `--limit N`, `--timeout MILLISECONDS`, and
`--build-timeout MILLISECONDS` for focused investigations. `--partition 0/4`
through `--partition 3/4` divide the selected list between independent processes;
use the same output directory. Object/archive writes are atomic. Keep compiler
sources unchanged during a conformance run intended to represent one revision.

`--resume` accepts only results with matching compiler and upstream source hashes.
`--continue-from DIRECTORY` carries explicitly versioned observations from an
earlier interrupted run, including failures. `--recheck-existing` can repeat the
native/runtime comparison without rebuilding an unchanged source/artifact pair;
its report retains the earlier artifact identity. Neither option claims that an
old binary was rebuilt using new compiler code.

Each report records the pinned Lean commit, compiler fingerprint, source hashes,
platform, execution results and Wasm hash. Raw build/output logs remain under
`.work`, which is ignored. A matched output is evidence for those executions,
not proof of every execution path, scheduler interleaving, API declaration or OS.

## API inventory

`scripts/upstream/ApiInventory.lean` inspects the pinned Lean environment and
enumerates non-theorem declarations in `IO.FS` and `Std.Http`, including generated
constructors and eliminators. The checked-in
[inventory](compatibility/lean-4.32.0-api.json) contains 193 `IO.FS` declarations
and 1,938 `Std.Http` declarations. This is a source inventory, not 2,131 tests.
The 20 direct `IO.FS` externs have host implementations. `Std.Http` itself has no
direct externs: Lasm compiles the actual Lean library, whose dependencies use
the task, filesystem, TCP and timer runtime.

The entire upstream suite also tests Lean's compiler executables, metaprogramming,
LSP, Lake, native C linkage and shell tooling. It cannot all execute against the
current Lasm application runtime. These categories must remain visible instead
of being counted as passing Node API tests.
