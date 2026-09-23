import Std.Async.System

deriving instance Repr for IO.Error

private def report (label : String) (action : IO String) : IO Unit := do
  try
    let value ← action
    if value.utf8ByteSize > 256 then
      -- Check every byte without constructing a deeply nested pretty-print tree.
      -- Main.lean retains that separate packaged-stack regression.
      let expected : UInt8 := if label.endsWith "/home" then 104 else 116
      IO.println s!"{label}: byteSize={value.utf8ByteSize} allExpected={value.toUTF8.data.all (· == expected)}"
    else
      IO.println s!"{label}: bytes={repr value.toUTF8.data.toList}"
  catch error => IO.println s!"{label}: error={repr error}"

def main (args : List String) : IO Unit := do
  -- Apply oversized values after engine startup so its configuration loader
  -- does not prevent the Lean API from being reached. Startup is a separate probe.
  if let some count := args.head? then
    let count := count.toNat!
    let suffix := if args[1]? == some "slash" then "/" else ""
    Std.Internal.UV.System.osSetenv "HOME" (String.ofList (List.replicate count 'h') ++ suffix)
    Std.Internal.UV.System.osSetenv "TMPDIR" (String.ofList (List.replicate count 't') ++ suffix)
  report "uv/home" Std.Internal.UV.System.osHomedir
  report "uv/tmp" Std.Internal.UV.System.osTmpdir
  report "public/home" (do return (← Std.Async.System.getHomeDir).toString)
  report "public/tmp" (do return (← Std.Async.System.getTmpDir).toString)
  IO.println "system-directory comparison completed"
