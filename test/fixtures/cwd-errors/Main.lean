import Init

deriving instance Repr for IO.Error

private def probe (label : String) (path : System.FilePath) : IO Unit := do
  let before ← IO.Process.getCurrentDir
  try
    IO.Process.setCurrentDir path
    IO.Process.setCurrentDir before
    IO.println s!"{label}: ok"
  catch error =>
    unless (← IO.Process.getCurrentDir) == before do
      throw <| IO.userError "failed chdir changed the current directory"
    IO.println s!"{label}: {repr error}"

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let root : System.FilePath := directory
  probe "missing" (root / "missing")
  probe "regular file" (root / "file")
  probe "file component" (root / "file" / "child")
  probe "empty" ""
  probe "symlink loop" (root / "loop")
  probe "search denied" (root / "denied")
  probe "search without read" (root / "search-only")
  IO.println "cwd error comparison completed"
