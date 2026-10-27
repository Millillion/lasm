/-
Lasm.Web storage: `localStorage` (kept across visits) and `sessionStorage`
(kept for the tab), string keys to string values.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- `localStorage`: per origin, kept across visits. -/
@[js "lasm:web" "localStorage"] opaque localStorage : IO Storage
/-- `sessionStorage`: per origin and tab. -/
@[js "lasm:web" "sessionStorage"] opaque sessionStorage : IO Storage

namespace Storage
/-- The value stored under `key`, if any. -/
def get (s : Storage) (key : String) : IO (Option String) := s.val.callMethod "getItem" #[toJS key] (Option String)
/-- Stores `value` under `key` (an error when the storage quota is exceeded). -/
def set (s : Storage) (key value : String) : IO Unit := s.val.callMethod "setItem" #[toJS key, toJS value] Unit
def remove (s : Storage) (key : String) : IO Unit := s.val.callMethod "removeItem" #[toJS key] Unit
/-- Removes every key. -/
def clear (s : Storage) : IO Unit := s.val.callMethod "clear" #[] Unit
/-- The number of keys. -/
def length (s : Storage) : IO Nat := s.val.get "length" Nat
/-- The `i`th key. -/
def key (s : Storage) (i : Nat) : IO (Option String) := s.val.callMethod "key" #[toJS i] (Option String)
/-- Every key. -/
def keys (s : Storage) : IO (Array String) := do
  let n ← s.length
  let mut result := #[]
  for i in [0:n] do
    if let some k ← s.key i then result := result.push k
  return result
end Storage

end Lasm.Web
