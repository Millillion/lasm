import Std.Async.System

deriving instance Repr for IO.Error

private def report (label : String) (action : IO String) : IO Unit := do
  try
    let value ← action
    IO.println s!"{label}: bytes={repr value.toUTF8.data.toList}"
  catch error => IO.println s!"{label}: error={repr error}"

def main : IO Unit := do
  report "uv/home" Std.Internal.UV.System.osHomedir
  report "uv/tmp" Std.Internal.UV.System.osTmpdir
  report "public/home" (do return (← Std.Async.System.getHomeDir).toString)
  report "public/tmp" (do return (← Std.Async.System.getTmpDir).toString)
  IO.println "system-directory comparison completed"
