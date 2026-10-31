# Draft: what Lasm guarantees and what you trust

Status: a draft for Jordan to hone (2026-10-31), workstream 5 of the
robustness plan. It answers the question asked most often at launch: are the
proofs about the Lean code or about the generated WebAssembly, and what
guarantees does the compiler give?

## The short answer

A theorem in a Lasm project is a statement about Lean definitions, and Lean's
kernel has checked that it follows from those definitions and from Lean's
axioms. The theorem is not about the WebAssembly file. Lasm turns the same
definitions into WebAssembly through a chain of compilers (Lean's compiler,
clang and LLVM, wasm-ld, Binaryen) and runs the result with host code that
Lasm wrote in C and JavaScript, inside a JavaScript or WebAssembly engine.
None of those steps is formally verified. They are tested, and the rest of
this document says how, but a reader should treat the compiled program as
trusted to behave as the Lean definitions say, not proved to.

This is the same position as any compiled Lean program, and as programs
written in Coq, Isabelle or F* and extracted to another language, unless they
use a verified compiler such as CompCert or CakeML (see
[shrinking the trusted base](#shrinking-the-trusted-base)). What Lasm adds to
the trusted base, compared with native Lean, is the WebAssembly half of the
toolchain, the host code and the engines.

## What a Lean proof establishes

### The kernel and the logic

Lean's elaborator turns source code into terms of Lean's type theory, and
the kernel checks each declaration, including every proof term. Tactics,
macros and the elaborator do not need to be trusted for a proof's validity,
because the kernel re-checks what they produce. What must be trusted is:

- that Lean's logic is consistent;
- that the kernel implements it correctly (it is C++);
- that Lean's handling of the environment, and the `.olean` files the
  kernel's results are stored in, are correct;
- the axioms the theorem uses;
- that the statement of the theorem means what the reader thinks it means.

The last point is the one that needs the most human care. A theorem can be
correct and still state less than its name suggests, which is why
workstream 3 asks for each of Conduit's propositions to be reviewed against
the RealWorld specification.

### Axioms

`#print axioms` lists the axioms a theorem depends on, directly or through
other declarations. Lean's standard axioms are `propext`, `Classical.choice`
and `Quot.sound`. A `sorry` anywhere in the dependencies shows up as
`sorryAx`, and since Lean 4.35.0 each use of native evaluation
(`native_decide`, `decide +native`, `bv_decide`) adds its own axiom with a
`_native` name; the older `Lean.trustCompiler` axiom was removed in 4.35.0
([release notes](https://lean-lang.org/doc/reference/4.35.0/releases/v4.35.0/),
PR #14953; [Validating a Lean Proof](https://lean-lang.org/doc/reference/4.35.0/ValidatingProofs/)).

`native_decide` matters here because it trusts the compiler inside a proof.
Its documentation in Lean 4.35.0's `Init/Tactics.lean` says it "adds the
entire lean compiler to the trusted part". Conduit's `npm run proofs`
(`examples/conduit/test/Axioms.lean`) fails if any theorem in `Proofs/` uses
an axiom other than the three standard ones, so Conduit's proofs use no
`sorry` and no native evaluation. The `Lasm.UI` proofs are checked the same
way in `ui.yml`.

### Levels of checking

Lean's reference describes escalating ways to validate a proof
([Validating a Lean Proof](https://lean-lang.org/doc/reference/4.35.0/ValidatingProofs/)):
the editor's check marks; `#print axioms`; replaying the stored declarations
through the kernel with `leanchecker`; and, as the strongest level, building
the project in a sandbox, exporting it, and replaying it with Lean's kernel
and with independent external checkers, comparing the proved statements
with a trusted file of theorem statements. The remaining assumptions at that
level, in the reference's words, include the soundness of Lean's logic, the
correctness of the comparison tool, the security of its sandbox, that no
implementation bug affects all the checkers used at once, and that the
statements were reviewed carefully.

Lean 4.35.0 ships the tools for the strongest level with every release
toolchain: `lake check` and `lake comparator`, and with `--paranoid` they
also run the external checkers `lean4lean`, `nanoda`, `con-leche` and
`con-ron` and `leanchecker-paranoid`, accepting only if all of them do
(release notes, PRs #14990, #15145, #15048, #15099, #15130, #15153). The
sandbox is available only on Linux. `con-leche`'s own help text describes
a mode covered by a theorem that it never accepts a declaration whose type
is `False` (`ConLeche.no_False_declaration`).

Conduit's check today is the second level (`collectAxioms` over the
environment). Moving Conduit and the new examples to `lake check --paranoid`
in CI, on Linux, is a small change that would make the proof side of the
story as strong as Lean currently allows. It is proposed below.

### What the theorem is about, exactly

A theorem such as Conduit's `deleteArticle_forbidden` is about the Lean
function `Api.deleteArticle`, run against a model of the database in
`StateM`. It says nothing directly about:

- **The compiled code.** Lean's compiler does not compile the kernel's
  terms. It compiles the definitions through its own intermediate languages
  (LCNF, then the IR, then C). Recursion is compiled as direct recursion,
  while the kernel sees structural recursion through recursors and
  well-founded recursion through `WellFounded.fix`. That these agree is
  part of the compiler's correctness, which is trusted.
- **Functions with a different implementation.** `@[extern]` replaces a
  definition with a C function, and `@[implemented_by]` with another Lean
  function, without any check that the two agree. Lean's standard library
  uses this throughout: natural-number arithmetic, `String`, `Array` and
  `ByteArray` operations run as C code in Lean's runtime, and the theorems
  about them are about the Lean definitions. The reference says that for
  every such attribute "it becomes part of the trusted code base that the
  replacement is semantically equivalent". `@[csimp]` replacements are the
  exception: they come with a proof of equality. Lasm uses Lean's own
  arbitrary-precision arithmetic instead of GMP ([README](../../README.md#lean-support-and-restrictions)),
  which is the less used of Lean's two implementations of `Nat` in C.
- **`partial` and `unsafe` definitions.** A `partial def` is opaque to the
  logic, so no theorem can look inside it; an `unsafe` definition cannot be
  used in proofs at all.
- **`panic!`.** In the logic, `panic! msg` equals the type's default value.
  At run time Lean prints the message and returns that value too, unless
  `LEAN_ABORT_ON_PANIC` is set, so a theorem that mentions a panicking branch
  is about the default value.
- **Resources.** A theorem about a total function says nothing about running
  out of memory or stack, or about how long it takes. These limits differ
  between Lasm's targets: on the edge, for example, recursion depth is about
  10,000 frames against about a million on Node ([EDGE.md](../EDGE.md#risks)).
- **IO.** IO actions that call the runtime (files, sockets, clocks, JavaScript)
  are opaque to the logic. Conduit's design makes this explicit: the
  endpoints take the database and the services as parameters, the theorems
  hold for the model and for any clock, hash and token functions, and the
  claim that each SQL statement does what its model says is stated as
  trusted in its README.

Lean's compiler and runtime are ordinary software and have bugs that get
fixed. The 4.35.0 release notes, for example, fix a crash when more than 16
arguments are applied at once to a closure (PR #14969) and reference-count
corruption in `Ref.swap` (PR #14585). This is the reason the compiled side
needs testing even when every theorem is checked.

## From a Lean definition to a running program

The table follows one definition from source to execution. "Verified" means
formally verified; none of the steps after the kernel is.

| Step | What runs | Verified | Notes and Lasm's evidence |
| --- | --- | --- | --- |
| 1. Elaboration and proof checking | Native Lean 4.35.0 on the build machine (Lasm downloads it; its `.olean` module data is byte-identical to upstream's, [LICENSE_AUDIT.md](../LICENSE_AUDIT.md)) | The kernel checks the proofs; the elaborator is not trusted for proofs | Proofs are erased: the Wasm contains no proofs and does not run the kernel. |
| 2. Lean to C | Lean's own compiler, in the same native Lean | No | The emitted C uses Lean's runtime header `lean.h`. |
| 3. Lean's runtime and standard library in C and C++ | Lean's runtime sources, patched by Lasm for WebAssembly | No | The patches are listed in [LICENSE_AUDIT.md](../LICENSE_AUDIT.md) (`scripts/full-lean/patches/`): the wasm64 Emscripten build, thread stacks, mimalloc, allocation failures, host platform queries, and a single-threaded runtime for the edge. Lasm also replaces some runtime functions with its own (`runtime/node-*.cpp`, `runtime/edge.cpp`), for example a cooperative task scheduler. |
| 4. C to WebAssembly objects | clang from Emscripten 6.0.9 (LLVM `b158b0a`), `-O2`, target `wasm64-unknown-emscripten`, WebAssembly exceptions | No | C code bundled by Lake packages (for example SQLite in leansqlite) goes through the same kind of step. |
| 5. Linking | wasm-ld, Emscripten's system libraries (musl, libc++, libc++abi, libunwind, compiler-rt, mimalloc), and Emscripten's link-time JavaScript generation | No | Lasm runs these through its own port of `emcc`'s link logic (`src/link-driver/`). CI requires the port's output to be byte-identical to `emcc`'s (`scripts/edge/compare-edge-link.mjs`, `link-toolchain-fixtures.yml`), so the port adds no new behaviour beyond Emscripten's, but Emscripten itself is trusted. The WASI, wasi-http and Fastly builds are linked by Lasm's own `src/wasi/wasi-link.mjs` with wasm-ld directly and have no JavaScript. |
| 6. Optimisation and lowering | Binaryen's `wasm-opt -Oz` (Binaryen `d03c25e`); for the edge, browser and WASI builds also `--memory64-lowering` and `--table64-lowering`, which turn the wasm64 code into wasm32; for WASI builds also `--strip-eh`, after which a C++ exception ends the program; for links without JSPI, Binaryen's Asyncify transformation | No | Asyncify and the memory64 lowering rewrite the whole program, so they are significant trusted steps. |
| 7. Lasm's own WebAssembly rewriting | `src/wasi/lower-atomics.mjs` (WASI and Fastly) turns atomic instructions into plain ones for single-threaded modules; wasi-http builds are wrapped in a component with Wasmtime's adapter | No | The atomics lowering decodes every instruction and fails the build on an unknown opcode. |
| 8. Host code | Lasm's C (about 4,400 lines in `runtime/`, `library/c/`, `src/edge/*.c` and `src/wasi/*.c`), Lasm's JavaScript host modules (`src/host.mjs`, `src/native-*.mjs`, `src/edge/`, `src/lasm-modules/` and others), Emscripten's generated JavaScript runtime with Lasm's repairs, and on Node the koffi native library | No | This is where files, sockets, timers, `Lasm.JS` values, and the DOM patch applier (`ui-dom.mjs`) are implemented. |
| 9. The engine | V8 (Node, Deno, Cloudflare Workers, Vercel and Netlify Edge, Supabase, Chromium), JavaScriptCore (Bun, WebKit), SpiderMonkey (Firefox), Wasmtime and Cranelift (wasmtime, Spin, Fastly's Viceroy), Wasmer | No (see below for research on Cranelift) | Each engine compiles the WebAssembly again, to machine code. |
| 10. The platform | The operating system, hardware, the platform's storage and network, and on hosted platforms the provider's runtime | No | CI uses each platform's local tooling, never a real account, so production runtimes (for example Vercel Edge's V8) are not tested directly ([EDGE.md](../EDGE.md#risks)). |

### Lasm.JS bindings are assumptions

An `@[js "module" "export"] opaque f : A → IO B` declaration is a macro
(`library/Lasm/JS/Meta.lean`): it defines `f` as a call into Lasm.JS's
dispatch, which ends in `@[extern]` primitives implemented in Lasm's C and
JavaScript. It does not add a logical axiom, so it cannot be used to prove
`False`. But the logic knows nothing about what the JavaScript function
does, so any property of the running program that depends on it is an
assumption the author makes, not something Lean checked. In particular:

- the build checks that each bound export exists in the installed package
  (`Lasm.JS binding check failed: … export "x" is missing`), not that its
  behaviour or types match the Lean signature;
- values are converted at run time by `ToJS` and `FromJS`, and a conversion
  that fails is an error at run time, not a type error at build time;
- the npm package itself, and everything it depends on, is trusted.

Conduit's pattern is the honest way to use bindings in a verified app: the
proofs take the bound functions as parameters and assume only what the
author states (for example, what each SQL statement does to the tables), so
the assumptions are written down where a reviewer can see them.

## What Lasm adds as evidence

Testing cannot show that the compiled program is correct, but it can show
that the chain behaves as the Lean definitions say on the programs and
inputs tested. This is what exists today, all in CI:

- **Lean's own test suite, native against Wasm.** The runtime-capable part
  of Lean's upstream suite is built with Lasm and its output compared with
  native Lean's. At the 0.1.0 gate this was, on Linux x64, 336 of 535 tests
  passing (146 that only run at build time, 31 that the harness cannot
  adapt, 22 unsupported by design), 110 of 118 compiled applications and 22
  of 22 `eval`-IO tests, with similar results on the other four build
  platforms and zero regressions against the previous accepted candidate
  ([0.1.0 gate](../release/0.1.0-gate.md)). This covers the Node target.
- **Ecosystem projects.** 19 Lean projects built and run on each of the five
  build platforms at the same gate.
- **WASI output equals native Lean.** The WASI CI requires the command-line
  example's output and exit status to equal `lean --run`'s on wasmtime,
  wasmer and `node:wasi` ([WASI.md](../WASI.md)).
- **Reproducible output.** For the pure example, `program.wasm` must be
  byte-identical across build machines (Linux, macOS, Windows) and across the
  runtime the compiler runs on (Node, Bun, Deno)
  (`scripts/edge/compare-platforms.mjs`). This shows the build is
  deterministic, not that it is correct.
- **The link driver equals emcc**, byte for byte (step 5 above).
- **The DOM patch applier.** `test/ui-dom.test.mjs` applies the patch frames (480, according to UI.md) that
  Lean's proved diff and encoder produced for random views to a DOM
  implementation and compares each result with the view, and the browser
  suite runs the examples in Chromium, Firefox and WebKit
  ([UI.md](../UI.md#what-is-proved)).
- **Applications against official suites.** Conduit passes RealWorld's API
  suite on Node, Workers and Bun and its Playwright suite in three browsers
  ([examples/conduit](../../examples/conduit/README.md)).

- **Differential testing against native Lean** ([TESTING.md](../TESTING.md#differential-testing),
  since 2026-10-31). Randomly generated well-typed Lean programs are built
  with upstream Lean 4.35.0 natively and with a candidate packed from the
  commit for node, WASI (wasmtime and `node:wasi`) and the edge runtime;
  stdout, stderr and exit status must be identical, and every divergence is
  shrunk to a regression case. Every pull request runs 525 generated cases,
  nightly runs a 60-minute campaign. It found a WASI environment bug (fixed)
  and an edge-profile one (issue #26).
- **Target equivalence** ([TESTING.md](../TESTING.md#target-equivalence)).
  A recorded request corpus is replayed against the fetch template and
  `examples/fetch` on Node, Deno, Bun, wasi-http and Workers (workerd), and
  the responses must match.

Still planned (also in [TESTING.md](../TESTING.md)): fuzzing at the boundaries
(HTTP parsing, `Lasm.RPC`, the patch decoder) and deterministic simulation of
the host bridge's concurrency.

The limits should be stated with the evidence: the upstream suite runs on
the Node target, not on every target; matched output covers the executions
tested, not every path; and none of this tests a platform's production
runtime.

## Suggested wording

For the README and talks, sentences along these lines are accurate:

- "Conduit's theorems are checked by Lean's kernel. They are about the Lean
  functions the server runs, with the database replaced by a model."
- "The compiled WebAssembly is not verified. It comes from Lean's compiler,
  clang, Emscripten and Binaryen, none of which is verified; Lasm tests the
  result against native Lean and against each app's official test suite."
- "A JavaScript binding is an assumption: Lean knows its type, not what it
  does."

Sentences to avoid: anything that says the program, the WebAssembly or the
deployment is "verified" or "proved correct" without saying which part.

## Shrinking the trusted base

The options below are ordered from cheapest to most ambitious. The first
three are engineering work Lasm can do now; the rest are research.

1. **Use Lean's strongest proof check.** Run `lake check --paranoid` for
   Conduit, `Lasm.UI` and every new example in CI on Linux, with a checked-in
   file of the theorem statements for `lake comparator`. This leaves the
   logic, the comparison tool, its sandbox and the statements as the proof
   side's assumptions.
2. **Report what each theorem relies on at run time.** Lasm already computes
   the reachable runtime dependencies of a program. A report that lists, for
   the definitions each theorem mentions, every `@[extern]`,
   `@[implemented_by]`, `partial` and `Lasm.JS` binding they reach would make
   the assumptions behind each theorem visible, and CI could fail when a new
   one appears.
3. **Differential testing and fuzzing as the stopgap.** Workstream 1's
   native-against-Wasm testing is the main protection for steps 2 to 9.
   The approach follows Csmith, which found more than 325 previously unknown
   bugs in GCC and LLVM by compiling random C programs and comparing results
   (Yang, Chen, Eide and Regehr, "Finding and Understanding Bugs in C
   Compilers", PLDI 2011). Binaryen has its own fuzzer
   ([`scripts/fuzz_opt.py`](https://github.com/WebAssembly/binaryen/blob/main/scripts/fuzz_opt.py)),
   which Lasm could run with the exact pass list it uses, including
   `--memory64-lowering` and Asyncify.
4. **Fewer and simpler transformations.** Each whole-program rewrite removed
   is one less thing to trust: building the edge runtime directly for wasm32
   instead of lowering wasm64, preferring JSPI to Asyncify where engines
   support it, and keeping the optimisation passes to the ones that matter
   for size and speed.
5. **More of the glue in Lean.** Issue #21 asks whether all of Lasm's glue
   could be written in Lean. Some of it can: the parts that encode and decode
   data (the `Lasm.JS` value format, HTTP and CGI framing, the UI patch
   format, which is already Lean) could be Lean with proved round trips,
   leaving JavaScript and C only for the calls into the host. The host calls
   themselves cannot be in Lean, because they are what Lean's logic treats as
   opaque.
6. **Translation validation.** Instead of verifying a compiler, a validator
   checks each compilation (Pnueli, Siegel and Singerman, "Translation
   Validation", TACAS 1998; Necula, "Translation Validation for an Optimizing
   Compiler", PLDI 2000). [Alive2](https://github.com/AliveToolkit/alive2)
   does this for LLVM's IR optimisations (Lopes, Lee, Hur, Liu and Regehr,
   PLDI 2021). It does not cover LLVM's WebAssembly backend, wasm-ld or
   Binaryen, so applying the idea to Lasm's chain would need new work, for
   example a validator for Binaryen passes against a formal semantics of
   WebAssembly.
7. **A verified compiler from Lean to WebAssembly.** The closest precedent is
   CertiCoq-Wasm, a WebAssembly backend for the CertiCoq compiler,
   implemented and proved in Coq against the WasmCert-Coq formalisation of
   the WebAssembly standard (Meier, Jensen, Pichon-Pharabod and Spitters,
   CPP 2025, [paper](https://www.cl.cam.ac.uk/~jp622/certicoq-wasm.pdf)).
   CompCert (Leroy, "Formal Verification of a Realistic Compiler", CACM 2009)
   and CakeML (Kumar, Myreen, Norrish and Owens, POPL 2014) show that verified
   compilers for real languages are possible. A Lean equivalent would need a
   formal semantics of Lean's IR and reference counting (the IR's design is
   described in Ullrich and de Moura, "Counting Immutable Beans", IFL 2019),
   a verified translation to WebAssembly, and a verified or validated runtime;
   Lean's runtime is C++, which CompCert does not compile, and `lean.h` uses
   GCC and Clang builtins. This is a multi-year research project, not a Lasm
   milestone.
8. **The engines.** WebAssembly itself has mechanised semantics
   ([WasmCert-Coq](https://github.com/WasmCert/WasmCert-Coq); Watt,
   "Mechanising and Verifying the WebAssembly Specification", CPP 2018), and
   parts of production engines have been verified: Crocus checks Cranelift's
   instruction-lowering rules for integer operations on aarch64 (VanHattum,
   Pardeshi, Fallin, Sampson and Brown, ASPLOS 2024), which is relevant to
   Wasmtime, Spin and Fastly. Bosamiya and colleagues built WebAssembly
   sandboxing compilers with formal safety guarantees (vWasm and rWasm,
   "Provably-Safe Multilingual Software Sandboxing using WebAssembly", USENIX
   Security 2022). The JavaScript engines Lasm runs on most (V8,
   JavaScriptCore, SpiderMonkey) are not verified and are not likely to be.

Even at the end of this list something remains trusted: CompCert trusts its
model of C and of the target machine, and CakeML trusts its model of the
hardware. The aim is a short, explicit list, not an empty one.

## Questions for Jordan

- Whether to adopt `lake check --paranoid` for the examples now (item 1),
  given that its sandbox runs only on Linux.
- Whether the per-theorem assumption report (item 2) should be a `lasm`
  command for users or a CI script for the examples.
- Where this text should live once honed: a `docs/TRUST.md` linked from the
  README's Conduit section, or a section of the README itself.
