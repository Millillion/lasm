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

/-- **The proxy sends each request to the server program once, unchanged.**
Whatever the server program then does, it receives the request exactly
once, with the same method, target and body, its own address as Host, no
Accept-Encoding (so a page arrives uncompressed and can be rewritten), and
every other header's value. A request is never sent again once the program
may have seen it; only a refused connection is retried.
Tested by: test/fuzz/targets/dev-proxy.mjs -/
def dev_proxy_forwards_once : Prop :=
  ∀ (r : HttpRequest) (u : Upstream), PlainHeaders r.headers → r.target ≠ "/__lasm/events" →
    ∃ s, (devProxy r u).1 = [s] ∧ s.method = r.method ∧ s.target = r.target ∧ s.body = r.body ∧
      s.header? "host" = some devUpstreamHost ∧ s.header? "accept-encoding" = none ∧
      ∀ h v, h ≠ "accept-encoding" → r.header? h = some v → s.header? h = some v

/-- **A whole reply reaches the client whole.** Its status and headers
(a page's `Cache-Control` is `no-store`), and its body byte for byte, or a
page's with the reload client inserted (`relayedBody`), in any charset.
Tested by: test/fuzz/targets/dev-proxy.mjs -/
def dev_proxy_relays_reply : Prop :=
  ∀ (r : HttpRequest) (a : HttpReply), PlainHeaders r.headers → PlainHeaders a.headers → r.target ≠ "/__lasm/events" →
    ∃ c, (devProxy r (.answers a)).2 = .reply c ∧ c.status = a.status ∧ c.body = relayedBody r a ∧
      (isPage r a = true → c.header? "cache-control" = some "no-store") ∧
      ∀ h v, a.header? h = some v → (isPage r a = false ∨ h ≠ "cache-control") → c.header? h = some v

/-- **No response is left open.** When the server program stops before its
reply ends, the client's response ends cut too; a malformed reply is a 502
or a cut connection, at once.
Tested by: test/fuzz/targets/dev-proxy.mjs, test/dev-proxy.test.mjs -/
def dev_proxy_ends_failed_replies : Prop :=
  ∀ (r : HttpRequest) (u : Upstream), u = .cut ∨ u = .malformed → r.target ≠ "/__lasm/events" →
    (devProxy r u).2 = .cut ∨ ∃ page, (devProxy r u).2 = .reply page ∧ page.status = 502 ∧ u = .malformed

/-! ## Project files -/

/-- **`leanHeader` keeps exactly the source's imports.** Whenever Lean reads
a source's header without error, it reads the same imports from
`leanHeader` of the source: a build key over the header changes whenever
the imports can.
Tested by: test/fuzz/targets/project-files.mjs -/
def lean_header_keeps_imports : Prop :=
  ∀ (text : String) (is : List HeaderImport), NoBareCR text → leanImports text = some is → leanImports (leanHeader text) = some is

/-- **`lasm dev` follows every import.** Whenever Lean reads a source's
header without error, `importClosure` reaches the file of every module it
imports that the project has: an edit to it rebuilds the outputs that
import it.
Tested by: test/fuzz/targets/project-files.mjs -/
def import_closure_covers_imports : Prop :=
  ∀ (text : String) (is : List HeaderImport), leanImports text = some is →
    (∀ i ∈ is, i.module ≠ [] ∧ i.module ≠ ["Main"] ∧ ∀ c ∈ i.module, FileComponent c) →
    ∀ i ∈ is, moduleFile i.module ∈ importClosureOf text (is.map (·.module))

/-- **A broken Lake manifest is no reuse, never a crash.** Whatever
lake-manifest.json and lakefile.lean hold, `lakeConfigurationKey` answers
a key or none; Lake then reports what it cannot read.
Tested by: test/fuzz/targets/project-files.mjs, test/application-sources.test.mjs -/
def lake_key_total : Prop :=
  ∀ manifest lakefile : String, ∃ key, lakeConfigurationKeyOf manifest lakefile = .ok key

/-- **package.json is read, or refused by name.** Whatever package.json
holds, the edge modules are distinct non-empty names, the Supabase function
and Fastly service names are ones those platforms accept, and a refusal is
a message that names package.json.
Tested by: test/fuzz/targets/project-files.mjs -/
def package_readers_clear : Prop :=
  ∀ text : String,
    (∀ ms, edgeModulesOf text = .ok ms → ms.Nodup ∧ ∀ m ∈ ms, m ≠ "") ∧
    (∀ n, supabaseFunctionNameIn text = .ok n →
      (n.toList.head?.map Char.isLower) = some true ∧ n.all (fun c => c.isLower || c.isDigit || c = '-') ∧ n.length ≤ 54) ∧
    (∀ n, fastlyNameIn text = .ok n → n ≠ "" ∧ n.all (fun c => c.isLower || c.isDigit || c = '_' || c = '-')) ∧
    (∀ e, edgeModulesOf text = .error e ∨ supabaseFunctionNameIn text = .error e ∨ fastlyNameIn text = .error e →
      Mentions e "package.json")

/-! ## Edge entries -/

/-- **Supabase's handler sees the path without the function's name.** For a
request whose path is the function's name, or the name and a `/` and more,
the handler gets the rest (`/` for the name alone), with the same origin,
query, fragment, method, headers and body; any other request reaches it
unchanged.
Tested by: test/fuzz/targets/edge-request.mjs -/
def supabase_route_strips_name : Prop :=
  ∀ (name origin path rest : String) (r : HttpRequest), urlParts r.target = some (origin, path, rest) →
    (supabaseRoute name r).method = r.method ∧ (supabaseRoute name r).headers = r.headers ∧
    (supabaseRoute name r).body = r.body ∧
    (path = "/" ++ name → urlParts (supabaseRoute name r).target = some (origin, "/", rest)) ∧
    (∀ p, path = "/" ++ name ++ "/" ++ p → urlParts (supabaseRoute name r).target = some (origin, "/" ++ p, rest)) ∧
    (path ≠ "/" ++ name → (∀ p, path ≠ "/" ++ name ++ "/" ++ p) → (supabaseRoute name r).target = r.target)

/-- **Vercel's handler never sees Accept-Encoding, and nothing else
changes.**
Tested by: test/fuzz/targets/edge-request.mjs -/
def vercel_identity_drops_encoding : Prop :=
  ∀ r : HttpRequest, vercelIdentity r = { r with headers := r.headers.filter (·.1 ≠ "accept-encoding") }

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
