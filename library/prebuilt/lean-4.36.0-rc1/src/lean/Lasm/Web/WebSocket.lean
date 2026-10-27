/-
Lasm.Web WebSocket: connections, text and binary messages, and their events.
An app's sockets are closed when it unmounts.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types
import Lasm.Web.Events

namespace Lasm.Web
open Lasm.JS

/-- A received message: text frames are strings, binary frames bytes. -/
inductive Message where
  | text (text : String)
  | bytes (bytes : ByteArray)
  deriving Inhabited

instance : FromJS Message where
  fromJS
    | .string s => .ok (.text s)
    | .bytes b => .ok (.bytes b)
    | _ => .error "expected text or bytes"
  typeName := "Lasm.Web.Message"

/-- Why a connection closed. -/
structure CloseInfo where
  code : Nat
  reason : String
  wasClean : Bool
  deriving FromJS, Inhabited, Repr

/-- `readyState`. -/
inductive ReadyState where
  | connecting | open | closing | closed
  deriving BEq, Inhabited, Repr

namespace Raw
@[js "lasm:web" "webSocket"] opaque webSocket : String → Array String → String → IO WebSocket
@[js "lasm:web" "messageData"] opaque messageData : Event → IO Message
@[js "lasm:web" "closeInfo"] opaque closeInfo : Event → IO CloseInfo
end Raw

namespace WebSocket
/-- Opens a connection to a `ws:` or `wss:` URL (relative URLs are not allowed
by browsers). Binary messages arrive as bytes. -/
def connect (url : String) (protocols : Array String := #[]) : IO WebSocket := Raw.webSocket url protocols "arraybuffer"
/-- Sends a text frame. -/
def send (ws : WebSocket) (text : String) : IO Unit := ws.val.callMethod "send" #[toJS text] Unit
/-- Sends a binary frame. -/
def sendBytes (ws : WebSocket) (bytes : ByteArray) : IO Unit := ws.val.callMethod "send" #[toJS bytes] Unit
/-- Closes the connection (code 1000 or 3000–4999). -/
def close (ws : WebSocket) (code : Nat := 1000) (reason : String := "") : IO Unit :=
  ws.val.callMethod "close" #[toJS code, toJS reason] Unit
def readyState (ws : WebSocket) : IO ReadyState := do
  match ← ws.val.get "readyState" Nat with
  | 0 => pure .connecting | 1 => pure .open | 2 => pure .closing | _ => pure .closed
/-- Bytes queued by `send` and not yet transmitted. -/
def bufferedAmount (ws : WebSocket) : IO Nat := ws.val.get "bufferedAmount" Nat
/-- The subprotocol the server chose. -/
def protocol (ws : WebSocket) : IO String := ws.val.get "protocol" String
def onOpen (ws : WebSocket) (f : IO Unit) : IO Listener :=
  ws.toEventTarget.addEventListener "open" fun _ => f
def onMessage (ws : WebSocket) (f : Message → IO Unit) : IO Listener :=
  ws.toEventTarget.addEventListener "message" fun e => do f (← Raw.messageData e)
def onClose (ws : WebSocket) (f : CloseInfo → IO Unit) : IO Listener :=
  ws.toEventTarget.addEventListener "close" fun e => do f (← Raw.closeInfo e)
def onError (ws : WebSocket) (f : IO Unit) : IO Listener :=
  ws.toEventTarget.addEventListener "error" fun _ => f
end WebSocket

end Lasm.Web
