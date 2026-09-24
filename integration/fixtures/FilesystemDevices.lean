import Init

deriving instance Repr for IO.Error

private def check (name : String) (condition : Bool) : IO Unit := do
  unless condition do throw <| IO.userError name
  IO.println s!"ok: {name}"

private def observe (name : String) (action : IO Unit) : IO Unit := do
  try
    action
    IO.println s!"{name}: ok"
  catch error => IO.println s!"{name}: error {repr error}"

-- Linux character/pseudo devices exercise short reads and actual kernel write
-- failures. Every read/write is bounded; no read-to-end is used on /dev/zero.
def main (_args : List String) : IO Unit := do
  IO.FS.withFile "/dev/null" .read fun h => do
    check "null zero-byte read" ((← h.read 0).isEmpty)
    check "null read is EOF" ((← h.read 257).isEmpty)
    check "null line is EOF" ((← h.getLine).isEmpty)
    h.rewind
    check "null rewind remains EOF" ((← h.read 1).isEmpty)
    check "null is not a terminal" (!(← h.isTty))
  IO.FS.withFile "/dev/null" .write fun h => do
    h.write (ByteArray.mk (Array.replicate 65537 171))
    h.flush
    IO.println "ok: null accepts flushed binary output"
  for name in ["/dev/zero", "/dev/full"] do
    IO.FS.withFile name .read fun h => do
      let bytes ← h.read 257
      check s!"{name} returns exactly requested zero bytes"
        (bytes.size == 257 && bytes.data.all (· == 0))
      h.rewind
      check s!"{name} remains readable after rewind" ((← h.read 1).data == #[0])
    let metadata ← (System.FilePath.mk name).metadata
    check s!"{name} has device metadata"
      (metadata.type != .file && metadata.type != .dir && metadata.type != .symlink)
  IO.FS.withFile "/dev/full" .write fun h => do
    observe "full buffered write" <| h.putStr "buffered payload"
    observe "full flush" h.flush
    observe "full repeated flush" h.flush
    observe "full write after error" <| h.write (ByteArray.mk (Array.replicate 65537 255))
    observe "full flush after large write" h.flush
  observe "full high-level small write" <| IO.FS.writeFile "/dev/full" "small payload"
  observe "full high-level large write" <|
    IO.FS.writeBinFile "/dev/full" (ByteArray.mk (Array.replicate 65537 255))
  for name in ["/dev/null", "/dev/zero", "/dev/full"] do
    IO.FS.withFile name .readWrite fun h =>
      observe s!"{name} truncate" h.truncate
  let proc := System.FilePath.mk "/proc/version"
  check "proc reports zero byte size" ((← proc.metadata).byteSize == 0)
  check "zero-size proc file still has readable content" ((← IO.FS.readFile proc).startsWith "Linux version ")
  IO.println "filesystem device observations completed"
