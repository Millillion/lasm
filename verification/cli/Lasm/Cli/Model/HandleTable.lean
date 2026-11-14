/-
# src/handle-table.mjs, in Lean: `HandleTable`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated sequences of operations by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| src/handle-table.mjs | here |
| --- | --- |
| `new HandleTable({ first, last, entries })` | `HandleTable.create` |
| `allocate(value)` (its `do … while` loop) | `HandleTable.allocate` (`allocateLoop`) |
| the `Map` it extends: `set`, `delete`, `has` | `HandleTable.set`, `HandleTable.delete`, `HandleTable.has` |

A `Map` is read as its entries in insertion order: `set` of a new key
appends it, of a present key replaces the value in place, and `delete`
removes the key. Values are text here (the differential's).
-/

namespace Lasm.Cli

/-- A handle table: the `Map`'s entries and the private `#first`, `#last`
and `#next`. -/
structure HandleTable where
  entries : List (Nat × String)
  first : Nat
  last : Nat
  next : Nat
deriving DecidableEq, Repr

namespace HandleTable

/-- `map.has(id)`. -/
def has (t : HandleTable) (id : Nat) : Bool := t.entries.any (·.1 == id)

/-- `map.set(id, value)`. -/
def set (t : HandleTable) (id : Nat) (value : String) : HandleTable :=
  if t.has id then { t with entries := t.entries.map fun (k, v) => if k == id then (k, value) else (k, v) }
  else { t with entries := t.entries ++ [(id, value)] }

/-- `map.delete(id)`. -/
def delete (t : HandleTable) (id : Nat) : HandleTable := { t with entries := t.entries.filter (·.1 != id) }

/-- The constructor: `super(entries)` (a later entry of a key replaces an
earlier one in place), then the range check. -/
def create (first last : Int) (entries : List (Nat × String)) : Except String HandleTable :=
  let t : HandleTable := entries.foldl (fun t (k, v) => t.set k v) { entries := [], first := 0, last := 0, next := 0 }
  if first < 1 ∨ last < first ∨ last > 0x7fffffff then .error "Host handles must fit the positive signed i32 range"
  else .ok { t with first := first.toNat, last := last.toNat, next := first.toNat }

/-- The message `allocate` throws (with `code: 'EMFILE'`). -/
def full : String := "Host resource handle table is full"

/-- The `do … while (this.#next !== start)` loop, at most `fuel` times
round (one more than the range's size is enough: `#next` stays in the
range, so the loop is back at `start` after visiting each id once). -/
def allocateLoop (start : Nat) (value : String) : Nat → HandleTable → Except String (Nat × HandleTable)
  | 0, _ => .error full
  | fuel + 1, t =>
    let id := t.next
    let t := { t with next := if id = t.last then t.first else id + 1 }
    if !t.has id then .ok (id, t.set id value)
    else if t.next ≠ start then allocateLoop start value fuel t
    else .error full

/-- `allocate(value)`: the first free id from `#next` on, wrapping from
`#last` to `#first`; or the message it throws when every id is taken. -/
def allocate (t : HandleTable) (value : String) : Except String (Nat × HandleTable) :=
  allocateLoop t.next value (t.last - t.first + 1) t

end HandleTable

end Lasm.Cli
