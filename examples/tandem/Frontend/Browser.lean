/-
The editor's effects in the browser: each `Tandem.Ui.Effect` as a `Cmd.task`
over the generated browser bindings (Lasm.JS.Web). Only the browser program
(`Editor.lean`) imports this module; the simulation (`Sim.lean`), a Node
program, plays the same effects in its world, and links no browser API.
-/
import Lasm.UI
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Html
import Lasm.JS.Web.Webcrypto
import Lasm.JS.Web.Websockets
import Frontend.Ui
open Lasm.UI Lasm.JS Tandem

namespace Tandem.Ui

/-- The body of a 2xx response, or why there is none. -/
def bodyOf (r : Lasm.JS.Web.Response) : Async (Except String String) := do
  if ← r.ok then return .ok (← r.text) else return .error s!"HTTP {← r.status}"

/-- The browser: each effect through the generated bindings (`Cmd.task`). -/
def perform : Effect → Cmd Msg
  | .delay ms msg => Cmd.delay ms msg
  | .randomReplica => Cmd.task do
    let b ← (← Lasm.JS.Web.crypto).getRandomValues (ByteArray.mk (Array.replicate 6 0))
    let n := b.foldl (fun n x => n * 256 + x.toNat) 0
    return .gotReplica (n % 281474976710655 + 1)
  | .load key => Cmd.task do return .loaded (← (← Lasm.JS.Web.localStorage).getItem key)
  | .save key value => Cmd.ofEffect (.task fun _ => do (← Lasm.JS.Web.localStorage).setItem key value)
  | .showText text sel => Cmd.ofEffect (.task fun _ => do
    if let some el ← (← Lasm.JS.Web.document).getElementById editorId then
      -- The view renders it as a `textarea`.
      let area : Lasm.JS.Web.HTMLTextAreaElement := { val := el.val }
      area.setValue (String.ofList text)
      area.setSelectionRange sel.1 sel.2)
  | .connect doc => Cmd.ofEffect (.task fun dispatch => do
    let loc ← Lasm.JS.Web.location
    let protocol ← loc.protocol
    let host ← loc.host
    let scheme := if protocol == "https:" then "wss:" else "ws:"
    let opened ← IO.mkRef false
    try
      let ws ← Lasm.JS.Web.WebSocket.new s!"{scheme}//{host}/doc/{doc}/ws"
      let on (type : String) (f : Lasm.JS.Web.Event → IO Unit) : IO Unit := do
        ws.addEventListener type (some (← Lasm.JS.Web.EventListener.ofSyncFn f))
      on "open" fun _ => do opened.set true; dispatch .wsOpen
      on "message" fun e => do
        -- Text frames arrive as strings (the server sends no binary frames).
        if let .string t ← ({ val := e.val } : Lasm.JS.Web.MessageEvent).data then dispatch (.pushed t)
      on "close" fun _ => do dispatch (.wsClosed (← opened.get))
    catch _ => dispatch (.wsClosed false))
  | .sync doc body sent => Cmd.task do
    try
      let r ← Lasm.JS.Web.fetch (.usvString s!"/doc/{doc}/sync") (some {
        method := some "POST", body := some (.usvString body),
        headers := some (.record ⟨#[("content-type", "text/plain")]⟩) })
      return .synced sent (← bodyOf r)
    catch e => return .synced sent (.error (toString e))
  | .poll doc cursor => Cmd.task do
    try return .polled (← bodyOf (← Lasm.JS.Web.fetch (.usvString s!"/doc/{doc}/poll?cursor={cursor}")))
    catch e => return .polled (.error (toString e))

/-- The effects as the browser's commands. -/
def commands (fx : List Effect) : Cmd Msg := Cmd.batch (fx.map perform)

end Tandem.Ui
