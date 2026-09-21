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
  probe "command NUL" <| output { cmd := "/bin/printf\x00ignored", args := #["%s", "command"] }
  probe "argument NUL" <| output { cmd := "/bin/printf", args := #["%s:%s", "prefix\x00suffix", "tail"] }
  probe "child cwd NUL" <| output { cmd := "/bin/pwd", cwd := some (directory ++ "\x00ignored") }
  probe "missing command NUL" <| output { cmd := (root / "missing").toString ++ "\x00ignored" }
  probe "empty command NUL" <| output { cmd := "\x00ignored" }
  probe "environment NUL" <| output {
    cmd := "/bin/sh", args := #["-c", "printf '%s:%s' \"$LASM_KEY\" \"$LASM_VALUE\""],
    inheritEnv := false,
    env := #[("LASM_KEY\x00ignored", some "first"), ("LASM_KEY\x00other", some "last"),
      ("LASM_VALUE", some "prefix\x00suffix")] }
  probe "environment removal NUL" <| output {
    cmd := "/bin/sh", args := #["-c", "printf '%s' \"${LASM_NUL_CONTROL-unset}\""],
    env := #[("LASM_NUL_CONTROL\x00ignored", none)] }
  probe "environment invalid keys" <| output {
    cmd := "/bin/sh", args := #["-c", "printf '%s' \"$LASM_VALUE\""], inheritEnv := false,
    env := #[("", some "ignored"), ("INVALID=KEY", some "ignored"), ("LASM_VALUE", some "valid")] }
  probe "getEnv ordinary" do return reprStr (← IO.getEnv "LASM_NUL_CONTROL")
  probe "getEnv NUL" do return reprStr (← IO.getEnv "LASM_NUL_CONTROL\x00ignored")
  probe "setCurrentDir NUL" do
    try
      IO.Process.setCurrentDir (directory ++ "\x00ignored")
      return (← IO.Process.getCurrentDir).toString
    finally IO.Process.setCurrentDir original
  probe "setCurrentDir missing NUL" do
    try
      IO.Process.setCurrentDir ((root / "missing").toString ++ "\x00ignored")
      return "unexpected success"
    finally IO.Process.setCurrentDir original
  let file := root / "sentinel"
  let bad : System.FilePath := file.toString ++ "\x00ignored"
  probe "readFile still rejects NUL" <| IO.FS.readFile bad
  probe "metadata still rejects NUL" do discard <| bad.metadata; return "unexpected success"
  probe "rename source still rejects NUL" do IO.FS.rename bad (root / "destination"); return "unexpected success"
  probe "rename target still rejects NUL" do IO.FS.rename file bad; return "unexpected success"
  unless (← IO.FS.readFile file) == "unchanged" do throw <| IO.userError "filesystem NUL control changed data"
  IO.println "process NUL comparison completed"
