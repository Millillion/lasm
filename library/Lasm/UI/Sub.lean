/-
Subscriptions: events from outside the view (time, animation frames, window and
document events, ports). `subscriptions model` is evaluated after every update;
the runtime starts and stops the underlying listeners when the set of specs
changes, and always calls the latest handlers.
-/
import Lasm.JS.Core
import Lasm.UI.Html

namespace Lasm.UI

/-- What a subscription listens to (compared between updates). -/
inductive SubSpec where
  /-- `setInterval(…, ms)`; the value is `Date.now()`. -/
  | every (ms : Nat)
  /-- `requestAnimationFrame`, every frame; the value is the frame time. -/
  | frame
  /-- An event on `window` (`resize`, `keydown`, `popstate`, …), with a decoder's paths. -/
  | window (event : String) (paths : List Path) (preventDefault stopPropagation : Bool)
  /-- An event on `document` (`visibilitychange`, `keydown`, …). -/
  | document (event : String) (paths : List Path) (preventDefault stopPropagation : Bool)
  /-- Values JavaScript sends with `app.ports[name].send(value)`. -/
  | port (name : String)
  deriving DecidableEq, Hashable, Repr, Inhabited

structure SubItem (Msg : Type) where
  spec : SubSpec
  handle : Array Lasm.JS.Data → Option Msg

structure Sub (Msg : Type) where
  items : List (SubItem Msg) := []

namespace Sub

def none : Sub Msg := {}
instance : Inhabited (Sub Msg) := ⟨none⟩
instance : Append (Sub Msg) := ⟨fun a b => ⟨a.items ++ b.items⟩⟩

def batch (subs : List (Sub Msg)) : Sub Msg := ⟨subs.flatMap (·.items)⟩

def map (f : α → β) (s : Sub α) : Sub β :=
  ⟨s.items.map fun i => { spec := i.spec, handle := fun vs => (i.handle vs).map f }⟩

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
def every (ms : Nat) (f : Float → Msg) : Sub Msg := ⟨[{ spec := .every ms, handle := fun vs => some (f (number vs)) }]⟩

/-- Every animation frame, with its timestamp (`requestAnimationFrame`). -/
def onAnimationFrame (f : Float → Msg) : Sub Msg := ⟨[{ spec := .frame, handle := fun vs => some (f (number vs)) }]⟩

/-- An event on `window`, decoded. -/
def onWindow (event : String) (d : Decoder Msg) (preventDefault stopPropagation : Bool := false) : Sub Msg :=
  ⟨[{ spec := .window event d.paths preventDefault stopPropagation, handle := fun vs => d.run (vs.toList.map evVal) }]⟩

/-- An event on `document`, decoded. -/
def onDocument (event : String) (d : Decoder Msg) (preventDefault stopPropagation : Bool := false) : Sub Msg :=
  ⟨[{ spec := .document event d.paths preventDefault stopPropagation, handle := fun vs => d.run (vs.toList.map evVal) }]⟩

def onKeyDown (d : Decoder Msg) : Sub Msg := onDocument "keydown" d
def onKeyUp (d : Decoder Msg) : Sub Msg := onDocument "keyup" d
def onMouseMove (d : Decoder Msg) : Sub Msg := onDocument "mousemove" d
def onMouseUp (d : Decoder Msg) : Sub Msg := onDocument "mouseup" d
def onClick (d : Decoder Msg) : Sub Msg := onDocument "click" d

/-- Window size changes, with `innerWidth` and `innerHeight`. -/
def onResize (f : Float → Float → Msg) : Sub Msg :=
  onWindow "resize" (Decoder.map2 f (Decoder.float ["currentTarget", "innerWidth"]) (Decoder.float ["currentTarget", "innerHeight"]))

/-- `document.visibilityState` changes (`"visible"` or `"hidden"`). -/
def onVisibilityChange (f : String → Msg) : Sub Msg :=
  onDocument "visibilitychange" ((Decoder.string ["currentTarget", "visibilityState"]).map f)

/-- Values sent from JavaScript through the port `name`. -/
def port (name : String) (f : Lasm.JS.Data → Option Msg) : Sub Msg :=
  ⟨[{ spec := .port name, handle := fun vs => if h : 0 < vs.size then f vs[0] else f .undefined }]⟩

end Sub

end Lasm.UI
