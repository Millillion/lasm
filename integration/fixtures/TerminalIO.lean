import Init

private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

private def backpressure (input output errors : IO.FS.Stream) : IO Unit := do
  let bytes := ByteArray.mk ((List.range 16384).toArray.map UInt8.ofNat)
  let writing ← IO.asTask do
    output.write bytes
    output.flush
  errors.putStr "writing\n"
  errors.flush
  -- The external driver sends this only after measuring a completely full
  -- 4096-byte OS pipe, and keeps that pipe unread during the task-state check.
  ensure ((← input.getLine) == "full\n") "full-pipe notification"
  ensure (!(← IO.hasFinished writing)) "the full-pipe writer must remain pending"
  errors.putStr "writer blocked\n"
  errors.flush
  IO.ofExcept (← IO.wait writing)
  errors.putStr "backpressure checks passed\n"
  errors.flush

/- Supplementary POSIX terminal coverage. The driver supplies a real controlling
terminal in raw mode and waits for the concurrent timer before sending input. -/
def main (args : List String) : IO Unit := do
  let input ← IO.getStdin
  let output ← IO.getStdout
  let errors ← IO.getStderr
  ensure (← input.isTty) "stdin must be a terminal"
  ensure (← errors.isTty) "stderr must be a terminal"
  ensure ((← output.isTty) == (args.head! == "terminal")) "stdout terminal detection"
  if args.head! == "backpressure" then
    backpressure input output errors
    return
  IO.FS.withFile "/dev/tty" .read fun h => do
    ensure (← h.isTty) "opened controlling-terminal handle"
    ensure (← (IO.FS.Stream.ofHandle h).isTty) "opened controlling-terminal stream"
  output.putStr "ready\n"
  output.flush
  let ticking ← IO.asTask do
    IO.sleep 25
    errors.putStr "tick\n"
    errors.flush
  let line ← input.getLine
  ensure (line == "λ first\r\n") "raw terminal line bytes"
  let bytes ← input.read 8
  ensure (bytes == ByteArray.mk #[0, 255, 128, 10, 13, 65, 195, 169]) "buffered binary bytes after line"
  IO.ofExcept ticking.get
  let mut allBytes := ByteArray.empty
  for i in [:256] do allBytes := allBytes.push i.toUInt8
  output.write allBytes
  output.flush
  errors.putStr "terminal checks passed\n"
  errors.flush
