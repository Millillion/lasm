/-
Lasm.Web events: listeners and event objects. Handlers are synchronous Lean
functions (`Event → IO Unit`), called while the browser dispatches the event,
so `Event.preventDefault` works. A handler that needs to wait (for `fetch`, a
timer) starts `Async` work and returns.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- Options of `addEventListener`. -/
structure ListenerOptions where
  /-- Run during the capture phase. -/
  capture : Bool := false
  /-- Promise not to call `preventDefault` (scrolling stays smooth). -/
  passive : Bool := false
  /-- Remove the listener after its first call. -/
  once : Bool := false
  deriving ToJS, Inhabited

namespace Raw
@[js "lasm:web" "listen"] opaque listen : EventTarget → String → Value → ListenerOptions → IO Listener
@[js "lasm:web" "unlisten"] opaque unlisten : Listener → IO Unit
@[js "lasm:web" "dispatchEvent"] opaque dispatchEvent : EventTarget → Event → IO Bool
@[js "lasm:web" "createEvent"] opaque createEvent : String → Bool → Bool → IO Event
@[js "lasm:web" "createCustomEvent"] opaque createCustomEvent : String → Data → Bool → Bool → IO Event
@[js "lasm:web" "eventInfo"] opaque eventInfo : Event → IO Data
@[js "lasm:web" "targetValue"] opaque targetValue : Event → IO String
@[js "lasm:web" "targetChecked"] opaque targetChecked : Event → IO Bool
end Raw

/-- What a handler usually reads from an event, in one call (`Event.info`).
Fields an event does not have are empty or zero. -/
structure EventInfo where
  type : String
  /-- Keyboard: `key` ("Enter", "a") and `code` ("KeyA"). -/
  key : String
  code : String
  /-- A held key repeating (`repeat`). -/
  keyRepeat : Bool
  altKey : Bool
  ctrlKey : Bool
  metaKey : Bool
  shiftKey : Bool
  /-- Mouse and pointer coordinates. -/
  clientX : Float
  clientY : Float
  pageX : Float
  pageY : Float
  offsetX : Float
  offsetY : Float
  button : Float
  buttons : Float
  /-- Wheel. -/
  deltaX : Float
  deltaY : Float
  /-- `target.value` (inputs) and `target.checked` (checkboxes). -/
  value : String
  checked : Bool
  timeStamp : Float
  deriving FromJS, Inhabited, Repr

namespace EventTarget
/-- `target.addEventListener(type, handler, options)`. The listener stays until
`Listener.remove`, or until the app unmounts. -/
def addEventListener (target : EventTarget) (type : String) (handler : Event → IO Unit)
    (options : ListenerOptions := {}) : IO Listener := do
  let f ← callback fun args => do handler (← argument Event s!"{type} event" args)
  Raw.listen target type f options
/-- `addEventListener`, shorter. -/
def on (target : EventTarget) (type : String) (handler : Event → IO Unit) (options : ListenerOptions := {}) : IO Listener :=
  addEventListener target type handler options
/-- `target.dispatchEvent(event)`; false when a handler called `preventDefault`. -/
def dispatchEvent (target : EventTarget) (event : Event) : IO Bool := Raw.dispatchEvent target event
end EventTarget

/-- Unregisters the listener. -/
def Listener.remove (l : Listener) : IO Unit := Raw.unlisten l

namespace Event
/-- A new event (`new Event(type, { bubbles, cancelable })`), for `dispatchEvent`. -/
def create (type : String) (bubbles : Bool := true) (cancelable : Bool := true) : IO Event := Raw.createEvent type bubbles cancelable
/-- A new `CustomEvent` carrying `detail`. -/
def custom (type : String) (detail : Data) (bubbles : Bool := true) (cancelable : Bool := true) : IO Event :=
  Raw.createCustomEvent type detail bubbles cancelable
/-- The common fields, in one call. -/
def info (e : Event) : IO EventInfo := do decodeAs EventInfo "Event.info" (← Raw.eventInfo e)
def type (e : Event) : IO String := e.val.get "type" String
/-- `key` of a keyboard event. -/
def key (e : Event) : IO String := do return (← e.val.get "key" (Option String)).getD ""
/-- `event.target.value`: the text of the input that fired the event. -/
def targetValue (e : Event) : IO String := Raw.targetValue e
/-- `event.target.checked`. -/
def targetChecked (e : Event) : IO Bool := Raw.targetChecked e
def target (e : Event) : IO (Option EventTarget) := e.val.get "target" (Option EventTarget)
def currentTarget (e : Event) : IO (Option EventTarget) := e.val.get "currentTarget" (Option EventTarget)
/-- The element the event was dispatched to, when it is an element. -/
def targetElement (e : Event) : IO (Option Element) := e.val.get "target" (Option Element)
def preventDefault (e : Event) : IO Unit := discard <| e.val.callMethod "preventDefault" (α := Unit)
def stopPropagation (e : Event) : IO Unit := discard <| e.val.callMethod "stopPropagation" (α := Unit)
def stopImmediatePropagation (e : Event) : IO Unit := discard <| e.val.callMethod "stopImmediatePropagation" (α := Unit)
def defaultPrevented (e : Event) : IO Bool := e.val.get "defaultPrevented" Bool
/-- `detail` of a `CustomEvent`. -/
def detail (e : Event) (α : Type := Data) [FromJS α] : IO α := e.val.get "detail" α
/-- Any property of the event (`dataTransfer`, `touches`, …). -/
def prop (e : Event) (name : String) (α : Type := Data) [FromJS α] : IO α := e.val.get name α
end Event

end Lasm.Web
