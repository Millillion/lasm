import Lean

open Lean

/-!
Syntax survey for the Server MVP runtime adapter. It parses one upstream test
against exactly the modules its own header imports and reports every top-level
command with UTF-8 byte ranges. It never elaborates or executes test commands
and never writes the test. `#guard_msgs` wrappers report their doc comment,
optional specification and wrapped command; `#eval` and `#guard` report their
token and term ranges. The caller decides which forms have reviewed runtime
equivalents; everything else stays native build-time coverage.
-/

private def range (stx : Syntax) : Option Json := do
  let start ← stx.getPos?
  let stop ← stx.getTailPos?
  return Json.mkObj [("start", toJson start.byteIdx), ("stop", toJson stop.byteIdx)]

private partial def describe (stx : Syntax) : Json :=
  let kind := stx.getKind
  let base : List (String × Json) := [("kind", toJson kind.toString), ("range", toJson (range stx))]
  if kind == ``Parser.Command.eval || kind == ``Parser.Command.evalBang then
    Json.mkObj (base ++ [("token", toJson (range stx[0])), ("term", toJson (range stx[1]))])
  else if kind == `Lean.guardCmd then
    Json.mkObj (base ++ [("token", toJson (range stx[0])), ("term", toJson (range stx[1]))])
  else if kind == `Lean.guardMsgsCmd then
    -- (plainDocComment)? "#guard_msgs" (guardMsgsSpec)? " in" command
    Json.mkObj (base ++ [("doc", toJson (range stx[0])), ("token", toJson (range stx[1])),
      ("spec", toJson (range stx[2])), ("in", toJson (range stx[3])), ("command", describe stx[4])])
  else Json.mkObj base

/-- Parse one file. `cache` holds the most recent import set and environment;
consecutive files with the same header reuse it instead of remapping modules. -/
unsafe def surveyFile (cache : IO.Ref (Option (String × Environment))) (file : String) : IO Json := do
  let source ← IO.FS.readFile file
  let input := Parser.mkInputContext source file
  let (header, initial, initialMessages) ← Parser.parseHeader input
  let imports := Elab.headerToImports header
  let key := toString (imports.map (·.module))
  let env ← match ← cache.get with
    | some (cached, env) => if cached == key then pure env else
        -- Releasing regions here is unsafe while results may reference them.
        throw <| IO.userError "One process per import set; group files by header first"
    | none => do
        enableInitializersExecution
        importModules (loadExts := true) imports {}
  cache.set (some (key, env))
  let mut state := initial
  let mut messages := initialMessages
  let mut commands : Array Json := #[]
  repeat
    let (stx, next, moreMessages) := Parser.parseCommand input { env, options := {} } state messages
    state := next
    messages := moreMessages
    if Parser.isTerminalCommand stx then
      unless stx.isOfKind ``Parser.Command.eoi do
        throw <| IO.userError "Unexpected terminal command"
      break
    commands := commands.push (describe stx)
  if messages.hasErrors then
    let texts ← messages.toList.mapM (·.toString)
    throw <| IO.userError ("Syntax survey failed: " ++ String.join texts)
  let headerEnd := (range header).map (·.getObjValD "stop") |>.getD (toJson 0)
  return Json.mkObj [("file", toJson file), ("headerStop", headerEnd),
    ("imports", toJson (imports.map (·.module.toString))), ("commands", toJson commands)]

/-- One JSON line per file; a file's failure is reported, not fatal. Every file
in one invocation must share the same imports. -/
unsafe def main (args : List String) : IO Unit := do
  if args.isEmpty then throw <| IO.userError "Supply source filenames"
  initSearchPath (← findSysroot)
  let cache ← IO.mkRef none
  for file in args do
    let line ← try surveyFile cache file catch error =>
      pure <| Json.mkObj [("file", toJson file), ("error", toJson (toString error))]
    IO.println line.compress
    (← IO.getStdout).flush
