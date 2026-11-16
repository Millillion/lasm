# A direct Lean → Wasm backend in Lean

Status: **adopted as Stage 2 of [ROADMAP.md](../../ROADMAP.md) (Jordan,
2026-11-16).** No work has started; Stage 0 (the API surface) and Stage 1
(initial robustness) come first. This page records the deliberation of
2026-11-16: what the backend is, why it moved ahead of shrinking, how it is
verified, and the decisions made about linking and Binaryen. It replaces
"M7: decide on a direct Lean IR → Wasm backend" in
[IRREDUCIBLE.md §5](IRREDUCIBLE.md#5-verification-path-for-each-layer).

## 1. Where the backend sits

**Today.** Lean's compiler lowers a program through LCNF, then `EmitC` writes
C, Clang/LLVM (driven by Emscripten) compiles that C to Wasm objects,
`wasm-ld` links them with the Lean runtime and the C library, and Binaryen
(`wasm-opt`) optimizes the result and, for the edge targets, applies Asyncify.

**In Lean 4.35 the lowering lives entirely in LCNF.** Reference-count
insertion (`LCNF/ExplicitRC.lean`), reset/reuse (`ResetReuse.lean`,
`ExpandResetReuse.lean`), boxing (`ExplicitBoxing.lean`) and the impure phase
(`ToImpure.lean`) are all LCNF passes, and `LCNF/EmitC.lean` (about 1,200
lines) emits C directly from LCNF's impure phase. The old IR's LLVM emitter
(`Compiler/IR/EmitLLVM.lean`, about 1,700 lines) still exists, but it targets
the old IR and was not ported.

**The backend is an `EmitWasm.lean`.** It takes the same input `EmitC` takes,
and is probably of similar size. It also needs a Wasm version of the small
inline operations of `lean.h` (`lean_ctor_get`, `lean_inc`, boxing, …). The
runtime itself (allocator, big numbers, tasks, threads) stays C, compiled to
Wasm once by Lasm's CI and shipped prebuilt.

## 2. What it brings

1. **The biggest reduction available.** Clang, LLVM, Emscripten and Binaryen
   leave the user's build path. They are most of Lasm's download, install time
   and per-platform trouble. A user needs Lean plus prebuilt Wasm runtime
   files, the same on every platform.
2. **A toolchain that can be verified.** The step from Lean to Wasm becomes
   Lean code that Lasm owns and can prove things about, instead of an
   unverifiable C compiler in the middle.
3. **Control over code generation:**
   - suspension emitted directly (JSPI, or selective suspension) instead of
     Binaryen's Asyncify rewriting the whole module: today the largest
     size and speed cost on the edge targets;
   - tail calls as Wasm `return_call`, instead of relying on Clang to turn
     tail calls into loops;
   - Lasm's own calling convention, source maps back to Lean, and possibly
     faster builds.
4. **One side of Lean upgrades gets simpler:** no Emscripten pin and no C
   compiler drift.

## 3. Costs and risks

- **LLVM's optimizer is gone.** LCNF already does the important high-level
  optimizations. Speed may regress; the differential harness measures it
  continuously (§6), against a budget Jordan sets.
- **The other side of Lean upgrades gets harder.** LCNF is Lean's internal
  format and changes between versions, so a Lean upgrade can change the
  emitter. `EmitC` has the same problem, but upstream fixes it there.
- **Scope.** Closures and partial applications, thunks, tasks, `IO`, exports,
  initializers and the FFI must all match the C ABI exactly.
- **WasmGC is the wrong fit.** Lean's performance depends on reference
  counting with in-place updates of uniquely owned values; a tracing collector
  cannot express that. The backend uses linear memory and Lean's reference
  counts, as the C path does.

## 4. Prior art

- **Verified functional-language → Wasm compilers.**
  [CertiCoq-Wasm](https://popl25.sigplan.org/details/CPP-2025-papers/9/CertiCoq-Wasm-A-verified-WebAssembly-backend-for-CertiCoq)
  (CPP 2025; [paper](https://www.cl.cam.ac.uk/~jp622/certicoq-wasm.pdf),
  [repository](https://github.com/womeier/certicoqwasm)) is a
  Wasm backend for CertiCoq, implemented and proved in Coq against the
  WasmCert-Coq semantics. It is the closest precedent for a verified backend
  into Wasm.
- **Mechanized Wasm semantics.**
  - [WasmCert-Coq and WasmCert-Isabelle](https://hal.archives-ouvertes.fr/hal-03353748),
    each with an interpreter proved correct.
  - In Lean: [Talos](https://github.com/cajal-technologies/talos) (an interpreter built
    for reasoning, in active development), the
    [LeanWasm](https://studenttheses.uu.nl/handle/20.500.12932/46861) thesis,
    and [argumentcomputer/Wasm.lean](https://github.com/argumentcomputer/Wasm.lean)
    (dormant).
  - [Verifying Compiler-Emitted WebAssembly in Lean](https://neurips.cc/virtual/2026/171445)
    (NeurIPS 2026): an executable small-step semantics in Lean with an
    iris-lean separation logic, passing 99 % of the official conformance
    suite's records. A candidate for the Wasm side of §6.
- **Other languages.** GHC's [wasm32-wasi backend](https://ghc.gitlab.haskell.org/ghc/doc/users_guide/_sources/wasm.rst.txt)
  (a tech preview);
  [wasm_of_ocaml](https://ocaml.org/backstage/2026-04-16-wasm-of-ocaml-what-changed-since-6-1)
  and [Wasocaml](https://hal-ecp.archives-ouvertes.fr/LMF/hal-04311345v1) for
  OCaml, and Hoot for Scheme ([slides](https://wingolog.org/pub/fosdem-wastrel-2026-slides.pdf)),
  all on WasmGC; Hoot also wrote its own linker and toolchain.
- **Lean itself.** Sebastian Ullrich compiled Lean to Wasm through LLVM in
  2023 and hit 32-bit ABI mismatches
  ([Zulip](https://leanprover-community.github.io/archive/stream/270676-lean4/topic/wasm.20build.html);
  see also [the state of the code generator](https://leanprover-community.github.io/archive/stream/270676-lean4/topic/The.20state.20of.20the.20code.20generator.html)).
  [lean2wasm](https://reservoir.lean-lang.org/@T-Brick/lean2wasm) is its
  author's experiment. No direct Lean → Wasm backend was found.

## 5. Why Stage 2, before shrinking

Much of the JavaScript that Stages 3 (shrink) and 4 (Lean all the way) would shrink, model and prove
exists only to drive Clang, Emscripten and Binaryen: the link drivers
(including the Python link-driver strings M4 modelled, #257), the
reachability link-map reader (#278), the edge-link and Asyncify glue, the
mimalloc build, the toolchain download and install code, and the
`library/prebuilt` generation. Modelling and proving that code before the
backend deletes it would be wasted. Stage 1 still comes first, because it
builds the oracles the backend is measured against (§6).

Jordan, 2026-11-16: no go/no-go gate. The backend implements **all** of Lean,
with no fallback in its end state, and its correctness comes from the
combination of a proof (the backend is written in Lean), heavy differential
testing, and complete coverage.

## 6. Verification: the oracles and the metrics

The Clang path that exists today is a perfect oracle for the new backend,
and both paths produce Wasm objects with the same ABI.

1. **Mixing paths per function.** During development any subset of functions
   can come from the new backend, the rest from Clang, linked into one
   program. Coverage grows function by function, and when a program diverges
   the harness bisects which function's direct compilation caused it: every
   failure arrives as "function X, input Y".
2. **Whole-program corpora that already exist:** Lean's upstream test suite
   (1,054 tests compared in the Lean 4.36 dry run), the language-coverage
   campaign, the differential-fuzzing generator's programs (with coverage
   feedback), the metamorphic relations, and the five example apps with their
   outside oracles. Each program is compared across native Lean, the Clang
   path while it exists, and the direct path.
3. **Allocation-trace equality.** Reference counting and reuse are explicit in
   LCNF, so the direct backend should make exactly the same allocations and
   frees as the C path. Comparing allocator traces catches reference-counting
   bugs that never show in output: leaks, double frees, missed reuse.
4. **Engines.** Every program runs on V8, SpiderMonkey, wasmtime and a
   reference interpreter, so engine bugs and undefined behavior in the output
   show up.
5. **Semantics and proof.**
   - An executable Lean interpreter for LCNF's impure phase. LCNF has no
     official formal semantics, so this is Lasm's, and it is checked
     differentially against native Lean on every corpus.
   - A Lean Wasm semantics (Talos, the NeurIPS 2026 framework, or Lasm's
     own), checked against the official Wasm spec tests.
   - Every compiled function's translation is checked automatically against
     these two while the full proof is being built, and the end state is a
     proof that the emitter preserves meaning.

**Metrics to climb**, on the evidence page nightly: the share of functions
compiled directly across the corpora; each corpus's pass rate; the
allocation-trace match rate; speed and size relative to the Clang path; the
share of functions with checked translations. The loop: take the largest
cluster of failures, fix it, rerun, and never let a metric regress.

## 7. Linking and Binaryen (decided 2026-11-16)

**Linking is Lasm's own, in Lean.** The backend emits the whole program (the
user's modules and Lean's standard library) as one piece, so no general
relocation machinery is needed between pieces Lasm produces. The C runtime,
the only piece Clang still produces, is pre-linked once in CI into one
fixed runtime object, and a small Lean step merges the program with it.
Dead code is never emitted: Lasm already computes reachability over Lean
declarations. `wasm-ld` becomes the oracle: during Stage 2 every corpus
program is linked both ways and compared (behavior, allocation traces and
the structural checks of [link validation](../TESTING.md#wasm-ld-against-its-map)).
Stage 2 is done only when `wasm-ld` is out of the user's path; it stays in
CI, where it builds the runtime.

**Binaryen follows the same rule.** Optimization moves into the backend, and
JSPI or selective suspension replaces Asyncify. `wasm-opt` remains an oracle
and a benchmark only, never part of the build.

## 8. What stays outside the proof

- **The C runtime** (allocator, big numbers, tasks), compiled once to Wasm.
  Differential testing covers it; rewriting it in Lean is the first item
  after 1.0 in [ROADMAP.md](../../ROADMAP.md).
- **The Wasm engines.**
- **The two semantics themselves**, which is why each is checked against an
  independent reference (native Lean; the Wasm spec tests).

## 9. Open items

- **Compiled form of the standard library.** The whole-program design assumes
  the backend can compile Lean's standard library from its compiled form in
  the `.olean` files (LCNF's phase data is kept in an environment extension,
  `LCNF/PhaseExt.lean`). To be verified before Stage 2 starts. If it is not
  enough, CI compiles the standard library once from Lean's source with the
  backend and ships it prebuilt.
- **The performance budget:** "no slower than the Clang path", for speed and
  size, is Stage 2's gate unless Jordan sets another; the other dimensions
  follow the cross-stage ratchet of ROADMAP.md milestone 1.6, and Stage 5
  (performance) sets the final targets.
- **Lean upgrades.** A written process for re-checking the LCNF semantics and
  the proof when LCNF changes.
