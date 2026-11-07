/-
The theorems of Lasm.KV's propositions (Spec.lean): each `Theorems.x` has
type exactly `Spec.x`, from the lemmas of Lean's `Std.HashMap`.
-/
import Lasm.KV.Spec
import Std.Data.HashMap.Lemmas

namespace Lasm.KV.Theorems
open Lasm.KV

theorem read_empty : Spec.read_empty := by
  intro key; simp [Table.read]

theorem read_write_self : Spec.read_write_self := by
  intro t key value; simp [Table.read, Table.write]

theorem read_write_other : Spec.read_write_other := by
  intro t key value other h
  simp [Table.read, Table.write, Std.HashMap.getElem?_insert, Ne.symm h]

theorem read_remove_self : Spec.read_remove_self := by
  intro t key; simp [Table.read, Table.remove]

theorem read_remove_other : Spec.read_remove_other := by
  intro t key other h
  simp [Table.read, Table.remove, Std.HashMap.getElem?_erase, Ne.symm h]

theorem write_write : Spec.write_write := by
  intro t key v w k
  by_cases h : k = key
  · subst h; exact (read_write_self _ _ _).trans (read_write_self _ _ _).symm
  · rw [read_write_other _ _ _ _ h, read_write_other _ _ _ _ h, read_write_other _ _ _ _ h]

end Lasm.KV.Theorems
