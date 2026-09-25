import Std.Internal.UV.TCP

open Std Net Internal UV
deriving instance Repr for IO.Error
private instance : Repr ByteArray where
  reprPrec bytes _ := repr bytes.data

-- The two failure layers are observable: an IO action can fail before it
-- returns a promise, or its promise can resolve to an Except.error later.
private def observe [Repr α] (label : String) (operation : IO (IO.Promise (Except IO.Error α))) : IO Unit := do
  let started : Except IO.Error (IO.Promise (Except IO.Error α)) ← try
    pure (.ok (← operation))
  catch error => pure (.error error)
  match started with
  | .error error => IO.println s!"{label}: start error {repr error}"
  | .ok promise =>
    match promise.result?.get with
    | none => IO.println s!"{label}: promise dropped"
    | some (.error error) => IO.println s!"{label}: promise error {repr error}"
    | some (.ok value) => IO.println s!"{label}: promise ok {repr value}"

private def awaitResult (promise : IO.Promise (Except IO.Error α)) : IO α := do
  match promise.result?.get with
  | some (.ok value) => return value
  | some (.error error) => throw error
  | none => throw <| IO.userError "unexpectedly dropped promise"

private def unconnected : IO Unit := do
  let socket ← TCP.Socket.new
  observe "unconnected empty array" <| socket.send #[]
  observe "unconnected empty chunk" <| socket.send #[ByteArray.empty]
  observe "unconnected send" <| socket.send #["x".toUTF8]
  observe "unconnected shutdown" <| socket.shutdown
  observe "unconnected receive" <| socket.recv? 1
  observe "unconnected zero receive" <| socket.recv? 0
  observe "unconnected waitReadable" <| socket.waitReadable

private def connected : IO Unit := do
  let server ← TCP.Socket.new
  server.bind <| SocketAddressV4.mk (.ofParts 127 0 0 1) 0
  server.listen 8
  let address ← server.getSockName
  let client ← TCP.Socket.new
  let accepting ← server.accept
  awaitResult (← client.connect address)
  let peer ← awaitResult accepting
  observe "connected empty array" <| client.send #[]
  observe "connected empty chunk" <| client.send #[ByteArray.empty]
  -- Both operations stay pending until cancellation: no data has been sent.
  -- Their rejected competitors must not consume or replace the first promise.
  let receiving ← client.recv? 1
  observe "parallel receive" <| client.recv? 1
  observe "parallel waitReadable" <| client.waitReadable
  client.cancelRecv
  observe "cancelled receive" <| pure receiving
  let readable ← client.waitReadable
  client.cancelRecv
  observe "cancelled waitReadable" <| pure readable
  -- Starting with a zero-capacity buffer must preserve the queued payload.
  -- The send provides the readiness event; no timing assumption is required.
  let zeroReceive ← client.recv? 0
  awaitResult (← peer.send #["z".toUTF8])
  observe "connected zero receive" <| pure zeroReceive
  let retained ← awaitResult (← client.recv? 1)
  unless retained == some "z".toUTF8 do throw <| IO.userError "zero receive lost queued data"
  IO.println "zero receive preserves queued bytes"
  awaitResult (← client.send #["request".toUTF8])
  observe "first shutdown" <| client.shutdown
  let mut received := ByteArray.empty
  repeat
    match ← awaitResult (← peer.recv? 3) with
    | none => break
    | some bytes => received := received ++ bytes
  unless received == "request".toUTF8 do throw <| IO.userError "request bytes differ"
  awaitResult (← peer.send #["reply".toUTF8])
  awaitResult (← peer.shutdown)
  let mut response := ByteArray.empty
  repeat
    match ← awaitResult (← client.recv? 3) with
    | none => break
    | some bytes => response := response ++ bytes
  unless response == "reply".toUTF8 do throw <| IO.userError "half-close lost the response"
  IO.println "bidirectional half-close preserves bytes"
  observe "receive after EOF" <| client.recv? 1
  observe "zero receive after EOF" <| client.recv? 0
  observe "waitReadable after EOF" <| client.waitReadable
  observe "repeated shutdown" <| client.shutdown
  observe "empty array after shutdown" <| client.send #[]
  observe "empty chunk after shutdown" <| client.send #[ByteArray.empty]
  observe "send after shutdown" <| client.send #["x".toUTF8]

def main : IO Unit := do
  unconnected
  connected
  IO.println "TCP error phases checked"
