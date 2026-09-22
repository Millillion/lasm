import Init

deriving instance Repr for IO.Error

private def describe (kind : String) (path : System.FilePath) : IO Unit := do
  let name := path.fileName.getD ""
  let physical ← IO.FS.realPath path
  IO.println s!"{kind}: parent={repr (path.parent.map (·.toString))}"
  IO.println s!"{kind}: physicalParent={repr (physical.parent.map (·.toString))}"
  IO.println s!"{kind}: nativePrefix={name.startsWith "tmp."} nameLength={name.length}"

def main (args : List String) : IO Unit := do
  IO.Process.setCurrentDir (System.FilePath.mk args[0]!)
  try
    let (handle, path) ← IO.FS.createTempFile
    try
      describe "file" path
      handle.putStr "temporary λ\n"
      handle.flush
      handle.rewind
      IO.println s!"file: contents={repr (← handle.getLine)}"
    finally
      IO.FS.removeFile path
  catch error => IO.println s!"file: error={repr error}"
  try
    let path ← IO.FS.createTempDir
    try
      describe "directory" path
      IO.println s!"directory: isDir={← path.isDir}"
    finally
      IO.FS.removeDir path
  catch error => IO.println s!"directory: error={repr error}"
  IO.println "temporary-files comparison completed"
