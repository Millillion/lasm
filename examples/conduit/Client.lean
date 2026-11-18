/-
The browser app (`npm run build:client` → dist/public/client): it hydrates
the page the server rendered, then routes, fetches and renders in the
browser. Everything it does is `Frontend/Update.lean` and
`Frontend/View.lean`; this file performs the commands `update` returns
(`Frontend/Cmd.lean`: data) with Lasm.UI's `Cmd.task` and the generated
browser bindings (`fetch`, `localStorage`), starts the app, and exposes the
RealWorld test suite's debug interface, `window.__conduit_debug__`.
-/
import Lasm.UI
import Lasm.JS.Json
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Html
import Frontend.View
import Frontend.Update
open Lean Lasm.UI Lasm.JS Conduit Conduit.Frontend

/-! ## `window.__conduit_debug__` (specs/e2e/SELECTORS.md) -/

structure Debug where
  token : Option String := none
  authState : String := "loading"
  user : Option User := none
  deriving Inhabited

initialize debugState : IO.Ref Debug ← IO.mkRef {}

def authStateName : Auth → String
  | .loading => "loading"
  | .guest => "unauthenticated"
  | .user _ => "authenticated"

def userData (u : User) : Data :=
  obj [("username", toJS u.username), ("email", toJS u.email), ("bio", toJS u.bio), ("image", toJS u.image),
       ("token", toJS u.token)]

/-- Installs `getToken()`, `getAuthState()` and `getCurrentUser()`, which read
what the app last recorded. -/
def installDebug : IO Unit := do
  let getToken ← Function.ofSyncFn fun _ => do return toJS (← debugState.get).token
  let getAuthState ← Function.ofSyncFn fun _ => do return toJS (← debugState.get).authState
  let getCurrentUser ← Function.ofSyncFn fun _ => do
    return match (← debugState.get).user with
      | some u => userData u
      | none => .null
  (← global).set "__conduit_debug__"
    (obj [("getToken", toJS getToken), ("getAuthState", toJS getAuthState), ("getCurrentUser", toJS getCurrentUser)])

/-! ## Performing the app's commands -/

/-- One of the app's effects (`Frontend/Cmd.lean`), performed with the
generated browser bindings. -/
def perform : Conduit.Effect Msg → Lasm.UI.Cmd Msg
  | .msg msg => Lasm.UI.Cmd.send msg
  | .navigate url replace => if replace then Lasm.UI.Cmd.replaceUrl url else Lasm.UI.Cmd.pushUrl url
  | .http req handle => Lasm.UI.Cmd.task do
    try
      let r ← Lasm.JS.Web.fetch (.usvString req.url) (some {
        method := some req.method,
        headers := some (.sequence (req.headers.map fun (k, v) => #[k, v]).toArray),
        body := req.body.map .usvString })
      let status ← r.status
      return handle (.ok { status, body := ← r.text })
    catch e => return handle (.error (toString e))
  | .storageSet key value => Lasm.UI.Cmd.ofEffect (.task fun _ => do
    (← Lasm.JS.Web.localStorage).setItem key value)
  | .storageRemove key => Lasm.UI.Cmd.ofEffect (.task fun _ => do
    (← Lasm.JS.Web.localStorage).removeItem key)
  | .storageGet key handle => Lasm.UI.Cmd.task do
    -- Storage the browser refuses (a sandboxed page) reads as empty.
    return handle (← try (← Lasm.JS.Web.localStorage).getItem key catch _ => pure none)

/-- The app's commands as Lasm.UI's, in order. -/
def performCmd (c : Conduit.Cmd Msg) : Lasm.UI.Cmd Msg := Lasm.UI.Cmd.batch (c.effects.map perform)

/-- `update`, its commands performed, then the viewer recorded for the debug interface. -/
def update' (msg : Msg) (m : Model) : Model × Lasm.UI.Cmd Msg :=
  let (m', cmd) := update msg m
  let record : Lasm.UI.Cmd Msg := Lasm.UI.Cmd.ofEffect (.task fun _ =>
    debugState.set { token := m'.token, authState := authStateName m'.auth, user := m'.auth.user? })
  (m', Lasm.UI.Cmd.batch [performCmd cmd, record])

/-! ## The app -/

def app : App Json Model Msg where
  init flags url :=
    (Model.init (Route.parse url.segments url.params) flags (url.param? "next"),
     performCmd (Conduit.Cmd.batch [Conduit.Cmd.send .hydrated, Conduit.Cmd.storageGet "jwtToken" .tokenLoaded]))
  update := update'
  view := view
  onUrlChange := some fun u => .urlChanged (Route.parse u.segments u.params) (u.param? "next")

def main : IO Unit := do
  installDebug
  app.run
