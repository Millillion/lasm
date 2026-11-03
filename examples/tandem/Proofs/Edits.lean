/-
Local edits do what the user did: an insertion lands at its position, a
deletion removes exactly its character, and `edit` turns the old text into
the new one.
-/
import Proofs.Typing

namespace Tandem.Proofs
open Tandem Doc

/-! Deletions -/

theorem maxCounter_le {d : Doc} {B : Nat} (h1 : ∀ n ∈ d.nodes, n.id.c ≤ B) (h2 : ∀ i ∈ d.dels, i.c ≤ B) :
    d.maxCounter ≤ B := by
  have key : ∀ {α : Type} (f : α → Nat) (l : List α) (m : Nat), m ≤ B → (∀ x ∈ l, f x ≤ B) →
      l.foldl (fun m x => max m (f x)) m ≤ B := by
    intro α f l
    induction l with
    | nil => intro m hm _; exact hm
    | cons x xs ih =>
      intro m hm hx
      exact ih _ (Nat.max_le.2 ⟨hm, hx x (by simp)⟩) (fun y hy => hx y (by simp [hy]))
  unfold Doc.maxCounter
  exact key _ _ _ (key _ _ _ (Nat.zero_le _) h1) h2

/-- Applying deletions: the same nodes, the ids added to the deletions. -/
theorem apply_dels : ∀ (ids : List Id) {d : Doc}, Wf d →
    Wf (d.applyAll (ids.map .del)) ∧ (d.applyAll (ids.map .del)).nodes = d.nodes ∧
      ∀ i, i ∈ (d.applyAll (ids.map .del)).dels ↔ i ∈ d.dels ∨ i ∈ ids
  | [], d, h => by simp [Doc.applyAll, h]
  | x :: xs, d, h => by
    have e : d.applyAll ((x :: xs).map .del) = ({ d with dels := insId x d.dels } : Doc).applyAll (xs.map .del) := by
      simp [Doc.applyAll, Doc.apply]
    have w : Wf ({ d with dels := insId x d.dels } : Doc) :=
      ⟨h.sorted, h.valid, by simp only [insId_eq]; exact sorted_insIdSpec x h.dsorted⟩
    obtain ⟨w', hn, hd⟩ := apply_dels xs w
    rw [e]
    refine ⟨w', hn, fun i => ?_⟩
    rw [hd]; simp only [insId_eq, mem_insIdSpec, List.mem_cons]
    constructor
    · rintro ((rfl | h) | h) <;> simp_all
    · rintro (h | rfl | h) <;> simp_all

theorem seqSpec_of_nodes {d e : Doc} (hd : Wf d) (he : Wf e) (hn : e.nodes = d.nodes)
    (hm : d.maxCounter ≤ e.maxCounter) : e.seqSpec = d.seqSpec := by
  have hk : e.kids = d.kids := by funext p s; simp [Doc.kids, hn]
  have ht : ∀ f n, e.trav f n = d.trav f n := by
    intro f
    induction f with
    | zero => intro n; rfl
    | succ f ih => intro n; have ih' : e.trav f = d.trav f := funext ih; simp only [Doc.trav, hk, ih']
  rw [seqSpec_eq, seqSpec_eq, hk]
  apply flatMap_congr'
  intro c hc
  simp only [T, ht]
  exact trav_fuel hd _ _ (node_le_max (mem_kids.1 hc).1) (by omega) (by omega)

/-- Removing, by id, the `k` nodes from position `p` of a list with unique ids. -/
theorem filter_range {l : List Node} (hu : Uniq l) (p k : Nat) :
    l.filter (fun n => !(((l.drop p).take k).map (·.id)).contains n.id) = l.take p ++ l.drop (p + k) := by
  have hl : l = l.take p ++ ((l.drop p).take k ++ l.drop (p + k)) := by
    rw [← List.drop_drop, List.take_append_drop, List.take_append_drop]
  generalize hB : (l.drop p).take k = B
  rw [hB] at hl
  generalize hA : l.take p = A at hl ⊢
  generalize hC : l.drop (p + k) = C at hl ⊢
  rw [hl] at hu
  rw [hl]
  rw [Uniq, List.pairwise_append, List.pairwise_append] at hu
  have hnotB : ∀ x ∈ A ++ C, ¬x.id ∈ B.map (·.id) := by
    intro x hx hm
    obtain ⟨y, hy, e⟩ := List.mem_map.1 hm
    rcases List.mem_append.1 hx with hx | hx
    · exact hu.2.2 x hx y (List.mem_append_left _ hy) e.symm
    · exact hu.2.1.2.2 y hy x hx e
  have hfa : ∀ (X : List Node), (∀ x ∈ X, x ∈ A ++ C) →
      X.filter (fun n => !(B.map (·.id)).contains n.id) = X := by
    intro X hX
    apply List.filter_eq_self.2
    intro x hx
    simp only [Bool.not_eq_true', List.contains_iff_mem]
    cases hc : decide (x.id ∈ B.map (·.id)) with
    | false => simp_all
    | true => exact absurd (of_decide_eq_true hc) (hnotB x (hX x hx))
  have hfb : B.filter (fun n => !(B.map (·.id)).contains n.id) = [] := by
    apply List.filter_eq_nil_iff.2
    intro x hx
    simp [List.contains_iff_mem]; exact ⟨x, hx, rfl⟩
  rw [List.filter_append, List.filter_append, hfa A (fun x hx => List.mem_append_left _ hx),
    hfa C (fun x hx => List.mem_append_right _ hx), hfb]
  simp

/-- Deleting the `k` visible characters from position `p`. -/
theorem delete_range {d : Doc} (h : Wf d) (p k : Nat) :
    Wf (d.applyAll (((d.visible.drop p).take k).map fun n => Op.del n.id)) ∧
    (d.applyAll (((d.visible.drop p).take k).map fun n => Op.del n.id)).chars =
      d.chars.take p ++ d.chars.drop (p + k) := by
  have e : ((d.visible.drop p).take k).map (fun n => Op.del n.id) =
      (((d.visibleSpec.drop p).take k).map (·.id)).map .del := by
    rw [visible_eq h]; simp [Function.comp_def]
  rw [e]
  obtain ⟨w, hn, hd⟩ := apply_dels (((d.visibleSpec.drop p).take k).map (·.id)) h
  generalize hd1 : d.applyAll ((((d.visibleSpec.drop p).take k).map (·.id)).map .del) = d1 at w hn hd
  refine ⟨w, ?_⟩
  have hm : d.maxCounter ≤ d1.maxCounter := maxCounter_le
    (fun n hn' => by rw [← hn] at hn'; exact node_le_max hn')
    (fun i hi => del_le_max ((hd i).2 (Or.inl hi)))
  rw [chars_eq w, chars_eq h, visibleSpec_def d1, seqSpec_of_nodes h w hn hm]
  have hVd := visibleSpec_def d
  have huV := uniq_filter (p := vis d) (uniq_seqSpec h)
  rw [← hVd] at huV
  generalize hV : d.visibleSpec = V at hVd hd huV ⊢
  have hv : (d.seqSpec.filter (vis d)).filter (fun n => !(((V.drop p).take k).map (·.id)).contains n.id) =
      d.seqSpec.filter (vis d1) := by
    rw [List.filter_filter]
    congr 1; funext n
    simp only [vis, List.contains_iff_mem, hd]
    cases h1 : decide (n.id ∈ d.dels) <;> cases h2 : decide (n.id ∈ ((V.drop p).take k).map (·.id)) <;>
      simp_all
  rw [← hv, ← hVd, filter_range huV]
  simp [List.map_take, List.map_drop]

/-! Insertions -/

/-- The run of typed characters `cs` at position `i`. -/
theorem run_text {d : Doc} (h : Wf d) (r i : Nat) (cs : List Char) (hi : i ≤ d.chars.length) :
    Wf (d.applyAll ((d.run r i cs).map .ins)) ∧
    (d.applyAll ((d.run r i cs).map .ins)).chars = d.chars.take i ++ cs ++ d.chars.drop i := by
  have := two_runs h (ra := r) (rb := r + 1) (a := cs) (b := []) (by omega) hi
  have e0 : d.run (r + 1) i [] = [] := rfl
  rw [e0, List.append_nil] at this
  rcases this with ⟨w, e | e⟩ <;> exact ⟨w, by rw [e]; simp⟩

theorem insert_text {d : Doc} (h : Wf d) (r i : Nat) (c : Char) (hi : i ≤ d.chars.length) :
    (d.apply (.ins (d.insertNode r i c))).chars = d.chars.take i ++ c :: d.chars.drop i := by
  have := (run_text h r i [c] hi).2
  simp only [Doc.run, runGo, List.reverse_nil, List.cons_append, List.nil_append] at this
  simpa [Doc.applyAll, Doc.insertNode] using this

theorem delete_text {d : Doc} (h : Wf d) {i : Nat} {x : Id} (hx : d.deleteAt i = some x) :
    (d.apply (.del x)).chars = d.chars.eraseIdx i := by
  have hi : i < d.visible.length := by
    unfold Doc.deleteAt at hx
    rw [nth?_eq] at hx
    cases hv : d.visible[i]? with
    | none => rw [hv] at hx; simp at hx
    | some n => exact (List.getElem?_eq_some_iff.1 hv).1
  have e : ((d.visible.drop i).take 1).map (fun n => Op.del n.id) = [Op.del x] := by
    unfold Doc.deleteAt at hx
    rw [nth?_eq] at hx
    rw [List.getElem?_eq_getElem hi] at hx
    simp only [Option.map_some, Option.some_inj] at hx
    rw [List.drop_eq_getElem_cons hi, List.take_succ_cons, List.take_zero, List.map_cons, List.map_nil, hx]
  have := (delete_range h i 1).2
  rw [e] at this
  rw [List.eraseIdx_eq_take_drop_succ]
  simpa [Doc.applyAll] using this

/-! `edit` -/

theorem applyAll_append (d : Doc) (a b : List Op) : d.applyAll (a ++ b) = (d.applyAll a).applyAll b :=
  List.foldl_append

theorem commonPrefix_spec : ∀ (a b : List Char) (n : Nat), ∃ k, commonPrefix a b n = n + k ∧
    k ≤ a.length ∧ k ≤ b.length ∧ a.take k = b.take k
  | x :: xs, y :: ys, n => by
    unfold commonPrefix
    by_cases e : x = y
    · subst e
      obtain ⟨k, h1, h2, h3, h4⟩ := commonPrefix_spec xs ys (n + 1)
      refine ⟨k + 1, by simp [h1]; omega, by simp; omega, by simp; omega, by simp [h4]⟩
    · exact ⟨0, by simp [e], by simp, by simp, by simp⟩
  | [], _, n => ⟨0, by simp [commonPrefix], by simp, by simp, by simp⟩
  | _ :: _, [], n => ⟨0, by simp [commonPrefix], by simp, by simp, by simp⟩

/-- `edit` changes the text to exactly the new text. -/
theorem edit_text {d : Doc} (h : Wf d) (r : Nat) (new : List Char) :
    Wf (d.applyAll (d.edit r new)) ∧ (d.applyAll (d.edit r new)).chars = new := by
  unfold Doc.edit
  simp only []
  generalize hold : d.chars = old
  obtain ⟨p, hp, hpo, hpn, hpt⟩ := commonPrefix_spec old new 0
  simp only [Nat.zero_add] at hp
  rw [hp]
  obtain ⟨s, hs, hso, hsn, hst⟩ := commonPrefix_spec (old.drop p).reverse (new.drop p).reverse 0
  simp only [Nat.zero_add] at hs
  rw [hs]
  simp only [List.length_reverse, List.length_drop] at hso hsn
  obtain ⟨w1, hc1⟩ := delete_range h p (old.length - p - s)
  generalize hd1 : d.applyAll (((d.visible.drop p).take (old.length - p - s)).map fun n => Op.del n.id) = d1 at w1 hc1
  rw [hold] at hc1
  have hlen1 : p ≤ d1.chars.length := by rw [hc1]; simp; omega
  obtain ⟨w2, hc2⟩ := run_text w1 r p ((new.drop p).take (new.length - p - s)) hlen1
  rw [applyAll_append, hd1]
  refine ⟨w2, ?_⟩
  rw [hc2, hc1]
  have htake : (old.take p ++ old.drop (p + (old.length - p - s))).take p = old.take p := by
    rw [List.take_left' (by simp; omega)]
  have hdrop : (old.take p ++ old.drop (p + (old.length - p - s))).drop p = old.drop (p + (old.length - p - s)) := by
    rw [List.drop_left' (by simp; omega)]
  rw [htake, hdrop]
  -- the suffixes agree
  rw [List.take_reverse, List.take_reverse, List.reverse_inj] at hst
  simp only [List.length_drop] at hst
  have hsuf : old.drop (p + (old.length - p - s)) = (new.drop p).drop (new.length - p - s) := by
    rw [← List.drop_drop]; exact hst
  rw [hsuf, hpt]
  conv => rhs; rw [← List.take_append_drop p new, ← List.take_append_drop (new.length - p - s) (new.drop p)]
  simp

end Tandem.Proofs
