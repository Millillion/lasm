/-
The browser app (`npm run build:client` → dist/public/client): it hydrates
the page the server rendered, then routes, fetches and renders in the
browser. Everything it does is `Frontend/Update.lean` and
`Frontend/View.lean`; this file starts it and exposes the RealWorld test
suite's debug interface, `window.__conduit_debug__`.
-/
import Lasm.UI
import Lasm.JS.Json
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

/-- `update`, then record the viewer for the debug interface. -/
def update' (msg : Msg) (m : Model) : Model × Cmd Msg :=
  let (m', cmd) := update msg m
  let record : Cmd Msg := Cmd.io fun _ =>
    debugState.set { token := m'.token, authState := authStateName m'.auth, user := m'.auth.user? }
  (m', Cmd.batch [cmd, record])

/-! ## The app -/

def app : App Json Model Msg where
  init flags url :=
    (Model.init (Route.parse url.segments url.params) flags (url.param? "next"),
     Cmd.batch [Cmd.send .hydrated, Cmd.storageGet "jwtToken" .tokenLoaded])
  update := update'
  view := view
  onUrlChange := some fun u => .urlChanged (Route.parse u.segments u.params) (u.param? "next")

def main : IO Unit := do
  installDebug
  app.run
