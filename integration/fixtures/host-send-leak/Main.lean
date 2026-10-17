/-
Minimal Std.Async TCP server (no Std.Http). For every byte received it replies with
a fresh 64 KiB ByteArray copied from a body handed over through an IO.Promise,
exactly as Std.Http's H1 writer copies response chunks. Candidate .54 leaks every
sent copy (runtime/node-async.cpp took an owned reference to each part with
lean_array_uget); native Lean stays flat. A closed term such as
`pattern.extract 0 65536` alone would be a persistent object and hide the leak.
Usage: Main  (prints "Listening on http://ADDR")
-/
import Std.Async.TCP
open Std Async TCP

def pattern : ByteArray := Id.run do
  let mut b := ByteArray.emptyWithCapacity 65536
  for i in [0:65536] do b := b.push (i % 251).toUInt8
  return b

partial def serveClient (client : Socket.Client) : Async Unit := do
  match ← client.recv? 4096 with
  | none => pure ()
  | some _ =>
    let promise ← IO.Promise.new
    background (do promise.resolve (pattern.extract 0 65536))
    let body ← await promise.result!
    client.sendAll #[body.extract 0 body.size]
    serveClient client

partial def acceptLoop (server : Socket.Server) : Async Unit := do
  let client ← server.accept
  background (serveClient client)
  acceptLoop server

def main : IO Unit := Async.block do
  let server ← Socket.Server.mk
  server.bind (.v4 ⟨.ofParts 127 0 0 1, 0⟩)
  server.listen 128
  IO.println s!"Listening on http://{← server.getSockName}"
  (← IO.getStdout).flush
  acceptLoop server
