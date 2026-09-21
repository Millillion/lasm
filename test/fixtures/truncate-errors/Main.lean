import Init

deriving instance Repr for IO.Error

private def probe (label : String) (action : IO Unit) : IO Unit := do
  try
    action
    IO.println s!"{label}: ok"
  catch error => IO.println s!"{label}: {repr error}"

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let file : System.FilePath := System.FilePath.mk directory / "regular"
  IO.FS.writeFile file "abcdef"
  let reader ← IO.FS.Handle.mk file .read
  probe "read-only regular truncate" reader.truncate
  let fileHandle ← IO.FS.Handle.mk file .readWrite
  let _ ← fileHandle.read 2
  probe "regular truncate at read cursor" fileHandle.truncate
  IO.println s!"regular contents: {repr (← IO.FS.readFile file)}"
  let child ← IO.Process.spawn { cmd := "/bin/true", stdin := .piped, stdout := .piped }
  probe "pipe reader truncate" child.stdout.truncate
  probe "pipe writer truncate" child.stdin.truncate
  IO.println s!"child exit: {← child.wait}"
  IO.FS.removeFile file
  IO.println "truncate error comparison completed"
