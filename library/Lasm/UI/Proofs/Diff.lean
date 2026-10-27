/-
`diffChildren`, `diffNode` and `diff` are correct against the DOM model.
-/
import Lasm.UI.Proofs.TwoEnded

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg β : Type}

/-! The common prefix -/

theorem win_all (l : List (Live Msg)) : win (l.map some).toArray 0 (l.map some).toArray.size = l := by
  simp only [win, slice, List.drop_zero, Nat.sub_zero, List.size_toArray]
  rw [List.take_of_length_le (by simp)]
  induction l with
  | nil => rfl
  | cons x l ih => simp [ih]

theorem slice_all (l : List β) : slice l.toArray.toList 0 l.toArray.size = l := by
  simp [slice]

theorem prefixPhase_spec (val : β → Html Msg) (f : Live Msg → β → Nat → NodeResult Msg)
    (hf : ∀ o b n, WFn n o → o.same (val b) = true → NSpec o (val b) n (f o b n))
    (dom0 : List Dom) (target : List (Html Msg)) :
    ∀ (os : List (Live Msg)) (bs : List β) (next : Nat) (ops : Array (Op Msg)) (pre : Array (Live Msg)),
    applyOps ops.toList dom0 = (pre.toList ++ os).map toDom →
    ((pre.toList ++ os).map Live.id).Nodup → (∀ x ∈ pre.toList ++ os, WFn next x) →
    pre.toList.map Live.erase ++ bs.map val = target →
    RSpec dom0 target next (prefixPhase val f os bs next ops pre)
  | [], bs, next, ops, pre, h1, h2, h3, h4 => by
    rw [prefixPhase]
    obtain ⟨cs, e1, e2, e3, e4, e5, e6⟩ :=
      insertAll_spec val none dom0 [] rfl bs next ops pre (by simpa using h1) (by simpa using h2) (by simpa using h3)
    exact ⟨by simpa using e3, by simp [e1, e2, ← h4], ⟨by simpa using e5, by simpa using e4⟩, e6⟩
  | o :: os, [], next, ops, pre, h1, h2, h3, h4 => by
    rw [prefixPhase]
    refine ⟨removeAll_spec dom0 pre.toList (o :: os) ops h1 h2, by simpa using h4,
      ⟨fun x hx => h3 x (by simp [hx]), ?_⟩, Nat.le_refl _⟩
    exact List.Sublist.nodup ((List.sublist_append_left _ _).map _) h2
  | o :: os, b :: bs, next, ops, pre, h1, h2, h3, h4 => by
    rw [prefixPhase]
    split
    · rename_i hsame
      obtain ⟨e1, e2, e3, e4, e5, e6⟩ := reuse_step val f hf (A := pre.toList) (B := os) h2 h3 hsame
      apply RSpec.weaken _ e6
      apply prefixPhase_spec val f hf dom0 target os bs
      · rw [applyOps_appendList, h1, e1]; simp
      · simpa using e2
      · intro x hx; exact e3 x (by simpa using hx)
      · rw [← h4]; simp [e4]
    · apply twoEnded_spec val f hf dom0 target _ 0 _ _ 0 _ pre [] ops next none (Nat.le_refl _) (Nat.le_refl _)
      · rw [win_all]; simpa using h1
      · rw [win_all]; simpa using h2
      · rw [win_all]; simpa using h3
      · rw [slice_all]; simpa using h4

/-- The children diff is correct for every node diff `f` correct on the pairs it gets. -/
theorem diffChildren_spec (val : β → Html Msg) (f : Live Msg → β → Nat → NodeResult Msg)
    (hf : ∀ o b n, WFn n o → o.same (val b) = true → NSpec o (val b) n (f o b n))
    (old : List (Live Msg)) (new : List β) (next : Nat) (h : WF old next) :
    RSpec (old.map toDom) (new.map val) next (diffChildren val f old new next) := by
  rw [diffChildren.eq_def]
  split
  · exact ⟨by simp, by simp, ⟨by simp, by simp⟩, Nat.le_refl _⟩
  · exact ⟨by simp [applyOp], by simp, ⟨by simp, by simp⟩, Nat.le_refl _⟩
  · rename_i o b
    split
    · rename_i hs
      have e : (⟨if (f o b next).ops.isEmpty then #[] else (f o b next).ops.toArray, [(f o b next).live], (f o b next).next⟩ : ChildrenResult Msg) =
          prefixPhase val f [o] [b] next #[] #[] := by
        rw [prefixPhase]
        simp only [hs, ↓reduceIte]
        rw [prefixPhase, insertAll]
        cases h : (f o b next).ops <;> simp_all
      rw [e]
      exact prefixPhase_spec val f hf _ _ _ _ next #[] #[] (by simp) (by simp)
        (by simpa using h.1) (by simp)
    · exact prefixPhase_spec val f hf _ _ _ _ next #[] #[] (by simp) (by simp)
        (by simpa using h.1) (by simp)
  · exact prefixPhase_spec val f hf _ _ _ _ next #[] #[] (by simp) (by simpa using h.2)
      (by simpa using h.1) (by simp)

/-! One node -/

theorem modId_const (i : Nat) (g : Dom → Dom) (e : Dom) (l : List Dom) (h : ∀ d ∈ l, d.id = i → d = e) :
    modId i g l = modId i (fun _ => g e) l := by
  unfold modId
  apply List.map_congr_left
  intro d hd
  split
  · rename_i hi; rw [h d hd hi]
  · rfl

theorem modId_self (i : Nat) (e : Dom) (l : List Dom) (h : ∀ d ∈ l, d.id = i → d = e) :
    modId i (fun _ => e) l = l := by
  unfold modId
  conv => rhs; rw [← List.map_id l]
  apply List.map_congr_left
  intro d hd
  split
  · rename_i hi; rw [h d hd hi]; rfl
  · rfl

theorem modId_only (i : Nat) (e : Dom) (l : List Dom) :
    ∀ d ∈ modId i (fun _ => e) l, d.id = i → d = e := by
  intro d hd hi
  unfold modId at hd
  obtain ⟨d', _, rfl⟩ := List.mem_map.1 hd
  by_cases hd' : d'.id = i <;> simp_all

theorem modId_modId (i : Nat) (a b : Dom) (l : List Dom) (hb : b.id = i) :
    modId i (fun _ => a) (modId i (fun _ => b) l) = modId i (fun _ => a) l := by
  unfold modId
  rw [List.map_map]
  apply List.map_congr_left
  intro d _
  by_cases hd : d.id = i
  · simp [hd, hb]
  · simp [hd]

theorem same_elem {i ns tag key attrs cs} {ns' tag' key' attrs' cs'}
    (h : (Live.elem (Msg := Msg) i ns tag key attrs cs).same (.elem ns' tag' key' attrs' cs') = true) :
    ns = ns' ∧ tag = tag' ∧ key = key' := by
  simp only [Live.same, Bool.and_eq_true, beq_iff_eq] at h
  exact ⟨h.1.1, h.1.2, h.2⟩

theorem applyAttrOps_nil (a : Attrs) : applyAttrOps [] a = a := rfl

/-- The node diff is correct on every pair the children diff gives it. -/
theorem diffNode_spec (n : Html Msg) (o : Live Msg) (next : Nat) (hwf : WFn next o) (hs : o.same n = true) :
    NSpec o n next (diffNode o n next) := by
  match o, n, hwf, hs with
  | .text i s, .text s', hwf, _ =>
    rw [diffNode]
    have hi := hwf.id_lt
    refine ⟨?_, by simp, rfl, .text (by simpa [Live.id] using hi), Nat.le_refl _⟩
    intro l hl
    simp only [toDom_text, Live.id] at hl ⊢
    split
    · rename_i heq
      have : s = s' := by simpa using heq
      subst this
      rw [modId_self _ _ _ hl]; rfl
    · simp only [applyOps_cons, applyOps_nil, applyOp]
      rw [modId_const _ _ _ _ hl]; rfl
  | .elem i ns tag key oattrs ocs, .elem ns' tag' key' nattrs ncs, hwf, hs =>
    obtain ⟨rfl, rfl, rfl⟩ := same_elem hs
    rw [diffNode]
    simp only [beq_self_eq_true, Bool.and_self, ↓reduceIte]
    cases hwf with
    | elem hi hcs hnd =>
    have hr := diffChildren_spec Subtype.val (fun o c nx => diffNode o c.1 nx)
      (fun o c n hw hsm => diffNode_spec c.1 o n hw hsm) ocs ncs.attach next ⟨hcs, hnd⟩
    obtain ⟨r1, r2, r3, r4⟩ := hr
    have hattrs := diffAttrs_correct oattrs nattrs
    rw [List.attach_map_subtype_val] at r2
    -- the new node's DOM, from the old one's
    generalize hr : diffChildren Subtype.val (fun o c nx => diffNode o c.1 nx) ocs ncs.attach next = r at r1 r2 r3 r4
    generalize ha : diffAttrs oattrs nattrs = aops at hattrs
    have hlive : toDom (Live.elem (Msg := Msg) i ns tag key nattrs r.live) =
        Dom.modChildren (applyOps r.ops.toList) (Dom.modAttrs (applyAttrOps aops) (toDom (Live.elem i ns tag key oattrs ocs))) := by
      simp [Dom.modAttrs, Dom.modChildren, hattrs, r1]
    refine ⟨?_, by simp [r2], rfl, .elem (Nat.lt_of_lt_of_le hi r4) r3.1 r3.2, r4⟩
    intro l hl
    simp only [Live.id] at hl ⊢
    have hid : ∀ g : List Dom → List Dom, ∀ a : Attrs → Attrs,
        (Dom.modChildren g (Dom.modAttrs a (toDom (Live.elem (Msg := Msg) i ns tag key oattrs ocs)))).id = i := by
      intro g a; simp [Dom.modChildren, Dom.modAttrs, Dom.id]
    by_cases hA : aops.isEmpty = true
    · have hA' : aops = [] := List.isEmpty_iff.1 hA
      subst hA'
      by_cases hC : r.ops.isEmpty = true
      · have hC' : r.ops = #[] := Array.isEmpty_iff.1 hC
        simp only [hA, hC, ↓reduceIte, applyOps_nil]
        rw [hlive, hC', modId_self _ _ _ (by simpa [Dom.modChildren, Dom.modAttrs, applyAttrOps_nil] using hl)]
      · simp only [hA, hC, Bool.false_eq_true, ↓reduceIte, applyOps_cons, applyOps_nil, applyOp]
        rw [modId_const _ _ _ _ hl, hlive]
        simp [Dom.modAttrs, applyAttrOps_nil]
    · by_cases hC : r.ops.isEmpty = true
      · have hC' : r.ops = #[] := Array.isEmpty_iff.1 hC
        simp only [hA, hC, Bool.false_eq_true, ↓reduceIte, applyOps_cons, applyOps_nil, applyOp]
        rw [modId_const _ _ _ _ hl, hlive, hC']
        simp [Dom.modChildren, Dom.modAttrs]
      · simp only [hA, hC, Bool.false_eq_true, ↓reduceIte, applyOps_cons, applyOps_nil, applyOp]
        rw [modId_const _ _ _ _ hl]
        rw [modId_const _ _ _ _ (modId_only _ _ l)]
        rw [modId_modId _ _ _ _ (by simp [Dom.modAttrs, Dom.id]), hlive]
  | .text _ _, .elem .., _, hs => simp [Live.same] at hs
  | .elem .., .text _, _, hs => simp [Live.same] at hs
termination_by sizeOf n
decreasing_by
  simp_wf
  have := List.sizeOf_lt_of_mem c.2
  omega

end Lasm.UI.Proofs
