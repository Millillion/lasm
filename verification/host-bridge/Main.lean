import HostBridge
open HostBridge

def usage : String :=
  "usage: host-bridge check [--large] [TRACES]  every configuration (mutants must fail), then the\n" ++
  "                                            trace self-test: TRACES/conforming/*.trace must conform,\n" ++
  "                                            TRACES/drifted/*.trace must not (default: traces)\n" ++
  "       host-bridge trace FILE...             recorded traces against the model"

/-- A trace file: a header line `slot sync` or `slot generic`, then one event per line. -/
def checkTrace (path : System.FilePath) : IO (Except String String) := do
  let lines := (← IO.FS.lines path).filter (fun l => !l.isEmpty && !l.startsWith "#")
  let some header := lines[0]? | return .error s!"{path}: empty trace"
  let sync := header == "slot sync"
  let cfg : Sync.Config := { name := path.toString, sync, calls := #[], trace := true, spurious := true, timeouts := true }
  return match conforms (Sync.initial cfg) (Sync.next cfg) (lines.extract 1 lines.size) with
  | .ok n => .ok s!"{path}: {lines.size - 1} events conform ({n} model states considered)"
  | .error (k, message) => .error s!"{path}: {message} (line {k + 2})"

def tracesIn (dir : System.FilePath) : IO (Array System.FilePath) := do
  if !(← dir.isDir) then return #[]
  let entries ← dir.readDir
  return (entries.filter (·.fileName.endsWith ".trace")).map (·.path) |>.qsort (·.toString < ·.toString)

def runChecks (large : Bool) (traces : System.FilePath) : IO UInt32 := do
  let mut failures := 0
  let cases := allCases ++ (if large then largeCases else [])
  for c in cases do
    let start ← IO.monoMsNow
    let r := c.run ()
    let ms := (← IO.monoMsNow) - start
    let good := c.expect.matches r.verdict
    IO.println s!"{if good then "PASS" else "FAIL"} ({ms} ms) expected {c.expect.text}; {r.describe}"
    if !good then failures := failures + 1
  -- The conformance checker must accept real traces and reject drifted ones.
  let good ← tracesIn (traces / "conforming")
  let drifted ← tracesIn (traces / "drifted")
  for f in good do
    match ← checkTrace f with
    | .ok m => IO.println s!"PASS conforming trace {m}"
    | .error m => IO.println s!"FAIL conforming trace rejected: {m}"; failures := failures + 1
  for f in drifted do
    match ← checkTrace f with
    | .ok m => IO.println s!"FAIL drifted trace accepted: {m}"; failures := failures + 1
    | .error m => IO.println s!"PASS drifted trace rejected: {m}"
  let total := cases.length + good.size + drifted.size
  if good.isEmpty || drifted.isEmpty then
    IO.println s!"FAIL no trace self-test in {traces}"; failures := failures + 1
  IO.println s!"{total - failures}/{total} checks as expected"
  return if failures == 0 then 0 else 1

def main (args : List String) : IO UInt32 := do
  match args with
  | "check" :: rest =>
    let large := rest.contains "--large"
    let traces := (rest.filter (· != "--large")).head?.getD "traces"
    runChecks large traces
  | "trace" :: files@(_ :: _) =>
    let mut ok := true
    for f in files do
      match ← checkTrace f with
      | .ok m => IO.println s!"OK {m}"
      | .error m => IO.println s!"NONCONFORMING {m}"; ok := false
    return if ok then 0 else 1
  | _ => IO.eprintln usage; return 2
