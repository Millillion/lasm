import Init

deriving instance Repr for IO.Error

private def probe (label : String) (command : String) (cwd : Option System.FilePath := none) : IO Unit := do
  -- Keep this comparison about child errors. Native fork can otherwise copy
  -- earlier buffered diagnostics into the failing child's redirected stdout.
  (← IO.getStdout).flush
  try
    let child ← IO.Process.spawn {
      cmd := command, cwd, stdin := .null, stdout := .piped, stderr := .piped }
    unless child.pid > 0 do throw <| IO.userError "expected a real child PID"
    let stdout ← child.stdout.readToEnd
    let stderr ← child.stderr.readToEnd
    let exitCode ← child.wait
    IO.println s!"{label}: child {exitCode}, stdout {repr stdout}, stderr {repr stderr}"
  catch error => IO.println s!"{label}: parent error {repr error}"

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let root : System.FilePath := directory
  probe "missing executable" (root / "missing").toString
  probe "nonexecutable file" (root / "file").toString
  probe "directory executable" root.toString
  probe "empty command" ""
  probe "missing cwd" "/bin/true" (some (root / "missing"))
  probe "file cwd" "/bin/true" (some (root / "file"))
  probe "denied cwd" "/bin/true" (some (root / "denied"))
  probe "loop cwd" "/bin/true" (some (root / "loop"))
  probe "empty cwd" "/bin/true" (some "")
  probe "relative missing cwd" "/bin/true" (some "lasm-missing-relative-spawn-directory")
  probe "valid process" "/bin/true" (some root)
  let child ← IO.Process.spawn {
    cmd := "/bin/sh", args := #["-c", "printf '%s\\n' \"$$\" \"$NODE_OPTIONS\" \"$LASM_PAYLOAD\" \"$__proto__\""],
    stdin := .null, stdout := .piped, stderr := .piped,
    inheritEnv := false,
    env := #[("NODE_OPTIONS", some "--lasm-not-a-node-option"), ("LASM_PAYLOAD", some "literal $HOME `echo no` \"quote\""),
      ("__proto__", some "ordinary environment key")] }
  let actual ← child.stdout.readToEnd
  unless actual == s!"{child.pid}\n--lasm-not-a-node-option\nliteral $HOME `echo no` \"quote\"\nordinary environment key\n"
    do throw <| IO.userError s!"PID or literal environment mismatch: {repr actual}"
  unless (← child.stderr.readToEnd).isEmpty && (← child.wait) == 0
    do throw <| IO.userError "valid child failed"
  IO.println "real PID and literal environment matched"
  let text ← IO.Process.output {
    cmd := "executable-text", args := #["literal $HOME `echo no`"],
    inheritEnv := false, env := #[("PATH", some root.toString)] }
  unless text.exitCode == 0 && text.stdout == "literal $HOME `echo no`\n" && text.stderr.isEmpty
    do throw <| IO.userError s!"PATH or executable-text fallback mismatch: {repr text.stdout}"
  IO.println "native PATH search and executable-text fallback matched"
  let pipes ← IO.Process.output {
    cmd := "/bin/sh", args := #["-c", "printf '%100000s' >&2; printf '%100001s'"] }
  unless pipes.exitCode == 0 && pipes.stdout.length == 100001 && pipes.stderr.length == 100000
    do throw <| IO.userError s!"raw shell pipe output truncated: {pipes.stdout.length}, {pipes.stderr.length}"
  IO.println "raw shell output exceeds both pipe capacities without truncation"
  let original ← IO.Process.getCurrentDir
  let removed := root / "removed-cwd"
  IO.FS.createDir removed
  IO.Process.setCurrentDir removed
  IO.FS.removeDir removed
  let recovered ← IO.Process.output { cmd := "/bin/pwd", cwd := some original }
  IO.Process.setCurrentDir original
  unless recovered.exitCode == 0 && recovered.stdout == original.toString ++ "\n" && recovered.stderr.isEmpty
    do throw <| IO.userError "absolute child cwd did not recover from a removed parent directory"
  IO.println "absolute child cwd recovers from a removed parent directory"
  IO.println "process spawn error comparison completed"
