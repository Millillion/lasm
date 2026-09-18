module
public import App.Server
public section

def main (args : List String) : IO UInt32 := do
  match args with
  | ["--help"] =>
    IO.println "Usage: Main.lean [port] [data-directory]\nDefaults: port 3000, data directory ./data"
    return 0
  | _ =>
    let portText := args[0]?.getD "3000"
    let some port := portText.toNat? | IO.eprintln "Port must be an integer from 0 to 65535"; return 2
    if port > 65535 || args.length > 2 then
      IO.eprintln "Usage: Main.lean [port: 0..65535] [data-directory]"
      return 2
    App.serve port.toUInt16 (System.FilePath.mk (args[1]?.getD "data"))
    return 0
