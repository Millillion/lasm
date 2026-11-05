# Fundamental limitations

No remaining Lean conformance failure has yet been established as fundamental.
The complete native reference suite passes, but the full Node conformance work
is unfinished. See [current results](docs/FULL_SUITE_RESULTS.md)
and [the remaining IO work](IO_LIMITATIONS.md).

These current restrictions must not be mistaken for fundamental limitations:

| Restriction or observed failure | Current classification |
| --- | --- |
| Signed JavaScript heap indexing above 2 GiB | Fixed SDK port defect; regression passes in Node. |
| Host calls stalled above 4 GiB | Repaired bridge defect triggered by Node truncating cloned typed-array offsets. Numeric-offset requests and the original high-memory Lean test pass in Node. Broader full-suite validation remains necessary. |
| 32-bit `USize` in the application runtime | Runtime target choice; the experimental full compiler preserves native 64-bit values. |
| 4 GiB memory ceiling in the lowered-memory64 build | Native memory64 accesses above 4 GiB pass in Node. |
| Missing runtime externs, module initializers, or compiled symbol lookup | Implementation gaps. |
| Native libraries lacking a Wasm build or host adapter | Missing integration; evaluate the actual dependency before claiming impossibility. |
| Test deadlines or resource exhaustion under instrumentation | Investigate separately with documented parallel-harness adjustments. |
| Untested operating systems or architectures | Validation gaps. |

Any future fundamental classification needs a native comparison, a minimized
reproduction in the affected engine, the precise engine or platform constraint,
and an explanation of why available implementation alternatives do not resolve
it. Passing a smaller application suite does not establish full Lean equivalence.

## Recursion depth

Non-tail recursion is bounded by a stack on every target, as it is natively. In
WebAssembly the binding stack is the engine's: each Wasm call takes a frame on
the JavaScript engine's (or wasmtime's) own stack, not in Lean's C stack in
linear memory. A Wasm frame is larger than the same function's native frame, so
the same stack holds fewer of them. The program from
[issue #66](https://github.com/Millillion/lasm/issues/66):

```lean
def sumTo : List Nat → Nat
  | [] => 0
  | x :: xs => x + sumTo xs
```

| Target | Deepest `sumTo (List.range n)` that passes (Linux x64, measured 2026-11-02) | Raise it with |
| --- | --- | --- |
| Native Lean 4.35.0 (`ulimit -s` 8192) | 13,339,843 | — |
| Node (`lasm build`, also `lambda`, `vercel`, `netlify`, `azure`, `gcf`) | **10,263,625** with the default 1 GiB stack per Lean thread (641,796 with the previous 64 MiB default, Lasm 0.3.8 and earlier); CI: 11,092,250 on macOS 15 arm64, 2,563,312 on Windows (256 MiB default) | `LASM_VM_STACK_MB` (MiB per Lean thread) |
| WASI on wasmtime (`--target wasi`) | 10,876 with wasmtime's default 512 KiB (wasmtime 30.0.2) | `wasmtime run -W max-wasm-stack=1073741824` (1 GiB): 22,203,125 |
| WASI on `node:wasi` | 9,535 | — (Node's main thread stack) |
| Edge output (`workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`, `bun`, `deno`) and the browser | 9,169 on Node's V8, 9,657 on Deno, 10,876 on SpiderMonkey 158 (Firefox's engine), 73,192 on Bun 1.4.4 (CI, Linux x64); workerd is V8 like Node ([EDGE.md](docs/EDGE.md#1-single-threaded-lean-runtime)) | — (the platform's stack) |
| Fastly, `wasi-http` | the platform's stack | — |

Other functions get more or fewer frames: under Node with the default stack, a
recursion carrying 18 arguments reached 2,625,878 frames (native 2,371,093), and
one building a small array per frame 12,101,171 (native 5,570,312).

**Node's default.** Each Lean thread (a Node Worker) gets an engine stack of
1 GiB, or a quarter of the machine's or container's memory if that is less
(at least 64 MiB). On Windows, which commits a thread's stack when the thread
starts, it is at most 256 MiB, shared by the threads Lean may start (half the
memory divided by the number of processors plus five). A host that cannot
reserve the default stack gets smaller ones. The stack is address space: memory
is used only as deep as a recursion goes, so a shallow program's memory use is
unchanged, but a runaway recursion now uses up to the whole stack (about 1.1 GB
resident with the default 1 GiB) before it stops. `LASM_VM_STACK_MB=64` restores
the old limit.

**When the stack runs out** under Node, the program stops as native Lean does
(the same message and status 134, as `SIGABRT`), followed by advice:

```text
Stack overflow detected. Aborting.
Lasm: a Lean thread exhausted its 1024 MiB WebAssembly stack (LASM_VM_STACK_MB, default).
Set LASM_VM_STACK_MB to a larger size in MiB, or make the recursion tail recursive (an accumulator).
See https://github.com/Millillion/lasm/blob/main/FUNDAMENTAL_LIMITATIONS.md#recursion-depth
```

The process ends because Lean's runtime cannot continue after one of its
threads lost its stack (the thread's locks and references are gone). On the
edge targets the Lean instance stops and the next request starts a fresh one;
WASI hosts trap.

**The portable fix** is the native one: make the recursion tail recursive with
an accumulator (Lean compiles a tail call to itself into a loop on every
target), or bound its depth by the input's nesting.

```lean
def sumToTR (xs : List Nat) (acc : Nat := 0) : Nat :=
  match xs with
  | [] => acc
  | x :: xs => sumToTR xs (acc + x)
```

`scripts/ci/stack-depth.mjs` checks these limits on every pull request (Node on
Linux, macOS and Windows; WASI on wasmtime and `node:wasi`; the edge output on
Deno, Node, Bun and SpiderMonkey); the browser suite and the Workers checks
recurse 5,000 frames.

### Async loops on the portable runtime

On the portable runtime (Bun, Deno and the edge targets; the browser shares
the runtime but is not measured), an
`Async` loop of steps that complete at once nests on the JavaScript stack and
fails with `RangeError: Maximum call stack size exceeded`. Such steps are
synchronous host calls, `IO` actions and `pure` values. The limit is 2,001 steps
on Deno, 8,099 on Bun and 1,855 on workerd (CI run 41846096224); Node has no
such limit. The cause is that `Async`'s bind runs a ready step at once, on the
engine's single stack. Steps that really wait (awaited host calls,
`Std.Async.sleep`) have no limit. The workaround is to call
`Std.Async.sleep 0` every 100 steps, or batch the work into fewer host calls.
See [EDGE.md: Async loops](docs/EDGE.md#async-loops-of-steps-that-complete-at-once-issue-90).
`scripts/ci/async-depth.mjs` checks these limits on every pull request.
