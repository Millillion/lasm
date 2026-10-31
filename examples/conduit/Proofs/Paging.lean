/-
Pagination (`Conduit/Paging.lean`, used by `Api.listPage` for the article
lists and the feed): the ids are sorted newest first, and a page is one
window of them. A window is a contiguous run of the sorted list, so pages
keep the order; consecutive pages fit together exactly, so walking the pages
never skips or repeats an article; and every article is on some page.
-/
import Conduit.Paging
import Proofs.Spec
import Std.Data.String.ToNat

namespace Conduit.Proofs

/-- A page is a contiguous run of the list (order kept, nothing inserted). -/
theorem window_infix {α : Type} (p : Page) (l : List α) : p.window l <:+: l :=
  (List.take_prefix _ _).isInfix.trans (List.drop_suffix _ _).isInfix

/-- A page has at most `limit` items. -/
theorem window_length_le {α : Type} (p : Page) (l : List α) : (p.window l).length ≤ p.limit :=
  List.length_take_le _ _

/-- A page of a list without repeats has no repeats. -/
theorem window_nodup {α : Type} (p : Page) (l : List α) (h : l.Nodup) : (p.window l).Nodup :=
  List.Nodup.sublist (window_infix p l).sublist h

/-- **Consecutive pages fit together**: the page at `offset` followed by
the page at `offset + limit` is exactly the double-size page at `offset`. -/
theorem window_consecutive {α : Type} (k o : Nat) (l : List α) :
    ({ limit := k, offset := o } : Page).window l ++ ({ limit := k, offset := o + k } : Page).window l =
      ({ limit := k + k, offset := o } : Page).window l := by
  simp only [Page.window]
  rw [List.take_add, List.drop_drop]

/-- **Walking the pages never skips or repeats**: pages `0, 1, …, n-1` of
size `k`, one after the other, are the first `n * k` items, in order. -/
theorem pages_concat {α : Type} (k n : Nat) (l : List α) :
    (List.range n).flatMap (fun i => ({ limit := k, offset := i * k } : Page).window l) = l.take (n * k) := by
  induction n with
  | zero => simp
  | succ n ih =>
    rw [List.range_succ, List.flatMap_append, ih]
    simp only [List.flatMap_cons, List.flatMap_nil, List.append_nil, Page.window]
    rw [Nat.succ_mul, List.take_add]

/-- Enough pages show every item exactly once, in order. -/
theorem pages_cover_all {α : Type} (k n : Nat) (l : List α) (h : l.length ≤ n * k) :
    (List.range n).flatMap (fun i => ({ limit := k, offset := i * k } : Page).window l) = l := by
  rw [pages_concat]; exact List.take_of_length_le h

/-- `newestFirst` sorts newest (largest id) first … -/
theorem newestFirst_sorted (ids : List Nat) : (newestFirst ids).Pairwise (· ≥ ·) := by
  have := List.pairwise_mergeSort (le := fun a b => decide (a ≥ b))
    (fun a b c hab hbc => by simp at *; omega) (fun a b => by simp; omega) ids
  unfold newestFirst
  exact this.imp (by simp)

/-- … and keeps exactly the same ids. -/
theorem newestFirst_perm (ids : List Nat) : (newestFirst ids).Perm ids := List.mergeSort_perm _ _

/-- So every page of a list is sorted newest first. -/
theorem window_newestFirst_sorted (p : Page) (ids : List Nat) : (p.window (newestFirst ids)).Pairwise (· ≥ ·) :=
  (newestFirst_sorted ids).sublist (window_infix p _).sublist

theorem newestFirst_spec : Spec.newestFirst_spec := fun ids => ⟨newestFirst_sorted ids, newestFirst_perm ids⟩

theorem window_spec : Spec.window_spec := fun p l => ⟨window_infix p l, window_length_le p l⟩

theorem pages_cover : Spec.pages_cover := fun k n l => ⟨pages_concat k n l, pages_cover_all k n l⟩

theorem parsePage_spec : Spec.parsePage_spec := by
  refine ⟨rfl, fun l o hl => ?_, ⟨.invalid [("limit", ["must be greater than 0"])], by have h0 : "0".toNat? = some 0 := Nat.toNat?_repr 0; simp [parsePage]; rw [h0]; rfl, rfl⟩, fun s hs => ?_, fun s hs => ?_⟩
  · have h1 : (toString l).toNat? = some l := Nat.toNat?_repr l
    have h2 : (toString o).toNat? = some o := Nat.toNat?_repr o
    simp [parsePage, h1, h2, Nat.pos_iff_ne_zero.mp hl]; rfl
  · exact ⟨_, by simp [parsePage, hs]; rfl, rfl⟩
  · exact ⟨_, by simp [parsePage, hs]; rfl, rfl⟩

end Conduit.Proofs
