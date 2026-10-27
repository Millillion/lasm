/-
Commands: effects an `update` asks the runtime to perform (HTTP, timers,
randomness, navigation, storage, focus, ports). A `Cmd` is data, so tests can
inspect what `update` asked for; the browser runtime (Lasm.UI.App) performs it
and feeds the resulting messages back to `update`.
-/
import Lasm.JS.Core

namespace Lasm.UI

namespace Http

/-- An HTTP request, performed with `fetch`. -/
structure Request where
  method : String := "GET"
  url : String
  headers : List (String × String) := []
  /-- The request body (none for GET). -/
  body : Option String := none
  /-- `fetch`'s `credentials` option: `"same-origin"`, `"include"` or `"omit"`. -/
  credentials : String := "same-origin"
  deriving Inhabited, Repr

/-- A response: status, headers (lower-case names) and the body as text. -/
structure Response where
  status : Nat
  statusText : String := ""
  headers : List (String × String) := []
  body : String
  deriving Inhabited, Repr

def Response.ok (r : Response) : Bool := 200 ≤ r.status && r.status < 300

def Response.header? (r : Response) (name : String) : Option String :=
  r.headers.lookup name.toLower

/-- Why a request produced no response. -/
inductive Error where
  /-- `fetch` rejected (network failure, CORS, a bad URL). -/
  | network (message : String)
  /-- The response arrived but its status is not 2xx. -/
  | status (response : Response)
  /-- The body could not be read as expected (`Http.getJson`). -/
  | body (message : String)
  deriving Inhabited, Repr

def Error.toString : Error → String
  | .network m => s!"network error: {m}"
  | .status r => s!"HTTP {r.status} {r.statusText}"
  | .body m => s!"bad body: {m}"

instance : ToString Error := ⟨Error.toString⟩

end Http

/-- Where `Cmd.storage*` keeps data: `localStorage` or `sessionStorage`. -/
inductive Storage where
  | local
  | session
  deriving DecidableEq, Repr, Inhabited

/-- One effect. -/
inductive Effect (Msg : Type) where
  /-- Delivers `msg` (after the current update). -/
  | msg (msg : Msg)
  /-- Delivers `msg` after `ms` milliseconds (`setTimeout`). -/
  | delay (ms : Nat) (msg : Msg)
  /-- Performs a request; `handle` gets the response (any status) or the network error. -/
  | http (request : Http.Request) (handle : Except String Http.Response → Msg)
  /-- `n` cryptographically random bytes (`crypto.getRandomValues`). -/
  | randomBytes (n : Nat) (handle : ByteArray → Msg)
  /-- The current time in milliseconds since the epoch (`Date.now()`). -/
  | now (handle : Float → Msg)
  /-- `history.pushState` (or `replaceState`), then the app's `onUrlChange`. -/
  | navigate (url : String) (replace : Bool)
  /-- `history.go(n)`. -/
  | go (n : Int)
  /-- Loads a page outside the app (`location.assign`). -/
  | load (url : String)
  | storageSet (storage : Storage) (key value : String)
  | storageRemove (storage : Storage) (key : String)
  | storageGet (storage : Storage) (key : String) (handle : Option String → Msg)
  /-- Focuses (or blurs) the element with this `id` attribute, after the next frame. -/
  | focus (id : String) (blur : Bool)
  /-- Sends a value to JavaScript subscribers of the port (`app.ports[name].subscribe`). -/
  | port (name : String) (value : Lasm.JS.Data)
  /-- `document.title`. -/
  | title (title : String)
  /-- Runs any `IO` action, with a function that delivers messages (the escape hatch). -/
  | io (run : (Msg → IO Unit) → IO Unit)

/-- Effects for the runtime to perform, in order. -/
structure Cmd (Msg : Type) where
  effects : List (Effect Msg) := []

namespace Effect

def map (f : α → β) : Effect α → Effect β
  | .msg m => .msg (f m)
  | .delay ms m => .delay ms (f m)
  | .http r h => .http r (f ∘ h)
  | .randomBytes n h => .randomBytes n (f ∘ h)
  | .now h => .now (f ∘ h)
  | .navigate u r => .navigate u r
  | .go n => .go n
  | .load u => .load u
  | .storageSet s k v => .storageSet s k v
  | .storageRemove s k => .storageRemove s k
  | .storageGet s k h => .storageGet s k (f ∘ h)
  | .focus i b => .focus i b
  | .port n v => .port n v
  | .title t => .title t
  | .io run => .io fun dispatch => run (dispatch ∘ f)

end Effect

namespace Cmd

/-- No effect. -/
def none : Cmd Msg := {}

instance : Inhabited (Cmd Msg) := ⟨none⟩

def ofEffect (e : Effect Msg) : Cmd Msg := ⟨[e]⟩

/-- All of the commands, in order. -/
def batch (cmds : List (Cmd Msg)) : Cmd Msg := ⟨cmds.flatMap (·.effects)⟩

instance : Append (Cmd Msg) := ⟨fun a b => ⟨a.effects ++ b.effects⟩⟩

def map (f : α → β) (c : Cmd α) : Cmd β := ⟨c.effects.map (Effect.map f)⟩

def isNone (c : Cmd Msg) : Bool := c.effects.isEmpty

/-- Delivers `msg` after the current update. -/
def send (msg : Msg) : Cmd Msg := ofEffect (.msg msg)

/-- Delivers `msg` after `ms` milliseconds. -/
def delay (ms : Nat) (msg : Msg) : Cmd Msg := ofEffect (.delay ms msg)

def now (handle : Float → Msg) : Cmd Msg := ofEffect (.now handle)

/-- `n` random bytes from the platform's cryptographic generator. -/
def randomBytes (n : Nat) (handle : ByteArray → Msg) : Cmd Msg := ofEffect (.randomBytes n handle)

/-- A random natural number in `[lo, hi]` (inclusive), from cryptographic bytes. -/
def randomNat (lo hi : Nat) (handle : Nat → Msg) : Cmd Msg :=
  randomBytes 8 fun b =>
    let x := b.foldl (fun acc byte => acc * 256 + byte.toNat) 0
    handle (lo + x % (hi + 1 - lo))

/-- Navigates within the app (`history.pushState`); `onUrlChange` then gets the URL. -/
def pushUrl (url : String) : Cmd Msg := ofEffect (.navigate url false)
/-- As `pushUrl`, replacing the current history entry. -/
def replaceUrl (url : String) : Cmd Msg := ofEffect (.navigate url true)
def back (n : Nat := 1) : Cmd Msg := ofEffect (.go (-(n : Int)))
def forward (n : Nat := 1) : Cmd Msg := ofEffect (.go n)
/-- Leaves the app for another page. -/
def load (url : String) : Cmd Msg := ofEffect (.load url)

def storageSet (key value : String) (storage : Storage := .local) : Cmd Msg := ofEffect (.storageSet storage key value)
def storageRemove (key : String) (storage : Storage := .local) : Cmd Msg := ofEffect (.storageRemove storage key)
def storageGet (key : String) (handle : Option String → Msg) (storage : Storage := .local) : Cmd Msg :=
  ofEffect (.storageGet storage key handle)

/-- Focuses the element whose `id` attribute is `id` once the next frame is applied. -/
def focus (id : String) : Cmd Msg := ofEffect (.focus id false)
def blur (id : String) : Cmd Msg := ofEffect (.focus id true)

/-- Sends `value` out through the port `name`. -/
def port (name : String) (value : Lasm.JS.Data) : Cmd Msg := ofEffect (.port name value)

/-- Sets `document.title`. -/
def title (t : String) : Cmd Msg := ofEffect (.title t)

/-- Runs an `IO` action; it may deliver messages with the function it gets. -/
def io (run : (Msg → IO Unit) → IO Unit) : Cmd Msg := ofEffect (.io run)

end Cmd

namespace Http

/-- `GET url`; the body as text if the status is 2xx. -/
def get (url : String) (handle : Except Error String → Msg) : Cmd Msg :=
  .ofEffect (.http { url } fun
    | .error e => handle (.error (.network e))
    | .ok r => handle (if r.ok then .ok r.body else .error (.status r)))

/-- `POST url` with a body (`application/json` by default). -/
def post (url : String) (body : String) (handle : Except Error String → Msg)
    (contentType : String := "application/json") : Cmd Msg :=
  .ofEffect (.http { method := "POST", url, body := some body, headers := [("content-type", contentType)] } fun
    | .error e => handle (.error (.network e))
    | .ok r => handle (if r.ok then .ok r.body else .error (.status r)))

/-- Any request; `handle` gets every response, whatever its status. -/
def request (r : Request) (handle : Except Error Response → Msg) : Cmd Msg :=
  .ofEffect (.http r fun
    | .error e => handle (.error (.network e))
    | .ok resp => handle (.ok resp))

end Http

end Lasm.UI
