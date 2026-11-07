/-
# What is proved about Lasm.KV

Every proposition proved about Lasm.KV, as a named `def … : Prop` with a
plain-English doc comment and no proof. Each proposition `Spec.x` is proved
by the theorem `Lasm.KV.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms. library/PROOFS.md
is generated from this file.

Reading guide. The propositions are about the memory store (`Lasm.KV.memory`,
the store on Node, Bun, WASI and wherever the platform has none): its `get`,
`put` and `delete` are `Table.read`, `Table.write` and `Table.remove` on the
table it holds in an `IO.Ref`. What is not proved: that the `IO.Ref` holds
the table between calls (Lean's runtime), concurrent calls (one isolate or
process runs one at a time), and the platform stores (Workers KV, Deno KV,
Fastly KV), which Lasm only calls.
-/
import Lasm.KV

namespace Lasm.KV.Spec
open Lasm.KV

/-! ## The memory store -/

/-- **A new store is empty.** The table a new memory store starts with has
no value for any key. -/
def read_empty : Prop :=
  ∀ (key : String), Table.read {} key = none

/-- **Reading a key after writing it gives what was written.** -/
def read_write_self : Prop :=
  ∀ (t : Table) (key value : String), (t.write key value).read key = some value

/-- **Writing a key changes no other key.** -/
def read_write_other : Prop :=
  ∀ (t : Table) (key value other : String), other ≠ key → (t.write key value).read other = t.read other

/-- **Reading a key after deleting it gives nothing.** -/
def read_remove_self : Prop :=
  ∀ (t : Table) (key : String), (t.remove key).read key = none

/-- **Deleting a key changes no other key.** -/
def read_remove_other : Prop :=
  ∀ (t : Table) (key other : String), other ≠ key → (t.remove key).read other = t.read other

/-- **The last write wins** *(consequence)*. Writing a key twice reads the
same, for every key, as writing only the second value. -/
def write_write : Prop :=
  ∀ (t : Table) (key v w : String) (k : String), ((t.write key v).write key w).read k = (t.write key w).read k

end Lasm.KV.Spec
