import Init

def main (args : List String) : IO UInt32 := do
  if args.head? == some "fail" then
    throw (IO.userError "ordinary failure λ")
  IO.FS.createDirAll "state"
  let file : System.FilePath := "state/roundtrip-λ.txt"
  let text := String.intercalate "|" args
  IO.FS.writeFile file text
  let left ← IO.asTask do
    IO.sleep 5
    IO.FS.readFile file
  let right ← IO.asTask (pure (2 ^ 128 + 42 : Nat))
  let content ← IO.ofExcept (← IO.wait left)
  let number ← IO.ofExcept (← IO.wait right)
  IO.println s!"{content}:{number}"
  IO.FS.removeFile file
  let missing ← try
    discard <| IO.FS.readFile file
    pure false
  catch error => pure <| match error with
    | .noFileOrDirectory _ _ _ => true
    | _ => false
  IO.println s!"missing={missing}"
  return 7
