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

/-- **Application arguments after `--` come back unchanged.** Running a
`.lean` file with any of `--rebuild`, `--verbose` and `--release` before it
parses as `run` of that file, with exactly the arguments after `--` (flags,
empty strings and `--` included) and each option as given.
Tested by: test/cli-parse.test.mjs -/
def run_args_kept : Prop :=
  ∀ (src : String) (flags args : List String), src.endsWith ".lean" → ¬ src.startsWith "-" →
    (∀ f ∈ flags, f ∈ ["--rebuild", "--verbose", "--release"]) →
    ∃ p, parseLasmArguments (flags ++ [src, "--"] ++ args) = .ok p ∧
      p.command = "run" ∧ p.input = src ∧ p.args = args ∧
      p.rebuild = flags.contains "--rebuild" ∧ p.verbose = flags.contains "--verbose" ∧
      p.profile = (if flags.contains "--release" then "release" else "dev")

/-- **Every unknown flag is refused by name.** A word that starts with `-`
and is no option of `lasm build` or of running a program is refused, after
a program and before one, with a message that names it.
Tested by: test/cli-parse.test.mjs -/
def unknown_flag_refused : Prop :=
  ∀ flag : String, flag.startsWith "-" → flag ∉ knownFlags → valuedForm flag = false →
    parseLasmArguments ["Main.lean", flag] = .error ("Unknown Lasm option: " ++ flag ++ ". Application arguments must follow --.") ∧
    parseLasmArguments ["build", flag, "Main.lean"] = .error ("Unknown Lasm option: " ++ flag ++ ". Application arguments must follow --.")

/-- **Edit distance is a metric bounded by the lengths.** It is zero exactly
between equal words, symmetric, satisfies the triangle inequality, is the
length from or to the empty word, and lies between the difference of the
lengths and the larger length (lengths in characters: code points, as the
JavaScript spreads each word before it measures it).
Tested by: test/cli-parse.test.mjs -/
def edit_distance_metric : Prop :=
  ∀ a b c : String,
    editDistance a a = 0 ∧ editDistance a "" = a.length ∧ editDistance "" a = a.length ∧
    editDistance a b = editDistance b a ∧ editDistance a c ≤ editDistance a b + editDistance b c ∧
    a.length - b.length ≤ editDistance a b ∧ b.length - a.length ≤ editDistance a b ∧
    editDistance a b ≤ max a.length b.length ∧ (a ≠ b → 0 < editDistance a b)

/-- **A suggestion is the nearest candidate, within reach.** For lowercase
words, `closest` gives the first candidate at the least edit distance, when
that distance is within its threshold (two edits, or a third of its length),
and nothing otherwise.
Tested by: test/cli-parse.test.mjs -/
def closest_nearest_first : Prop :=
  ∀ (word : String) (cs : List String), word.all Char.isLower → (∀ c ∈ cs, c.all Char.isLower) →
    closest word cs = (nearestFirst (editDistance word) cs).filter fun c => editDistance word c ≤ threshold c

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

/-- **`changedFiles` reports exactly the files that differ.** Between two
snapshots, it names each file present in only one, or with different hashes,
once, and no other.
Tested by: test/dev-units.test.mjs -/
def changed_files_exact : Prop :=
  ∀ a b : List (String × Option String), (a.map (·.1)).Nodup → (b.map (·.1)).Nodup →
    (changedFiles a b).Nodup ∧
    ∀ k, k ∈ changedFiles a b ↔ (k ∈ a.map (·.1) ∨ k ∈ b.map (·.1)) ∧ a.lookup k ≠ b.lookup k

/-- **No request path reaches a file outside the root.** Whatever the path
(`..`, encoded dots and slashes, sibling directories that share the root's
name as a prefix, malformed percent-encoding), whatever files exist and
whatever the client accepts, the static server answers 200, 400, 403 or 404,
and a file it serves lies under the root directory: the root is a resolved
directory (not a file) and the fallback page, if any, a name in it.
Tested by: test/static-server.test.mjs -/
def static_inside_root : Prop :=
  ∀ (fileExists : String → Bool) (root pathname accepts : String) (fallback : Option String),
    resolvedDirectory root → fileExists root = false → (∀ f ∈ fallback, pathSegment f.toList) →
    (staticServe fileExists root pathname accepts fallback).1 ∈ [200, 400, 403, 404] ∧
    ∀ f, (staticServe fileExists root pathname accepts fallback).2 = some f → (root ++ "/").toList <+: f.toList

/-! ## The Node host -/

/-- **`numbers` writes little-endian `UInt64`s.** Each value becomes eight
bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's
complement), in order.
Tested by: test/lean-io-error-policy.test.mjs -/
def numbers_le64 : Prop :=
  ∀ values : List Int, (numbers values).data.toList = values.flatMap le64

/-- **Lean versions compare lexicographically.** `leanAtLeast v m` holds
exactly when `v`'s major, minor and patch are `m`'s or later in that order,
whatever prerelease tag `v` has; a version is at least itself.
Tested by: test/lean-io-error-policy.test.mjs -/
def lean_at_least_lexicographic : Prop :=
  ∀ (a b : Nat × Nat × Nat) (rc : Option Nat),
    (leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText b) = true ↔ LexGe a b) ∧
    leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText a) = true

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

/-- **Mangling round-trips.** For every dotted name (a component of
decimal digits without a leading zero is a numeric component, as in
`_private.M.0.f`), the mangled name is a non-empty C identifier, demangling
gives the name back, and the module of its initializer (`initialize_…` or
`runtime_initialize_…`) is the name.
Tested by: test/application-diagnosis.test.mjs -/
def mangle_round_trip : Prop :=
  ∀ n : String,
    demangleName (mangleName n) = n ∧
    initializerModule ("initialize_" ++ mangleName n) = some n ∧
    initializerModule ("runtime_initialize_" ++ mangleName n) = some n ∧
    mangleName n ≠ "" ∧ (mangleName n).all fun c => c.isAlphanum || c = '_'

/-! ## The link driver's Python semantics -/

/-- **Escaped strings are printable ASCII.** `json.dumps` of any string,
`ensure_ascii`, is printable ASCII: quotes, escapes, hexadecimal digits and
the printable characters themselves.
Tested by: test/link-driver-python.test.mjs -/
def json_string_printable : Prop :=
  ∀ s : String, (pythonJsonString s).all (fun c => ' ' ≤ c && c ≤ '~') = true

/-- **Python's string order is the order of code points.** The sign of
`comparePythonStrings a b` is that of comparing `a` and `b` code point by
code point (a prefix first), as Python orders `str`, unlike JavaScript's
UTF-16 order.
Tested by: test/link-driver-python.test.mjs -/
def python_order_code_points : Prop :=
  ∀ a b : String, (comparePythonStrings a b).sign = if a < b then -1 else if a = b then 0 else 1

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

/-- **A component splices the core module and gives it back.** In a
template whose one core module that starts with the placeholder is the
placeholder followed by `tail` (as the shipped template is: the test checks
it), `componentize` splices in any core that begins no other core module;
`extractCore` gives the core back, and `makeTemplate` the template.
Tested by: test/wasi-component.test.mjs -/
def componentize_inverse : Prop :=
  ∀ (before after : List (UInt8 × List UInt8)) (tail core : List UInt8),
    (∀ s ∈ before ++ after, s.1 = 1 → ¬ placeholderModule <+: s.2 ∧ ¬ core <+: s.2) →
    let template := bytes (componentHeader ++ (before ++ (1, placeholderModule ++ tail) :: after).flatMap fun s => sectionOf s.1 s.2)
    ∃ component, componentize (bytes core) template = .ok component ∧
      extractCore component template = .ok (bytes core) ∧ makeTemplate component (bytes core) = .ok template

/-- **`withoutComponentType` drops only component-type custom sections.** A
module's custom sections named `component-type…` go; every other section,
custom or not, stays, in order.
Tested by: test/wasi-component.test.mjs -/
def drops_only_component_type : Prop :=
  ∀ ss : List Sec, (∀ s ∈ ss, ∀ id b, s = .other id b → id ≠ 0) →
    withoutComponentType (bytes (moduleHeader ++ ss.flatMap Sec.encoding)) =
      bytes (moduleHeader ++ (ss.filter (!·.componentType)).flatMap Sec.encoding)

/-! ## The process launcher -/

/-- **The launcher configuration round-trips.** For options whose texts
have no NUL byte and fit the format (under 4 GiB), `encodeProcessConfiguration`
succeeds and the native launcher reads back exactly the flags, the three
stdio flags, both directories, the command and arguments as its argument
vector, and the environment's pairs in order (as UTF-8 bytes).
Tested by: test/cli-helpers.test.mjs -/
def launcher_config_round_trip : Prop :=
  ∀ o : LaunchOptions, o.envBytes = none → o.stdioFlags.length = 3 →
    (∀ s ∈ o.command :: o.args ++ o.env.flatMap (fun (k, v) => [k, v]) ++ o.directory.toList ++ o.requestedCwd.toList,
      0 ∉ utf8Bytes s ∧ (utf8Bytes s).length < 0xffffffff) →
    o.args.length + 1 < 4294967296 → o.env.length < 4294967296 →
    ∃ b, encodeProcessConfiguration o = .ok b ∧ launcherRead b.data.toList = some
      { flags := (if o.directoryFd.isNone then 0 else 1) + (if o.inheritProcessCwd then 2 else 0) + (if o.setsid then 4 else 0),
        stdio := o.stdioFlags.map uint32Of, directory := o.directory.map utf8Bytes, requestedCwd := o.requestedCwd.map utf8Bytes,
        argv := (o.command :: o.args).map utf8Bytes, env := o.env.map fun (k, v) => (utf8Bytes k, utf8Bytes v) }

/-! ## Lasm.JS's framing -/

/-- **A batch of interop events reads back.** Whatever events the host
queues (within the format's bounds), `encodeEvents` writes the first 1024 and
leaves the rest queued, and the C glue reads exactly those events, in order,
from the batch; a batch followed by other bytes reads as its events followed
by what those bytes read as (so the glue stops only at a malformed event of
its own).
Tested by: test/lasm-js-framing.test.mjs -/
def events_read_back : Prop :=
  ∀ (queue : List JsEvent) (rest : List UInt8), (∀ e ∈ queue, e.Fits) →
    (encodeEvents queue).2 = queue.drop 1024 ∧
    readEvents ((encodeEvents queue).1 ++ rest) = (queue.take 1024 ++ (readEvents rest).1, (readEvents rest).2)

/-- **A request's released handles and payload read back.** For any handles
(32-bit, fewer than 2³²) and any payload, the host splits the request the C
glue frames into exactly those handles and that payload.
Tested by: test/lasm-js-framing.test.mjs -/
def request_read_back : Prop :=
  ∀ (released : List Nat) (payload : List UInt8),
    released.length < 2 ^ 32 → (∀ i ∈ released, i < 2 ^ 32) →
    splitRequest (frameRequest released payload) = .ok (released, payload)

/-- **The promise a call settles reads back.** For any 64-bit Lean promise
and any input, the host reads the promise and the input from the payload
the C glue frames.
Tested by: test/lasm-js-framing.test.mjs -/
def into_read_back : Prop :=
  ∀ (promise : Nat) (input : List UInt8), promise < 2 ^ 64 →
    intoPrefix (frameInto promise input) = .ok (promise, input)

/-! ## Host handles -/

/-- **A host handle is fresh and in range.** When `allocate` gives an id,
the table did not hold it and now holds it, with the value, after every
entry it had, and the range stays; the id lies in the range, and `#next`
stays in it, whenever `#next` was in it (as the constructor starts it).
Tested by: test/handle-table.test.mjs -/
def handle_fresh_in_range : Prop :=
  ∀ (t t' : HandleTable) (value : String) (id : Nat), t.allocate value = .ok (id, t') →
    t.has id = false ∧ t'.entries = t.entries ++ [(id, value)] ∧ t'.first = t.first ∧ t'.last = t.last ∧
    (t.first ≤ t.next → t.next ≤ t.last → t.first ≤ id ∧ id ≤ t.last ∧ t'.first ≤ t'.next ∧ t'.next ≤ t'.last)

/-! ## Function packages -/

/-- **`zip` is deterministic.** The archive depends on the entries alone (no
clock, no host state). Of the model, a Lean function, this holds by `rfl`;
it is the assumption the model makes, which the test checks of the
JavaScript.
Tested by: test/serverless-zip.test.mjs -/
def zip_deterministic : Prop :=
  ∀ entries : List ZipEntry, zip entries = zip entries

end Lasm.Cli.Spec
