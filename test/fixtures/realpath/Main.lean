import Init

deriving instance Repr for IO.Error

def main (args : List String) : IO Unit := do
  IO.Process.setCurrentDir (System.FilePath.mk args[0]!)
  for name in ["", ".", "..", "target/..", "link", "link/../file", "link//../file",
      "./link/../file", "target/./file", "missing/../target/file", "file/..", "file/",
      "link/../file/", "loop", "raw-link", "denied/secret", "bad\x00path"] do
    try
      let result ← IO.FS.realPath (System.FilePath.mk name)
      IO.println s!"{repr name}: ok {repr result.toString}"
      if name == "raw-link" then
        IO.println s!"raw path bytes: {repr result.toString.toUTF8.toList}"
    catch error => IO.println s!"{repr name}: {repr error}"
  IO.println "realPath comparison completed"
