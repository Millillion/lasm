/-
# What is proved about the CLI's JavaScript

Every proposition proved about a Lean model of the CLI's JavaScript, as a
named `def … : Prop` with a plain-English doc comment and no proof. Each
proposition `Spec.x` is proved by the theorem `Lasm.Cli.Theorems.x : Spec.x`
(Theorems.lean), and `node scripts/library-proofs.mjs` fails unless every
proposition here has its theorem and every theorem uses only Lean's standard
axioms. The list in verification/cli/README.md is generated from this file.

Reading guide. A proposition here is about a model in `Lasm/Cli/Model/`,
which mirrors one JavaScript module function for function. The step from the
model to the shipped JavaScript is not proved: test/models/cli-differential.mjs
runs both on generated inputs and fails on any difference (the `cli-models`
workflow), and the test the `Tested by:` line names checks the statement of
the JavaScript itself. Each proposition began as a candidate in
Candidates.lean (docs/TESTING_STRATEGY.md §4).
-/
import Lasm.Cli.Interface

namespace Lasm.Cli.Spec
open Lasm.Cli

/-! ## The command line -/

/-- **Response files round-trip.** Every list of linker arguments without a
newline, carriage return or NUL makes a response file; each argument is one
line of it, read back exactly by unquoting it, and no arguments make a file
of one empty line.
Tested by: test/cli-parse.test.mjs -/
def response_file_round_trip : Prop :=
  ∀ args : List String, (∀ a ∈ args, '\n' ∉ a.toList ∧ '\r' ∉ a.toList ∧ '\x00' ∉ a.toList) →
    ∃ (text : String) (lines : List String), responseFile args = .ok text ∧
      (text.toList.splitOn '\n').map String.ofList = lines ++ [""] ∧
      if args = [] then lines = [""] else lines.map unquote = args.map some

/-! ## Development server -/

/-- **`changedFiles` reports exactly the files that differ.** Between two
snapshots, it names each file present in only one, or with different hashes,
once, and no other.
Tested by: test/dev-units.test.mjs -/
def changed_files_exact : Prop :=
  ∀ a b : List (String × Option String), (a.map (·.1)).Nodup → (b.map (·.1)).Nodup →
    (changedFiles a b).Nodup ∧
    ∀ k, k ∈ changedFiles a b ↔ (k ∈ a.map (·.1) ∨ k ∈ b.map (·.1)) ∧ a.lookup k ≠ b.lookup k

/-! ## The Node host -/

/-- **`numbers` writes little-endian `UInt64`s.** Each value becomes eight
bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's
complement), in order.
Tested by: test/lean-io-error-policy.test.mjs -/
def numbers_le64 : Prop :=
  ∀ values : List Int, (numbers values).data.toList = values.flatMap le64

/-! ## Builds -/

/-- **The builtin closure is the reachable builtins, dependencies first.**
For an acyclic import graph, the closure of the requested specifiers holds
each builtin reachable from a requested builtin exactly once, nothing else
(other specifiers are dropped), and every builtin after those it imports.
Tested by: test/builtin-modules.test.mjs -/
def builtin_closure : Prop :=
  ∀ (imports : List (String × List String)) (requested : List String), Acyclic (edgesOf imports) →
    (builtinModuleClosure imports requested).Nodup ∧
    (∀ m, m ∈ builtinModuleClosure imports requested ↔
      ∃ r ∈ requested, r.startsWith "lasm:" ∧ (m = r ∨ Reaches (edgesOf imports) r m)) ∧
    DependenciesFirst (edgesOf imports) (builtinModuleClosure imports requested)

/-- **A unit's schedule is the kept units it reaches, dependencies first.**
For an acyclic call graph (the entries of the JavaScript object `calls`), the schedule of `n` holds each kept unit other
than `n` that `n` reaches, exactly once, and every one after the kept units
it reaches.
Tested by: test/edge-initializers.test.mjs -/
def schedule_reached_kept_first : Prop :=
  ∀ (calls : List (String × List String)) (keep : List String) (n : String), Acyclic (edgesOf calls) →
    (initializationSchedule n calls keep).Nodup ∧
    (∀ y, y ∈ initializationSchedule n calls keep ↔ y ∈ keep ∧ y ≠ n ∧ Reaches (edgesOf calls) n y) ∧
    ∀ x ∈ initializationSchedule n calls keep, ∀ y, y ∈ keep → y ≠ n → Reaches (edgesOf calls) x y →
      (initializationSchedule n calls keep).idxOf y < (initializationSchedule n calls keep).idxOf x

/-! ## WebAssembly -/

/-- **`replaceCoreModule` replaces exactly the one matching module.** In a
component whose only core module section that starts with `pfx` is
`pfx ++ tail`, that section becomes `to ++ tail`, and every other section,
before or after it, is kept as it was.
Tested by: test/wasi-component.test.mjs -/
def replace_one_core_module : Prop :=
  ∀ (before after : List (UInt8 × List UInt8)) (unrelated : List (List UInt8)) (pfx tail to : List UInt8),
    (∀ s ∈ before ++ after, s.1 ≠ 1) → (∀ u ∈ unrelated, ¬ pfx <+: u) →
    replaceCoreModule
      (bytes (componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
        sectionOf 1 (pfx ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2)))
      (bytes pfx) (bytes to) =
    .ok (bytes (componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
        sectionOf 1 (to ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2)))

/-- **`withoutComponentType` drops only component-type custom sections.** A
module's custom sections named `component-type…` go; every other section,
custom or not, stays, in order.
Tested by: test/wasi-component.test.mjs -/
def drops_only_component_type : Prop :=
  ∀ ss : List Sec, (∀ s ∈ ss, ∀ id b, s = .other id b → id ≠ 0) →
    withoutComponentType (bytes (moduleHeader ++ ss.flatMap Sec.encoding)) =
      bytes (moduleHeader ++ (ss.filter (!·.componentType)).flatMap Sec.encoding)

end Lasm.Cli.Spec
