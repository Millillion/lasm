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

/-- **Build options mean the same in any order and either form.** When
`lasm build` accepts a set of distinct options with at most one input and
no `--help`, it accepts every reordering of them, with any valued option
written `--flag=value` instead of `--flag value`, and parses it the same.
(`--help` stops at once, before an error after it; two positional words
are the input and the output, in that order.)
Tested by: test/cli-parse.test.mjs -/
def build_options_commute : Prop :=
  ∀ (opts opts' : List (List String)) (forms : List Bool), (∀ o ∈ opts, OptionGroup o ∧ o ≠ ["--help"] ∧ o ≠ ["-h"]) →
    (opts.filter fun o => o.length == 1 && !(o.headD "").startsWith "-").length ≤ 1 →
    (opts.map List.head?).Nodup → opts.Perm opts' → forms.length = opts'.length →
    (parseLasmArguments ("build" :: opts.flatten)).isOk = true →
    parseLasmArguments ("build" :: ((opts'.zip forms).map fun (o, j) => if j then joined o else o).flatten) =
      parseLasmArguments ("build" :: opts.flatten)

/-- **Every parse is a known command, or a readable error.** Whatever the
arguments, the parser either names a command Lasm has, with a build target,
an input, `lasm init` templates and deploy targets and `lasm dev` outputs
that Lasm has, or refuses with a message that is not blank.
Tested by: test/fuzz/targets/cli-arguments.mjs -/
def parse_known_or_refused : Prop :=
  ∀ argv : List String,
    match parseLasmArguments argv with
    | .ok p => p.command ∈ commands ∧
        (p.command = "build" → p.target ∈ buildTargets) ∧
        ((p.command = "build" ∨ p.command = "run") → p.input.endsWith ".lean" ∨ p.input.endsWith ".json") ∧
        (p.command = "init" → p.template ∈ templates ∧ ∀ d ∈ p.deploy, d ∈ deployTargets) ∧
        (p.command = "package" → p.target ∈ packageTargets ∨ p.target = "browser") ∧
        (p.command = "dev" → ∀ o ∈ p.outputs, o.1 ∈ devTargets ∧ o.2.endsWith ".lean")
    | .error m => m.trimAscii.toString ≠ ""

/-! ## The process launcher -/

/-- **The launcher configuration round-trips.** The native launcher reads
back the command and arguments as its argument vector, the environment in
order, both directories and the stdio flags, for any text without NUL.
Tested by: test/cli-helpers.test.mjs -/
def launcher_config_round_trip : Prop :=
  ∀ o : LaunchOptions,
    (∀ s ∈ o.command :: o.args ++ o.env.flatMap (fun (k, v) => [k, v]) ++ o.directory.toList ++ o.requestedCwd.toList, '\x00' ∉ s.toList) →
    (o.env.map (·.1)).Nodup → o.stdio.length = 3 →
    launcherReads (encodeProcessConfiguration o) = some (o.command :: o.args, o.env, o.directory, o.requestedCwd, o.stdio)

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
name as a prefix), the static server answers 200, 403 or 404, and a file it
serves lies under the root directory.
Tested by: test/static-server.test.mjs -/
def static_inside_root : Prop :=
  ∀ root path : String,
    (staticServe root path).1 ∈ [200, 403, 404] ∧
    ∀ f, (staticServe root path).2 = some f → f.startsWith (root ++ "/")

/-! ## The Node host -/

/-- **Lean versions compare lexicographically.** `leanAtLeast v m` holds
exactly when `v`'s major, minor and patch are `m`'s or later in that order,
whatever prerelease tag `v` has; a version is at least itself.
Tested by: test/lean-io-error-policy.test.mjs -/
def lean_at_least_lexicographic : Prop :=
  ∀ (a b : Nat × Nat × Nat) (rc : Option Nat),
    (leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText b) = true ↔ LexGe a b) ∧
    leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText a) = true

/-! ## Downloads -/

/-- **Retry delays stay within 75–100 % of the backoff.** For every attempt
and every random draw in [0, 1], the delay is between three quarters of the
capped doubling backoff and the backoff itself.
Tested by: test/managed-download.test.mjs -/
def retry_delay_bounded : Prop :=
  ∀ (attempt : Nat) (r : Float), 1 ≤ attempt → 0 ≤ r → r ≤ 1 →
    3 * backoff attempt / 4 ≤ retryDelay attempt r ∧ retryDelay attempt r ≤ backoff attempt

/-! ## The link driver's Python semantics -/

/-- **Escaped strings are printable ASCII JSON for the string.** `json.dumps`
of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it
as that string.
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

/-- **Python's string order is the order of code points.** The sign of
`comparePythonStrings a b` is that of comparing `a` and `b` code point by
code point (a prefix first), as Python orders `str`, unlike JavaScript's
UTF-16 order.
Tested by: test/link-driver-python.test.mjs -/
def python_order_code_points : Prop :=
  ∀ a b : String, (comparePythonStrings a b).sign = if a < b then -1 else if a = b then 0 else 1

/-! ## WebAssembly -/

/-- **Lowering atomics keeps what one thread computes.** For a valid module,
the lowered module is valid, lowering it again changes nothing, and run on
one thread it gives the same result and leaves the same memory.
Tested by: test/lower-atomics.test.mjs -/
def lowering_keeps_runs : Prop :=
  ∀ (m : ByteArray) (args : List Nat), validate m = true →
    validate (lowerAtomics m) = true ∧ lowerAtomics (lowerAtomics m) = lowerAtomics m ∧
    run (lowerAtomics m) args = run m args

/-- **Lowering leaves no atomic instruction.** For a valid module, the
lowered module is valid without the threads feature and lowering it again
changes nothing; a module already valid without threads is returned as it is.
Tested by: test/lower-atomics.test.mjs -/
def lowering_leaves_no_atomics : Prop :=
  ∀ m : ByteArray, validate m = true →
    validWithoutThreads (lowerAtomics m) = true ∧ lowerAtomics (lowerAtomics m) = lowerAtomics m ∧
    (validWithoutThreads m = true → lowerAtomics m = m)

/-- **Lowering rewrites each atomic and copies everything else.** In a module
of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is
kept byte for byte, every atomic instruction becomes its documented
replacement, and one helper per atomic operation and width follows the
functions, numbered in order of first use after the imported and defined
ones.
Tested by: test/lower-atomics.test.mjs -/
def lowering_rewrites_atomics : Prop :=
  ∀ (memory64 : Bool) (types imported : Nat) (bodies : List Body),
    (∀ b ∈ bodies, localDeclarations b.1 = true ∧ ∀ i ∈ b.2, i.WellFormed) →
    let keys := (bodies.flatMap fun b => b.2.filterMap Instr.helper?).eraseDups
    let index := fun sub => imported + bodies.length + keys.idxOf sub
    ∃ out, codeBodies (lowerAtomics (bytes (moduleOf memory64 types imported bodies))) = some out ∧
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

/-- **`zip` is deterministic.** The archive depends on the entries alone (no
clock, no host state). Stated of a Lean function this holds by `rfl`; it is
the assumption a model of `zip` makes, which the test checks of the
JavaScript.
Tested by: test/serverless-zip.test.mjs -/
def zip_deterministic : Prop :=
  ∀ entries : List ZipEntry, zip entries = zip entries

end Lasm.Cli.Candidates
