/-
# What is tested, not yet proved, about the CLI's JavaScript

Each candidate is a proposition in the form of a library's `Spec.lean` (a
named `def … : Prop`, a plain-English doc comment, no proof) about the
JavaScript functions of `Lasm/Cli/Interface.lean`. The doc comment's
`Tested by:` line names the test; that test cites the proposition with a
`Proposition:` line followed by the statement, and checks the statement on
every input it draws (docs/TESTING_STRATEGY.md §4). Preconditions are
explicit; bounds the generators need (lengths, alphabets, run counts) are
the tests' business, not the propositions'.

Proving one takes two steps: replace the `opaque` constants it mentions by a
Lean model of the JavaScript, checked against it by a model differential in
CI, then prove the statement, unchanged, about the model. Until then
`node scripts/propositions.mjs` checks that every citation states the
definition verbatim and that every `Tested by:` file cites its candidate, and
generates the list in verification/cli/README.md from this file;
`node scripts/library-proofs.mjs` elaborates it.
-/
import Lasm.Cli.Interface

namespace Lasm.Cli.Candidates
open Lasm.Cli

/-! ## The command line -/

/-! ## Builds -/

/-- **Mangling round-trips.** For a dotted name Lean mangles unambiguously,
the mangled name is a non-empty C identifier, demangling gives the name
back, and the module of its initializer (`initialize_…` or
`runtime_initialize_…`) is the name.
Tested by: test/application-diagnosis.test.mjs -/
def mangle_round_trip : Prop :=
  ∀ n : String, wellFormedName n = true →
    demangleName (mangleName n) = n ∧
    initializerModule ("initialize_" ++ mangleName n) = some n ∧
    initializerModule ("runtime_initialize_" ++ mangleName n) = some n ∧
    mangleName n ≠ "" ∧ (mangleName n).all fun c => c.isAlphanum || c = '_'

/-- **The compact wrappers run the kept initializers as the chains do.** For
an acyclic plan of valid initializer names, the wrappers are generated, and
calling kept initializers' wrappers runs exactly the kept initializers the Node build's chains run, in
the same order (each once, after those it reaches).
Tested by: test/edge-initializers.test.mjs -/
def compact_wrappers_as_chains : Prop :=
  ∀ (p : Plan) (entries : List String), Acyclic p.edges →
    (∀ x ∈ p.closure, initializerName x = true) → (∀ x, ∀ y ∈ p.edges x, y ∈ p.closure) →
    (∀ e ∈ entries, e ∈ p.keep) → (∀ k ∈ p.keep, k ∈ p.closure) →
    ∃ source, compactInitializerWrappers p = .ok source ∧ runInitializers source p.edges entries = chains p entries

/-! ## `lasm init` names -/

/-- **Generated names are valid npm, Lake and Supabase names.** Whatever the
directory or text: the npm package name is lowercase letters, digits, `.`,
`_` and `-`, starts with a letter or digit and does not end with `-`; the
Lake name is an identifier of ASCII letters, digits and `_` that starts with
a letter and does not end with `_`; the Supabase function name is lowercase
letters, digits and `-`, starts with a letter and has at most 54 characters.
Tested by: test/init-golden.test.mjs -/
def generated_names_valid : Prop :=
  ∀ dir s : String,
    ((packageName dir).toList.head?.map fun c => c.isLower || c.isDigit) = some true ∧
    (packageName dir).all (fun c => c.isLower || c.isDigit || c = '.' || c = '_' || c = '-') ∧
    ¬ (packageName dir).endsWith "-" ∧
    ((lakeName s).toList.head?.map Char.isAlpha) = some true ∧
    (lakeName s).all (fun c => c.isAlphanum || c = '_') ∧ ¬ (lakeName s).endsWith "_" ∧
    ((supabaseFunctionNameOf s).toList.head?.map Char.isLower) = some true ∧
    (supabaseFunctionNameOf s).all (fun c => c.isLower || c.isDigit || c = '-') ∧
    (supabaseFunctionNameOf s).length ≤ 54

/-! ## Development server -/

/-- **No request path reaches a file outside the root.** Whatever the path
(`..`, encoded dots and slashes, sibling directories that share the root's
name as a prefix, malformed percent-encoding), the static server answers 200,
400, 403 or 404, and a file it serves lies under the root directory.
Tested by: test/static-server.test.mjs -/
def static_inside_root : Prop :=
  ∀ root path : String,
    (staticServe root path).1 ∈ [200, 400, 403, 404] ∧
    ∀ f, (staticServe root path).2 = some f → f.startsWith (root ++ "/")

/-! ## Downloads -/

/-- **Retry delays stay within 75–100 % of the backoff.** For every attempt
and every random draw in [0, 1], the delay is between three quarters of the
capped doubling backoff and the backoff itself. It stays tested, not
proved: the code computes in doubles, and Lean's `Float` operations are
opaque to proofs. It holds because IEEE-754 rounding is monotone and exact
on `0.75 * b` and `b` (`b` ≤ 60000), so the delay grows with the draw
between its values at 0 and 1, which the test checks for every backoff.
Tested by: test/managed-download.test.mjs -/
def retry_delay_bounded : Prop :=
  ∀ (attempt : Nat) (r : Float), 1 ≤ attempt → 0 ≤ r → r ≤ 1 →
    3 * backoff attempt / 4 ≤ retryDelay attempt r ∧ retryDelay attempt r ≤ backoff attempt

/-! ## The link driver's Python semantics -/

/-- **Escaped strings are printable ASCII JSON for the string.** `json.dumps`
of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it
as that string. Its second half is proved (`json_string_printable`); the
first needs facts about Lean's JSON parser (`Lean.Json.parse` of escapes and
surrogate pairs) that Lean does not state.
Tested by: test/link-driver-python.test.mjs -/
def json_string_ascii : Prop :=
  ∀ s : String, Lean.Json.parse (pythonJsonString s) = .ok (.str s) ∧
    (pythonJsonString s).all fun c => ' ' ≤ c && c ≤ '~'

/-- **Every layout is JSON for the same value.** Whatever the indentation and
key order, what `pythonJsonDumps` writes a JSON parser reads as the value,
and without indentation it is one line.
Tested by: test/link-driver-python.test.mjs -/
def json_dumps_parse_back : Prop :=
  ∀ (v : Lean.Json) (indent : Option Nat) (sortKeys : Bool) (text : String),
    pythonJsonDumps v indent sortKeys = .ok text →
      ((Lean.Json.parse text).toOption.any (· == v)) = true ∧ (indent = none → '\n' ∉ text.toList)

/-! ## WebAssembly -/

/-- **Lowering atomics keeps what one thread computes.** When it lowers a
valid module, the lowered module is valid, lowering it again changes nothing,
and run on one thread it gives the same result and leaves the same memory.
(The lowering refuses, with an error, SIMD and GC instructions, which a valid
module may hold.) It stays tested, not proved: `validate` and `run` are
WebAssembly's own validation and execution, which a proof needs as a formal
semantics of WebAssembly to relate the lowering's model to.
Tested by: test/lower-atomics.test.mjs -/
def lowering_keeps_runs : Prop :=
  ∀ (m m' : ByteArray) (args : List Nat), validate m = true → lowerAtomics m = .ok m' →
    validate m' = true ∧ lowerAtomics m' = .ok m' ∧ run m' args = run m args

/-- **Lowering leaves no atomic instruction.** When it lowers a valid
module, the lowered module is valid without the threads feature and lowering
it again changes nothing; a module already valid without threads is returned
as it is. It stays tested, not proved, for the same reason: `validate` and
`validWithoutThreads` are WebAssembly's own validation.
Tested by: test/lower-atomics.test.mjs -/
def lowering_leaves_no_atomics : Prop :=
  ∀ m m' : ByteArray, validate m = true → lowerAtomics m = .ok m' →
    validWithoutThreads m' = true ∧ lowerAtomics m' = .ok m' ∧
    (validWithoutThreads m = true → m' = m)

/-- **Lowering rewrites each atomic and copies everything else.** In a module
of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is
kept byte for byte, every atomic instruction becomes its documented
replacement, and one helper per atomic operation and width follows the
functions, numbered in order of first use after the imported and defined
ones. Of the model, but not yet proved: its hypotheses are WebAssembly's
binary grammar (`oneInstruction`, `localDeclarations`), which a proof needs
as a Lean definition the model's `skipInstruction` reads exactly.
Tested by: test/lower-atomics.test.mjs -/
def lowering_rewrites_atomics : Prop :=
  ∀ (memory64 : Bool) (types imported : Nat) (bodies : List Body),
    (∀ b ∈ bodies, localDeclarations b.1 = true ∧ ∀ i ∈ b.2, i.WellFormed) →
    let keys := (bodies.flatMap fun b => b.2.filterMap Instr.helper?).eraseDups
    let index := fun sub => imported + bodies.length + keys.idxOf sub
    ∃ m out, lowerAtomics (bytes (moduleOf memory64 types imported bodies)) = .ok m ∧ codeBodies m = some out ∧
      out.length = bodies.length + keys.length ∧
      out.take bodies.length = bodies.map fun (locals, is) => locals ++ is.flatMap (Instr.lowered memory64 index) ++ [0x0b]

/-! ## Function packages -/

/-- **What `zip` writes, a ZIP reader reads back.** Whenever `zip` succeeds,
a reader finds the parent directories first (sorted, mode `0o40755`, empty,
stored), then every entry in order, with its bytes and its permissions as a
regular file (`0o644` unless given).
Tested by: test/serverless-zip.test.mjs -/
def zip_reads_back : Prop :=
  ∀ (entries : List ZipEntry) (archive : ByteArray), zip entries = .ok archive →
    ∃ read, unzip archive = some read ∧
      read.map (·.name) = directoriesOf entries ++ entries.map (·.name) ∧
      (∀ d ∈ read.take (directoriesOf entries).length, d.mode = 0o40755 ∧ d.data.size = 0 ∧ d.method = 0) ∧
      ∀ x ∈ (read.drop (directoriesOf entries).length).zip entries,
        x.1.data = x.2.data ∧ x.1.mode = 0o100000 ||| x.2.mode.getD 0o644

end Lasm.Cli.Candidates
