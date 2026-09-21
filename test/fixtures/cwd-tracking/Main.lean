import Init

deriving instance Repr for IO.Error

private def probe (label : String) (action : IO String) : IO Unit := do
  (← IO.getStdout).flush
  try IO.println s!"{label}: {repr (← action)}"
  catch error => IO.println s!"{label}: {repr error}"

private def output (args : IO.Process.SpawnArgs) : IO String := do
  let result ← IO.Process.output args
  return s!"{result.exitCode}: {repr result.stdout}, {repr result.stderr}"

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let root : System.FilePath := directory
  let original ← IO.Process.getCurrentDir
  let before := root / "before"
  let after := root / "after"
  IO.FS.createDir before
  IO.FS.writeFile (before / "payload") "preserved"
  try
    IO.Process.setCurrentDir before
    IO.FS.rename before after
    probe "renamed process cwd" do return (← IO.Process.getCurrentDir).toString
    probe "renamed legacy cwd" do return (← IO.currentDir).toString
    probe "renamed relative read" <| IO.FS.readFile "payload"
    probe "renamed child cwd" <| output { cmd := "/bin/pwd" }
    probe "renamed relative chdir" do
      IO.Process.setCurrentDir ".."
      let current ← IO.Process.getCurrentDir
      IO.Process.setCurrentDir after
      return current.toString
    -- Restore by an absolute path so an earlier failed probe cannot spoil the
    -- deleted-directory controls.
    IO.Process.setCurrentDir after
    IO.FS.removeFile (after / "payload")
    IO.FS.removeDir after
    -- Test Process.getCurrentDir after deletion in a separate process: the
    -- pinned native error decoder dereferences a null filename for ENOENT.
    probe "deleted legacy cwd" do return (← IO.currentDir).toString
    probe "deleted relative metadata" do
      return reprStr (← ("." : System.FilePath).metadata).type
    probe "deleted relative readDir" do
      return reprStr ((← ("." : System.FilePath).readDir).map (·.fileName))
    probe "deleted inherited child cwd" <| output { cmd := "/bin/true" }
    probe "deleted dot child cwd" <| output { cmd := "/bin/true", cwd := some "." }
    probe "deleted absolute child recovery" <| output { cmd := "/bin/pwd", cwd := some root }
    probe "deleted relative chdir" do
      IO.Process.setCurrentDir ".."
      return (← IO.Process.getCurrentDir).toString
  finally IO.Process.setCurrentDir original
  IO.println "cwd tracking comparison completed"
