/-
Node: an HTTP server (node:http) that runs a `Lasm.Fetch` handler, and
accepts WebSocket upgrades on `/doc/<name>/ws` with the `ws` package (Node
has a WebSocket client, not a server). `Lasm.Fetch.serve` owns its server and
has no upgrade hook, so this module runs its own: the request handling is
`Lasm.Fetch.serveNode`'s, without streamed bodies.
-/
import Lasm.Fetch
import Lasm.JS
import Server.App
open Lasm.JS

namespace Tandem.Server.NodeWs

/-- `new WebSocketServer(options)` from the `ws` package. -/
@[js "ws" "new WebSocketServer"] opaque webSocketServer : Data → IO Value

private def lower (s : String) : String := s.map Char.toLower

/-- Serves `env`'s handler and its WebSockets on $HOST:$PORT. Does not return. -/
def serve (env : Env) (hub : Hub) : IO Unit := do
  let http ← require "node:http"
  let bufferClass ← (← global).get "Buffer"
  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let counter ← IO.mkRef 0
  let wss ← webSocketServer (obj [("noServer", toJS true), ("maxPayload", toJS maxBody)])
  let onRequest ← Function.ofFnReply fun args => do
    let (req, res) ← match args[0]?.getD .undefined, args[1]?.getD .undefined with
      | .ref req _, .ref res _ => pure (req, res)
      | _, _ => throw (IO.userError "expected Node's request and response")
    let fields ← req.getFields #["method", "url", "rawHeaders"]
    let method := match fields.field "method" with | .string s => s | _ => "GET"
    let target := match fields.field "url" with | .string s => s | _ => "/"
    let raw : Array String := match fields.field "rawHeaders" with
      | .array items => items.filterMap fun | .string s => some s | _ => none
      | _ => #[]
    let headers := Id.run do
      let mut out := #[]
      for i in [0:raw.size / 2] do out := out.push (raw[2*i]!, raw[2*i+1]!)
      return out
    let hostHeader := (headers.find? fun (k, _) => lower k == "host").map (·.2) |>.getD s!"localhost:{port}"
    let url := if target.startsWith "/" then s!"http://{hostHeader}{target}" else target
    let chunks ← req.callMethodAwait "toArray" #[] Value
    let body ← bufferClass.callMethod "concat" #[.ref chunks ""] ByteArray
    let r ← Lasm.Fetch.respond (handler env) { method, url, headers, body }
    let flat : Array Data := r.headers.foldl (fun acc (k, v) => acc.push (toJS k) |>.push (toJS v)) #[]
    let _ : Value ← res.callMethod "writeHead" #[toJS r.status, .array flat]
    return .callMethod res "end" #[if Lasm.Fetch.bodyless method r.status then .undefined else .bytes r.body]
  let server ← http.callMethod "createServer" #[.ref onRequest ""]
  let onUpgrade ← Function.ofFn fun args => do
    let (req, socket) ← match args[0]?.getD .undefined, args[1]?.getD .undefined with
      | .ref req _, .ref socket _ => pure (req, socket)
      | _, _ => throw (IO.userError "expected Node's upgrade request and socket")
    let head := args[2]?.getD .undefined
    let url ← req.get "url" String
    match wsDoc s!"http://localhost{url}" with
    | none =>
      let _ : Data ← socket.callMethod "destroy" #[] Data
      return .undefined
    | some doc =>
      let onConnection ← Function.ofFn fun a => do
        let .ref ws _ := a[0]?.getD .undefined | return .undefined
        let send (msg : String) : IO Unit := do let _ : Data ← ws.callMethod "send" #[toJS msg] Data
        let id ← hub.join counter doc send
        let onMsg ← Function.ofFn fun m => do
          onMessage env doc (m[0]?.getD .undefined) send
          return .undefined
        let onClose ← Function.ofFn fun _ => do
          hub.leave doc id
          return .undefined
        let _ : Data ← ws.callMethod "on" #[toJS "message", .ref onMsg ""] Data
        let _ : Data ← ws.callMethod "on" #[toJS "close", .ref onClose ""] Data
        let _ : Data ← ws.callMethod "on" #[toJS "error", .ref onClose ""] Data
        return .undefined
      let _ : Data ← wss.callMethod "handleUpgrade" #[.ref req "", .ref socket "", head, .ref onConnection ""] Data
      return .undefined
  let _ : Data ← server.callMethod "on" #[toJS "upgrade", .ref onUpgrade ""] Data
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port}"
    (← IO.getStdout).flush
    return .undefined
  let _ : Value ← server.callMethod "listen" #[toJS port, toJS host, .ref listening ""]
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Data ← wss.callMethod "close" #[] Data
    let _ : Value ← server.callMethod "close" #[.ref exit ""]
    let _ : Data ← server.callMethod "closeAllConnections" #[] Data
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, .ref stop ""]
  waitForever

end Tandem.Server.NodeWs
