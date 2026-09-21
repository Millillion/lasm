import Init

deriving instance Repr for IO.Error

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  IO.FS.createDir directory
  IO.Process.setCurrentDir directory
  IO.FS.removeDir directory
  IO.println "before deleted process cwd"
  (← IO.getStdout).flush
  try IO.println s!"cwd: {repr (← IO.Process.getCurrentDir).toString}"
  catch error => IO.println s!"error: {repr error}"
