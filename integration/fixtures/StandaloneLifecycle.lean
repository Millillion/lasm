/- Supplementary deployment coverage. Ordinary Lean only; no upstream tests change. -/
import Init

initialize retained : IO.Ref (Option IO.FS.Handle) ← IO.mkRef none

private def payload : ByteArray := ByteArray.mk #[0, 255, 206, 187, 10]

private def retainBufferedFile : IO Unit := do
  let file ← IO.FS.Handle.mk "buffered.bin" .write
  file.write payload
  retained.set (some file)

private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

def main (args : List String) : IO UInt32 := do
  match args.head? with
  | some "buffered" =>
    retainBufferedFile
    return 7
  | some "exit" =>
    retainBufferedFile
    IO.Process.exit 19
  | some "forced" =>
    retainBufferedFile
    IO.Process.forceExit 23
  | some "high-exit" =>
    return 4294967295
  | some "error" =>
    retainBufferedFile
    throw (IO.userError "ordinary lifecycle error λ")
  | some "stdio" =>
    dbg_trace "standalone debug λ"
    (← IO.getStdout).write payload
    (← IO.getStderr).write (ByteArray.mk #[254, 0, 10])
    return 0
  | some "cwd" =>
    let original ← IO.currentDir
    IO.FS.createDir "space λ"
    try
      IO.Process.setCurrentDir "space λ"
      ensure ((← IO.currentDir) == original / "space λ") "current directory changed incorrectly"
      IO.FS.writeBinFile "payload.bin" payload
      let child ← IO.asTask (IO.FS.readBinFile "payload.bin") Task.Priority.dedicated
      ensure ((← IO.ofExcept (← IO.wait child)) == payload) "worker read used a different directory"
      IO.FS.removeFile "payload.bin"
    finally IO.Process.setCurrentDir original
    IO.FS.removeDir "space λ"
    IO.println "cwd and dedicated worker passed"
    return 0
  | some "removed-cwd" =>
    let original ← IO.currentDir
    let removed := original / "removed"
    IO.FS.createDir removed
    try
      IO.Process.setCurrentDir removed
      IO.FS.removeDir removed
      let task ← IO.asTask (do
        let entries ← ("." : System.FilePath).readDir
        ensure entries.isEmpty "removed directory is not empty"
        try
          discard IO.currentDir
          throw (IO.userError "deleted cwd unexpectedly has a name")
        catch error =>
          match error with
          | .noFileOrDirectory _ _ _ => pure ()
          | _ => throw error) Task.Priority.dedicated
      IO.ofExcept (← IO.wait task)
      IO.Process.setCurrentDir ".."
      ensure ((← IO.currentDir) == original) "relative directory recovery failed"
    finally IO.Process.setCurrentDir original
    IO.println "removed cwd and new worker passed"
    return 0
  | some "wait" =>
    IO.sleep 46000
    IO.println "application outlived diagnostic deadline"
    return 0
  | _ => throw (IO.userError "expected lifecycle case")
