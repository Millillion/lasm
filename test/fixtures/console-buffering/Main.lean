import Init

private def child (text : String) (stderr := false) (inheritInput := true) : IO Unit := do
  let command := if stderr then "printf '%s' \"$1\" >&2" else "printf '%s' \"$1\""
  let process ← IO.Process.spawn {
    cmd := "/bin/sh"
    args := #["-c", command, "sh", text]
    stdin := if inheritInput then .inherit else .null }
  let status ← process.wait
  unless status == 0 do throw <| IO.userError s!"child exit: {status}"

def main : IO Unit := do
  let out ← IO.getStdout
  let err ← IO.getStderr
  out.putStr "unflushed parent before|"
  child "unflushed child|"
  out.putStr "unflushed parent after\n"
  out.flush
  out.putStr "redirected-stdin parent before|"
  child "redirected-stdin child|" (inheritInput := false)
  out.putStr "redirected-stdin parent after\n"
  out.flush
  out.putStr "flushed parent before|"
  out.flush
  child "flushed child|"
  out.putStr "flushed parent after\n"
  out.flush
  err.putStr "stderr parent before|"
  child "stderr child|" (stderr := true)
  err.putStr "stderr parent after\n"
  err.flush
  out.putStr "normal shutdown flush\n"
