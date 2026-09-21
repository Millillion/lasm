import Init

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let root : System.FilePath := directory
  let expected := ((root / "target").toString ++ "\n")
  let absolute := root / "base" / "link" / ".."
  let first ← IO.Process.output { cmd := "/bin/pwd", cwd := some absolute }
  unless first.exitCode == 0 && first.stdout == expected && first.stderr == "" do
    throw <| IO.userError s!"absolute symlink cwd: {repr first.stdout}, {repr first.stderr}"
  IO.Process.setCurrentDir (root / "base")
  let second ← IO.Process.output { cmd := "/bin/pwd", cwd := some "link/.." }
  unless second.exitCode == 0 && second.stdout == expected && second.stderr == "" do
    throw <| IO.userError s!"relative symlink cwd: {repr second.stdout}, {repr second.stderr}"
  IO.println "process cwd comparison completed"
