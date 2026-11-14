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
import Lasm.Cli.Model.BuiltinModules
import Lasm.Cli.Model.CliArguments
import Lasm.Cli.Model.Dev
import Lasm.Cli.Model.EdgeInitializers
import Lasm.Cli.Model.HandleTable
import Lasm.Cli.Model.JsFraming
import Lasm.Cli.Model.LeanIOErrors
import Lasm.Cli.Model.Init
import Lasm.Cli.Model.LowerAtomics
import Lasm.Cli.Model.NodeHost
import Lasm.Cli.Model.Package
import Lasm.Cli.Model.Platform
import Lasm.Cli.Model.ProcessLauncher
import Lasm.Cli.Model.Python
import Lasm.Cli.Model.WasiComponent
import Lasm.Cli.Model.Zip

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

-- `parseLasmArguments`, `editDistance`, `closest`, `buildTargets` and what
-- `parseLasmArguments` returns (`Parsed`, a structure of the object's
-- fields) are modelled in Model/CliArguments.lean; the parsers of `lasm
-- init`, `lasm dev` and `lasm package` (`parseInitArguments`,
-- `parseDevArgumentsWith`, `parsePackageArguments`) and their tables
-- (`templates`, `deployTargets`, `devTargets`, `packageTargets`) in
-- Model/Init.lean, Model/Dev.lean and Model/Package.lean. The models take
-- what they import from outside as a parameter; here it is the constants
-- below.

/-- `existsSync(path)` (node:fs): whether a file exists, in the working
directory the CLI runs in. -/
opaque fileExists : String → Bool
/-- `jsRuntime` (src/js-runtime.mjs): the runtime the CLI runs on. Lasm
cannot know which; the module's three branches can return only `"node"`,
`"bun"` or `"deno"`, which the type records. -/
opaque jsRuntimeOf : { s : String // s = "node" ∨ s = "bun" ∨ s = "deno" } := ⟨"node", .inl rfl⟩
/-- `jsRuntime`. -/
def jsRuntime : String := jsRuntimeOf.val
/-- `parseDevArguments(tokens)` (src/dev.mjs), on the runtime the CLI runs on. -/
def parseDevArguments : List String → Except String Parsed := parseDevArgumentsWith jsRuntime

/-- `parseLasmArguments(argv)`: the parse, or the message of the `Error` it
throws. -/
def parseLasmArguments (argv : List String) : Except String Parsed :=
  parseLasmArgumentsWith ⟨fileExists, jsRuntime, parseInitArguments, parseDevArguments, parsePackageArguments⟩ argv

/-- `parsed.input` (`""` when absent). -/
def Parsed.input (p : Parsed) : String := p.input?.getD ""
/-- `parsed.args`, the application arguments (`[]` when absent). -/
def Parsed.args (p : Parsed) : List String := p.args?.getD []
/-- `parsed.rebuild` (`false` when absent). -/
def Parsed.rebuild (p : Parsed) : Bool := p.rebuild?.getD false
/-- `parsed.verbose` (`false` when absent). -/
def Parsed.verbose (p : Parsed) : Bool := p.verbose?.getD false
/-- `parsed.profile`: `"dev"` or `"release"` (`""` when absent). -/
def Parsed.profile (p : Parsed) : String := p.profile?.getD ""
/-- `parsed.target` (`""` when absent). -/
def Parsed.target (p : Parsed) : String := p.target?.getD ""
/-- `parsed.template` (`lasm init`; `""` when absent). -/
def Parsed.template (p : Parsed) : String := p.template?.getD ""
/-- `parsed.deploy` (`lasm init`). -/
def Parsed.deploy (p : Parsed) : List String := p.deploy?.getD []
/-- `parsed.outputs` of `lasm dev`: each output's target and input. -/
def Parsed.outputs (p : Parsed) : List (String × String) := p.outputs?.getD []

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

-- `editDistance(a, b)` (the Levenshtein distance between code points) and
-- `closest(word, candidates)`: modelled in Model/CliArguments.lean.

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

-- `encodeProcessConfiguration(options)` (src/process-launcher.mjs) and the
-- launcher's reading of it (native/process-launcher.c): modelled in
-- Model/ProcessLauncher.lean.

/-! ## Builds: names, initializers, builtin modules -/

/-- `mangleName(name)` (src/application-diagnosis.mjs): Lean 4.35's C name
(`Name.mangle n ""`) of a dotted name. -/
opaque mangleName : String → String
/-- `demangleName(text)`. -/
opaque demangleName : String → String
/-- `initializerModule(symbol)`: the module a C initializer initializes. -/
opaque initializerModule : String → Option String

-- `builtinModuleClosure(specifiers)` (src/edge/builtin-modules.mjs), with
-- `imports` the builtin specifiers (`lasm:…`) each builtin's file imports:
-- modelled in Model/BuiltinModules.lean.

-- An initialization plan (`Plan`: every initializer of the link, those kept,
-- and the initializers each one calls, `calls` as the entries of the
-- JavaScript object and `Plan.edges` as a function),
-- `initializationSchedule(name, calls, keep)` and
-- `compactInitializerWrappers(plan)` (src/edge/edge-initializers.mjs):
-- modelled in Model/EdgeInitializers.lean.

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
  (entries.foldl (chainsStep p.edges p.keep (p.closure.length + 1)) ([], [])).2

/-- A C initializer name the wrappers accept. -/
def initializerName (n : String) : Bool :=
  let rest := if n.startsWith "runtime_" then n.drop 8 |>.toString else if n.startsWith "meta_" then n.drop 5 |>.toString else n
  rest.startsWith "initialize_" && rest.length > 11 &&
    (rest.drop 11).toString.all fun c => c.isAlphanum || c = '_'

/-! ## `lasm init` names (src/init.mjs) -/

/-- Not Lasm's JavaScript: Node's `path.basename(path.resolve(directory))`,
then JavaScript's `toLowerCase()`. -/
opaque lowerBasename : String → String
/-- Not Lasm's JavaScript: `String(value).toLowerCase()` (Unicode's mapping). -/
opaque jsToLowerCase : String → String
/-- `packageName(directory)`: modelled in Model/Init.lean. -/
def packageName (directory : String) : String := packageNameOf (lowerBasename directory)
/-- `lakeName(name)`: modelled in Model/Init.lean. -/
def lakeName (name : String) : String := lakeNameOf name
/-- `supabaseFunctionNameOf(packageName)`: modelled in Model/Init.lean. -/
def supabaseFunctionNameOf (name : String) : String := supabaseNameOf (jsToLowerCase name)

/-! ## Development server (src/dev.mjs, src/browser/static-server.mjs) -/

-- `changedFiles(before, after)` (src/dev.mjs): modelled in Model/Dev.lean.

/-- The static server (`startStaticServer(root)` without a fallback page)
answering a GET of a request path: the status, and the file (an absolute
path) whose bytes are the body, if any. -/
opaque staticServe : String → String → Nat × Option String

/-! ## The Node host (src/lean-io-errors.mjs, src/node-host.mjs) -/

/-- `leanAtLeast(version, minimum)`: modelled in Model/LeanIOErrors.lean. -/
def leanAtLeast (version minimum : String) : Bool := leanAtLeastModel version minimum

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

-- `pythonJsonString(value)` and `comparePythonStrings(a, b)`: modelled in
-- Model/Python.lean.

/-- `pythonJsonDumps(value, { indent, sortKeys })`, or the message it throws. -/
opaque pythonJsonDumps : Lean.Json → Option Nat → Bool → Except String String


/-! ## WebAssembly (src/wasi/lower-atomics.mjs, src/wasi/wasi-component.mjs) -/

/-- `lowerAtomics(bytes)`, or the message it throws: modelled in
Model/LowerAtomics.lean. -/
def lowerAtomics (m : ByteArray) : Except String ByteArray := LowerAtomics.lowerAtomics m

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
instruction that is not `0xfe`-prefixed, nor a SIMD (`0xfd`) or GC (`0xfb`)
one, which the lowering refuses; an atomic one other than the fence
(`sub` 3) is one instruction whose memarg has the given offset. -/
def Instr.WellFormed : Instr → Prop
  | .plain e => oneInstruction e = true ∧ e.head? ≠ some 0xfe ∧ e.head? ≠ some 0xfd ∧ e.head? ≠ some 0xfb
  | .fence => True
  | .atomic sub m off => oneInstruction (0xfe :: leb sub ++ m) = true ∧ sub ≠ 3 ∧ memargOffset m = some off

/-- The function bodies of a module's code section (the test's `codeBodies`). -/
def codeBodies (m : ByteArray) : Option (List (List UInt8)) := do
  let (_, body) ← (sections m.size (m.data.toList.drop 8)).find? (·.1 == 10)
  let (n, r) ← readLeb body
  readSized n r

-- `replaceCoreModule(component, prefix, to)`, `componentize(core, template)`,
-- `makeTemplate(component, core)`, `extractCore(component, template)` and
-- `withoutComponentType(module)`: modelled in Model/WasiComponent.lean.

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

-- `ZipEntry` and `zip(entries)`: modelled in Model/Zip.lean, with what the
-- module imports from `node:zlib` as a parameter, here `nodeZlib`.

/-- An entry a ZIP reader reads: name, bytes, Unix mode, method. -/
structure ReadEntry where
  name : String
  data : ByteArray
  mode : Nat
  method : Nat

/-- Not Lasm's JavaScript: `deflateRawSync(data, { level: 9 })` and
`crc32(data)` of `node:zlib`. -/
opaque nodeZlib : ZipCodec

/-- `zip(entries)`, or the message it throws. -/
def zip (entries : List ZipEntry) : Except String ByteArray := zipWith nodeZlib entries

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

end Lasm.Cli
