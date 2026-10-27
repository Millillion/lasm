/-
Lasm.Web location and history: the page's URL, navigation, and the history
stack for client-side routing (`pushState`, `popstate`, `hashchange`).
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types
import Lasm.Web.Events
import Lasm.Web.Dom

namespace Lasm.Web
open Lasm.JS

namespace Raw
@[js "lasm:web" "location"] opaque location : IO Value
@[js "lasm:web" "history"] opaque history : IO Value
end Raw

/-- The page's URL (`location`), read at the time of the call. -/
structure Location where
  href : String
  origin : String
  protocol : String
  host : String
  hostname : String
  port : String
  pathname : String
  search : String
  hash : String
  deriving FromJS, Inhabited, Repr

/-- The page's current URL. -/
def location : IO Location := do
  (← Raw.location).getFields #["href", "origin", "protocol", "host", "hostname", "port", "pathname", "search", "hash"] Location

namespace Location
/-- Navigates to `url` (`location.assign`), adding a history entry. -/
def assign (url : String) : IO Unit := do (← Raw.location).callMethod "assign" #[toJS url] Unit
/-- Navigates to `url` without a history entry (`location.replace`). -/
def replace (url : String) : IO Unit := do (← Raw.location).callMethod "replace" #[toJS url] Unit
/-- Reloads the page. -/
def reload : IO Unit := do (← Raw.location).callMethod "reload" #[] Unit
/-- Sets `location.hash`. -/
def setHash (hash : String) : IO Unit := do (← Raw.location).set "hash" hash
end Location

namespace History
/-- Adds a history entry for `url` with `state` (no page load: client-side routing). -/
def pushState (url : String) (state : Data := .null) : IO Unit := do
  (← Raw.history).callMethod "pushState" #[state, .string "", .string url] Unit
/-- Replaces the current history entry. -/
def replaceState (url : String) (state : Data := .null) : IO Unit := do
  (← Raw.history).callMethod "replaceState" #[state, .string "", .string url] Unit
def back : IO Unit := do (← Raw.history).callMethod "back" #[] Unit
def forward : IO Unit := do (← Raw.history).callMethod "forward" #[] Unit
/-- Moves `delta` entries through the history (negative: back). -/
def go (delta : Int) : IO Unit := do (← Raw.history).callMethod "go" #[toJS delta] Unit
/-- The current entry's state. -/
def state : IO Data := do (← Raw.history).get "state" Data
/-- The number of entries. -/
def length : IO Nat := do (← Raw.history).get "length" Nat
end History

/-- Calls `f` with the entry's state when the user moves through the history
(back, forward); `pushState` itself does not fire it. -/
def onPopState (f : Data → IO Unit) : IO Listener := do
  (← window).toEventTarget.addEventListener "popstate" fun e => do f (← e.prop "state")

/-- Calls `f` with the new `location.hash` when it changes. -/
def onHashChange (f : String → IO Unit) : IO Listener := do
  (← window).toEventTarget.addEventListener "hashchange" fun _ => do f (← location).hash

end Lasm.Web
