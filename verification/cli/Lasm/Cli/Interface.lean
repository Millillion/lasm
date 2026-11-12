/-
# The JavaScript the CLI's propositions are about

`@lasm/cli` is JavaScript. Its tested propositions
(`Lasm/Cli/Candidates.lean`, docs/TESTING_STRATEGY.md §4) are stated about
the functions below, one Lean constant per JavaScript function, with the
JavaScript's types read as Lean types (`undefined` and a thrown error as
`none` or `.error`, a `Buffer` or `Uint8Array` as `ByteArray`, an object as a
structure of the fields a proposition reads).

Reading guide. A function not yet modelled is an `opaque` constant: Lean
knows its type and nothing else, so a candidate about it can be tested (the
test that cites it runs the JavaScript on generated inputs and checks the
statement) but not proved. The step that proves one is the one
docs/TESTING_STRATEGY.md §6 decision 7 and docs/proposals/IRREDUCIBLE.md M4
and M6 lay out: replace the `opaque` by a Lean model of the JavaScript,
function for function, in `Lasm/Cli/Model/` (imported here), checked against
the JavaScript by test/models/cli-differential.mjs; then the statement
becomes a theorem about the model (Spec.lean, Theorems.lean). What stays
unproved is exactly "this JavaScript implements the model", which the
differential tests.

A few constants stand for something that is not Lasm's JavaScript but an
outside semantics the tests use as their oracle (WebAssembly validation and
execution, a ZIP reader, the native process launcher's reading); their doc
comments say so. The plain definitions (`leb`, `sectionOf`, `Reaches`, …) are
the vocabulary the statements share, exact and complete.
-/
import Lean.Data.Json
import Lasm.Cli.Model.Dev
import Lasm.Cli.Model.NodeHost
import Lasm.Cli.Model.Platform
import Lasm.Cli.Model.WasiComponent

namespace Lasm.Cli

/-! ## Vocabulary -/

/-- The bytes of a list, as a `ByteArray`. -/
def bytes (l : List UInt8) : ByteArray := ⟨l.toArray⟩

/-- Unsigned LEB128: seven bits per byte, low bits first, the high bit set on
every byte but the last. -/
def leb (n : Nat) : List UInt8 :=
  if h : n < 128 then [n.toUInt8] else (n % 128 + 128).toUInt8 :: leb (n / 128)
termination_by n
decreasing_by omega

/-- Signed LEB128 of a non-negative integer: the last byte has bit 6 clear. -/
def sleb (n : Nat) : List UInt8 :=
  if h : n < 64 then [n.toUInt8] else (n % 128 + 128).toUInt8 :: sleb (n / 128)
termination_by n
decreasing_by omega

/-- A WebAssembly section: its id, its size, its body. -/
def sectionOf (id : UInt8) (body : List UInt8) : List UInt8 := id :: leb body.length ++ body

/-- A WebAssembly name or byte vector: its length, its bytes. -/
def vec (body : List UInt8) : List UInt8 := leb body.length ++ body

/-- A name: its UTF-8 bytes as a vector. -/
def name (s : String) : List UInt8 := vec s.toUTF8.data.toList

/-- The header of a core module (version 1). -/
def moduleHeader : List UInt8 := [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0]

/-- The header of a component (layer 1, version 0x0d). -/
def componentHeader : List UInt8 := [0, 0x61, 0x73, 0x6d, 0x0d, 0, 0x01, 0]

/-- `b` is reached from `a` through one edge or more. -/
inductive Reaches (edges : String → List String) : String → String → Prop
  | edge {a b : String} : b ∈ edges a → Reaches edges a b
  | trans {a b c : String} : b ∈ edges a → Reaches edges b c → Reaches edges a c

/-- No vertex reaches itself. -/
def Acyclic (edges : String → List String) : Prop := ∀ a, ¬ Reaches edges a a

/-- Every element of `l` comes after the elements it has an edge to that are
in `l`. -/
def DependenciesFirst (edges : String → List String) (l : List String) : Prop :=
  ∀ x ∈ l, ∀ y ∈ edges x, y ∈ l → l.idxOf y < l.idxOf x

/-- The UTF-16 code units of a string (JavaScript's `.length` and default
sort order count these). -/
def utf16 (s : String) : List Nat :=
  s.toList.flatMap fun c =>
    if c.toNat < 0x10000 then [c.toNat]
    else [0xD800 + (c.toNat - 0x10000) / 0x400, 0xDC00 + (c.toNat - 0x10000) % 0x400]

/-! ## The command line (src/cli-arguments.mjs, src/platform.mjs) -/

/-- What `parseLasmArguments` returns on success: a plain object. -/
opaque Parsed : Type

/-- `parsed.command`. -/
opaque Parsed.command : Parsed → String
/-- `parsed.input` (`""` when absent). -/
opaque Parsed.input : Parsed → String
/-- `parsed.args`, the application arguments. -/
opaque Parsed.args : Parsed → List String
/-- `parsed.rebuild`. -/
opaque Parsed.rebuild : Parsed → Bool
/-- `parsed.verbose`. -/
opaque Parsed.verbose : Parsed → Bool
/-- `parsed.profile`: `"dev"` or `"release"`. -/
opaque Parsed.profile : Parsed → String
/-- `parsed.target` (`""` when absent). -/
opaque Parsed.target : Parsed → String
/-- `parsed.template` (`lasm init`; `""` when absent). -/
opaque Parsed.template : Parsed → String
/-- `parsed.deploy` (`lasm init`). -/
opaque Parsed.deploy : Parsed → List String
/-- `parsed.outputs` of `lasm dev`: each output's target and input. -/
opaque Parsed.outputs : Parsed → List (String × String)

/-- `parseLasmArguments(argv)`: the parse, or the message of the `Error` it
throws. -/
opaque parseLasmArguments : List String → Except String Parsed

/-- `buildTargets` (src/cli-arguments.mjs). -/
opaque buildTargets : List String
/-- `templates` of `lasm init` (src/init.mjs), by name. -/
opaque templates : List String
/-- `deployTargets` of `lasm init` (src/init.mjs), by name. -/
opaque deployTargets : List String
/-- `packageTargets` (src/package.mjs), by name. -/
opaque packageTargets : List String
/-- `devTargets` (src/dev.mjs). -/
opaque devTargets : List String

/-- The commands a parse can name. -/
def commands : List String :=
  ["version", "help", "run", "build", "init", "init-help", "dev", "dev-help", "package", "package-help", "editor", "cache-repair"]

/-- The options of `lasm build` and of running a program. -/
def knownFlags : List String :=
  ["--", "--help", "-h", "--rebuild", "--verbose", "--dev", "--release", "--allow-dev", "--bundler", "--target", "--suspend", "--output"]

/-- The options that take a value. -/
def valuedFlags : List String := ["--target", "--suspend", "--output"]

/-- `--flag=value` for an option that takes a value. -/
def valuedForm (s : String) : Bool := valuedFlags.any fun f => s.startsWith (f ++ "=")

/-- One option as a command line groups it: a flag, a flag that takes a value
with its value, or the input. -/
def OptionGroup : List String → Prop
  | [f, _] => f ∈ valuedFlags
  | [w] => w ∉ valuedFlags
  | _ => False

/-- An option written `--flag=value` instead of `--flag value`. -/
def joined : List String → List String
  | [f, v] => if f ∈ valuedFlags then [f ++ "=" ++ v] else [f, v]
  | o => o

/-- `editDistance(a, b)`: the Levenshtein distance. -/
opaque editDistance : String → String → Nat

/-- `closest(word, candidates)`. -/
opaque closest : String → List String → Option String

/-- How far a suggestion may be: at least 2 edits, else a third of its length. -/
def threshold (c : String) : Nat := max 2 (c.length / 3)

/-- The first of the candidates at the least distance by `d`, if any. -/
def nearestFirst (d : String → Nat) : List String → Option String
  | [] => none
  | c :: cs =>
    match nearestFirst d cs with
    | some c' => if d c' < d c then some c' else some c
    | none => some c

-- `responseFile(arguments)` (src/platform.mjs), the linker's response file:
-- modelled in Model/Platform.lean.

/-- Backslash escapes undone: `\x` is `x`. -/
def unescape : List Char → List Char
  | '\\' :: c :: r => c :: unescape r
  | c :: r => c :: unescape r
  | [] => []

/-- A response-file line read back: between double quotes, escapes undone. -/
def unquote (line : String) : Option String :=
  match line.toList with
  | '"' :: r => if r.getLast? = some '"' then some (String.ofList (unescape r.dropLast)) else none
  | _ => none

/-! ## The process launcher (src/process-launcher.mjs) -/

/-- The options of `encodeProcessConfiguration` (command, arguments,
environment in order, working directories, the three stdio flags). -/
structure LaunchOptions where
  command : String
  args : List String
  env : List (String × String)
  directory : Option String
  requestedCwd : Option String
  stdio : List UInt32

/-- `encodeProcessConfiguration(options)`. -/
opaque encodeProcessConfiguration : LaunchOptions → ByteArray

/-- Not Lasm's JavaScript: how the native launcher (native/process-launcher.c)
reads a configuration, as the test transcribes it (`decode`): the argument
vector, the environment, the two directories and the stdio flags. -/
opaque launcherReads : ByteArray → Option (List String × List (String × String) × Option String × Option String × List UInt32)

/-! ## Builds: names, initializers, builtin modules -/

/-- `mangleName(name)` (src/application-diagnosis.mjs): Lean's C name of a
dotted name. -/
opaque mangleName : String → String
/-- `demangleName(text)`. -/
opaque demangleName : String → String
/-- `initializerModule(symbol)`: the module a C initializer initializes. -/
opaque initializerModule : String → Option String

/-- A dotted name whose components each start with an ASCII letter and do not
end with `_`, where Lean's mangling is unambiguous. -/
def wellFormedName (n : String) : Bool :=
  (n.splitOn ".").all fun c => (c.toList.head?.map Char.isAlpha).getD false && !c.endsWith "_"

/-- `builtinModuleClosure(specifiers)` (src/edge/builtin-modules.mjs), with
`imports s` the builtin specifiers (`lasm:…`) builtin `s`'s file imports. -/
opaque builtinModuleClosure : (String → List String) → List String → List String

/-- An initialization plan (src/edge/edge-initializers.mjs): every
initializer of the link, those kept, and the initializers each one calls. -/
structure Plan where
  closure : List String
  keep : List String
  calls : String → List String

/-- `initializationSchedule(name, calls, keep)`. -/
opaque initializationSchedule : String → (String → List String) → List String → List String

/-- `compactInitializerWrappers(plan)`: C source. -/
opaque compactInitializerWrappers : Plan → String

/-- Not Lasm's JavaScript: what running the C source records when the
wrappers of `entries` are called in turn, each kept unit's real initializer
calling its imports' wrappers (`calls`) and then recording itself (C's
semantics, as the test's `interpret` transcribes it). -/
opaque runInitializers : String → (String → List String) → List String → List String

/-- One initializer of the Node build's chains: run once, its calls first,
then, when kept, its own body (recorded). `fuel` bounds the depth. -/
def chainsStep (calls : String → List String) (keep : List String) :
    Nat → List String × List String → String → List String × List String
  | 0, s, _ => s
  | fuel + 1, (done, ran), x =>
    if x ∈ done then (done, ran)
    else
      let after := (calls x).foldl (chainsStep calls keep fuel) (x :: done, ran)
      (after.1, if x ∈ keep then after.2 ++ [x] else after.2)

/-- The kept initializers the Node build's chains run, in order, when
`entries` are called in turn. -/
def chains (p : Plan) (entries : List String) : List String :=
  (entries.foldl (chainsStep p.calls p.keep (p.closure.length + 1)) ([], [])).2

/-- A C initializer name the wrappers accept. -/
def initializerName (n : String) : Bool :=
  let rest := if n.startsWith "runtime_" then n.drop 8 |>.toString else if n.startsWith "meta_" then n.drop 5 |>.toString else n
  rest.startsWith "initialize_" && rest.length > 11 &&
    (rest.drop 11).toString.all fun c => c.isAlphanum || c = '_'

/-! ## `lasm init` names (src/init.mjs) -/

/-- `packageName(directory)`. -/
opaque packageName : String → String
/-- `lakeName(name)`. -/
opaque lakeName : String → String
/-- `supabaseFunctionNameOf(packageName)`. -/
opaque supabaseFunctionNameOf : String → String

/-! ## Development server (src/dev.mjs, src/browser/static-server.mjs) -/

-- `changedFiles(before, after)` (src/dev.mjs): modelled in Model/Dev.lean.

/-- The static server (`startStaticServer(root)` without a fallback page)
answering a GET of a request path: the status, and the file (an absolute
path) whose bytes are the body, if any. -/
opaque staticServe : String → String → Nat × Option String

/-! ## The Node host (src/lean-io-errors.mjs, src/node-host.mjs) -/

/-- `leanAtLeast(version, minimum)`. -/
opaque leanAtLeast : String → String → Bool

/-- `major.minor.patch`. -/
def versionText (v : Nat × Nat × Nat) : String := s!"{v.1}.{v.2.1}.{v.2.2}"

/-- `a` is `b` or later, comparing major, then minor, then patch. -/
def LexGe (a b : Nat × Nat × Nat) : Prop :=
  a.1 > b.1 ∨ a.1 = b.1 ∧ (a.2.1 > b.2.1 ∨ a.2.1 = b.2.1 ∧ a.2.2 ≥ b.2.2)

-- `numbers(...values)` (src/node-host.mjs): modelled in Model/NodeHost.lean.

/-- A value as a little-endian unsigned 64-bit integer, wrapped modulo 2⁶⁴. -/
def le64 (n : Int) : List UInt8 :=
  let m := (n % 2 ^ 64).toNat
  (List.range 8).map fun i => (m / 256 ^ i % 256).toUInt8

/-! ## Downloads (src/managed-download.mjs) -/

/-- `retryDelay(attempt, () => r)`. -/
opaque retryDelay : Nat → Float → Nat

/-- The capped doubling backoff of an attempt. -/
def backoff (attempt : Nat) : Nat := min 60000 (2000 * 2 ^ (attempt - 1))

/-! ## The link driver's Python semantics (src/link-driver/python.mjs) -/

/-- `pythonJsonString(value)`: `json.dumps` of a string, `ensure_ascii`. -/
opaque pythonJsonString : String → String

/-- `pythonJsonDumps(value, { indent, sortKeys })`, or the message it throws. -/
opaque pythonJsonDumps : Lean.Json → Option Nat → Bool → Except String String

/-- `comparePythonStrings(a, b)`: negative, zero or positive. -/
opaque comparePythonStrings : String → String → Int

/-! ## WebAssembly (src/wasi/lower-atomics.mjs, src/wasi/wasi-component.mjs) -/

/-- `lowerAtomics(bytes)`. -/
opaque lowerAtomics : ByteArray → ByteArray

/-- Not Lasm's JavaScript: `WebAssembly.validate`, the threads proposal on. -/
opaque validate : ByteArray → Bool

/-- Not Lasm's JavaScript: validation with the threads feature off
(binaryen's validator, or V8's with no atomic instruction left). -/
opaque validWithoutThreads : ByteArray → Bool

/-- Not Lasm's JavaScript: instantiating a module and calling its `run` export
with these arguments on one thread: the result and the memory after it, or
`none` on a trap. -/
opaque run : ByteArray → List Nat → Option (Int × ByteArray)

/-- One instruction of a function body, as the lowering reads it: any
non-atomic instruction (its encoding), `atomic.fence`, or an atomic
instruction `0xfe sub memarg`, with the memarg's offset. -/
inductive Instr where
  | plain (encoding : List UInt8)
  | fence
  | atomic (sub : Nat) (memarg : List UInt8) (offset : Nat)

/-- The encoding of an instruction. -/
def Instr.encoding : Instr → List UInt8
  | .plain e => e
  | .fence => [0xfe, 0x03, 0x00]
  | .atomic sub m _ => 0xfe :: leb sub ++ m

/-- The non-atomic load or store an atomic load or store becomes. -/
def plainOf (sub : Nat) : Option UInt8 :=
  [0x28, 0x29, 0x2d, 0x2f, 0x31, 0x33, 0x35, 0x36, 0x37, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e][sub - 0x10]?.filter fun _ => 0x10 ≤ sub

/-- The atomic instructions replaced by a call to a helper, one per `sub`. -/
def Instr.helper? : Instr → Option Nat
  | .atomic sub _ _ => if (plainOf sub).isSome then none else some sub
  | _ => none

/-- The replacement docs/WASI.md documents: a fence disappears, an atomic load
or store becomes the plain one with the same memarg, and every other atomic
pushes its offset and calls its helper (function `index sub`). -/
def Instr.lowered (memory64 : Bool) (index : Nat → Nat) : Instr → List UInt8
  | .plain e => e
  | .fence => []
  | .atomic sub m off =>
    match plainOf sub with
    | some op => op :: m
    | none => (if memory64 then 0x42 else 0x41) :: sleb off ++ 0x10 :: leb (index sub)

/-- A function body: local declarations (encoded) and instructions. -/
abbrev Body := List UInt8 × List Instr

/-- A module of `types` empty function types, `imported` imported functions
and one imported global, one function per body, and one memory. -/
def moduleOf (memory64 : Bool) (types imported : Nat) (bodies : List Body) : List UInt8 :=
  let imports := (List.range imported).map (fun i => name "env" ++ name s!"f{i}" ++ [0x00, 0]) ++ [name "env" ++ name "g" ++ [0x03, 0x7f, 0]]
  let code := bodies.map fun (locals, is) =>
    let b := locals ++ is.flatMap Instr.encoding ++ [0x0b]
    leb b.length ++ b
  moduleHeader ++ sectionOf 1 (leb types ++ (List.replicate types [0x60, 0, 0]).flatten) ++
    sectionOf 2 (leb imports.length ++ imports.flatten) ++
    sectionOf 3 (leb bodies.length ++ List.replicate bodies.length 0) ++
    sectionOf 5 (leb 1 ++ [if memory64 then 0x04 else 0x00, 1]) ++
    sectionOf 10 (leb bodies.length ++ code.flatten)

/-- Reads one unsigned LEB128 integer. -/
def readLeb : List UInt8 → Option (Nat × List UInt8)
  | [] => none
  | b :: r =>
    if b.toNat < 128 then some (b.toNat, r)
    else (readLeb r).map fun (m, r') => (b.toNat - 128 + 128 * m, r')

/-- `count` length-prefixed byte strings. -/
def readSized : Nat → List UInt8 → Option (List (List UInt8))
  | 0, _ => some []
  | n + 1, bs => do
    let (size, r) ← readLeb bs
    let rest ← readSized n (r.drop size)
    return r.take size :: rest

/-- The sections of a module's bytes after its header (at most `fuel`). -/
def sections : Nat → List UInt8 → List (UInt8 × List UInt8)
  | 0, _ => []
  | _, [] => []
  | fuel + 1, id :: r =>
    match readLeb r with
    | some (size, r) => (id, r.take size) :: sections fuel (r.drop size)
    | none => []

/-- The offset of a memarg (alignment, the memory index when bit 6 of the
alignment is set, then the offset), if the bytes are exactly one memarg. -/
def memargOffset (m : List UInt8) : Option Nat := do
  let (a, r) ← readLeb m
  let r ← if a % 128 ≥ 64 then (readLeb r).map (·.2) else some r
  let (off, rest) ← readLeb r
  if rest = [] then some off else none

/-- Not Lasm's JavaScript: the bytes encode exactly one instruction of the
WebAssembly 3.0 binary format, immediates included (not type-checked). -/
opaque oneInstruction : List UInt8 → Bool

/-- Not Lasm's JavaScript: the bytes encode a function body's local
declarations (a vector of counts and value types). -/
opaque localDeclarations : List UInt8 → Bool

/-- An instruction as the lowering must read it: a non-atomic one is one
instruction that is not `0xfe`-prefixed; an atomic one other than the fence
(`sub` 3) is one instruction whose memarg has the given offset. -/
def Instr.WellFormed : Instr → Prop
  | .plain e => oneInstruction e = true ∧ e.head? ≠ some 0xfe
  | .fence => True
  | .atomic sub m off => oneInstruction (0xfe :: leb sub ++ m) = true ∧ sub ≠ 3 ∧ memargOffset m = some off

/-- The function bodies of a module's code section (the test's `codeBodies`). -/
def codeBodies (m : ByteArray) : Option (List (List UInt8)) := do
  let (_, body) ← (sections m.size (m.data.toList.drop 8)).find? (·.1 == 10)
  let (n, r) ← readLeb body
  readSized n r

/-- `componentize(core)`: the wasi-http component of a core module, made from
the shipped template. -/
opaque componentize : ByteArray → ByteArray
/-- `extractCore(component)`, or `none` where it throws. -/
opaque extractCore : ByteArray → Option ByteArray
/-- `makeTemplate(component, core)`, or `none` where it throws. -/
opaque makeTemplate : ByteArray → ByteArray → Option ByteArray
/-- The shipped template, src/wasi/component/proxy-template.wasm. -/
opaque proxyTemplate : ByteArray
-- `replaceCoreModule(component, prefix, to)` and `withoutComponentType(module)`:
-- modelled in Model/WasiComponent.lean.

/-- A section of a core module: a custom section (its name and contents) or
any other (its id and body). -/
inductive Sec where
  | custom (name : String) (contents : List UInt8)
  | other (id : UInt8) (body : List UInt8)

/-- The encoding of a section. -/
def Sec.encoding : Sec → List UInt8
  | .custom n c => sectionOf 0 (name n ++ c)
  | .other id b => sectionOf id b

/-- A custom section of the component-type family that wit-component reads. -/
def Sec.componentType : Sec → Bool
  | .custom n _ => n.startsWith "component-type"
  | .other _ _ => false

/-! ## Function packages (src/serverless/zip.mjs) -/

/-- An entry given to `zip`: its name, its bytes, its permissions if set. -/
structure ZipEntry where
  name : String
  data : ByteArray
  mode : Option Nat

/-- An entry a ZIP reader reads: name, bytes, Unix mode, method. -/
structure ReadEntry where
  name : String
  data : ByteArray
  mode : Nat
  method : Nat

/-- `zip(entries)`, or the message it throws. -/
opaque zip : List ZipEntry → Except String ByteArray

/-- Not Lasm's JavaScript: a ZIP reader written from APPNOTE.TXT 6.3.10 (the
test's `unzip`): the entries in the central directory's order. -/
opaque unzip : ByteArray → Option (List ReadEntry)

/-- The parent directories of a path, each with a trailing `/`. -/
def parents (path : String) : List String :=
  let parts := (path.splitOn "/").dropLast
  (List.range parts.length).map fun i => String.intercalate "/" (parts.take (i + 1)) ++ "/"

/-- The directories `zip` adds: every parent of an entry, once, sorted as
JavaScript sorts strings (by UTF-16 code units). -/
def directoriesOf (entries : List ZipEntry) : List String :=
  (entries.flatMap fun e => parents e.name).eraseDups.mergeSort fun a b => !(decide (utf16 b < utf16 a))

/-! ## Node.serve (src/lasm-modules/node-serve.mjs) -/

/-- `requestUrl(target, host, fallback)` with its default scheme `http`: the
URL of a node:http request, or `none` (`null`) for a target that is neither
origin-form nor an absolute http(s) URL. -/
opaque requestUrl : String → String → String → Option String

/-- `plainHost(host)`: the Host field is a nonempty run of printable ASCII
with none of `/`, `?`, `#`, `\` and `@` (no userinfo, path, query or
fragment). -/
opaque plainHost : String → Bool

/-- Not Lasm's JavaScript: the `host` (hostname and port) that WHATWG's URL
parser reads from an absolute URL, `none` when it does not parse (the test's
oracle is Node's `URL`). -/
opaque urlHost : String → Option String

end Lasm.Cli
