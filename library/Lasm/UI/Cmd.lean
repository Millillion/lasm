/-
Commands: what an `update` asks the runtime to do besides changing the model.
The app loop's own effects are data (a message, a timer, a navigation within
the app). Everything else the browser does is one generic command,
`Cmd.task`, which runs any `Async` action, typically through the generated
browser bindings (Lasm.JS.Web.Browser: `fetch`, `localStorage`, `document`,
`crypto`, …), and delivers the message it returns.

Apps that want to inspect their effects in tests and proofs declare their own
effect data and a small interpreter to `Cmd.task` (docs/UI.md, "Effects you
can test").
-/
import Lasm.JS.Core
import Std.Async.Basic

namespace Lasm.UI
open Std.Async

/-- One effect. -/
inductive Effect (Msg : Type) where
  /-- Delivers `msg` (after the current update). -/
  | msg (msg : Msg)
  /-- Delivers `msg` after `ms` milliseconds (`setTimeout`). -/
  | delay (ms : Nat) (msg : Msg)
  /-- Navigates within the app: `history.pushState` (or `replaceState`) with
  the frame that shows the new page, and the app's `onUrlChange` gets the URL
  at once. -/
  | navigate (url : String) (replace : Bool)
  /-- Runs an `Async` action, which may deliver any number of messages with
  the function it gets (`Cmd.task` delivers one). The browser's frame follows
  each message. An error the action throws is reported on the console. -/
  | task (run : (Msg → IO Unit) → Async Unit)

/-- Effects for the runtime to perform, in order. -/
structure Cmd (Msg : Type) where
  effects : List (Effect Msg) := []

namespace Effect

def map (f : α → β) : Effect α → Effect β
  | .msg m => .msg (f m)
  | .delay ms m => .delay ms (f m)
  | .navigate u r => .navigate u r
  | .task run => .task fun deliver => run (deliver ∘ f)

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

/-- Navigates within the app (`history.pushState`); `onUrlChange` then gets the URL. -/
def pushUrl (url : String) : Cmd Msg := ofEffect (.navigate url false)
/-- As `pushUrl`, replacing the current history entry. -/
def replaceUrl (url : String) : Cmd Msg := ofEffect (.navigate url true)

/-- Runs `run` and delivers the message it returns: any browser API, through
the generated bindings, holding no thread while it waits.

    | .load, m => ({ m with loading := true }, Cmd.task do
        let r ← fetch (.usvString "/api/items")
        return .loaded (← r.text))

To turn a failure into a message, catch it: `try … catch e => return .failed (toString e)`;
an uncaught error is reported on the console and delivers nothing. -/
def task (run : Async Msg) : Cmd Msg := ofEffect (.task fun deliver => do deliver (← run))

end Cmd

end Lasm.UI
