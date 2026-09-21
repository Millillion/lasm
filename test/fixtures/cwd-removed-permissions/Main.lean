import Init

private def report (label : String) (args : IO.Process.SpawnArgs) : IO Unit := do
  (← IO.getStdout).flush
  let output ← IO.Process.output args
  IO.println s!"{label}: {output.exitCode}, {repr output.stdout}, {repr output.stderr}"

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let root : System.FilePath := directory
  let removed := root / "removed-revoked"
  let original ← IO.Process.getCurrentDir
  IO.FS.createDir removed
  try
    IO.Process.setCurrentDir removed
    IO.setAccessRights removed {}
    IO.FS.removeDir removed
    report "inherited cwd" { cmd := "/bin/true" }
    report "explicit dot cwd" { cmd := "/bin/true", cwd := some "." }
    report "absolute cwd" { cmd := "/bin/true", cwd := some root }
    report "missing executable" { cmd := "/lasm-test-no-such-executable" }
    report "PATH search" { cmd := "true", inheritEnv := false, env := #[("PATH", some "/bin")] }
    let value := String.ofList (List.replicate 100000 'x')
    let output ← IO.Process.output {
      cmd := "/usr/bin/printenv", args := #["LASM_FIXTURE_ENV"],
      inheritEnv := false, env := #[("LASM_FIXTURE_ENV", some value)] }
    unless output.exitCode == 0 && output.stdout == value ++ "\n" && output.stderr == "" do
      throw <| IO.userError "large environment did not survive inherited cwd"
    IO.println "large environment preserved"
  finally
    IO.Process.setCurrentDir original
    if ← removed.pathExists then
      IO.setAccessRights removed { user := { read := true, write := true, execution := true } }
      IO.FS.removeDir removed
  IO.println "removed cwd permission comparison completed"
