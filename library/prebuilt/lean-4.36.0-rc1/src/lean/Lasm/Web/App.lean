/-
Lasm.Web app: what the browser loader's `mount(element, { flags })` gives the
Lean program (`lasm:app`, src/lasm-modules/app.mjs): its root element, the
flags, whether it hydrates server-rendered content, ports (named channels to
and from the page's JavaScript), messages from `app.send` and unmount handlers.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web.App
open Lasm.JS
open Lasm.Web

/-- A named channel between the app and the page's JavaScript
(`app.ports.<name>` there). -/
structure Port where
  val : Value
instance : FromJS Port := handleFromJS "Lasm.Web.App.Port" (⟨·⟩)

namespace Raw
@[js "lasm:app" "root"] opaque root : IO Element
@[js "lasm:app" "flags"] opaque flags : IO Data
@[js "lasm:app" "hydrating"] opaque hydrating : IO Bool
@[js "lasm:app" "target"] opaque target : IO String
@[js "lasm:app" "port"] opaque port : String → IO Port
@[js "lasm:app" "onMessage"] opaque onMessage : Value → IO Unit
@[js "lasm:app" "onUnmount"] opaque onUnmount : Value → IO Unit
@[js "lasm:app" "hotState"] opaque hotState : IO Data
@[js "lasm:app" "onHotSave"] opaque onHotSave : Value → IO Unit
end Raw

/-- The element the app is mounted on. -/
def root : IO Element := Raw.root
/-- The `flags` passed to `mount` (or `data-lasm-flags`), converted to `α`. -/
def flags (α : Type := Data) [FromJS α] : IO α := do decodeAs α "Lasm.Web.App.flags" (← Raw.flags)
/-- Whether `mount` was asked to adopt server-rendered content (`hydrate: true`, `data-lasm-hydrate`). -/
def hydrating : IO Bool := Raw.hydrating
/-- `browser` in a mounted app; `none` elsewhere. -/
def target : IO String := Raw.target
/-- The port `name` (created on first use). -/
def port (name : String) : IO Port := Raw.port name

namespace Port
/-- Sends `value` to the page's subscribers (`app.ports.<name>.subscribe(fn)`). -/
def send [ToJS α] (p : Port) (value : α) : IO Unit := p.val.callMethod "emit" #[toJS value] Unit
/-- Handles values the page sends (`app.ports.<name>.send(value)`); values sent
before the first handler are delivered to it. -/
def subscribe (p : Port) (f : Data → IO Unit) : IO Unit := do
  let fn ← callback fun args => do f (args[0]?.getD .undefined)
  p.val.callMethod "listen" #[toJS fn] Unit
/-- `subscribe` with an `Async` handler; the page's `send` resolves when it finishes. -/
def subscribeAsync (p : Port) (f : Data → Async Unit) : IO Unit := do
  let fn ← Function.ofFn fun args => do f (args[0]?.getD .undefined); pure .undefined
  p.val.callMethod "listen" #[toJS fn] Unit
end Port

/-- Handles `app.send(message)`; messages sent earlier are delivered to it. -/
def onMessage (f : Data → IO Unit) : IO Unit := do
  Raw.onMessage (← callback fun args => do f (args[0]?.getD .undefined))
/-- `onMessage` with an `Async` handler; `app.send` resolves when it finishes. -/
def onMessageAsync (f : Data → Async Unit) : IO Unit := do
  Raw.onMessage (← Function.ofFn fun args => do f (args[0]?.getD .undefined); pure .undefined)
/-- Runs `f` when the app is unmounted (`app.unmount()`), before its listeners,
timers and sockets are removed. -/
def onUnmount (f : IO Unit) : IO Unit := do Raw.onUnmount (← callback fun _ => f)

/-- During a hot reload (`@lasm/vite` in development), the state the previous
version saved with `onHotSave`, converted to `α`; `none` otherwise or when it
no longer converts (its type changed). -/
def hotState (α : Type := Data) [FromJS α] : IO (Option α) := do
  match ← Raw.hotState with
  | .undefined => pure none
  | d => match FromJS.fromJS d with | .ok a => pure (some a) | .error _ => pure none
/-- Saves state across a hot reload: `f` runs just before this version is replaced. -/
def onHotSave (f : IO Data) : IO Unit := do
  Raw.onHotSave (← Function.ofSyncFn fun _ => f)

end Lasm.Web.App
