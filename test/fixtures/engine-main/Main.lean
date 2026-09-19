import Init

def main (args : List String) : IO UInt32 := do
  if args[1]? == some "fail" then
    throw (IO.userError "ordinary failure λ")
  let directory := System.FilePath.mk (args[0]?.getD ".")
  IO.FS.createDirAll directory
  let file := directory / "roundtrip.txt"
  let text := String.intercalate "|" (args.drop 1)
  IO.FS.writeFile file text
  let task ← IO.asTask (pure (40 : Nat))
  let number ← IO.ofExcept task.get
  IO.println (← IO.appPath)
  IO.println s!"{← IO.FS.readFile file}:{number + 2}"
  IO.FS.removeFile file
  return 7
