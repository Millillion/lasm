/-
The Lean models of the CLI's JavaScript (verification/cli/Lasm/Cli/Model/)
as one process that test/models/cli-differential.mjs asks about each
generated input: one JSON request per line on stdin, one JSON answer per
line on stdout (`lean --run`, after the driver compiles the models).

  {"model": "<name>", "input": …}  →  {"ok": …}, or {"fault": "…"} when the
                                       request itself is malformed

Text travels as hex of its UTF-8 bytes, so that no JSON escaping stands
between the two sides; integers as decimal strings. Each model's input and
answer are the JavaScript's, read as the model's types:

  numbers        ["<decimal>", …]                  → "<hex of the buffer>"
  changedFiles   {"before": [["<hex>", "<hex>" | null], …], "after": …}
                                                    → ["<hex>", …]
  responseFile   ["<hex>", …]                       → {"text": "<hex>"} | {"error": "…"}
  replaceCoreModule  {"component": "<hex>", "prefix": "<hex>", "to": "<hex>"}
                                                    → {"bytes": "<hex>"} | {"error": "…"}
  withoutComponentType  "<hex>"                     → "<hex>"
  componentize   {"core": "<hex>", "template": "<hex>"}    → {"bytes": "<hex>"} | {"error": "…"}
  makeTemplate   {"component": "<hex>", "core": "<hex>"}   → (the same)
  extractCore    {"component": "<hex>", "template": "<hex>"} → (the same)
  zip            {"entries": [{"name": "<hex>", "data": "<hex>", "mode": <n> | null}, …],
                  "deflate": [["<hex>", "<hex>"], …], "crc32": [["<hex>", <n>], …]}
                                                    → {"bytes": "<hex>"} | {"error": "…"}
(`deflate` and `crc32` are node:zlib's answers for each entry's bytes)
  encodeProcessConfiguration  {"command": "<hex>", "args": [...], "env": [["<hex>", "<hex>"], …],
                  "directory": "<hex>" | null, "requestedCwd": …, "stdioFlags": ["<int>", …], "directoryFd": n | null,
                  "inheritProcessCwd": b, "setsid": b, "envBytes": [["<hex>", "<hex>"], …] | null}
                                                    → {"bytes": "<hex>"} | {"error": "…"}
  launcherRead   "<hex>"  → null (refused) | {"stdio": [n, n, n], "argv": ["<hex>", …], "environ": ["<hex of k=v>", …]}
  HandleTable    {"first": "<int>", "last": "<int>", "entries": [[n, "v"], …], "ops": [["allocate", "v"] | ["delete", n] | ["set", n, "v"], …]}
                 → {"error": "…"} | {"results": [n | "full" | null, …], "entries": [[n, "v"], …]}
(the environment as `setenv` builds it from the pairs read, after `clearenv`:
a name that is empty or holds `=` is refused, a repeated name is replaced in place)
  initializationSchedule  {"name": "…", "calls": [["…", ["…", …]], …], "keep": ["…", …]}
                                                    → ["…", …]
  compactInitializerWrappers  {"closure": […], "keep": […], "calls": […]}
                                                    → {"source": "…"} | {"error": "…"}
  builtinModuleClosure  {"imports": [["lasm:…", ["lasm:…", …]], …], "specifiers": […]}
                                                    → ["lasm:…", …]
(initializer names are C identifiers, sent as JSON strings)
  editDistance   {"a": "<hex>", "b": "<hex>"}       → <number>
  closest        {"word": "<hex>", "candidates": ["<hex>", …]}  → "<hex>" | null
  targetHint     "<hex>"                            → "<hex>"
  parseLasmArguments  {"argv": ["<hex>", …], "existing": ["<hex>", …], "runtime": "node"}
                                                    → {"parsed": {…}} | {"error": "<hex>"}
(the parsed object has the fields the JavaScript's has, text fields as hex;
`existing` are the paths `existsSync` finds; the parsers of `lasm init`,
`lasm dev` and `lasm package` answer `{"error": hex "delegated:<command>"}`)
  parseInitArguments  ["<hex>", …]                 → (the same)
  parseDevArguments   {"tokens": ["<hex>", …], "runtime": "node"}  → (the same)
  parsePackageArguments  ["<hex>", …]              → (the same)
  leanAtLeast    {"version": "<hex>", "minimum": "<hex>"}  → true | false
  applicationLinkRequirements  {"map": "<hex>", "initFree": ["<hex>", …]}
                                                    → {"error": "…"} | {"mode": "static" | "dynamic", "dynamic": ["<hex>", …],
                                                       "cxxRuntime": […], "moduleData": […], "requiresModuleData": b}
  leanIOError    {"tables": {"messages": [[code, text], …], "crtAliases": [[code, code], …], "windowsCrtCases": [code, …]},
                  "platform": "…", "version": "…", "names": [[n, name], …],
                  "error": {"userError": b, "errno": n | null, "code": "…" | null, "crt": b}}
                                                    → null | {"code": "…" | null, "errno": n, "message": "…"}
  mangleName     "<hex>"                            → "<hex>"
  demangleName   "<hex>"                            → "<hex>"
  initializerModule  "<hex>"                        → "<hex>" | null
  leanNameMangle  [["<hex>"] | n, …]                → "<hex>"  (Lean's own `Name.mangle n ""`)
  leanNameDemangle  "<hex>"                         → "<hex>"  (Lean's own `Name.demangle`, components joined by `.`)
(a component of a Lean `Name`: a string as ["<hex>"], a number as n)
  resolveStaticPath  {"root": "<hex>", "pathname": "<hex>", "accepts": "<hex>", "fallback": "<hex>" | null, "files": ["<hex>", …]}
                                                    → {"status": n, "file": "<hex>" | null, "served": "<hex>" | null, "encoding": "…" | null}
  pythonJsonString  "<hex>"                         → "<hex>"
  packageName    "<hex of basename(resolve(directory)).toLowerCase()>"  → "<hex>"
  lakeName       "<hex>"                            → "<hex>"
  supabaseFunctionNameOf  "<hex of String(name).toLowerCase()>"  → "<hex>"
  comparePythonStrings  {"a": "<hex>", "b": "<hex>"}  → "<integer>"
  lowerAtomics   "<hex>"                            → {"bytes": "<hex>"} | {"error": "…"}
  moduleImports  "<hex>"                            → {"imports": [["<hex>", "<hex>", kind], …]} | {"error": "…"}
  keepExports    {"bytes": "<hex>", "keep": ["<hex>", …]}  → {"bytes": "<hex>"} | {"error": "…"}
(import and export names are decoded as UTF-8; the generator writes valid UTF-8 names)
  encodeEvents   [event, …]                         → {"batch": "<hex>", "left": n}
  readEvents     "<hex>"                            → {"events": [event, …], "fatal": "…" | null}
(an event: ["completion", "<decimal promise>", failed, "<hex>"] | ["call", "<decimal call>", fn, "<hex>"] | ["release", fn])
  frameRequest   {"released": [n, …], "payload": "<hex>"}  → "<hex>"
  splitRequest   "<hex>"                            → {"released": [n, …], "payload": "<hex>"} | {"error": "…"}
  frameInto      {"promise": "<decimal>", "input": "<hex>"}  → "<hex>"
  intoPrefix     "<hex>"                            → {"promise": "<decimal>", "input": "<hex>"} | {"error": "…"}
(`outputs` of `lasm dev` as [{"target": "…", "input": "<hex>"}, …], `deploy`
as ["…", …], `port` a number)
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
import Lasm.Cli.Model.Mangle
import Lasm.Cli.Model.StaticServer
import Lasm.Cli.Model.Reachability
import Lean.Compiler.NameMangling
import Lasm.Cli.Model.NodeHost
import Lasm.Cli.Model.Package
import Lasm.Cli.Model.Platform
import Lasm.Cli.Model.ProcessLauncher
import Lasm.Cli.Model.Python
import Lasm.Cli.Model.WasiComponent
import Lasm.Cli.Model.Zip

open Lean Lasm.Cli

def hexDigit (n : Nat) : Char := "0123456789abcdef".toList[n % 16]!

def hex (b : ByteArray) : String :=
  b.foldl (init := "") fun s x => s.push (hexDigit (x.toNat / 16)) |>.push (hexDigit (x.toNat % 16))

def unhexDigit (c : Char) : Except String Nat :=
  if '0' ≤ c ∧ c ≤ '9' then .ok (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then .ok (c.toNat - 'a'.toNat + 10)
  else .error s!"not a hex digit: {c}"

def unhex (s : String) : Except String ByteArray := do
  let cs := s.toList.toArray
  if cs.size % 2 != 0 then throw "odd hex length"
  let mut out := ByteArray.emptyWithCapacity (cs.size / 2)
  for i in [0:cs.size / 2] do
    out := out.push (16 * (← unhexDigit cs[2 * i]!) + (← unhexDigit cs[2 * i + 1]!)).toUInt8
  return out

/-- Text sent as hex of its UTF-8 bytes. -/
def text (j : Json) : Except String String := do
  match String.fromUTF8? (← unhex (← j.getStr?)) with
  | some t => .ok t
  | none => .error "text that is not UTF-8"

def ofText (s : String) : Json := toJson (hex s.toUTF8)

/-- Bytes sent as hex. -/
def bytesOf (j : Json) : Except String ByteArray := do unhex (← j.getStr?)

/-- `new TextDecoder().decode(bytes)`: UTF-8 with U+FFFD for each maximal
invalid subsequence (the WHATWG decoder; the runner's, not a model's). -/
def utf8Name (b : ByteArray) : String := Id.run do
  let mut out := ""
  let mut cp := 0
  let mut needed := 0
  let mut seen := 0
  let mut lower := 0x80
  let mut upper := 0xBF
  let mut i := 0
  while i < b.size do
    let x := b[i]!.toNat
    if needed == 0 then
      if x ≤ 0x7F then out := out.push (Char.ofNat x)
      else if 0xC2 ≤ x ∧ x ≤ 0xDF then needed := 1; cp := x % 0x20
      else if 0xE0 ≤ x ∧ x ≤ 0xEF then
        if x == 0xE0 then lower := 0xA0
        if x == 0xED then upper := 0x9F
        needed := 2; cp := x % 0x10
      else if 0xF0 ≤ x ∧ x ≤ 0xF4 then
        if x == 0xF0 then lower := 0x90
        if x == 0xF4 then upper := 0x8F
        needed := 3; cp := x % 0x08
      else out := out.push '\uFFFD'
      i := i + 1
    else if x < lower ∨ upper < x then
      cp := 0; needed := 0; seen := 0; lower := 0x80; upper := 0xBF
      out := out.push '\uFFFD'
    else
      lower := 0x80; upper := 0xBF
      cp := cp * 64 + x % 64
      seen := seen + 1
      if seen == needed then
        out := out.push (Char.ofNat cp)
        cp := 0; needed := 0; seen := 0
      i := i + 1
  if needed != 0 then out := out.push '\uFFFD'
  return out

def integer (j : Json) : Except String Int := do
  match (← j.getStr?).toInt? with
  | some i => .ok i
  | none => .error "an integer"

/-- A snapshot: `[[file, hash | null], …]`. -/
def snapshot (j : Json) : Except String (List (String × Option String)) := do
  (← j.getArr?).toList.mapM fun e => do
    let hash ← e.getArrVal? 1
    return (← text (← e.getArrVal? 0), ← if hash.isNull then pure none else some <$> text hash)

def strings (j : Json) : Except String (List String) := do
  (← j.getArr?).toList.mapM (·.getStr?)

/-- A plan's `calls`: `[[unit, [call, …]], …]`. -/
def callsOf (j : Json) : Except String (List (String × List String)) := do
  (← j.getArr?).toList.mapM fun e => return (← (← e.getArrVal? 0).getStr?, ← strings (← e.getArrVal? 1))

/-- A parse as the JavaScript's object: the fields present, text as hex. -/
def ofParsed (p : Parsed) : Json :=
  let field := fun (k : String) (v : Option Json) => v.map (k, ·)
  Json.mkObj ([some ("command", toJson p.command),
    field "rebuild" (p.rebuild?.map toJson), field "verbose" (p.verbose?.map toJson),
    field "args" (p.args?.map fun a => toJson (a.map ofText)), field "profile" (p.profile?.map toJson),
    field "allowDev" (p.allowDev?.map toJson), field "bundler" (p.bundler?.map toJson),
    field "target" (p.target?.map toJson), field "suspend" (p.suspend?.map toJson),
    field "output" (p.output?.map ofText), field "input" (p.input?.map ofText),
    field "template" (p.template?.map ofText), field "deploy" (p.deploy?.map toJson), field "directory" (p.directory?.map ofText),
    field "run" (p.run?.map toJson), field "watch" (p.watch?.map toJson), field "port" (p.port?.map toJson),
    field "host" (p.host?.map ofText),
    field "outputs" (p.outputs?.map fun os => toJson (os.map fun (t, i) => Json.mkObj [("target", toJson t), ("input", ofText i)]))].filterMap id)

def ofResult : Except String Parsed → Json
  | .ok p => Json.mkObj [("parsed", ofParsed p)]
  | .error e => Json.mkObj [("error", ofText e)]

def texts (j : Json) : Except String (List String) := do
  (← j.getArr?).toList.mapM text

/-- Bytes, or the message thrown. -/
def ofBytes : Except String ByteArray → Json
  | .ok b => Json.mkObj [("bytes", toJson (hex b))]
  | .error e => Json.mkObj [("error", toJson e)]

/-- `setenv(key, value, 1)` for each pair after `clearenv()` (libc's, not
the launcher's: what the differential observes is the environment it builds). -/
def setenvAll (pairs : List (List UInt8 × List UInt8)) : List (List UInt8 × List UInt8) :=
  pairs.foldl (init := []) fun env (k, v) =>
    if k = [] || k.contains 61 then env
    else if env.any (·.1 == k) then env.map fun (k', v') => if k' == k then (k, v) else (k', v')
    else env ++ [(k, v)]

/-- An interop event as the differential sends it. -/
def eventOf (j : Json) : Except String JsEvent := do
  match ← (← j.getArrVal? 0).getStr? with
  | "completion" => return .completion (← (← j.getArrVal? 1).getStr?).toNat! (← (← j.getArrVal? 2).getBool?) (← bytesOf (← j.getArrVal? 3)).data.toList
  | "call" => return .call (← (← j.getArrVal? 1).getStr?).toNat! (← (← j.getArrVal? 2).getNat?) (← bytesOf (← j.getArrVal? 3)).data.toList
  | "release" => return .release (← (← j.getArrVal? 1).getNat?)
  | other => throw s!"unknown event {other}"

/-- An interop event as the differential reads it. -/
def ofEvent : JsEvent → Json
  | .completion p f b => toJson [toJson "completion", toJson (toString p), toJson f, toJson (hex ⟨b.toArray⟩)]
  | .call c fn b => toJson [toJson "call", toJson (toString c), toJson fn, toJson (hex ⟨b.toArray⟩)]
  | .release fn => toJson [toJson "release", toJson fn]

def answer (j : Json) : Except String Json := do
  let input ← j.getObjVal? "input"
  match ← j.getObjValAs? String "model" with
  | "numbers" => return toJson (hex (numbers (← (← input.getArr?).toList.mapM integer)))
  | "changedFiles" =>
    return toJson ((changedFiles (← snapshot (← input.getObjVal? "before")) (← snapshot (← input.getObjVal? "after"))).map ofText)
  | "responseFile" =>
    return match responseFile (← (← input.getArr?).toList.mapM text) with
      | .ok t => Json.mkObj [("text", ofText t)]
      | .error e => Json.mkObj [("error", toJson e)]
  | "replaceCoreModule" =>
    let field := fun (k : String) => do unhex (← (← input.getObjVal? k).getStr?)
    return match replaceCoreModule (← field "component") (← field "prefix") (← field "to") with
      | .ok b => Json.mkObj [("bytes", toJson (hex b))]
      | .error e => Json.mkObj [("error", toJson e)]
  | "zip" =>
    let entries ← (← (← input.getObjVal? "entries").getArr?).toList.mapM fun e => do
      let modeJ ← e.getObjVal? "mode"
      let name ← text (← e.getObjVal? "name")
      let data ← unhex (← (← e.getObjVal? "data").getStr?)
      let mode ← if modeJ.isNull then pure none else some <$> modeJ.getNat?
      return ({ name, data, mode } : ZipEntry)
    let table := fun (k : String) => do
      (← (← input.getObjVal? k).getArr?).toList.mapM fun e => return ((← (← e.getArrVal? 0).getStr?), ← e.getArrVal? 1)
    let deflate ← table "deflate"
    let crc ← table "crc32"
    let codec : ZipCodec := {
      deflate := fun d => match deflate.lookup (hex d) with
        | some j => (j.getStr? >>= unhex).toOption.getD .empty
        | none => .empty
      crc32 := fun d => match crc.lookup (hex d) with
        | some j => (j.getNat?.toOption.getD 0).toUInt32
        | none => 0 }
    return ofBytes (zipWith codec entries)
  | "encodeProcessConfiguration" =>
    let opt := fun (k : String) => do
      let j ← input.getObjVal? k
      if j.isNull then pure none else some <$> text j
    let pairsOf := fun (j : Json) => do
      (← j.getArr?).toList.mapM fun e => return ((← unhex (← (← e.getArrVal? 0).getStr?)).data.toList, (← unhex (← (← e.getArrVal? 1).getStr?)).data.toList)
    let command ← text (← input.getObjVal? "command")
    let args ← texts (← input.getObjVal? "args")
    let env ← (← (← input.getObjVal? "env").getArr?).toList.mapM fun e => return (← text (← e.getArrVal? 0), ← text (← e.getArrVal? 1))
    let directory ← opt "directory"
    let requestedCwd ← opt "requestedCwd"
    let stdioFlags ← (← (← input.getObjVal? "stdioFlags").getArr?).toList.mapM integer
    let fdJ ← input.getObjVal? "directoryFd"
    let directoryFd ← if fdJ.isNull then pure none else some <$> fdJ.getNat?
    let inheritProcessCwd ← (← input.getObjVal? "inheritProcessCwd").getBool?
    let setsid ← (← input.getObjVal? "setsid").getBool?
    let ebJ ← input.getObjVal? "envBytes"
    let envBytes ← if ebJ.isNull then pure none else some <$> pairsOf ebJ
    return ofBytes (encodeProcessConfiguration
      { command, args, env, directory, requestedCwd, stdioFlags, directoryFd, inheritProcessCwd, setsid, envBytes })
  | "launcherRead" =>
    return match launcherRead (← unhex (← input.getStr?)).data.toList with
      | none => Json.null
      | some c =>
        let hexL := fun (l : List UInt8) => toJson (hex ⟨l.toArray⟩)
        Json.mkObj [("stdio", toJson c.stdio), ("argv", toJson (c.argv.map hexL)),
          ("environ", toJson ((setenvAll c.env).map fun (k, v) => hexL (k ++ [61] ++ v)))]
  | "HandleTable" =>
    let pair := fun (e : Json) => do return ((← (← e.getArrVal? 0).getNat?), (← (← e.getArrVal? 1).getStr?))
    let entries ← (← (← input.getObjVal? "entries").getArr?).toList.mapM pair
    match HandleTable.create (← integer (← input.getObjVal? "first")) (← integer (← input.getObjVal? "last")) entries with
    | .error e => return Json.mkObj [("error", toJson e)]
    | .ok t =>
      let mut t := t
      let mut results : Array Json := #[]
      for op in (← (← input.getObjVal? "ops").getArr?) do
        match ← (← op.getArrVal? 0).getStr? with
        | "allocate" =>
          match t.allocate (← (← op.getArrVal? 1).getStr?) with
          | .ok (id, t') => t := t'; results := results.push (toJson id)
          | .error _ => results := results.push (toJson "full")
        | "delete" => t := t.delete (← (← op.getArrVal? 1).getNat?); results := results.push Json.null
        | _ => t := t.set (← (← op.getArrVal? 1).getNat?) (← (← op.getArrVal? 2).getStr?); results := results.push Json.null
      return Json.mkObj [("results", toJson results), ("entries", toJson (t.entries.map fun (k, v) => Json.arr #[toJson k, toJson v]))]
  | "componentize" =>
    let field := fun (k : String) => do unhex (← (← input.getObjVal? k).getStr?)
    return ofBytes (componentize (← field "core") (← field "template"))
  | "makeTemplate" =>
    let field := fun (k : String) => do unhex (← (← input.getObjVal? k).getStr?)
    return ofBytes (makeTemplate (← field "component") (← field "core"))
  | "extractCore" =>
    let field := fun (k : String) => do unhex (← (← input.getObjVal? k).getStr?)
    return ofBytes (extractCore (← field "component") (← field "template"))
  | "withoutComponentType" => return toJson (hex (withoutComponentType (← unhex (← input.getStr?))))
  | "initializationSchedule" =>
    return toJson (initializationSchedule (← (← input.getObjVal? "name").getStr?) (← callsOf (← input.getObjVal? "calls"))
      (← strings (← input.getObjVal? "keep")))
  | "compactInitializerWrappers" =>
    let closure ← strings (← input.getObjVal? "closure")
    let keep ← strings (← input.getObjVal? "keep")
    let calls ← callsOf (← input.getObjVal? "calls")
    let p : Plan := { closure, keep, calls }
    return match compactInitializerWrappers p with
      | .ok s => Json.mkObj [("source", toJson s)]
      | .error e => Json.mkObj [("error", toJson e)]
  | "builtinModuleClosure" =>
    return toJson (builtinModuleClosure (← callsOf (← input.getObjVal? "imports")) (← strings (← input.getObjVal? "specifiers")))
  | "editDistance" => return toJson (editDistance (← text (← input.getObjVal? "a")) (← text (← input.getObjVal? "b")))
  | "closest" =>
    return match closest (← text (← input.getObjVal? "word")) (← texts (← input.getObjVal? "candidates")) with
      | some c => ofText c
      | none => Json.null
  | "targetHint" => return ofText (targetHint (← text input))
  | "parseLasmArguments" =>
    let existing ← texts (← input.getObjVal? "existing")
    let delegated := fun (c : String) (_ : List String) => (Except.error ("delegated:" ++ c) : Except String Parsed)
    let runtime ← (← input.getObjVal? "runtime").getStr?
    let env : ArgumentsEnv := ⟨fun f => existing.contains f, runtime, delegated "init", delegated "dev", delegated "package"⟩
    return ofResult (parseLasmArgumentsWith env (← texts (← input.getObjVal? "argv")))
  | "encodeEvents" =>
    let (batch, left) := encodeEvents (← (← input.getArr?).toList.mapM eventOf)
    return Json.mkObj [("batch", toJson (hex ⟨batch.toArray⟩)), ("left", toJson left.length)]
  | "readEvents" =>
    let (events, fatal) := readEvents (← bytesOf input).data.toList
    return Json.mkObj [("events", toJson (events.map ofEvent)), ("fatal", match fatal with | some m => toJson m | none => Json.null)]
  | "frameRequest" =>
    let released ← (← (← input.getObjVal? "released").getArr?).toList.mapM (·.getNat?)
    return toJson (hex ⟨(frameRequest released (← bytesOf (← input.getObjVal? "payload")).data.toList).toArray⟩)
  | "splitRequest" =>
    return match splitRequest (← bytesOf input).data.toList with
      | .ok (released, payload) => Json.mkObj [("released", toJson released), ("payload", toJson (hex ⟨payload.toArray⟩))]
      | .error e => Json.mkObj [("error", toJson e)]
  | "frameInto" =>
    let promise := (← (← input.getObjVal? "promise").getStr?).toNat!
    return toJson (hex ⟨(frameInto promise (← bytesOf (← input.getObjVal? "input")).data.toList).toArray⟩)
  | "intoPrefix" =>
    return match intoPrefix (← bytesOf input).data.toList with
      | .ok (promise, rest) => Json.mkObj [("promise", toJson (toString promise)), ("input", toJson (hex ⟨rest.toArray⟩))]
      | .error e => Json.mkObj [("error", toJson e)]
  | "packageName" => return ofText (packageNameOf (← text input))
  | "lakeName" => return ofText (lakeNameOf (← text input))
  | "supabaseFunctionNameOf" => return ofText (supabaseNameOf (← text input))
  | "pythonJsonString" => return ofText (pythonJsonString (← text input))
  | "comparePythonStrings" => return toJson (toString (comparePythonStrings (← text (← input.getObjVal? "a")) (← text (← input.getObjVal? "b"))))
  | "resolveStaticPath" =>
    let files ← texts (← input.getObjVal? "files")
    let fallback ← match input.getObjValD "fallback" with
      | Json.null => pure none
      | j => some <$> text j
    let r := StaticServer.resolveStaticPath (fun f => files.contains (String.ofList f)) (← text (← input.getObjVal? "root")).toList
      (← text (← input.getObjVal? "pathname")).toList (← text (← input.getObjVal? "accepts")).toList (fallback.map String.toList)
    let opt := fun (o : Option (List Char)) => match o with | some l => ofText (String.ofList l) | none => Json.null
    return Json.mkObj [("status", toJson r.status), ("file", opt r.file), ("served", opt r.served),
      ("encoding", match r.encoding with | some e => toJson e | none => Json.null)]
  | "mangleName" => return ofText (Mangle.mangleNameModel (← text input))
  | "demangleName" => return ofText (Mangle.demangleNameModel (← text input))
  | "initializerModule" => return match Mangle.initializerModuleModel (← text input) with | some m => ofText m | none => Json.null
  | "leanNameMangle" =>
    let name ← (← input.getArr?).foldlM (init := Name.anonymous) fun n c => do
      match c.getArr? with
      | .ok #[s] => return n.str (← text s)
      | _ => return n.num (← c.getNat?)
    return ofText (name.mangle "")
  | "leanNameDemangle" =>
    let rec parts : Name → List String
      | .anonymous => []
      | .str p s => parts p ++ [s]
      | .num p k => parts p ++ [toString k]
    return ofText (".".intercalate (parts (Name.demangle (← text input))))
  | "applicationLinkRequirements" =>
    let initFree ← texts (← input.getObjVal? "initFree")
    let hexes := fun (l : List (List Char)) => toJson (l.map fun x => ofText (String.ofList x))
    return match Reachability.applicationLinkRequirements (fun s => initFree.contains (String.ofList s))
        (← text (← input.getObjVal? "map")).toList with
      | .error e => Json.mkObj [("error", toJson e)]
      | .ok r => Json.mkObj [("mode", toJson (if r.static then "static" else "dynamic")), ("dynamic", hexes r.dynamic),
          ("cxxRuntime", hexes r.cxxRuntime), ("moduleData", hexes r.moduleData), ("requiresModuleData", toJson r.requiresModuleData)]
  | "leanIOError" =>
    let tables ← input.getObjVal? "tables"
    let pairs := fun (j : Json) => do (← j.getArr?).toList.mapM fun p => do
      let a ← p.getArr?; return ((← (a[0]?.getD Json.null).getStr?), (← (a[1]?.getD Json.null).getStr?))
    let t : IOErrorTables := ⟨← pairs (← tables.getObjVal? "messages"), ← pairs (← tables.getObjVal? "crtAliases"),
      ← (← (← tables.getObjVal? "windowsCrtCases").getArr?).toList.mapM (·.getStr?)⟩
    let names ← (← (← input.getObjVal? "names").getArr?).toList.mapM fun p => do
      let a ← p.getArr?; return ((← (a[0]?.getD Json.null).getInt?), (← (a[1]?.getD Json.null).getStr?))
    let e ← input.getObjVal? "error"
    let optStr := fun (j : Json) => match j with | Json.null => Except.ok none | j => some <$> j.getStr?
    let err : IOErrorIn := ⟨← (← e.getObjVal? "userError").getBool?,
      ← (match e.getObjValD "errno" with | Json.null => Except.ok none | j => some <$> j.getInt?),
      ← optStr (e.getObjValD "code"), ← (← e.getObjVal? "crt").getBool?⟩
    return match leanIOErrorModel t (← (← input.getObjVal? "platform").getStr?) (← (← input.getObjVal? "version").getStr?)
        (fun n => names.lookup n) err with
      | none => Json.null
      | some (code, errno, message) => Json.mkObj [("code", match code with | some c => toJson c | none => Json.null),
          ("errno", toJson errno), ("message", toJson message)]
  | "leanAtLeast" => return toJson (leanAtLeastModel (← text (← input.getObjVal? "version")) (← text (← input.getObjVal? "minimum")))
  | "lowerAtomics" => return ofBytes (LowerAtomics.lowerAtomics (← bytesOf input))
  | "moduleImports" =>
    return match LowerAtomics.moduleImports utf8Name (← bytesOf input) with
      | .ok l => Json.mkObj [("imports", toJson (l.map fun (m, n, k) => [ofText m, ofText n, toJson k]))]
      | .error e => Json.mkObj [("error", toJson e)]
  | "keepExports" =>
    let keep ← texts (← input.getObjVal? "keep")
    return ofBytes (LowerAtomics.keepExports utf8Name (keep.contains ·) (← bytesOf (← input.getObjVal? "bytes")))
  | "parseInitArguments" => return ofResult (parseInitArguments (← texts input))
  | "parseDevArguments" =>
    return ofResult (parseDevArgumentsWith (← (← input.getObjVal? "runtime").getStr?) (← texts (← input.getObjVal? "tokens")))
  | "parsePackageArguments" => return ofResult (parsePackageArguments (← texts input))
  | m => throw s!"no model {m}"

def main : IO Unit := do
  let stdin ← IO.getStdin
  let stdout ← IO.getStdout
  repeat
    let line ← stdin.getLine
    if line.isEmpty then break
    let out := match Json.parse line >>= answer with
      | .ok j => Json.mkObj [("ok", j)]
      | .error e => Json.mkObj [("fault", toJson e)]
    stdout.putStrLn out.compress
    stdout.flush
