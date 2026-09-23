import Init

deriving instance Repr for IO.Error

private def describe (kind : String) (path : System.FilePath) : IO Unit := do
  let name := path.fileName.getD ""
  let parent := path.parent.map (fun p => p.toString.toUTF8.data.toList)
  IO.println s!"{kind}: parent={repr parent}"
  IO.println s!"{kind}: nativePrefix={name.startsWith "tmp."} nameLength={name.length}"
  IO.println s!"{kind}: returnedPathExists={← path.pathExists}"

def main (args : List String) : IO Unit := do
  IO.Process.setCurrentDir (System.FilePath.mk args[0]!)
  try
    let (handle, path) ← IO.FS.createTempFile
    handle.putStr "raw temporary payload λ\n"
    handle.flush
    handle.rewind
    IO.println s!"file: contents={repr (← handle.getLine)}"
    describe "file" path
  catch error => IO.println s!"file: error={repr error}"
  try
    let path ← IO.FS.createTempDir
    describe "directory" path
  catch error => IO.println s!"directory: error={repr error}"
  IO.println "raw-temporary comparison completed"
