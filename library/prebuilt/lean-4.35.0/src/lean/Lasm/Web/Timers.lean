/-
Lasm.Web timers: `setTimeout`, `setInterval`, `requestAnimationFrame` and
microtasks, with Lean callbacks. An app's timers and frames are cancelled when
it unmounts. In `Async` code, `Std.Async`'s `sleep` also works, and
`nextFrame` waits for the next animation frame.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

namespace Raw
@[js "lasm:web" "setTimeout"] opaque setTimeout : Value → Float → IO TimerId
@[js "lasm:web" "clearTimeout"] opaque clearTimeout : TimerId → IO Unit
@[js "lasm:web" "setInterval"] opaque setInterval : Value → Float → IO TimerId
@[js "lasm:web" "clearInterval"] opaque clearInterval : TimerId → IO Unit
@[js "lasm:web" "requestAnimationFrame"] opaque requestAnimationFrame : Value → IO FrameId
@[js "lasm:web" "cancelAnimationFrame"] opaque cancelAnimationFrame : FrameId → IO Unit
@[js "lasm:web" "queueMicrotask"] opaque queueMicrotask : Value → IO Unit
@[js "lasm:web" "nextFrame"] opaque nextFrame : Async Float
@[js "lasm:web" "now"] opaque now : IO Float
end Raw

/-- Runs `f` once after `ms` milliseconds. -/
def setTimeout (ms : Nat) (f : IO Unit) : IO TimerId := do
  Raw.setTimeout (← callback fun _ => f) ms.toFloat
def clearTimeout (t : TimerId) : IO Unit := Raw.clearTimeout t
/-- Runs `f` every `ms` milliseconds until `clearInterval`. -/
def setInterval (ms : Nat) (f : IO Unit) : IO TimerId := do
  Raw.setInterval (← callback fun _ => f) ms.toFloat
def clearInterval (t : TimerId) : IO Unit := Raw.clearInterval t
/-- Runs `f` before the next repaint, with the frame's timestamp (milliseconds). -/
def requestAnimationFrame (f : Float → IO Unit) : IO FrameId := do
  Raw.requestAnimationFrame (← callback fun args => do f (← argument Float "animation frame time" args))
def cancelAnimationFrame (frame : FrameId) : IO Unit := Raw.cancelAnimationFrame frame
/-- Runs `f` once the current JavaScript task's synchronous work is done. -/
def queueMicrotask (f : IO Unit) : IO Unit := do Raw.queueMicrotask (← callback fun _ => f)
/-- Waits for the next animation frame; its timestamp. -/
def nextFrame : Async Float := Raw.nextFrame
/-- `performance.now()`: milliseconds since the page started, for measuring. -/
def now : IO Float := Raw.now

end Lasm.Web
