/-
Deno and Bun: each runtime's own server (`Deno.serve` from Lasm.JS.Deno,
`Bun.serve` from Lasm.JS.Bun) runs Tandem's handler (`Server/JsServe.lean`)
and accepts WebSocket upgrades on `/doc/<name>/ws`:

- Deno: `Deno.upgradeWebSocket(request)` inside the handler;
- Bun: `server.upgrade(request)`, which needs `websocket` handlers in the
  server's options. Lasm.JS.Bun's `ServeOptions` has no `websocket` member
  (its generated bindings declare the HTTP server only), so they are
  installed with `server.reload` right after `Bun.serve` returns, before any
  request arrives.

Neither runtime's WebSocket calls are in the 0.7.0 bindings; they are made
through Lasm.JS's dynamic calls. Cloudflare Workers has no WebSockets here
(a WebSocket that outlives its request needs a Durable Object, which
`wrangler dev` does not run here): `JsServe.serveEdge`, and clients
long-poll.
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Deno
import Lasm.JS.Bun
import Server.App
import Server.JsServe
open Lasm.JS Std.Async

namespace Tandem.Server.EdgeWs

/-- Whether a request asks for a WebSocket. -/
def wantsWebSocket (request : Value) : IO Bool := do
  let upgrade : Data ← (← request.get "headers").callMethod "get" #[toJS "upgrade"] Data
  return match upgrade with | .string s => s.toLower == "websocket" | _ => false

/-- Deno: `Deno.serve` on $HOST:$PORT (default 8000) with `env`'s handler
and its WebSockets. Returns when the server closes. -/
def serveDeno (env : Env) (hub : Hub) (handle : Web.Handler) : IO Unit := do
  let counter ← IO.mkRef 0
  let (port, hostname) ← JsServe.address 8000
  let h ← Deno.ServeHandler.ofFn fun request _ => do
    let url ← request.url
    match ← wantsWebSocket request.val, wsDoc url with
    | true, some doc =>
      let deno ← (← global).get "Deno"
      let pair ← deno.callMethod "upgradeWebSocket" #[.ref request.val ""]
      let socket ← pair.get "socket"
      let send (msg : String) : IO Unit := do let _ : Data ← socket.callMethod "send" #[toJS msg] Data
      let idRef ← IO.mkRef (none : Option Nat)
      let onOpen ← Function.ofFn fun _ => do
        idRef.set (some (← hub.join counter doc send))
        return .undefined
      let onMsg ← Function.ofFn fun a => do
        let .ref ev _ := a[0]?.getD .undefined | return .undefined
        onMessage env doc (← ev.get "data" Data) send
        return .undefined
      let onClose ← Function.ofFn fun _ => do
        if let some id ← idRef.get then hub.leave doc id
        return .undefined
      let _ : Data ← socket.callMethod "addEventListener" #[toJS "open", .ref onOpen ""] Data
      let _ : Data ← socket.callMethod "addEventListener" #[toJS "message", .ref onMsg ""] Data
      let _ : Data ← socket.callMethod "addEventListener" #[toJS "close", .ref onClose ""] Data
      return { val := ← pair.get "response" }
    | _, _ => JsServe.webHandler handle request
  let server ← Deno.serveWithOptions { port := some port, hostname := some hostname } h
  server.finished.block

/-- Bun: `Bun.serve` on $HOST:$PORT (default 3000) with `env`'s handler and
its WebSockets. Never returns. -/
def serveBun (env : Env) (hub : Hub) (handle : Web.Handler) : IO Unit := do
  let counter ← IO.mkRef 0
  let (port, hostname) ← JsServe.address 3000
  -- The connections' handlers; a connection's document is in `ws.data`.
  let sockets ← IO.mkRef (Std.HashMap.emptyWithCapacity 8 : Std.HashMap Nat String)
  let docOf (ws : Value) : IO String := do
    return match (← ws.get "data" Data).field "doc" with | .string s => s | _ => ""
  let onOpen ← Function.ofFn fun a => do
    let .ref ws _ := a[0]?.getD .undefined | return .undefined
    let doc ← docOf ws
    let send (msg : String) : IO Unit := do let _ : Data ← ws.callMethod "send" #[toJS msg] Data
    let id ← hub.join counter doc send
    ws.set "lasmTandemId" id
    sockets.modify (·.insert id doc)
    return .undefined
  let onMsg ← Function.ofFn fun a => do
    let .ref ws _ := a[0]?.getD .undefined | return .undefined
    let doc ← docOf ws
    let send (msg : String) : IO Unit := do let _ : Data ← ws.callMethod "send" #[toJS msg] Data
    onMessage env doc (a[1]?.getD .undefined) send
    return .undefined
  let onClose ← Function.ofFn fun a => do
    let .ref ws _ := a[0]?.getD .undefined | return .undefined
    let id ← ws.get "lasmTandemId" Nat
    if let some doc := (← sockets.get)[id]? then
      hub.leave doc id
      sockets.modify (·.erase id)
    return .undefined
  let websocket := obj [("open", .ref onOpen ""), ("message", .ref onMsg ""), ("close", .ref onClose ""),
                        ("maxPayloadLength", toJS maxBody)]
  -- Bun calls `fetch(request, server)`; an accepted upgrade answers `undefined`.
  let fetch ← Function.ofFn fun args => do
    let .ref request _ := args[0]?.getD .undefined
      | throw (IO.userError "Tandem: the fetch handler expected a Request")
    if ← wantsWebSocket request then
      if let (some doc, .ref server _) := (wsDoc (← request.get "url" String), args[1]?.getD .undefined) then
        let ok ← server.callMethod "upgrade" #[.ref request "", obj [("data", obj [("doc", toJS doc)])]] Bool
        if ok then return .undefined
    return toJS (← JsServe.webHandler handle { val := request })
  let server ← Bun.serve { fetch := { val := fetch }, port := some (.unsignedShort port), hostname := some hostname }
  let _ : Data ← server.val.callMethod "reload" #[obj [("fetch", .ref fetch ""), ("websocket", websocket)]] Data
  IO.eprintln s!"Listening on {← (← server.url).href}"
  JsServe.forever

end Tandem.Server.EdgeWs
