/-
The browser app's commands: what `update` asks for besides a new model, as
data. Lasm.UI's own commands are actions (`Cmd.task` runs any `Async`), which
a proof cannot look into; these are values, so the proofs read exactly which
requests `update` sends and what it stores (Proofs/Client.lean). `Client.lean`
performs them, each with Lasm.UI's `Cmd.task` and the generated browser
bindings (`fetch`, `localStorage`): Lasm.UI's pattern for effects you can
test (docs/UI.md, "Effects you can test").

They live in the namespace `Conduit`, so the app's code and its proofs
(namespaces `Conduit.Frontend`, `Conduit.Proofs`, `Conduit.Spec`) mean these
by `Cmd`, `Cmd.batch`, `Cmd.pushUrl`, `Http.Request`, …, not Lasm.UI's.
No JavaScript here.
-/

namespace Conduit

namespace Http

/-- An HTTP request the app sends (with the web's `fetch`). -/
structure Request where
  method : String := "GET"
  url : String
  headers : List (String × String) := []
  /-- The request body (none for `GET`). -/
  body : Option String := none
  deriving Inhabited, Repr

/-- A response: its status and its body as text. -/
structure Response where
  status : Nat
  body : String
  deriving Inhabited, Repr

/-- Whether the status is a success (2xx). -/
def Response.ok (r : Response) : Bool := 200 ≤ r.status && r.status < 300

end Http

/-- One effect. -/
inductive Effect (Msg : Type) where
  /-- Delivers `msg` (after the current update). -/
  | msg (msg : Msg)
  /-- Navigates within the app (`history.pushState`, or `replaceState`). -/
  | navigate (url : String) (replace : Bool)
  /-- Sends a request; `handle` gets the response (any status) or the network error. -/
  | http (request : Http.Request) (handle : Except String Http.Response → Msg)
  /-- `localStorage.setItem(key, value)` -/
  | storageSet (key value : String)
  /-- `localStorage.removeItem(key)` -/
  | storageRemove (key : String)
  /-- `localStorage.getItem(key)`, delivered to `handle`. -/
  | storageGet (key : String) (handle : Option String → Msg)

/-- Effects to perform, in order. -/
structure Cmd (Msg : Type) where
  effects : List (Effect Msg) := []

namespace Cmd

/-- No effect. -/
def none : Cmd Msg := {}

instance : Inhabited (Cmd Msg) := ⟨none⟩

def ofEffect (e : Effect Msg) : Cmd Msg := ⟨[e]⟩

/-- All of the commands, in order. -/
def batch (cmds : List (Cmd Msg)) : Cmd Msg := ⟨cmds.flatMap (·.effects)⟩

/-- Delivers `msg` after the current update. -/
def send (msg : Msg) : Cmd Msg := ofEffect (.msg msg)

/-- Navigates within the app (`history.pushState`). -/
def pushUrl (url : String) : Cmd Msg := ofEffect (.navigate url false)
/-- As `pushUrl`, replacing the current history entry. -/
def replaceUrl (url : String) : Cmd Msg := ofEffect (.navigate url true)

def storageSet (key value : String) : Cmd Msg := ofEffect (.storageSet key value)
def storageRemove (key : String) : Cmd Msg := ofEffect (.storageRemove key)
def storageGet (key : String) (handle : Option String → Msg) : Cmd Msg := ofEffect (.storageGet key handle)

end Cmd

end Conduit
