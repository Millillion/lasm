import Init

def main (args : List String) : IO UInt32 := do
  let mode := args[0]!
  let file ← IO.FS.Handle.mk (System.FilePath.mk args[1]!) .write
  let out ← IO.getStdout
  let err ← IO.getStderr
  file.putStr "buffered file\n"
  out.putStr "buffered stdout\n"
  err.putStr "unbuffered stderr\n"
  if mode == "exit" then IO.Process.exit 17
  if mode == "force" then IO.Process.forceExit 19
  -- Keep both handles live across the exit calls. Native exit flushes them;
  -- native forceExit bypasses the normal process-shutdown flushes.
  file.putStr ""
  out.putStr ""
  return 0
