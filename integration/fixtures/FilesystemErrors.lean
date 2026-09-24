import Init

deriving instance Repr for IO.Error

private def observe (name : String) (action : IO String) : IO Unit := do
  try
    IO.println s!"{name}: ok {repr (← action)}"
  catch error => IO.println s!"{name}: error {repr error}"

private def unitResult (action : IO Unit) : IO String := do
  action
  pure "unit"

def main (args : List String) : IO Unit := do
  let some argument := args.head? | throw <| IO.userError "expected test directory"
  let root := System.FilePath.mk argument
  let file := root / "regular"
  let directory := root / "directory"
  let missing := root / "absent" / "entry"
  IO.FS.createDirAll directory
  IO.FS.writeFile file "original"
  IO.FS.writeFile (directory / "child") "content"
  IO.FS.writeFile (root / "existing") "existing"
  IO.FS.writeBinFile (root / "invalid-utf8") (ByteArray.mk #[255, 254])

  observe "read missing file" <| IO.FS.readFile missing
  observe "read directory" <| IO.FS.readFile directory
  observe "read invalid UTF8" <| IO.FS.readFile (root / "invalid-utf8")
  observe "read through regular file" <| IO.FS.readFile (file / "child")
  observe "read empty path" <| IO.FS.readFile (System.FilePath.mk "")
  observe "write missing parent" <| unitResult <| IO.FS.writeFile missing "x"
  observe "write directory" <| unitResult <| IO.FS.writeFile directory "x"
  observe "writeNew existing file" <| IO.FS.withFile file .writeNew fun _ => pure "opened"
  observe "writeNew existing directory" <| IO.FS.withFile directory .writeNew fun _ => pure "opened"
  observe "readWrite absent file" <| IO.FS.withFile (root / "readwrite-absent") .readWrite fun _ => pure "opened"
  observe "write on read-only handle" <| IO.FS.withFile file .read fun handle => do
    handle.putStr "forbidden"
    handle.flush
    pure "flushed"
  observe "truncate read-only handle" <| IO.FS.withFile file .read fun handle => do
    handle.truncate
    pure "truncated"
  observe "read on write-only handle" <| IO.FS.withFile (root / "write-only") .write fun handle => do
    pure <| reprStr (← handle.read 1).data
  observe "metadata missing" do
    discard <| missing.metadata
    pure "metadata"
  observe "directory listing on file" do
    discard <| file.readDir
    pure "entries"
  observe "create existing directory" <| unitResult <| IO.FS.createDir directory
  observe "create directory through file" <| unitResult <| IO.FS.createDirAll (file / "nested")
  observe "remove missing file" <| unitResult <| IO.FS.removeFile missing
  observe "remove directory as file" <| unitResult <| IO.FS.removeFile directory
  observe "remove file as directory" <| unitResult <| IO.FS.removeDir file
  observe "remove nonempty directory" <| unitResult <| IO.FS.removeDir directory
  observe "rename missing source" <| unitResult <| IO.FS.rename missing (root / "renamed")
  observe "rename file over directory" <| unitResult <| IO.FS.rename file directory
  observe "hard link missing source" <| unitResult <| IO.FS.hardLink missing (root / "linked")
  observe "hard link existing destination" <| unitResult <| IO.FS.hardLink file (root / "existing")
  observe "realPath missing" do
    discard <| IO.FS.realPath missing
    pure "resolved"
  -- FilePath can carry NUL. Record ordinary native semantics directly instead
  -- of assuming the host JavaScript API's path validation is equivalent.
  observe "read path containing NUL" <| IO.FS.readFile (root / "regular\x00ignored")
  observe "rename path containing NUL" <| unitResult <| IO.FS.rename (root / "regular\x00ignored") (root / "nul-renamed")
  IO.FS.removeDirAll root
  IO.println "filesystem error observations completed"
