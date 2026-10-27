/-
Basic facts for the correctness proof of `Lasm.UI.diff`: unfolding lemmas,
well-formedness of live trees (`WF`: sibling ids are distinct and every id is
below the next free id), `create`, and the attribute diff.
-/
import Lasm.UI.Model

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg : Type}

/-! Unfolding -/

@[simp] theorem toDom_text (i : Nat) (s : String) : toDom (Live.text (Msg := Msg) i s) = .text i s := by
  rw [toDom]

@[simp] theorem toDom_elem (i ns tag key attrs cs) :
    toDom (Live.elem (Msg := Msg) i ns tag key attrs cs) = .elem i ns tag (attrsOf attrs) (cs.map toDom) := by
  rw [toDom]; simp

@[simp] theorem erase_text (i : Nat) (s : String) : Live.erase (Live.text (Msg := Msg) i s) = .text s := by
  rw [Live.erase]

@[simp] theorem erase_elem (i ns tag key attrs cs) :
    Live.erase (Live.elem (Msg := Msg) i ns tag key attrs cs) = .elem ns tag key attrs (cs.map Live.erase) := by
  rw [Live.erase]; simp

@[simp] theorem id_toDom (x : Live Msg) : (toDom x).id = x.id := by
  cases x <;> simp [Dom.id, Live.id]

@[simp] theorem map_id_toDom (l : List (Live Msg)) : (l.map toDom).map Dom.id = l.map Live.id := by
  simp [Function.comp_def]

/-! Well-formed live trees -/

/-- Every id in the tree is below `next`, and the ids of each sibling list are distinct. -/
inductive WFn (next : Nat) : Live Msg → Prop
  | text {i s} : i < next → WFn next (.text i s)
  | elem {i ns tag key attrs cs} : i < next → (∀ c ∈ cs, WFn next c) → (cs.map Live.id).Nodup →
      WFn next (.elem i ns tag key attrs cs)

/-- A well-formed list of siblings. -/
def WF (l : List (Live Msg)) (next : Nat) : Prop := (∀ x ∈ l, WFn next x) ∧ (l.map Live.id).Nodup

theorem WFn.id_lt {next : Nat} {x : Live Msg} (h : WFn next x) : x.id < next := by
  cases h <;> simpa [Live.id]

theorem WFn.mono {n m : Nat} {x : Live Msg} (h : WFn n x) (hle : n ≤ m) : WFn m x := by
  induction h with
  | text hi => exact .text (by omega)
  | elem hi _ hnd ih => exact .elem (by omega) ih hnd

theorem WF.mono {n m : Nat} {l : List (Live Msg)} (h : WF l n) (hle : n ≤ m) : WF l m :=
  ⟨fun x hx => (h.1 x hx).mono hle, h.2⟩

/-! `create` -/

theorem create_text (s : String) (n : Nat) : create (Msg := Msg) (.text s) n = (.text n s, n + 1) := by
  rw [create]

theorem create_elem (ns tag key attrs cs) (n : Nat) :
    create (Msg := Msg) (.elem ns tag key attrs cs) n =
      let r := createAux cs (n + 1) #[]
      (.elem n ns tag key attrs r.1.toList, r.2) := by
  rw [create]

theorem createAux_nil (n : Nat) (acc : Array (Live Msg)) : createAux [] n acc = (acc, n) := by
  rw [createAux]

theorem createAux_cons (h : Html Msg) (t : List (Html Msg)) (n : Nat) (acc : Array (Live Msg)) :
    createAux (h :: t) n acc = createAux t (create h n).2 (acc.push (create h n).1) := by
  rw [createAux]

/-- What `create` guarantees: the root id is `n`, the ids are below the
returned next id, which is above `n`, and the tree shows `h`. -/
structure CreateSpec (h : Html Msg) (n : Nat) (r : Live Msg × Nat) : Prop where
  id : r.1.id = n
  lt : n < r.2
  wf : WFn r.2 r.1
  erase : r.1.erase = h

def CreateAuxSpec (l : List (Html Msg)) (n : Nat) (acc : Array (Live Msg)) (r : Array (Live Msg) × Nat) : Prop :=
  ∃ cs : List (Live Msg), r.1.toList = acc.toList ++ cs ∧ cs.map Live.erase = l ∧ (∀ c ∈ cs, WFn r.2 c) ∧
    (∀ c ∈ cs, n ≤ c.id) ∧ (cs.map Live.id).Nodup ∧ n ≤ r.2

mutual
theorem create_spec : (h : Html Msg) → (n : Nat) → CreateSpec h n (create h n)
  | .text s, n => by
    rw [create_text]
    exact ⟨rfl, by simp, .text (by simp), by simp⟩
  | .elem ns tag key attrs cs, n => by
    rw [create_elem]
    have hs := createAux_spec cs (n + 1) #[]
    obtain ⟨cs', heq, her, hwf, hge, hnd, hle⟩ := hs
    simp only at heq
    refine ⟨rfl, by simp only; omega, ?_, ?_⟩
    · simp only [heq, List.nil_append]
      exact .elem (by omega) hwf hnd
    · simp only [heq, List.nil_append, erase_elem, her]
theorem createAux_spec : (l : List (Html Msg)) → (n : Nat) → (acc : Array (Live Msg)) →
    CreateAuxSpec l n acc (createAux l n acc)
  | [], n, acc => by
    rw [createAux_nil]
    exact ⟨[], by simp, rfl, by simp, by simp, by simp, Nat.le_refl _⟩
  | h :: t, n, acc => by
    rw [createAux_cons]
    have h1 := create_spec h n
    have h2 := createAux_spec t (create h n).2 (acc.push (create h n).1)
    obtain ⟨cs, heq, her, hwf, hge, hnd, hle⟩ := h2
    refine ⟨(create h n).1 :: cs, by simp [heq], by simp [her, h1.erase], ?_, ?_, ?_, by have := h1.lt; omega⟩
    · intro c hc
      simp only [List.mem_cons] at hc
      rcases hc with rfl | hc
      · exact h1.wf.mono hle
      · exact hwf c hc
    · intro c hc
      simp only [List.mem_cons] at hc
      rcases hc with rfl | hc
      · rw [h1.id]; omega
      · have := hge c hc; have := h1.lt; omega
    · simp only [List.map_cons, List.nodup_cons, List.mem_map, not_exists, not_and]
      refine ⟨fun c hc heq => ?_, hnd⟩
      have := hge c hc; have := h1.lt; rw [h1.id] at heq; omega
end

/-! The attribute diff -/

theorem lastVal_none_iff (k : AttrKey) (l : List (Attr Msg)) : lastVal k l = none ↔ hasKey k l = false := by
  induction l with
  | nil => simp [lastVal, hasKey]
  | cons a l ih =>
    simp only [lastVal, hasKey, Bool.or_eq_false_iff]
    split
    · rename_i v hv; simp only [reduceCtorEq, false_iff]; intro ⟨_, h⟩; rw [← ih] at h; simp [hv] at h
    · rename_i hv; rw [ih] at hv; simp [hv]

theorem lastVal_cons (k : AttrKey) (a : Attr Msg) (l : List (Attr Msg)) :
    lastVal k (a :: l) = if hasKey k l then lastVal k l else if a.key = k then some a.val else none := by
  simp only [lastVal]
  split
  · rename_i v hv
    have : hasKey k l = true := by
      cases h : hasKey k l
      · rw [← lastVal_none_iff] at h; simp [h] at hv
      · rfl
    simp [this, hv]
  · rename_i hv
    rw [lastVal_none_iff] at hv
    simp [hv]

theorem Attr.same_spec {a b : Attr Msg} (h : a.same b = true) : a.key = b.key ∧ a.val = b.val := by
  cases a <;> cases b <;> simp_all [Attr.same, Attr.key, Attr.val]

theorem attrsEq_lastVal {old new : List (Attr Msg)} (h : attrsEq old new = true) (k : AttrKey) :
    lastVal k old = lastVal k new := by
  induction old generalizing new with
  | nil => cases new <;> simp_all [attrsEq]
  | cons a as ih =>
    cases new with
    | nil => simp [attrsEq] at h
    | cons b bs =>
      simp only [attrsEq, Bool.and_eq_true] at h
      obtain ⟨hs, ht⟩ := h
      obtain ⟨hk, hv⟩ := Attr.same_spec hs
      simp only [lastVal, ih ht, hk, hv]

theorem applyAttrOps_append (xs ys : List AttrOp) (a : Attrs) :
    applyAttrOps (xs ++ ys) a = applyAttrOps ys (applyAttrOps xs a) := by
  induction xs generalizing a with
  | nil => rfl
  | cons x xs ih => exact ih _

theorem attrRemoves_apply (new old : List (Attr Msg)) (g : Attrs) (k : AttrKey) :
    applyAttrOps (attrRemoves new old) g k = if hasKey k old = true ∧ hasKey k new = false then none else g k := by
  induction old generalizing g with
  | nil => simp [attrRemoves, applyAttrOps, hasKey]
  | cons a rest ih =>
    simp only [attrRemoves]
    split
    · rename_i hn
      rw [ih]
      simp only [hasKey, Bool.or_eq_true, beq_iff_eq]
      by_cases hk : a.key = k
      · subst hk; simp [hn]
      · simp [hk]
    · rename_i hn
      simp only [applyAttrOps]
      rw [ih]
      simp only [hasKey, Bool.or_eq_true, beq_iff_eq, applyAttrOp]
      by_cases hk : a.key = k
      · subst hk; simp at hn; simp [hn]
      · have : k ≠ a.key := fun h => hk h.symm
        simp [hk, this]

theorem attrSets_apply (old new : List (Attr Msg)) (g : Attrs) (k : AttrKey) :
    applyAttrOps (attrSets old new) g k =
      if hasKey k new = true ∧ lastVal k old ≠ lastVal k new then lastVal k new else g k := by
  induction new generalizing g with
  | nil => simp [attrSets, applyAttrOps, hasKey]
  | cons a rest ih =>
    simp only [attrSets]
    by_cases hk : a.key = k
    · subst hk
      by_cases hr : hasKey a.key rest = true
      · simp only [hr, Bool.true_or, ↓reduceIte, ih, lastVal_cons, hasKey, beq_self_eq_true]
      · simp only [Bool.not_eq_true] at hr
        have hnone : lastVal a.key rest = none := (lastVal_none_iff _ _).2 hr
        by_cases hv : lastVal a.key old = some a.val
        · simp [hr, hv, ih, lastVal_cons, hasKey, hnone]
        · simp [hr, hv, ih, lastVal_cons, hasKey, hnone, applyAttrOps, applyAttrOp]
    · have hk' : k ≠ a.key := fun h => hk h.symm
      have hlv : lastVal k (a :: rest) = lastVal k rest := by
        rw [lastVal_cons]; split
        · rfl
        · rename_i h; rw [Bool.not_eq_true] at h; simp [(lastVal_none_iff _ _).2 h]
      have hhk : hasKey k (a :: rest) = hasKey k rest := by simp [hasKey, hk]
      rw [hlv, hhk]
      split
      · exact ih g
      · simp only [applyAttrOps]; rw [ih]; simp [applyAttrOp, hk']

/-- The attribute diff is correct: the ops turn the slots of `old` into those of `new`. -/
theorem diffAttrs_correct (old new : List (Attr Msg)) :
    applyAttrOps (diffAttrs old new) (attrsOf old) = attrsOf new := by
  funext k
  unfold diffAttrs
  split
  · rename_i h; exact attrsEq_lastVal h k
  · rw [applyAttrOps_append, attrSets_apply, attrRemoves_apply]
    simp only [attrsOf]
    by_cases hn : hasKey k new = true
    · by_cases he : lastVal k old = lastVal k new
      · simp [hn, he]
      · simp [hn, he]
    · simp only [Bool.not_eq_true] at hn
      have h1 : lastVal k new = none := (lastVal_none_iff _ _).2 hn
      simp only [hn, Bool.false_eq_true, false_and, ↓reduceIte, h1, and_true]
      split
      · rfl
      · rename_i ho; simp only [Bool.not_eq_true] at ho; exact (lastVal_none_iff _ _).2 ho

end Lasm.UI.Proofs
