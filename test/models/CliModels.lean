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
-/
import Lean.Data.Json
import Lasm.Cli.Model.BuiltinModules
import Lasm.Cli.Model.CliArguments
import Lasm.Cli.Model.Dev
import Lasm.Cli.Model.EdgeInitializers
import Lasm.Cli.Model.NodeHost
import Lasm.Cli.Model.Platform
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
    field "output" (p.output?.map ofText), field "input" (p.input?.map ofText)].filterMap id)

def ofResult : Except String Parsed → Json
  | .ok p => Json.mkObj [("parsed", ofParsed p)]
  | .error e => Json.mkObj [("error", ofText e)]

def texts (j : Json) : Except String (List String) := do
  (← j.getArr?).toList.mapM text

/-- Bytes, or the message thrown. -/
def ofBytes : Except String ByteArray → Json
  | .ok b => Json.mkObj [("bytes", toJson (hex b))]
  | .error e => Json.mkObj [("error", toJson e)]

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
