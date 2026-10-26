/-
Lasm.Web types: typed handles to web-platform objects (DOM nodes, events,
responses, sockets, …). Each wraps a `Lasm.JS.Value`; the subtype relations of
the DOM are structure parents (`Element` extends `Node` extends `EventTarget`),
so `element.appendChild child` and `element.addEventListener …` resolve
through the parents, and coercions convert to a parent type.
-/
import Lasm.JS.Core

namespace Lasm.Web
open Lasm.JS

/-- `FromJS` for a handle type: the JavaScript value is kept as a reference. -/
@[reducible] def handleFromJS (name : String) (mk : Value → α) : FromJS α where
  fromJS d := (FromJS.fromJS d : Except String Value).map mk
  typeName := name
  mode := .reference

/-- An object that receives events (`addEventListener`). -/
structure EventTarget where
  /-- The JavaScript object. -/
  val : Value
instance : ToJS EventTarget := ⟨fun t => .ref t.val ""⟩
instance : FromJS EventTarget := handleFromJS "Lasm.Web.EventTarget" (⟨·⟩)

/-- A DOM node: an element, a text node, a comment, a document or a fragment. -/
structure Node extends EventTarget
instance : ToJS Node := ⟨fun t => .ref t.val ""⟩
instance : FromJS Node := handleFromJS "Lasm.Web.Node" fun v => { val := v }
instance : Coe Node EventTarget := ⟨Node.toEventTarget⟩

/-- A DOM element (HTML, SVG or MathML). Form controls, canvases and media
elements are elements too: their properties are read with `Element.prop`. -/
structure Element extends Node
instance : ToJS Element := ⟨fun t => .ref t.val ""⟩
instance : FromJS Element := handleFromJS "Lasm.Web.Element" fun v => { val := v }
instance : Coe Element Node := ⟨Element.toNode⟩

/-- A text node. -/
structure Text extends Node
instance : ToJS Text := ⟨fun t => .ref t.val ""⟩
instance : FromJS Text := handleFromJS "Lasm.Web.Text" fun v => { val := v }
instance : Coe Text Node := ⟨Text.toNode⟩

/-- A document fragment: nodes assembled off-document, inserted in one step. -/
structure Fragment extends Node
instance : ToJS Fragment := ⟨fun t => .ref t.val ""⟩
instance : FromJS Fragment := handleFromJS "Lasm.Web.Fragment" fun v => { val := v }
instance : Coe Fragment Node := ⟨Fragment.toNode⟩

/-- The page's document. -/
structure Document extends Node
instance : ToJS Document := ⟨fun t => .ref t.val ""⟩
instance : FromJS Document := handleFromJS "Lasm.Web.Document" fun v => { val := v }
instance : Coe Document Node := ⟨Document.toNode⟩

/-- The page's window. -/
structure Window extends EventTarget
instance : ToJS Window := ⟨fun t => .ref t.val ""⟩
instance : FromJS Window := handleFromJS "Lasm.Web.Window" fun v => { val := v }
instance : Coe Window EventTarget := ⟨Window.toEventTarget⟩

/-- A DOM event (any kind: mouse, keyboard, input, custom, …). -/
structure Event where
  val : Value
instance : ToJS Event := ⟨fun t => .ref t.val ""⟩
instance : FromJS Event := handleFromJS "Lasm.Web.Event" (⟨·⟩)

/-- A registered event listener; `Listener.remove` unregisters it. -/
structure Listener where
  val : Value
instance : ToJS Listener := ⟨fun t => .ref t.val ""⟩
instance : FromJS Listener := handleFromJS "Lasm.Web.Listener" (⟨·⟩)

/-- A `fetch` response. -/
structure Response where
  val : Value
instance : ToJS Response := ⟨fun t => .ref t.val ""⟩
instance : FromJS Response := handleFromJS "Lasm.Web.Response" (⟨·⟩)

/-- An `AbortController`: cancels `fetch` calls given its `signal`. -/
structure AbortController where
  val : Value
instance : ToJS AbortController := ⟨fun t => .ref t.val ""⟩
instance : FromJS AbortController := handleFromJS "Lasm.Web.AbortController" (⟨·⟩)

/-- An `AbortSignal`. -/
structure AbortSignal where
  val : Value
instance : ToJS AbortSignal := ⟨fun t => .ref t.val ""⟩
instance : FromJS AbortSignal := handleFromJS "Lasm.Web.AbortSignal" (⟨·⟩)

/-- Form data (`FormData`), for `fetch` bodies and reading forms. -/
structure FormData where
  val : Value
instance : ToJS FormData := ⟨fun t => .ref t.val ""⟩
instance : FromJS FormData := handleFromJS "Lasm.Web.FormData" (⟨·⟩)

/-- URL query parameters (`URLSearchParams`). -/
structure SearchParams where
  val : Value
instance : ToJS SearchParams := ⟨fun t => .ref t.val ""⟩
instance : FromJS SearchParams := handleFromJS "Lasm.Web.SearchParams" (⟨·⟩)

/-- `localStorage` or `sessionStorage`. -/
structure Storage where
  val : Value
instance : ToJS Storage := ⟨fun t => .ref t.val ""⟩
instance : FromJS Storage := handleFromJS "Lasm.Web.Storage" (⟨·⟩)

/-- A WebSocket connection. -/
structure WebSocket extends EventTarget
instance : ToJS WebSocket := ⟨fun t => .ref t.val ""⟩
instance : FromJS WebSocket := handleFromJS "Lasm.Web.WebSocket" fun v => { val := v }
instance : Coe WebSocket EventTarget := ⟨WebSocket.toEventTarget⟩

/-- A canvas's 2D drawing context. -/
structure Context2D where
  val : Value
instance : ToJS Context2D := ⟨fun t => .ref t.val ""⟩
instance : FromJS Context2D := handleFromJS "Lasm.Web.Context2D" (⟨·⟩)

/-- A timer started by `setTimeout` or `setInterval`. -/
structure TimerId where
  id : Float
instance : ToJS TimerId := ⟨fun t => .number t.id⟩
instance : FromJS TimerId := ⟨fun d => (FromJS.fromJS d : Except String Float).map (⟨·⟩), "Lasm.Web.TimerId", .data⟩

/-- An animation frame requested by `requestAnimationFrame`. -/
structure FrameId where
  id : Float
instance : ToJS FrameId := ⟨fun t => .number t.id⟩
instance : FromJS FrameId := ⟨fun d => (FromJS.fromJS d : Except String Float).map (⟨·⟩), "Lasm.Web.FrameId", .data⟩

/-- The callback a Lean function becomes: synchronous, so an event handler can
call `Event.preventDefault` before the browser acts on the event. -/
def callback (f : Array Data → IO Unit) : IO Value :=
  Function.ofSyncFn fun args => do f args; pure .undefined

/-- The first argument of a callback, converted. -/
def argument (α : Type) [FromJS α] (context : String) (args : Array Data) : IO α :=
  decodeAs α context (args[0]?.getD .undefined)

end Lasm.Web
