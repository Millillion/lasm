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
  let revoked := root / "revoked"
  let original ← IO.Process.getCurrentDir
  IO.FS.createDir revoked
  IO.FS.writeFile (revoked / "payload") "preserved"
  try
    IO.Process.setCurrentDir revoked
    IO.setAccessRights revoked {}
    probe "revoked cwd query" do return (← IO.Process.getCurrentDir).toString
    probe "revoked legacy cwd query" do return (← IO.currentDir).toString
    probe "revoked relative file" <| IO.FS.readFile "payload"
    probe "revoked relative reentry" do
      IO.Process.setCurrentDir "."
      return "entered"
    probe "revoked inherited child" <| output { cmd := "/bin/true" }
    probe "revoked explicit dot child" <| output { cmd := "/bin/true", cwd := some "." }
    probe "revoked absolute child" <| output { cmd := "/bin/true", cwd := some root }
    IO.setAccessRights revoked { user := { execution := true } }
    probe "search-only relative file" <| IO.FS.readFile "payload"
    probe "search-only inherited child" <| output { cmd := "/bin/true" }
    probe "search-only explicit dot child" <| output { cmd := "/bin/true", cwd := some "." }
  finally
    IO.setAccessRights revoked { user := { read := true, write := true, execution := true } }
    IO.Process.setCurrentDir original
    IO.FS.removeFile (revoked / "payload")
    IO.FS.removeDir revoked
  IO.println "cwd permission comparison completed"
