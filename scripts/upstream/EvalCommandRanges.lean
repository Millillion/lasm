import Lean
import Std.Http

open Lean

-- Only identifies syntax ranges. This program does not execute, elaborate or
-- change an upstream test. The caller preserves every expression byte.
private partial def evalCount (stx : Syntax) : Nat :=
  (if stx.isOfKind ``Parser.Command.eval || stx.isOfKind ``Parser.Command.evalBang then 1 else 0) +
    stx.getArgs.foldl (fun n child => n + evalCount child) 0

unsafe def main (args : List String) : IO Unit := do
  let [file] := args | throw <| IO.userError "Supply one source filename"
  initSearchPath (← findSysroot)
  enableInitializersExecution
  let env ← importModules (loadExts := true) #[{ module := `Lean }, { module := `Std.Http }] {}
  let source ← IO.FS.readFile file
  let input := Parser.mkInputContext source file
  let (_, initial, initialMessages) ← Parser.parseHeader input
  let mut state := initial
  let mut messages := initialMessages
  let mut ranges : Array Json := #[]
  let mut kinds : Array String := #[]
  repeat
    let (stx, next, moreMessages) := Parser.parseCommand input { env, options := {} } state messages
    state := next
    messages := moreMessages
    if Parser.isTerminalCommand stx then
      unless stx.isOfKind ``Parser.Command.eoi do
        throw <| IO.userError "Unexpected terminal command in parallel IO test"
      break
    kinds := kinds.push stx.getKind.toString
    let count := evalCount stx
    if count > 0 then
      unless count == 1 && stx.isOfKind ``Parser.Command.eval do
        throw <| IO.userError "Only unwrapped top-level #eval is supported; guards and #eval! stay unmapped"
      let token := stx[0]
      let some start := token.getPos? | throw <| IO.userError "Missing original #eval position"
      let some stop := token.getTailPos? | throw <| IO.userError "Missing original #eval end"
      let some termStart := stx[1].getPos? | throw <| IO.userError "Missing expression position"
      let some termStop := stx[1].getTailPos? | throw <| IO.userError "Missing expression end"
      ranges := ranges.push <| Json.mkObj [
        ("start", toJson start.byteIdx), ("stop", toJson stop.byteIdx),
        ("termStart", toJson termStart.byteIdx), ("termStop", toJson termStop.byteIdx)]
  if messages.hasErrors then
    messages.forM fun message => message.toString >>= IO.eprintln
    throw <| IO.userError "Parallel IO syntax inspection failed"
  IO.println <| (Json.mkObj [("ranges", toJson ranges), ("commandKinds", toJson kinds)]).compress
