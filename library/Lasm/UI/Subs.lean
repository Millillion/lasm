/-
Subscriptions: events from outside the view (time, animation frames, window and
document events, ports). `subscriptions model` is evaluated after every update;
the runtime starts and stops the underlying listeners when the set of specs
changes, and always calls the latest handlers.
-/
import Lasm.JS.Core
import Lasm.UI.Html

namespace Lasm.UI

/-- Where an event subscription listens. -/
inductive Target where
  | window
  | document
  deriving DecidableEq, Hashable, Repr, Inhabited

/-- What a subscription listens to (compared between updates). -/
inductive SubSpec where
  /-- `setInterval(…, ms)`; the value is `Date.now()`. -/
  | every (ms : Nat)
  /-- `requestAnimationFrame`, every frame; the value is the frame time. -/
  | frame
  /-- An event on `window` (`resize`, `keydown`, `popstate`, …) or `document`
  (`visibilitychange`, `keydown`, …), with a decoder's paths. -/
  | event (target : Target) (event : String) (paths : List Path)
  /-- Values JavaScript sends with `app.ports[name].send(value)`. -/
  | port (name : String)
  deriving DecidableEq, Hashable, Repr, Inhabited

structure SubItem (Msg : Type) where
  spec : SubSpec
  /-- The message and, for events, whether to prevent the default and stop
  propagation (`Handled`). -/
  handle : Array Lasm.JS.Data → Option (Handled Msg)

structure Subs (Msg : Type) where
  items : List (SubItem Msg) := []

namespace Subs

def none : Subs Msg := {}
instance : Inhabited (Subs Msg) := ⟨none⟩
instance : Append (Subs Msg) := ⟨fun a b => ⟨a.items ++ b.items⟩⟩

def batch (subs : List (Subs Msg)) : Subs Msg := ⟨subs.flatMap (·.items)⟩

def map (f : α → β) (s : Subs α) : Subs β :=
  ⟨s.items.map fun i => { spec := i.spec, handle := fun vs => (i.handle vs).map (Handled.map f) }⟩

/-- An event value as a decoder sees it. -/
def evVal : Lasm.JS.Data → EvVal
  | .undefined => .undefined
  | .null => .null
  | .bool b => .bool b
  | .number n => .num n
  | .string s => .str s
  | .bigint i => .num (Float.ofInt i)
  | _ => .undefined

private def number : Array Lasm.JS.Data → Float
  | #[.number n] => n
  | _ => 0

/-- Every `ms` milliseconds, with the time (`Date.now()`). -/
def every (ms : Nat) (f : Float → Msg) : Subs Msg := ⟨[{ spec := .every ms, handle := fun vs => some { message := f (number vs) } }]⟩

/-- Every animation frame, with its timestamp (`requestAnimationFrame`). -/
def onAnimationFrame (f : Float → Msg) : Subs Msg := ⟨[{ spec := .frame, handle := fun vs => some { message := f (number vs) } }]⟩

/-- An event on `window` or `document`, with a decoder whose value also decides,
for each event, whether to prevent its default and stop its propagation. Lean
decides while the event is dispatched (the applier calls Lean synchronously
from its listener). An event the decoder gives no message for is left alone.
Every subscription to the same event and decoder fields shares one listener,
and all of their handlers run: stopping propagation keeps the event from
`window` (after `document`), not from the other handlers. -/
def custom (target : Target) (event : String) (d : Decoder (Handled Msg)) : Subs Msg :=
  ⟨[{ spec := .event target event d.paths, handle := fun vs => d.run (vs.toList.map evVal) }]⟩

/-- An event on `window` or `document`, decoded (`Subs.on .window "online" …`). -/
def on (target : Target) (event : String) (d : Decoder Msg) : Subs Msg :=
  custom target event (d.map fun m => { message := m })

/-- An event on `window` or `document`; the decoder gives the message and
whether to call `preventDefault()` for this event (Ctrl+S in an editor:
`(.save, true)` for that key, no message for the others). -/
def preventDefaultOn (target : Target) (event : String) (d : Decoder (Msg × Bool)) : Subs Msg :=
  custom target event (d.map fun (m, p) => { message := m, preventDefault := p })

/-- An event on `window` or `document`; the decoder gives the message and
whether to call `stopPropagation()` for this event. -/
def stopPropagationOn (target : Target) (event : String) (d : Decoder (Msg × Bool)) : Subs Msg :=
  custom target event (d.map fun (m, s) => { message := m, stopPropagation := s })

def onKeyDown (d : Decoder Msg) : Subs Msg := on .document "keydown" d
def onKeyUp (d : Decoder Msg) : Subs Msg := on .document "keyup" d
def onMouseMove (d : Decoder Msg) : Subs Msg := on .document "mousemove" d
def onMouseUp (d : Decoder Msg) : Subs Msg := on .document "mouseup" d
def onClick (d : Decoder Msg) : Subs Msg := on .document "click" d

/-- Window size changes, with `innerWidth` and `innerHeight`. -/
def onResize (f : Float → Float → Msg) : Subs Msg :=
  on .window "resize" (Decoder.map2 f (Decoder.float ["currentTarget", "innerWidth"]) (Decoder.float ["currentTarget", "innerHeight"]))

/-- `document.visibilityState` changes (`"visible"` or `"hidden"`). -/
def onVisibilityChange (f : String → Msg) : Subs Msg :=
  on .document "visibilitychange" ((Decoder.string ["currentTarget", "visibilityState"]).map f)

/-- Values sent from JavaScript through the port `name`. -/
def port (name : String) (f : Lasm.JS.Data → Option Msg) : Subs Msg :=
  ⟨[{ spec := .port name, handle := fun vs => (if h : 0 < vs.size then f vs[0] else f .undefined).map fun m => { message := m } }]⟩

end Subs

end Lasm.UI
