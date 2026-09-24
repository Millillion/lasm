import Init

private def check (name : String) (condition : Bool) : IO Unit := do
  unless condition do throw <| IO.userError name
  IO.println s!"ok: {name}"

private def handles (root : System.FilePath) : IO Unit := do
  let path := root / "handles"
  IO.FS.withFile path .writeNew fun h => do
    h.putStrLn "first λ"
    h.write "second\r\nlast".toUTF8
    h.flush
    check "regular handle is not a terminal" (!(← h.isTty))
  IO.FS.withFile path .read fun h => do
    check "read zero bytes" ((← h.read 0).isEmpty)
    check "handle getLine Unicode" ((← h.getLine) == "first λ\n")
    check "handle lines CRLF and final partial line" ((← h.lines) == #["second", "last"])
    check "handle EOF" ((← h.read 8).isEmpty)
    h.rewind
    check "rewind clears EOF" ((← h.getLine) == "first λ\n")
    check "handle readBinToEndInto keeps prefix" ((← h.readBinToEndInto "prefix:".toUTF8) == "prefix:second\r\nlast".toUTF8)
    h.rewind
    check "handle readToEnd" ((← h.readToEnd) == "first λ\nsecond\r\nlast")
    h.rewind
    check "handle readBinToEnd" ((← h.readBinToEnd) == "first λ\nsecond\r\nlast".toUTF8)
  check "filesystem lines" ((← IO.FS.lines path) == #["first λ", "second", "last"])
  IO.FS.withFile path .write fun h => h.putStr "abc"
  check "write mode truncates" ((← IO.FS.readFile path) == "abc")
  IO.FS.withFile path .append fun h => do
    h.rewind
    h.putStr "def"
    h.flush
  check "append mode survives rewind" ((← IO.FS.readFile path) == "abcdef")
  IO.FS.withFile path .readWrite fun h => do
    discard <| h.read 3
    h.truncate
  check "truncate at read cursor" ((← IO.FS.readFile path) == "abc")
  let escaped ← IO.FS.withFile path .read fun h => pure h
  check "withFile escaped handle remains open" ((← escaped.readToEnd) == "abc")
  IO.FS.withFile (root / "new-append") .append fun h => h.putStr "created"
  check "append creates missing file" ((← IO.FS.readFile (root / "new-append")) == "created")

private def streams (root : System.FilePath) : IO Unit := do
  let path := root / "stream"
  IO.FS.withFile path .write fun h => do
    let s := IO.FS.Stream.ofHandle h
    s.write "a\r\n".toUTF8
    s.putStrLn "β"
    s.putStr "last"
    s.flush
    check "handle stream terminal query" (!(← s.isTty))
  IO.FS.withFile path .read fun h => do
    let s := IO.FS.Stream.ofHandle h
    check "stream lines" ((← s.lines) == #["a", "β", "last"])
    h.rewind
    check "stream getLine" ((← s.getLine) == "a\r\n")
    check "stream readToEnd" ((← s.readToEnd) == "β\nlast")
    h.rewind
    check "stream readBinToEndInto" ((← s.readBinToEndInto (ByteArray.mk #[0, 255])) == ByteArray.mk #[0, 255] ++ "a\r\nβ\nlast".toUTF8)
    h.rewind
    check "stream readBinToEnd" ((← s.readBinToEnd) == "a\r\nβ\nlast".toUTF8)
  let buffer ← IO.mkRef ({ data := "one\ntwo".toUTF8 } : IO.FS.Stream.Buffer)
  let s := IO.FS.Stream.ofBuffer buffer
  check "buffer getLine" ((← s.getLine) == "one\n")
  check "buffer cursor" ((← buffer.get).pos == 4)
  check "buffer partial read" ((← s.read 2) == "tw".toUTF8)
  s.putStr "λ"
  check "buffer overwrite extends" ((← buffer.get).data == "one\ntwλ".toUTF8)
  s.flush
  check "buffer terminal query" (!(← s.isTty))
  let (captured, value) ← IO.FS.withIsolatedStreams do
    check "isolated stdin EOF" ((← (← IO.getStdin).getLine).isEmpty)
    IO.print "out|"
    IO.eprintln "err"
    pure (42 : Nat)
  check "isolated streams capture both channels" (captured == "ok: isolated stdin EOF\nout|err\n" && value == 42)
  let bad ← IO.mkRef ({ data := ByteArray.mk #[255] } : IO.FS.Stream.Buffer)
  let rejected ← try
      discard <| (IO.FS.Stream.ofBuffer bad).readToEnd
      pure false
    catch _ => pure true
  check "stream invalid UTF8 rejected" rejected

private def directories (root : System.FilePath) : IO Unit := do
  let nested := root / "tree" / "nested"
  IO.FS.createDirAll nested
  IO.FS.createDirAll nested
  IO.FS.createDir (nested / "empty")
  check "createDirAll is idempotent" (← nested.isDir)
  let bytes := ByteArray.mk #[0, 1, 127, 128, 255]
  let source := nested / "日本語"
  IO.FS.writeBinFile source bytes
  check "binary roundtrip" ((← IO.FS.readBinFile source) == bytes)
  let entries ← nested.readDir
  check "directory entry count" (entries.size == 2)
  check "directory entry path" (entries.any (fun entry => entry.path == source))
  let metadata ← source.metadata
  check "file metadata" (metadata.type == .file && metadata.byteSize == 5)
  check "directory metadata" ((← nested.metadata).type == .dir)
  check "ordinary symlinkMetadata" ((← source.symlinkMetadata).type == .file)
  check "realPath is absolute" ((← IO.FS.realPath source).isAbsolute)
  let renamed := nested / "renamed"
  IO.FS.rename source renamed
  check "rename changes path" (!(← source.pathExists) && (← renamed.pathExists))
  IO.FS.hardLink renamed (nested / "linked")
  IO.FS.removeFile renamed
  check "hard link survives original removal" ((← IO.FS.readBinFile (nested / "linked")) == bytes)
  IO.setAccessRights (nested / "linked") { user := { read := true, write := true } }
  IO.FS.removeDir (nested / "empty")
  IO.FS.removeDirAll (root / "tree")
  check "removeDirAll removes descendants" (!(← (root / "tree").pathExists))

private def locks (root : System.FilePath) : IO Unit := do
  let path := root / "locks"
  IO.FS.writeFile path "lock"
  IO.FS.withFile path .readWrite fun first => do
    IO.FS.withFile path .readWrite fun second => do
      first.lock
      check "exclusive lock excludes second handle" (!(← second.tryLock))
      first.unlock
      check "unlock permits second handle" (← second.tryLock)
      second.unlock
      check "first shared lock" (← first.tryLock false)
      check "second shared lock" (← second.tryLock false)
      second.unlock
      first.unlock
  IO.FS.withFile path .readWrite fun h => h.lock
  IO.FS.withFile path .readWrite fun h => do
    check "handle finalization releases lock" (← h.tryLock)
    h.unlock

private def temporary : IO Unit := do
  let (handle, path) ← IO.FS.createTempFile
  handle.putStr "temporary"
  handle.flush
  handle.rewind
  check "createTempFile read/write" ((← handle.readToEnd) == "temporary")
  IO.FS.removeFile path
  let directory ← IO.FS.createTempDir
  check "createTempDir exists" (← directory.isDir)
  IO.FS.removeDir directory
  let remembered ← IO.mkRef (none : Option System.FilePath)
  try
    IO.FS.withTempFile fun _ path => do
      remembered.set (some path)
      throw <| IO.userError "temporary file body"
  catch error => check "withTempFile preserves body exception" (error.toString == "temporary file body")
  let some file ← remembered.get | throw <| IO.userError "withTempFile did not enter body"
  check "withTempFile cleans up after exception" (!(← file.pathExists))
  remembered.set none
  try
    IO.FS.withTempDir fun path => do
      remembered.set (some path)
      IO.FS.createDirAll (path / "nested")
      IO.FS.writeFile (path / "nested" / "file") "content"
      throw <| IO.userError "temporary directory body"
  catch error => check "withTempDir preserves body exception" (error.toString == "temporary directory body")
  let some dir ← remembered.get | throw <| IO.userError "withTempDir did not enter body"
  check "withTempDir cleans descendants after exception" (!(← dir.pathExists))

def main (args : List String) : IO Unit := do
  let some argument := args.head? | throw <| IO.userError "expected test directory"
  let root := System.FilePath.mk argument
  IO.FS.createDirAll root
  handles root
  streams root
  directories root
  locks root
  temporary
  IO.FS.removeDirAll root
  IO.println "filesystem surface checks passed"
