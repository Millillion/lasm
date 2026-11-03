/-
Where a local insertion goes: `placeAt` hangs the new character where the
graft lemma puts it right at the visible position asked for.
-/
import Proofs.Graft
import Proofs.Fast
import Tandem.Edit

namespace Tandem.Proofs
open Tandem Doc

/-- Visible in `d`: not deleted. -/
abbrev vis (d : Doc) (n : Node) : Bool := !d.dels.contains n.id

theorem visibleSpec_def (d : Doc) : d.visibleSpec = d.seqSpec.filter (vis d) := rfl

theorem nth?_eq {α : Type} : ∀ (l : List α) (i : Nat), Doc.nth? l i = l[i]?
  | [], _ => rfl
  | _ :: _, 0 => rfl
  | _ :: xs, i + 1 => by simp [Doc.nth?, nth?_eq xs i]

/-! Lists with unique ids -/

theorem uniq_filter {p : Node → Bool} {l : List Node} (h : Uniq l) : Uniq (l.filter p) := h.filter p

theorem split_of_mem {l : List Node} (hu : Uniq l) {x : Node} (hx : x ∈ l) :
    ∃ A B, l = A ++ x :: B ∧ ¬Occurs x.id A := by
  obtain ⟨A, B, rfl⟩ := append_of_mem' hx
  refine ⟨A, B, rfl, fun ⟨y, hy, e⟩ => ?_⟩
  rw [Uniq, List.pairwise_append] at hu
  exact hu.2.2 y hy x (by simp) e

/-- In a list with unique ids, the node at index `j` has exactly `j` nodes before it. -/
theorem index_of_split {A B : List Node} {x : Node} (hu : Uniq (A ++ x :: B)) {j : Nat}
    (hj : (A ++ x :: B)[j]? = some x) : j = A.length := by
  rw [Uniq, List.pairwise_append, List.pairwise_cons] at hu
  rcases Nat.lt_trichotomy j A.length with h | h | h
  · rw [List.getElem?_append_left h] at hj
    exact absurd rfl (hu.2.2 x (List.mem_of_getElem? hj) x (by simp))
  · exact h
  · rw [List.getElem?_append_right (by omega)] at hj
    obtain ⟨k, hk⟩ : ∃ k, j - A.length = k + 1 := ⟨j - A.length - 1, by omega⟩
    rw [hk, List.getElem?_cons_succ] at hj
    exact absurd rfl (hu.2.1.1 x (List.mem_of_getElem? hj))

theorem insAfter_split {A B W : List Node} {x : Node} (hA : ¬Occurs x.id A) :
    insAfter x.id W (A ++ x :: B) = A ++ x :: (W ++ B) := by
  have := graft_append_left (σ := .R) (pid := x.id) (W := W) (x :: B) hA
  simp only [graft] at this; rw [this]; simp [insAfter]

/-- Inserting `W` right after the visible node `lo`, the `j`-th visible one,
puts `W` at visible position `j + 1`. -/
theorem filter_after {e : Doc} {A B W : List Node} {lo : Node} (hA : ¬Occurs lo.id A) (hlo : vis e lo = true)
    (hW : ∀ w ∈ W, vis e w = true) {j : Nat} (hu : Uniq ((A ++ lo :: B).filter (vis e)))
    (hj : ((A ++ lo :: B).filter (vis e))[j]? = some lo) :
    (A ++ lo :: (W ++ B)).filter (vis e) =
      ((A ++ lo :: B).filter (vis e)).take (j + 1) ++ W ++ ((A ++ lo :: B).filter (vis e)).drop (j + 1) := by
  have hf : (A ++ lo :: B).filter (vis e) = A.filter (vis e) ++ lo :: B.filter (vis e) := by
    simp [List.filter_append, hlo]
  rw [hf] at hu hj ⊢
  have := index_of_split hu hj
  subst this
  have hWf : W.filter (vis e) = W := List.filter_eq_self.2 hW
  have e1 : A.filter (vis e) ++ lo :: B.filter (vis e) = (A.filter (vis e) ++ [lo]) ++ B.filter (vis e) := by simp
  have hl : (A.filter (vis e) ++ [lo]).length = (A.filter (vis e)).length + 1 := by simp
  rw [e1, List.take_left' hl, List.drop_left' hl]
  simp [List.filter_append, hlo, hWf]

/-! The placement of an insertion -/

/-- The nodes of the traversal are nodes of the document. -/
theorem mem_seqSpec_nodes {d : Doc} (h : Wf d) {x : Node} (hx : x ∈ d.seqSpec) : x ∈ d.nodes :=
  seqSpec_sub h x hx

/-- What `placeAt` guarantees: the new node's place had no child on its side,
and grafting any visible `W` there puts `W` at visible position `i`. -/
structure Placed (d : Doc) (i : Nat) (P : Option Id) (σ : Side) : Prop where
  empty : d.kids P σ = []
  rootR : P = none → σ = .R
  parent : ∀ pid, P = some pid → ∃ p ∈ d.nodes, p.id = pid
  text : ∀ W : List Node, (∀ w ∈ W, vis d w = true) →
    (graftAt P σ W d.seqSpec).filter (vis d) = d.visibleSpec.take i ++ W ++ d.visibleSpec.drop i

theorem after_split {A B : List Node} {x : Node} (hA : ¬Occurs x.id A) : after x (A ++ x :: B) = B.head? := by
  induction A with
  | nil => simp [after]
  | cons y ys ih =>
    have hy : y.id ≠ x.id := fun e => hA ⟨y, by simp, e⟩
    simp only [List.cons_append, after, hy, ite_false]
    exact ih (fun ⟨z, hz, e⟩ => hA ⟨z, by simp [hz], e⟩)

theorem placed {d : Doc} (h : Wf d) {i : Nat} (hi : i ≤ d.visibleSpec.length) (id : Id) (c : Char) :
    Placed d i (d.placeAt id i c).parent (d.placeAt id i c).side := by
  have hvis := visible_eq h
  have hseq := seq_eq h
  have hu : Uniq d.seqSpec := uniq_seqSpec h
  have hvu : Uniq d.visibleSpec := uniq_filter hu
  unfold Doc.placeAt
  simp only [hvis, hseq, Nat.min_eq_left hi, nth?_eq]
  cases i with
  | zero =>
    cases hs : d.seqSpec with
    | nil =>
      have hk : d.kids none .R = [] := by
        rw [seqSpec_eq] at hs
        cases hk : d.kids none .R with
        | nil => rfl
        | cons a _ => rw [hk] at hs; have := @mem_T_self d a; simp at hs; rw [hs.1] at this; simp at this
      refine ⟨hk, fun _ => rfl, fun _ e => by simp at e, fun W hW => ?_⟩
      simp [graftAt, visibleSpec_def, hs, List.filter_eq_self.2 hW]
    | cons first rest =>
      refine ⟨?_, fun e => by simp at e, fun pid e => ⟨first, mem_seqSpec_nodes h (by rw [hs]; simp), by simp at e; exact e⟩,
        fun W hW => ?_⟩
      · -- `first` is the first node of the first root's subtree
        rw [seqSpec_eq] at hs
        cases hk : d.kids none .R with
        | nil => rw [hk] at hs; simp at hs
        | cons a as =>
          rw [hk, List.flatMap_cons] at hs
          have ha : a ∈ d.kids none .R := by rw [hk]; simp
          cases hTa : T d a with
          | nil => have := @mem_T_self d a; rw [hTa] at this; simp at this
          | cons x xs =>
            rw [hTa] at hs; simp at hs; rw [← hs.1]
            exact head_noL h a (node_le_max (mem_kids.1 ha).1) x xs hTa
      · simp only [graftAt, graft, visibleSpec_def, hs, insBefore, ite_true, List.filter_append,
          List.filter_eq_self.2 hW, List.take_zero, List.drop_zero, List.nil_append]
  | succ j =>
    have hj : j < d.visibleSpec.length := by omega
    obtain ⟨lo, hlo⟩ : ∃ lo, d.visibleSpec[j]? = some lo := ⟨_, List.getElem?_eq_getElem hj⟩
    dsimp only
    rw [hlo]
    have hlo_mem : lo ∈ d.visibleSpec := List.mem_of_getElem? hlo
    have hlo_seq : lo ∈ d.seqSpec := (List.mem_filter.1 hlo_mem).1
    have hlo_vis : vis d lo = true := (List.mem_filter.1 hlo_mem).2
    have hlo_n : lo ∈ d.nodes := mem_seqSpec_nodes h hlo_seq
    have htext : ∀ A B, d.seqSpec = A ++ lo :: B → ¬Occurs lo.id A → ∀ W : List Node, (∀ w ∈ W, vis d w = true) →
        (A ++ lo :: (W ++ B)).filter (vis d) = d.visibleSpec.take (j + 1) ++ W ++ d.visibleSpec.drop (j + 1) := by
      intro A B hsplit hA W hW
      rw [visibleSpec_def, hsplit] at hlo hvu ⊢
      exact filter_after hA hlo_vis hW hvu hlo
    by_cases hR : (d.kids (some lo.id) .R).isEmpty = true
    · simp only [hR, ite_true]
      refine ⟨List.isEmpty_iff.1 hR, fun e => by simp at e, fun pid e => ⟨lo, hlo_n, by simp at e; exact e⟩,
        fun W hW => ?_⟩
      obtain ⟨A, B, hsplit, hA⟩ := split_of_mem hu hlo_seq
      simp only [graftAt, graft]
      rw [hsplit, insAfter_split hA]
      exact htext A B hsplit hA W hW
    · simp only [hR, Bool.false_eq_true, ite_false]
      -- the next node is the first of lo's first right child's subtree
      obtain ⟨A', C, hctx⟩ := seq_context h hlo_seq
      have hlom := node_le_max hlo_n
      rw [T_eq h hlom] at hctx
      cases hk : d.kids (some lo.id) .R with
      | nil => simp [hk] at hR
      | cons r1 rs =>
        have hr1 : r1 ∈ d.kids (some lo.id) .R := by rw [hk]; simp
        have hr1m := node_le_max (mem_kids.1 hr1).1
        cases hT : T d r1 with
        | nil => have := @mem_T_self d r1; rw [hT] at this; simp at this
        | cons ro Y =>
          rw [hk, List.flatMap_cons, hT] at hctx
          -- seq = (A' ++ X) ++ lo :: ro :: rest
          have hctx' : d.seqSpec = (A' ++ (d.kids (some lo.id) .L).flatMap (T d)) ++ lo ::
              (ro :: (Y ++ rs.flatMap (T d) ++ C)) := by rw [hctx]; simp
          have hu' := hu; rw [hctx'] at hu'
          have hA2 : ¬Occurs lo.id (A' ++ (d.kids (some lo.id) .L).flatMap (T d)) := by
            rintro ⟨y, hy, e⟩
            rw [Uniq, List.pairwise_append] at hu'
            exact hu'.2.2 y hy lo (by simp) e
          have hne : ro.id ≠ lo.id := by
            rw [Uniq, List.pairwise_append, List.pairwise_cons] at hu'
            exact fun e => hu'.2.1.1 ro (by simp) e.symm
          rw [hctx', after_split hA2]
          simp only [List.head?_cons]
          have hro_n : ro ∈ d.nodes := mem_seqSpec_nodes h (by rw [hctx']; simp)
          refine ⟨head_noL h r1 hr1m ro Y hT, fun e => by simp at e,
            fun pid e => ⟨ro, hro_n, by simp at e; exact e⟩, fun W hW => ?_⟩
          simp only [graftAt, graft]
          have hA3 : ¬Occurs ro.id (A' ++ (d.kids (some lo.id) .L).flatMap (T d)) := by
            rintro ⟨y, hy, e⟩
            rw [Uniq, List.pairwise_append] at hu'
            exact hu'.2.2 y hy ro (by simp) e
          have := graft_append_left (σ := .L) (pid := ro.id) (W := W) (lo :: ro :: (Y ++ rs.flatMap (T d) ++ C)) hA3
          simp only [graft] at this
          rw [hctx', this]
          have hlo' : lo.id = ro.id ↔ False := ⟨fun e => hne e.symm, False.elim⟩
          simp only [insBefore, hlo', ite_false, ite_true]
          exact htext _ _ hctx' hA2 W hW

end Tandem.Proofs
