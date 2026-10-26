/-
The children diff (`diffChildren`: common prefix, then the two-ended diff)
is correct for any node diff `f` that is correct on the pairs it is given.
-/
import Lasm.UI.Proofs.Lists

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg β : Type}

/-- What a node diff guarantees for a kept node `o` showing `h` next: its ops
replace `o` (named by its id) by the new live node, which keeps `o`'s id, shows
`h`, is well formed below the returned next id, and allocates no id below `n`. -/
structure NSpec (o : Live Msg) (h : Html Msg) (n : Nat) (r : NodeResult Msg) : Prop where
  ops : ∀ l : List Dom, (∀ d ∈ l, d.id = o.id → d = toDom o) →
    applyOps r.ops l = modId o.id (fun _ => toDom r.live) l
  erase : r.live.erase = h
  id : r.live.id = o.id
  wf : WFn r.next r.live
  le : n ≤ r.next

/-- What the children diff guarantees: from the DOM `dom0` of the old children,
the ops give the DOM of the new live children, which show `target`. -/
structure RSpec (dom0 : List Dom) (target : List (Html Msg)) (n : Nat) (r : ChildrenResult Msg) : Prop where
  ops : applyOps r.ops.toList dom0 = r.live.map toDom
  erase : r.live.map Live.erase = target
  wf : WF r.live r.next
  le : n ≤ r.next

/-! Steps -/

theorem nodup_mid_iff (A B : List (Live Msg)) (o x : Live Msg) (h : x.id = o.id) :
    ((A ++ x :: B).map Live.id).Nodup ↔ ((A ++ o :: B).map Live.id).Nodup := by
  simp [h]

/-- Diffing one kept node in place. -/
theorem reuse_step (val : β → Html Msg) (f : Live Msg → β → Nat → NodeResult Msg)
    (hf : ∀ o b n, WFn n o → o.same (val b) = true → NSpec o (val b) n (f o b n))
    {A B : List (Live Msg)} {o : Live Msg} {b : β} {n : Nat}
    (hnd : ((A ++ o :: B).map Live.id).Nodup) (hwf : ∀ x ∈ A ++ o :: B, WFn n x)
    (hs : o.same (val b) = true) :
    applyOps (f o b n).ops ((A ++ o :: B).map toDom) = (A ++ (f o b n).live :: B).map toDom ∧
    ((A ++ (f o b n).live :: B).map Live.id).Nodup ∧ (∀ x ∈ A ++ (f o b n).live :: B, WFn (f o b n).next x) ∧
    (f o b n).live.erase = val b ∧ (f o b n).live.id = o.id ∧ n ≤ (f o b n).next := by
  have spec := hf o b n (hwf o (by simp)) hs
  refine ⟨?_, (nodup_mid_iff A B o _ spec.id).2 hnd, ?_, spec.erase, spec.id, spec.le⟩
  · rw [spec.ops _ (only_node A B o hnd), modId_mid A B o _ hnd]
  · intro x hx
    simp only [List.mem_append, List.mem_cons] at hx
    rcases hx with hx | rfl | hx
    · exact (hwf x (by simp [hx])).mono spec.le
    · exact spec.wf
    · exact (hwf x (by simp [hx])).mono spec.le

theorem nodup_rearrange {l l' : List (Live Msg)} (hp : l.Perm l') (h : (l.map Live.id).Nodup) :
    (l'.map Live.id).Nodup :=
  (hp.map Live.id).nodup_iff.1 h

/-- Moving `x` forward, before the head of `E` (or to the end). -/
theorem move_forward (A C E : List (Live Msg)) (x : Live Msg)
    (h : ((A ++ x :: (C ++ E)).map Live.id).Nodup) :
    applyOp (Op.move (Msg := Msg) x.id (E.head?.map Live.id)) ((A ++ x :: (C ++ E)).map toDom) =
      (A ++ C ++ x :: E).map toDom := by
  have hxA : x.id ∉ A.map Live.id := by
    simp only [List.map_append, List.map_cons, List.nodup_append] at h
    exact fun hm => h.2.2 _ hm _ (List.mem_cons_self ..) rfl
  simp only [applyOp, findId_mid _ _ _ hxA]
  rw [removeId_mid _ _ _ h, ← List.append_assoc, insertBefore_anchor]
  · simp
  · intro e he
    have hp : (A ++ x :: (C ++ E)).Perm (x :: ((A ++ C) ++ E)) := by
      simp only [List.append_assoc]; exact List.perm_middle
    have h' := nodup_rearrange hp h
    simp only [List.map_cons, List.map_append, List.nodup_cons, List.nodup_append] at h'
    obtain ⟨_, _, _, hdis⟩ := h'
    cases E with
    | nil => simp at he
    | cons e' E =>
      simp only [List.head?_cons, Option.mem_def, Option.some.injEq] at he
      subst he
      intro hm
      exact hdis _ (by simpa using hm) _ (List.mem_cons_self ..) rfl

/-- Moving `x` back, before the first node of `E`. -/
theorem move_back (A E C : List (Live Msg)) (y x : Live Msg)
    (h : ((A ++ y :: E ++ x :: C).map Live.id).Nodup) :
    applyOp (Op.move (Msg := Msg) x.id (some y.id)) ((A ++ y :: E ++ x :: C).map toDom) =
      (A ++ x :: y :: (E ++ C)).map toDom := by
  have hxA : x.id ∉ (A ++ y :: E).map Live.id := by
    simp only [List.map_append, List.map_cons, List.nodup_append] at h
    exact fun hm => h.2.2 _ (by simpa using hm) _ (List.mem_cons_self ..) rfl
  simp only [applyOp, findId_mid _ _ _ hxA]
  rw [removeId_mid _ _ _ h]
  have := insertBefore_anchor (toDom x) A (y :: (E ++ C)) ?_
  · simp only [List.head?_cons, Option.map_some] at this
    simp only [List.append_assoc, List.cons_append] at this ⊢
    rw [this]; simp
  · intro e he
    simp only [List.head?_cons, Option.mem_def, Option.some.injEq] at he
    subst he
    simp only [List.map_append, List.map_cons, List.nodup_append, List.nodup_cons] at h
    exact fun hm => h.1.2.2 _ hm _ (List.mem_cons_self ..) rfl

/-- Inserting a new node before `y`. -/
theorem insert_before (A E : List (Live Msg)) (y c : Live Msg)
    (h : ((A ++ y :: E).map Live.id).Nodup) :
    applyOp (Op.insert c (some y.id)) ((A ++ y :: E).map toDom) = (A ++ c :: y :: E).map toDom := by
  simp only [applyOp]
  have := insertBefore_anchor (toDom c) A (y :: E) ?_
  · simpa using this
  · intro e he
    simp only [List.head?_cons, Option.mem_def, Option.some.injEq] at he
    subst he
    simp only [List.map_append, List.map_cons, List.nodup_append] at h
    exact fun hm => h.2.2 _ hm _ (List.mem_cons_self ..) rfl

/-- A fresh node (id above every id in `l`) keeps the ids distinct. -/
theorem nodup_fresh (A B : List (Live Msg)) (c : Live Msg) (n : Nat)
    (h : ((A ++ B).map Live.id).Nodup) (hlt : ∀ x ∈ A ++ B, x.id < n) (hc : c.id = n) :
    ((A ++ c :: B).map Live.id).Nodup := by
  have hp : (A ++ c :: B).Perm (c :: (A ++ B)) := List.perm_middle
  apply nodup_rearrange hp.symm
  simp only [List.map_cons, List.nodup_cons, h, and_true, List.mem_map, not_exists, not_and]
  intro x hx he
  have := hlt x hx; omega

/-! Creating and removing runs of nodes -/

theorem insertAll_spec (val : β → Html Msg) (before : Option Nat) (dom0 : List Dom) (suf : List (Live Msg))
    (hb : before = suf.head?.map Live.id) :
    ∀ (bs : List β) (n : Nat) (ops : Array (Op Msg)) (acc : Array (Live Msg)),
    applyOps ops.toList dom0 = (acc.toList ++ suf).map toDom →
    ((acc.toList ++ suf).map Live.id).Nodup → (∀ x ∈ acc.toList ++ suf, WFn n x) →
    let r := insertAll val before bs n ops acc
    ∃ cs, r.2.1.toList = acc.toList ++ cs ∧ cs.map Live.erase = bs.map val ∧
      applyOps r.1.toList dom0 = (r.2.1.toList ++ suf).map toDom ∧
      ((r.2.1.toList ++ suf).map Live.id).Nodup ∧ (∀ x ∈ r.2.1.toList ++ suf, WFn r.2.2 x) ∧ n ≤ r.2.2 := by
  intro bs
  induction bs with
  | nil =>
    intro n ops acc h1 h2 h3
    exact ⟨[], by simp [insertAll], by simp, by simpa [insertAll] using h1, by simpa [insertAll] using h2,
      by simpa [insertAll] using h3, by simp [insertAll]⟩
  | cons b bs ih =>
    intro n ops acc h1 h2 h3
    simp only [insertAll]
    have hc := create_spec (val b) n
    have hA : applyOps (ops.push (.insert (create (val b) n).1 before)).toList dom0 =
        ((acc.push (create (val b) n).1).toList ++ suf).map toDom := by
      rw [applyOps_push, h1, hb, applyOp, insertBefore_anchor]
      · simp
      · intro e he hm
        cases suf with
        | nil => simp at he
        | cons e' s =>
          simp only [List.head?_cons, Option.mem_def, Option.some.injEq] at he
          subst he
          simp only [List.map_append, List.map_cons, List.nodup_append] at h2
          exact h2.2.2 _ hm _ (List.mem_cons_self ..) rfl
    have hB : (((acc.push (create (val b) n).1).toList ++ suf).map Live.id).Nodup := by
      simp only [Array.toList_push, List.append_assoc, List.singleton_append]
      exact nodup_fresh _ _ _ n h2 (fun x hx => (h3 x hx).id_lt) hc.id
    have hC : ∀ x ∈ (acc.push (create (val b) n).1).toList ++ suf, WFn (create (val b) n).2 x := by
      intro x hx
      simp only [Array.toList_push, List.mem_append, List.mem_singleton] at hx
      rcases hx with (hx | rfl) | hx
      · exact (h3 x (by simp [hx])).mono (Nat.le_of_lt hc.lt)
      · exact hc.wf
      · exact (h3 x (by simp [hx])).mono (Nat.le_of_lt hc.lt)
    obtain ⟨cs, e1, e2, e3, e4, e5, e6⟩ := ih _ _ _ hA hB hC
    refine ⟨(create (val b) n).1 :: cs, ?_, ?_, e3, e4, e5, by have := hc.lt; omega⟩
    · rw [e1]; simp
    · simp [e2, hc.erase]

theorem removeAll_spec (dom0 : List Dom) (pre : List (Live Msg)) :
    ∀ (os : List (Live Msg)) (ops : Array (Op Msg)),
    applyOps ops.toList dom0 = (pre ++ os).map toDom → ((pre ++ os).map Live.id).Nodup →
    applyOps (removeAll os ops).toList dom0 = pre.map toDom := by
  intro os
  induction os with
  | nil => intro ops h1 _; simpa [removeAll] using h1
  | cons o os ih =>
    intro ops h1 h2
    simp only [removeAll]
    apply ih
    · rw [applyOps_push, h1, applyOp]
      have := removeId_mid pre os o h2
      simpa using this
    · have hp : (pre ++ o :: os).Perm (o :: (pre ++ os)) := List.perm_middle
      have := nodup_rearrange hp h2
      simp only [List.map_cons, List.nodup_cons] at this
      exact this.2

/-! Windows of the two-ended diff -/

/-- The old nodes still in `old[lo:hi]`. -/
def win (oa : Array (Option (Live Msg))) (lo hi : Nat) : List (Live Msg) := (slice oa.toList lo hi).filterMap id

theorem win_empty (oa : Array (Option (Live Msg))) {lo hi : Nat} (h : hi ≤ lo) : win oa lo hi = [] := by
  simp [win, slice_empty _ h]

theorem win_out (oa : Array (Option (Live Msg))) {lo hi : Nat} (h : oa.size ≤ lo) : win oa lo hi = [] := by
  simp [win, slice, List.drop_eq_nil_of_le (show oa.toList.length ≤ lo by simpa using h)]

theorem win_cons_none {oa : Array (Option (Live Msg))} {lo hi : Nat} (hx : oa[lo]? = some none) (h : lo < hi) :
    win oa lo hi = win oa (lo + 1) hi := by
  rw [← Array.getElem?_toList] at hx
  simp [win, slice_cons _ hx h]

theorem win_cons_some {oa : Array (Option (Live Msg))} {lo hi : Nat} {o : Live Msg} (hx : oa[lo]? = some (some o))
    (h : lo < hi) : win oa lo hi = o :: win oa (lo + 1) hi := by
  rw [← Array.getElem?_toList] at hx
  simp [win, slice_cons _ hx h]

theorem win_snoc_none {oa : Array (Option (Live Msg))} {lo hi : Nat} (hx : oa[hi - 1]? = some none) (h : lo < hi) :
    win oa lo hi = win oa lo (hi - 1) := by
  rw [← Array.getElem?_toList] at hx
  simp [win, slice_snoc _ hx h]

theorem win_snoc_some {oa : Array (Option (Live Msg))} {lo hi : Nat} {o : Live Msg} (hx : oa[hi - 1]? = some (some o))
    (h : lo < hi) : win oa lo hi = win oa lo (hi - 1) ++ [o] := by
  rw [← Array.getElem?_toList] at hx
  simp [win, slice_snoc _ hx h]

theorem win_split {oa : Array (Option (Live Msg))} {lo i hi : Nat} {x : Live Msg} (hx : oa[i]? = some (some x))
    (h1 : lo ≤ i) (h2 : i < hi) : win oa lo hi = win oa lo i ++ x :: win oa (i + 1) hi := by
  rw [← Array.getElem?_toList] at hx
  simp [win, slice_split _ hx h1 h2]

theorem win_set {oa : Array (Option (Live Msg))} {lo i hi : Nat} {x : Live Msg} (hx : oa[i]? = some (some x))
    (h1 : lo ≤ i) (h2 : i < hi) : win (oa.set! i none) lo hi = win oa lo i ++ win oa (i + 1) hi := by
  rw [← Array.getElem?_toList] at hx
  have hx' := getElem?_set_self' (v := none) hx
  unfold win
  rw [Array.set!_eq_setIfInBounds, Array.toList_setIfInBounds, slice_split _ hx' h1 h2,
    slice_set_lt _ _ _ _ _ (Nat.le_refl _), slice_set_gt _ _ _ _ _ (by omega)]
  simp

theorem removeRange_spec (dom0 : List Dom) (pre suf : List (Live Msg)) (oa : Array (Option (Live Msg))) (hi : Nat)
    (lo : Nat) (ops : Array (Op Msg))
    (h1 : applyOps ops.toList dom0 = (pre ++ win oa lo hi ++ suf).map toDom)
    (h2 : ((pre ++ win oa lo hi ++ suf).map Live.id).Nodup) :
    applyOps (removeRange oa lo hi ops).toList dom0 = (pre ++ suf).map toDom := by
  rw [removeRange]
  split
  · rename_i hlt
    split
    · rename_i o hs
      rw [win_cons_some hs hlt] at h1 h2
      apply removeRange_spec dom0 pre suf oa hi (lo + 1)
      · rw [applyOps_push, h1, applyOp]
        have := removeId_mid pre (win oa (lo + 1) hi ++ suf) o (by simpa using h2)
        simpa using this
      · have hp : (pre ++ o :: (win oa (lo + 1) hi ++ suf)).Perm (o :: (pre ++ (win oa (lo + 1) hi ++ suf))) :=
          List.perm_middle
        have := nodup_rearrange hp (by simpa using h2)
        simp only [List.map_cons, List.nodup_cons] at this
        simpa using this.2
    · rename_i hs
      have hw : win oa lo hi = win oa (lo + 1) hi := by
        cases h : oa[lo]? with
        | none =>
          have : oa.size ≤ lo := by simpa using h
          rw [win_out oa this, win_out oa (by omega)]
        | some s =>
          cases s with
          | none => exact win_cons_none h hlt
          | some o => exact absurd h (hs o)
      rw [hw] at h1 h2
      exact removeRange_spec dom0 pre suf oa hi (lo + 1) ops h1 h2
  · rename_i hge
    rw [win_empty oa (by omega)] at h1
    simpa using h1
termination_by hi - lo

theorem RSpec.weaken {dom0 : List Dom} {target : List (Html Msg)} {n m : Nat} {r : ChildrenResult Msg}
    (h : RSpec dom0 target m r) (hle : n ≤ m) : RSpec dom0 target n r :=
  ⟨h.ops, h.erase, h.wf, Nat.le_trans hle h.le⟩

/-- One created node inserted before the head of `suf`. -/
theorem insert_step (h : Html Msg) (before : Option Nat) (dom0 : List Dom) (suf : List (Live Msg))
    (hb : before = suf.head?.map Live.id) (n : Nat) (ops : Array (Op Msg)) (acc : Array (Live Msg))
    (h1 : applyOps ops.toList dom0 = (acc.toList ++ suf).map toDom)
    (h2 : ((acc.toList ++ suf).map Live.id).Nodup) (h3 : ∀ x ∈ acc.toList ++ suf, WFn n x) :
    applyOps (ops.push (.insert (create h n).1 before)).toList dom0 =
        ((acc.push (create h n).1).toList ++ suf).map toDom ∧
    (((acc.push (create h n).1).toList ++ suf).map Live.id).Nodup ∧
    (∀ x ∈ (acc.push (create h n).1).toList ++ suf, WFn (create h n).2 x) := by
  have hc := create_spec h n
  refine ⟨?_, ?_, ?_⟩
  · rw [applyOps_push, h1, hb, applyOp, insertBefore_anchor]
    · simp
    · intro e he hm
      cases suf with
      | nil => simp at he
      | cons e' s =>
        simp only [List.head?_cons, Option.mem_def, Option.some.injEq] at he
        subst he
        simp only [List.map_append, List.map_cons, List.nodup_append] at h2
        exact h2.2.2 _ hm _ (List.mem_cons_self ..) rfl
  · simp only [Array.toList_push, List.append_assoc, List.singleton_append]
    exact nodup_fresh _ _ _ n h2 (fun x hx => (h3 x hx).id_lt) hc.id
  · intro x hx
    simp only [Array.toList_push, List.mem_append, List.mem_singleton] at hx
    rcases hx with (hx | rfl) | hx
    · exact (h3 x (by simp [hx])).mono (Nat.le_of_lt hc.lt)
    · exact hc.wf
    · exact (h3 x (by simp [hx])).mono (Nat.le_of_lt hc.lt)

theorem insertRange_spec (val : β → Html Msg) (na : Array β) (before : Option Nat) (dom0 : List Dom)
    (suf : List (Live Msg)) (hb : before = suf.head?.map Live.id) (hi : Nat) (hbound : hi ≤ na.size)
    (lo n : Nat) (ops : Array (Op Msg)) (acc : Array (Live Msg))
    (h1 : applyOps ops.toList dom0 = (acc.toList ++ suf).map toDom)
    (h2 : ((acc.toList ++ suf).map Live.id).Nodup) (h3 : ∀ x ∈ acc.toList ++ suf, WFn n x) :
    ∃ cs, (insertRange val na before lo hi n ops acc).2.1.toList = acc.toList ++ cs ∧
      cs.map Live.erase = (slice na.toList lo hi).map val ∧
      applyOps (insertRange val na before lo hi n ops acc).1.toList dom0 =
        ((insertRange val na before lo hi n ops acc).2.1.toList ++ suf).map toDom ∧
      (((insertRange val na before lo hi n ops acc).2.1.toList ++ suf).map Live.id).Nodup ∧
      (∀ x ∈ (insertRange val na before lo hi n ops acc).2.1.toList ++ suf,
        WFn (insertRange val na before lo hi n ops acc).2.2 x) ∧
      n ≤ (insertRange val na before lo hi n ops acc).2.2 := by
  rw [insertRange]
  split
  · rename_i hlt
    obtain ⟨b, hs⟩ : ∃ b, na[lo]? = some b := ⟨na[lo], Array.getElem?_eq_getElem (by omega)⟩
    simp only [hs]
    obtain ⟨e1, e2, e3⟩ := insert_step (val b) before dom0 suf hb n ops acc h1 h2 h3
    obtain ⟨cs, f1, f2, f3, f4, f5, f6⟩ :=
      insertRange_spec val na before dom0 suf hb hi hbound (lo + 1) _ _ _ e1 e2 e3
    have hc := create_spec (val b) n
    refine ⟨(create (val b) n).1 :: cs, ?_, ?_, f3, f4, f5, by have := hc.lt; omega⟩
    · rw [f1]; simp
    · rw [slice_cons _ (by rw [Array.getElem?_toList]; exact hs) hlt]
      simp [f2, hc.erase]
  · rename_i hge
    exact ⟨[], by simp, by simp [slice_empty _ (Nat.le_of_not_lt hge)], by simpa using h1,
      by simpa using h2, by simpa using h3, Nat.le_refl _⟩
termination_by hi - lo

end Lasm.UI.Proofs
