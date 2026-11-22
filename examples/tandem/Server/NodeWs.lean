/-
Node: an HTTP server (`node:http`, through the generated
`Lasm.JS.Node.Http`) that runs Tandem's handler (`Server/Web.lean`), and
accepts WebSocket upgrades on `/doc/<name>/ws` with the `ws` package.

Why not `Node.serve` (Lasm.JS.Node.Serve), Lasm's server for Node: it has no
WebSocket upgrade hook, by decision (docs/api/decisions/0.4.md, 0.4-7.3: a
Node program that serves WebSockets binds an npm package such as `ws` with
`@[js]`). Why the `ws` package, bound by hand: Node has a WebSocket client
and no WebSocket server, so no generated binding exists for one. Its three
calls (`new WebSocketServer`, `handleUpgrade`, a connection's `on`/`send`)
are the only hand-written binding left in Tandem's Node server; `node:sqlite`
is the generated `Lasm.JS.Node.Sqlite` (Server/NodeSqlite.lean).
-/
import Lasm.JS
import Lasm.JS.Node.Buffer
import Lasm.JS.Node.Http
import Lasm.JS.Node.Process
import Server.App
open Lasm.JS Lasm.JS.Node

namespace Tandem.Server.NodeWs

/-- `new WebSocketServer(options)` from the `ws` package (no generated
binding: an npm package; Node has no WebSocket server). -/
@[js "ws" "new WebSocketServer"] opaque webSocketServer : Data → IO Value

private def lower (s : String) : String := s.map Char.toLower

/-- Serves `env`'s handler and its WebSockets on $HOST:$PORT. Does not return. -/
def serve (env : Env) (hub : Hub) (handle : Web.Handler) : IO Unit := do
  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let counter ← IO.mkRef 0
  let wss ← webSocketServer (obj [("noServer", toJS true), ("maxPayload", toJS maxBody)])
  let onRequest ← http.Server.RequestListener.ofFn fun req res => do
    let method ← req.method
    let target ← req.url
    let raw ← req.rawHeaders
    let headers := Id.run do
      let mut out := #[]
      for i in [0:raw.size / 2] do out := out.push (raw[2*i]!, raw[2*i+1]!)
      return out
    let hostHeader := (headers.find? fun (k, _) => lower k == "host").map (·.2) |>.getD s!"localhost:{port}"
    let url := if target.startsWith "/" then s!"http://{hostHeader}{target}" else target
    let chunks ← req.toArray
    let parts : Array ByteArray := match chunks with
      | .array items => items.filterMap fun | .bytes b => some b | _ => none
      | _ => #[]
    let body ← Buffer.concat parts
    let r ← Web.respond handle { method, url, headers, body }
    let flat : Array Data := r.headers.foldl (fun acc (k, v) => acc.push (toJS k) |>.push (toJS v)) #[]
    discard <| res.writeHead r.status.toNat none (some (.sequence flat))
    discard <| res.«end» (if Web.bodyless method r.status then none else some (.uint8Array r.body))
  let server ← http.createServer none (some onRequest)
  let onUpgrade ← http.Server.UpgradeListener.ofSyncFn fun req socket head => do
    match wsDoc s!"http://localhost{← req.url}" with
    | none => discard <| socket.destroy
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
      let _ : Data ← wss.callMethod "handleUpgrade" #[toJS req, toJS socket, .bytes head, .ref onConnection ""] Data
  discard <| server.onUpgrade onUpgrade
  discard <| server.listenWithPort (some port) (some host)
  IO.println s!"Listening on http://{host}:{port}"
  (← IO.getStdout).flush
  -- SIGTERM and SIGINT: close the sockets and the server, then exit. (Signals
  -- are events of `process`, which the generated `process` namespace does
  -- not bind: Lasm.JS.Node generates events of classes only.)
  let stop ← Function.ofFn fun _ => do
    let _ : Data ← wss.callMethod "close" #[] Data
    discard <| server.close
    server.closeAllConnections
    process.exit (some (.longLong 0))
    return .undefined
  let proc ← require "node:process"
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← proc.callMethod "once" #[toJS signal, .ref stop ""]
  waitForever

end Tandem.Server.NodeWs
