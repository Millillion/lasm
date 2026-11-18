/-
Deno and Bun: each runtime's own server (`Deno.serve` from Lasm.JS.Deno,
`Bun.serve` from Lasm.JS.Bun) runs Tandem's handler (`Server/JsServe.lean`)
and accepts WebSocket upgrades on `/doc/<name>/ws`, through the generated
bindings (docs/api/decisions/0.4.md, 0.4-7.1 and 0.4-7.2):

- Deno: `Deno.upgradeWebSocket request` inside the handler gives the
  response and a web `WebSocket` (Lasm.JS.Web.Websockets);
- Bun: `server.upgrade request` in `Bun.serve`'s `fetch`, with the
  connections' handlers in its `websocket` option.

Cloudflare Workers has no WebSockets here (a WebSocket that outlives its
request needs a Durable Object, which `wrangler dev` does not run here):
`ServerWorkers.lean`'s handler, and clients long-poll.
-/
import Lasm.JS
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Html
import Lasm.JS.Web.Url
import Lasm.JS.Web.Websockets
import Lasm.JS.Deno.Serve
import Lasm.JS.Deno.WebSockets
import Lasm.JS.Bun.Serve
import Server.App
import Server.JsServe
open Lasm.JS Lasm.JS.Web Std.Async

namespace Tandem.Server.EdgeWs

/-- Whether a request asks for a WebSocket. -/
def wantsWebSocket (request : Request) : IO Bool := do
  return match ← (← request.headers).get "upgrade" with
    | some s => s.toLower == "websocket"
    | none => false

/-- Deno: `Deno.serve` on $HOST:$PORT (default 8000) with `env`'s handler
and its WebSockets. Returns when the server closes. -/
def serveDeno (env : Env) (hub : Hub) (handle : Web.Handler) : IO Unit := do
  let counter ← IO.mkRef 0
  let (port, hostname) ← JsServe.address 8000
  let h ← Deno.ServeHandler.ofFn fun request _ => do
    match ← wantsWebSocket request, wsDoc (← request.url) with
    | true, some doc =>
      let up ← Deno.upgradeWebSocket request
      let socket := up.socket
      let send (msg : String) : IO Unit := socket.send (.usvString msg)
      let idRef ← IO.mkRef (none : Option Nat)
      let on (type : String) (f : Event → IO Unit) : IO Unit := do
        socket.addEventListener type (some (← EventListener.ofSyncFn f))
      on "open" fun _ => do idRef.set (some (← hub.join counter doc send))
      on "message" fun e => do
        let data ← ({ val := e.val } : MessageEvent).data
        (onMessage env doc data send).block
      on "close" fun _ => do
        if let some id ← idRef.get then hub.leave doc id
      return up.response
    | _, _ => JsServe.webHandler handle request
  let server ← Deno.serveWithOptions { port := some port, hostname := some hostname } h
  server.finished.block

/-- Bun: `Bun.serve` on $HOST:$PORT (default 3000) with `env`'s handler and
its WebSockets. Never returns. -/
def serveBun (env : Env) (hub : Hub) (handle : Web.Handler) : IO Unit := do
  let counter ← IO.mkRef 0
  let (port, hostname) ← JsServe.address 3000
  -- A connection's document is its upgrade's `data` (`{doc}`); its hub id is
  -- kept on that object too. Bun's `ServerWebSocket<T>.data` has the type
  -- parameter the upgrade gives it, which the generated binding cannot know
  -- (it reads it as `undefined`), so it is read and written through Lasm.JS.
  let docOf (ws : Bun.ServerWebSocket) : IO String := do
    return match (← ws.val.get "data" Data).field "doc" with | .string s => s | _ => ""
  let sendOn (ws : Bun.ServerWebSocket) (msg : String) : IO Unit := discard <| ws.sendText msg
  let «open» ← Bun.WebSocketHandlerOpen.ofFn fun ws => do
    let id ← hub.join counter (← docOf ws) (sendOn ws)
    (← ws.val.get "data" Value).set "id" id
  let message ← Bun.WebSocketHandlerMessage.ofFn fun ws msg => do
    let data : Data := match msg with | .domString s => .string s | .uint8Array b => .bytes b
    onMessage env (← docOf ws) data (sendOn ws)
  let close ← Bun.WebSocketHandlerClose.ofFn fun ws _ _ => do
    hub.leave (← docOf ws) (← (← ws.val.get "data" Value).get "id" Nat)
  -- Bun calls `fetch(request, server)`.
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request server => do
    if ← wantsWebSocket request then
      if let some doc := wsDoc (← request.url) then
        -- Bun ignores the response of an upgraded request (0.4-7.2's example).
        if ← server.upgrade request (some { data := obj [("doc", toJS doc)] }) then
          return ← Response.new none none
    JsServe.webHandler handle request
  let websocket : Bun.WebSocketHandler :=
    { «open» := some «open», message := some message, close := some close, maxPayloadLength := some maxBody.toFloat }
  let server ← Bun.serve { fetch := some fetch, port := some (.unsignedShort port), hostname := some hostname,
                           websocket := some websocket }
  IO.eprintln s!"Listening on {← (← server.url).href}"
  JsServe.forever

end Tandem.Server.EdgeWs
