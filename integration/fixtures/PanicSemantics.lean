import Std

@[noinline] def panicValue (label : String) : Nat := panic! label

def main (args : List String) : IO Unit := do
  let mode := args.headD "default"
  if mode == "io-panic" then
    (panic! "IO panic" : IO Unit)
  if mode == "redirect" then
    let label ← IO.mkRef "redirected panic"
    IO.FS.withFile "panic.log" .write fun handle => do
      IO.withStderr (IO.FS.Stream.ofHandle handle) do
        let message ← label.get
        IO.println s!"default={panicValue message}"
    IO.eprintln "stderr restored"
  else
    IO.println s!"default={panicValue "ordinary panic"}"
