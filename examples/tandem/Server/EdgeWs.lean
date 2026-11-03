/-
Bun, Deno and Cloudflare Workers: Lasm's entry serves the handler the
program publishes (`Lasm.JS.exportDefault`). Tandem publishes
`Lasm.Fetch.jsFetchHandler` wrapped by a function that accepts WebSocket
upgrades on `/doc/<name>/ws` where the platform can:

- Deno: `Deno.upgradeWebSocket(request)` inside the handler;
- Bun: `server.upgrade(request)`, which needs `websocket` handlers in the
  server's options. Lasm's Bun entry starts `Bun.serve` without them, so the
  first upgrade installs them with `server.reload` (same `fetch`);
- Workers: none (a WebSocket that outlives its request needs a Durable
  Object, which `wrangler dev` does not run here); clients long-poll.
-/
import Lasm.Fetch
import Lasm.JS
import Server.App
open Lasm.JS

namespace Tandem.Server.EdgeWs

/-- Which WebSockets the platform offers. -/
inductive Kind where
  | deno
  | bun
  | none

/-- Publishes the handler of `env`, with WebSockets of kind `kind`. -/
def serve (env : Env) (hub : Hub) (handle : Lasm.Fetch.Handler) (kind : Kind) : IO Unit := do
  let base ← Lasm.Fetch.jsFetchHandler handle
  let counter ← IO.mkRef 0
  -- Bun: the connections' handlers, keyed by an id carried in `ws.data`.
  let bunSockets ← IO.mkRef (Std.HashMap.emptyWithCapacity 8 : Std.HashMap Nat (String × Nat))
  let reloaded ← IO.mkRef false
  let wrapperRef ← IO.mkRef (none : Option Value)
  let bunHandlers ← do
    let onOpen ← Function.ofFn fun a => do
      let .ref ws _ := a[0]?.getD .undefined | return .undefined
      let data ← ws.get "data" Data
      let doc := match data.field "doc" with | .string s => s | _ => ""
      let send (msg : String) : IO Unit := do let _ : Data ← ws.callMethod "send" #[toJS msg] Data
      let id ← hub.join counter doc send
      ws.set "lasmTandemId" id
      bunSockets.modify (·.insert id (doc, id))
      return .undefined
    let onMessage ← Function.ofFn fun a => do
      let .ref ws _ := a[0]?.getD .undefined | return .undefined
      let doc := match (← ws.get "data" Data).field "doc" with | .string s => s | _ => ""
      let send (msg : String) : IO Unit := do let _ : Data ← ws.callMethod "send" #[toJS msg] Data
      onMessage env doc (a[1]?.getD .undefined) send
      return .undefined
    let onClose ← Function.ofFn fun a => do
      let .ref ws _ := a[0]?.getD .undefined | return .undefined
      let id ← ws.get "lasmTandemId" Nat
      if let some (doc, _) := (← bunSockets.get)[id]? then
        hub.leave doc id
        bunSockets.modify (·.erase id)
      return .undefined
    pure (obj [("open", .ref onOpen ""), ("message", .ref onMessage ""), ("close", .ref onClose ""),
               ("maxPayloadLength", toJS maxBody)])
  let wrapper ← Function.ofFn fun args => do
    let .ref request _ := args[0]?.getD .undefined | return ← base.callAwait args Data
    let url ← request.get "url" String
    let upgrade : Data ← (← request.get "headers").callMethod "get" #[toJS "upgrade"] Data
    let wantsWs := match upgrade with | .string s => s.toLower == "websocket" | _ => false
    match kind, wantsWs, wsDoc url with
    | .deno, true, some doc =>
      let deno ← (← global).get "Deno"
      let pair ← deno.callMethod "upgradeWebSocket" #[.ref request ""]
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
      return (← pair.get "response" Data)
    | .bun, true, some doc =>
      -- Bun passes (request, server) to a reloaded `fetch`, and Lasm's entry
      -- (request, env, server): the server is the last argument.
      let .ref server _ := args.back?.getD .undefined | return ← base.callAwait args Data
      unless ← reloaded.get do
        if let some w ← wrapperRef.get then
          let _ : Data ← server.callMethod "reload" #[obj [("fetch", .ref w ""), ("websocket", bunHandlers)]] Data
        reloaded.set true
      let ok ← server.callMethod "upgrade" #[.ref request "", obj [("data", obj [("doc", toJS doc)])]] Bool
      if ok then return .undefined
      else return ← base.callAwait #[.ref request ""] Data
    | _, _, _ => base.callAwait args Data
  wrapperRef.set (some wrapper)
  exportDefault wrapper

end Tandem.Server.EdgeWs
