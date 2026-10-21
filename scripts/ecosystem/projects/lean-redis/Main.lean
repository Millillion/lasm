import LeanRedis
open LeanRedis Std.Async

def session (port : UInt16) : Async Unit := do
  let client ← Client.newDefault { endpoint := { host := "127.0.0.1", port } }
  let _ ← client.connect
  IO.println s!"ping: {← client.ping}"
  let _ ← client.set "greeting" "hello from Lean"
  IO.println s!"get: {← client.get "greeting"}"
  let _ ← client.set "counter" "41"
  IO.println s!"incr: {← client.incr "counter"}"
  IO.println s!"missing: {← client.get "nope"}"
  let _ ← client.hSet "user:1" #[("name", "ada"), ("lang", "lean")]
  IO.println s!"hgetall: {(← client.hGetAll "user:1").qsort (fun a b => a.1 < b.1)}"
  IO.println s!"del: {← client.del #["greeting", "counter"]}"
  client.disconnect

def main (args : List String) : IO Unit := do
  let port := (args.headD "6379").toNat!.toUInt16
  (session port).block
