import Std.Internal.UV.TCP

open Std Net Internal UV

def report (name : String) (action : IO Unit) : IO Unit := do
  try
    action
    IO.println s!"{name}: ok"
  catch error => IO.println s!"{name}: {error}"

def awaitResult (promise : IO.Promise (Except IO.Error α)) : IO α := do
  match promise.result!.get with
  | .ok value => return value
  | .error error => throw error

def check (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw <| IO.userError message

def readToEnd (socket : TCP.Socket) : IO ByteArray := do
  let mut bytes := ByteArray.empty
  repeat
    match ← awaitResult (← socket.recv? 3) with
    | none => return bytes
    | some part =>
      bytes := bytes ++ part
      IO.sleep 1

def exercise (anyPort : SocketAddress) : IO Unit := do
  let server ← TCP.Socket.new
  report "unbound name" do discard <| server.getSockName
  report "unbound peer" do discard <| server.getPeerName
  report "unbound zero keepalive delay" do server.keepAlive 1 0
  server.noDelay
  server.bind anyPort
  let boundAddress ← server.getSockName
  check (boundAddress.port != 0) "bind did not reserve a port"
  IO.println "ephemeral port reserved before listen"
  report "bound peer" do discard <| server.getPeerName
  report "rebind" do server.bind anyPort
  report "bound zero keepalive delay" do server.keepAlive 1 0
  report "disabled zero keepalive delay" do server.keepAlive 0 0
  server.keepAlive 1 7
  server.listen 16
  report "update listen backlog" do server.listen 32
  check ((← server.getSockName) == boundAddress) "listen changed bound address"
  let conflict ← TCP.Socket.new
  report "conflicting bind" do conflict.bind boundAddress
  report "conflicting name" do discard <| conflict.getSockName
  report "conflicting peer" do discard <| conflict.getPeerName
  report "conflicting listen" do conflict.listen 16
  let client ← TCP.Socket.new
  client.bind anyPort
  let clientAddress ← client.getSockName
  let accepting ← server.accept
  awaitResult (← client.connect boundAddress)
  let peer ← awaitResult accepting
  check ((← client.getSockName) == clientAddress) "connect changed bound client address"
  check ((← peer.getPeerName) == clientAddress) "server saw a different client port"
  check ((← client.getPeerName) == boundAddress) "client saw a different server address"
  awaitResult (← client.send #["bound request".toUTF8])
  awaitResult (← client.shutdown)
  check (← awaitResult (← peer.waitReadable)) "request not readable"
  check ((← readToEnd peer) == "bound request".toUTF8) "request was lost"
  awaitResult (← peer.send #["response after EOF".toUTF8])
  awaitResult (← peer.shutdown)
  check (← awaitResult (← client.waitReadable)) "response not readable"
  check ((← readToEnd client) == "response after EOF".toUTF8) "response was lost"
  IO.println "bound client preserved its port and exchanged data across half-close"

def main : IO Unit := do
  IO.println "IPv4"
  exercise <| .v4 { addr := .ofParts 127 0 0 1, port := 0 }
  IO.println "IPv6"
  exercise <| .v6 { addr := .ofParts 0 0 0 0 0 0 0 1, port := 0 }
  let socket ← TCP.Socket.new
  report "unavailable bind" do socket.bind <| .v4 { addr := .ofParts 192 0 2 1, port := 0 }
  report "retry after unavailable bind" do socket.bind <| .v4 { addr := .ofParts 127 0 0 1, port := 0 }
  IO.println "TCP binding comparison completed"
