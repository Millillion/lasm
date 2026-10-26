/-
List facts for the correctness proof of `Lasm.UI.diff`: how the model's
child operations (insert before, remove, find, modify by id) act on sibling
lists with distinct ids, and slices of the old/new windows of the two-ended
children diff.
-/
import Lasm.UI.Proofs.Basic

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg : Type}

/-! Ops -/

@[simp] theorem applyOps_nil (l : List Dom) : applyOps ([] : List (Op Msg)) l = l := by
  rw [applyOps]

@[simp] theorem applyOps_cons (op : Op Msg) (ops : List (Op Msg)) (l : List Dom) :
    applyOps (op :: ops) l = applyOps ops (applyOp op l) := by
  rw [applyOps]

theorem applyOps_append (xs ys : List (Op Msg)) (l : List Dom) :
    applyOps (xs ++ ys) l = applyOps ys (applyOps xs l) := by
  induction xs generalizing l with
  | nil => simp
  | cons x xs ih => simp [ih]

theorem applyOps_push (ops : Array (Op Msg)) (op : Op Msg) (l : List Dom) :
    applyOps (ops.push op).toList l = applyOp op (applyOps ops.toList l) := by
  simp [applyOps_append]

theorem applyOps_appendList (ops : Array (Op Msg)) (xs : List (Op Msg)) (l : List Dom) :
    applyOps (ops ++ xs).toList l = applyOps xs (applyOps ops.toList l) := by
  simp [applyOps_append]

/-! Model operations on sibling lists -/

theorem ids_not_mem {A : List (Live Msg)} {i : Nat} (h : i ∉ A.map Live.id) : ∀ a ∈ A, a.id ≠ i := by
  intro a ha he; exact h (List.mem_map.2 ⟨a, ha, he⟩)

theorem removeId_map (i : Nat) (A : List (Live Msg)) (h : i ∉ A.map Live.id) :
    removeId i (A.map toDom) = A.map toDom := by
  unfold removeId
  rw [List.filter_eq_self]
  intro d hd
  obtain ⟨a, ha, rfl⟩ := List.mem_map.1 hd
  simpa using ids_not_mem h a ha

theorem removeId_mid (A B : List (Live Msg)) (x : Live Msg) (h : ((A ++ x :: B).map Live.id).Nodup) :
    removeId x.id ((A ++ x :: B).map toDom) = (A ++ B).map toDom := by
  simp only [List.map_append, List.map_cons, List.nodup_append, List.nodup_cons] at h
  obtain ⟨hA, ⟨hxB, hB⟩, hdis⟩ := h
  have hxA : x.id ∉ A.map Live.id := fun hm => by
    have := hdis _ hm x.id (List.mem_cons_self ..); exact this rfl
  have h1 := removeId_map x.id A hxA
  have h2 := removeId_map x.id B hxB
  unfold removeId at *
  simp only [List.map_append, List.map_cons, List.filter_append, List.filter_cons, id_toDom, ne_eq,
    not_true_eq_false, decide_false, Bool.false_eq_true, ↓reduceIte, h1, h2]

theorem findId_map_none (i : Nat) (A : List (Live Msg)) (h : i ∉ A.map Live.id) :
    ∀ l, findId i (A.map toDom ++ l) = findId i l := by
  induction A with
  | nil => simp
  | cons a A ih =>
    intro l
    simp only [List.map_cons, List.cons_append, findId, id_toDom]
    have : a.id ≠ i := ids_not_mem h a (List.mem_cons_self ..)
    simp only [this, ↓reduceIte]
    exact ih (fun hm => h (List.mem_cons_of_mem _ hm)) l

theorem findId_mid (A B : List (Live Msg)) (x : Live Msg) (h : x.id ∉ A.map Live.id) :
    findId x.id ((A ++ x :: B).map toDom) = some (toDom x) := by
  rw [List.map_append, findId_map_none _ _ h]
  simp [findId]

/-- Inserting before the head of `E` (or appending, when `E` is empty). -/
theorem insertBefore_anchor (d : Dom) (A E : List (Live Msg))
    (h : ∀ e ∈ E.head?, e.id ∉ A.map Live.id) :
    insertBefore d (E.head?.map Live.id) ((A ++ E).map toDom) = A.map toDom ++ d :: E.map toDom := by
  cases E with
  | nil => simp [insertBefore]
  | cons e E =>
    have he := h e (by simp)
    simp only [List.head?_cons, Option.map_some, List.map_append, List.map_cons]
    clear h
    induction A with
    | nil => simp [insertBefore]
    | cons a A ih =>
      have : a.id ≠ e.id := fun hh => he (by simp [hh])
      simp only [List.map_cons, List.cons_append, insertBefore, id_toDom, this, ↓reduceIte]
      rw [ih (fun hm => he (List.mem_cons_of_mem _ hm))]

theorem modId_map (i : Nat) (g : Dom → Dom) (A : List (Live Msg)) (h : i ∉ A.map Live.id) :
    modId i g (A.map toDom) = A.map toDom := by
  unfold modId
  rw [List.map_map]
  apply List.map_congr_left
  intro a ha
  simp [ids_not_mem h a ha]

/-- The node `o` of a sibling list replaced by `x` (same id), through `modId`. -/
theorem modId_mid (A B : List (Live Msg)) (o x : Live Msg) (h : ((A ++ o :: B).map Live.id).Nodup) :
    modId o.id (fun _ => toDom x) ((A ++ o :: B).map toDom) = (A ++ x :: B).map toDom := by
  simp only [List.map_append, List.map_cons, List.nodup_append, List.nodup_cons] at h
  obtain ⟨hA, ⟨hxB, hB⟩, hdis⟩ := h
  have hxA : o.id ∉ A.map Live.id := fun hm => by
    have := hdis _ hm o.id (List.mem_cons_self ..); exact this rfl
  have h1 := modId_map o.id (fun _ => toDom x) A hxA
  have h2 := modId_map o.id (fun _ => toDom x) B hxB
  unfold modId at *
  simp only [List.map_append, List.map_cons, h1, h2, id_toDom, ↓reduceIte]

/-- In a list with distinct ids, the only node with `o`'s id is `o`. -/
theorem only_node (A B : List (Live Msg)) (o : Live Msg) (h : ((A ++ o :: B).map Live.id).Nodup) :
    ∀ d ∈ (A ++ o :: B).map toDom, d.id = o.id → d = toDom o := by
  intro d hd hid
  simp only [List.map_append, List.map_cons, List.mem_append, List.mem_cons, List.mem_map] at hd
  simp only [List.map_append, List.map_cons, List.nodup_append, List.nodup_cons] at h
  obtain ⟨hA, ⟨hxB, hB⟩, hdis⟩ := h
  rcases hd with ⟨a, ha, rfl⟩ | rfl | ⟨b, hb, rfl⟩
  · exfalso; rw [id_toDom] at hid
    exact hdis _ (List.mem_map.2 ⟨a, ha, rfl⟩) _ (List.mem_cons_self ..) hid
  · rfl
  · exfalso; rw [id_toDom] at hid
    exact hxB (List.mem_map.2 ⟨b, hb, hid⟩)

/-! Slices (windows of the two-ended diff) -/

/-- Elements `lo ≤ i < hi` of `l`. -/
def slice (l : List α) (lo hi : Nat) : List α := (l.drop lo).take (hi - lo)

theorem slice_empty (l : List α) {lo hi : Nat} (h : hi ≤ lo) : slice l lo hi = [] := by
  unfold slice; rw [show hi - lo = 0 by omega]; simp

theorem lt_of_getElem?_some {l : List α} {i : Nat} {x : α} (hx : l[i]? = some x) : i < l.length := by
  rcases Nat.lt_or_ge i l.length with h' | h'
  · exact h'
  · simp [List.getElem?_eq_none h'] at hx

theorem slice_cons (l : List α) {lo hi : Nat} {x : α} (hx : l[lo]? = some x) (h : lo < hi) :
    slice l lo hi = x :: slice l (lo + 1) hi := by
  unfold slice
  have hlen := lt_of_getElem?_some hx
  rw [List.drop_eq_getElem_cons hlen, show hi - lo = (hi - (lo + 1)) + 1 by omega, List.take_succ_cons]
  rw [List.getElem?_eq_getElem hlen] at hx
  rw [Option.some.inj hx]

theorem slice_snoc (l : List α) {lo hi : Nat} {x : α} (hx : l[hi - 1]? = some x) (h : lo < hi) :
    slice l lo hi = slice l lo (hi - 1) ++ [x] := by
  unfold slice
  rw [show hi - lo = (hi - 1 - lo) + 1 by omega, List.take_add_one, List.getElem?_drop,
    show lo + (hi - 1 - lo) = hi - 1 by omega, hx]
  simp

theorem slice_append (l : List α) {lo i hi : Nat} (h1 : lo ≤ i) (h2 : i ≤ hi) :
    slice l lo hi = slice l lo i ++ slice l i hi := by
  unfold slice
  rw [show hi - lo = (i - lo) + (hi - i) by omega, List.take_add, List.drop_drop,
    show lo + (i - lo) = i by omega]

theorem slice_split (l : List α) {lo i hi : Nat} {x : α} (hx : l[i]? = some x) (h1 : lo ≤ i) (h2 : i < hi) :
    slice l lo hi = slice l lo i ++ x :: slice l (i + 1) hi := by
  rw [slice_append l h1 (Nat.le_of_lt h2), slice_cons l hx h2]

theorem slice_set_lt (l : List α) (i : Nat) (v : α) (lo hi : Nat) (h : hi ≤ i) :
    slice (l.set i v) lo hi = slice l lo hi := by
  unfold slice; rw [← List.drop_take, ← List.drop_take, List.take_set_of_le h]

theorem slice_set_gt (l : List α) (i : Nat) (v : α) (lo hi : Nat) (h : i < lo) :
    slice (l.set i v) lo hi = slice l lo hi := by
  unfold slice; rw [List.drop_set_of_lt h]

theorem getElem?_set_self' {l : List α} {i : Nat} {x v : α} (hx : l[i]? = some x) : (l.set i v)[i]? = some v := by
  have := lt_of_getElem?_some hx
  simp [this]

end Lasm.UI.Proofs
