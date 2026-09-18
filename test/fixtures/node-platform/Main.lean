import Std.Time

def main : IO Unit := do
  IO.println s!"windows={System.Platform.isWindows};mac={System.Platform.isOSX};bits={System.Platform.numBits}"
  IO.println ((System.FilePath.mk "data" / "todos.json").toString)
  IO.println (System.FilePath.mk "C:\\data\\todos.json").isAbsolute
  IO.println ((System.FilePath.mk "C:\\data\\todos.json").parent.map (·.toString) |>.getD "none")
  let now ← Std.Time.DateTime.nowAt "UTC"
  IO.println (now.format "uuuu-MM-dd'T'HH:mm:ss'Z'")
  if System.Platform.isWindows then
    try
      discard <| Std.Time.DateTime.nowAt "America/New_York"
      throw (IO.userError "expected unsupported Windows named time zone")
    catch
      | .unsupportedOperation .. => IO.println "named zone unsupported"
      | e => throw e
