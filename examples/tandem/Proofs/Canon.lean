/-
The state is a canonical form of the set of operations applied: sorted,
without duplicates, one node per id (the least by key). So two replicas that
applied the same set have equal states, whatever the order and however many
times each operation arrived.
-/
import Proofs.Order

namespace Tandem.Proofs
open Tandem Doc

/-! The tail-recursive insertions are the structural ones. -/

theorem insNodeGo_eq (x : Node) : ∀ acc l, insNodeGo x acc l = acc.reverse ++ insNodeSpec x l
  | acc, [] => by simp [insNodeGo, insNodeSpec, List.reverseAux_eq]
  | acc, y :: ys => by
    unfold insNodeGo insNodeSpec
    split
    · simp [List.reverseAux_eq]
    · split
      · simp [List.reverseAux_eq]
      · rw [insNodeGo_eq x (y :: acc) ys]; simp

theorem insNode_eq (x : Node) (l : List Node) : insNode x l = insNodeSpec x l := by
  simp [insNode, insNodeGo_eq]

theorem insIdGo_eq (x : Id) : ∀ acc l, insIdGo x acc l = acc.reverse ++ insIdSpec x l
  | acc, [] => by simp [insIdGo, insIdSpec, List.reverseAux_eq]
  | acc, y :: ys => by
    unfold insIdGo insIdSpec
    split
    · simp [List.reverseAux_eq]
    · split
      · simp [List.reverseAux_eq]
      · rw [insIdGo_eq x (y :: acc) ys]; simp

theorem insId_eq (x : Id) (l : List Id) : insId x l = insIdSpec x l := by
  simp [insId, insIdGo_eq]

/-! Sorted lists -/

/-- Nodes sorted strictly by id. -/
abbrev SortedN (l : List Node) : Prop := l.Pairwise fun a b => a.id.lt b.id = true
/-- Ids sorted strictly. -/
abbrev SortedI (l : List Id) : Prop := l.Pairwise fun a b => a.lt b = true

theorem mem_insNodeSpec_id {x n : Node} : ∀ {l : List Node}, n ∈ insNodeSpec x l → n.id = x.id ∨ n ∈ l
  | [], h => by simp [insNodeSpec] at h; exact Or.inl (by rw [h])
  | y :: ys, h => by
    unfold insNodeSpec at h
    split at h
    · simp at h; rcases h with rfl | rfl | h
      · exact Or.inl rfl
      · exact Or.inr (by simp)
      · exact Or.inr (by simp [h])
    · split at h
      · simp at h; rcases h with rfl | h
        · rcases Node.min_mem x y with e | e <;> rw [e]
          · exact Or.inl rfl
          · exact Or.inr (by simp)
        · exact Or.inr (by simp [h])
      · simp at h; rcases h with rfl | h
        · exact Or.inr (by simp)
        · rcases mem_insNodeSpec_id h with h | h
          · exact Or.inl h
          · exact Or.inr (by simp [h])

theorem min_id {x y : Node} (h : x.id = y.id) : (Node.min x y).id = y.id := by
  rcases Node.min_mem x y with e | e <;> rw [e]; exact h

theorem sorted_insNodeSpec (x : Node) : ∀ {l : List Node}, SortedN l → SortedN (insNodeSpec x l)
  | [], _ => by simp [insNodeSpec]
  | y :: ys, h => by
    unfold insNodeSpec
    rw [SortedN, List.pairwise_cons] at h
    split
    · rename_i hlt
      refine List.Pairwise.cons ?_ (List.Pairwise.cons h.1 h.2)
      intro z hz; simp at hz; rcases hz with rfl | hz
      · exact hlt
      · exact Id.lt_trans hlt (h.1 z hz)
    · split
      · rename_i _ heq
        refine List.Pairwise.cons ?_ h.2
        intro z hz; rw [min_id heq]; exact h.1 z hz
      · rename_i hlt hne
        refine List.Pairwise.cons ?_ (sorted_insNodeSpec x h.2)
        intro z hz
        rcases mem_insNodeSpec_id hz with e | e
        · rw [e]
          rcases Id.lt_total hne with h' | h'
          · simp [h'] at hlt
          · exact h'
        · exact h.1 z e

/-- The meaning of `insNodeSpec` on a sorted list: `x` joins unless a node
with its id and a smaller key is there; a node with `x`'s id and a larger
key leaves. -/
theorem mem_insNodeSpec {x n : Node} : ∀ {l : List Node}, SortedN l →
    (n ∈ insNodeSpec x l ↔ (n = x ∧ ∀ y ∈ l, y.id = x.id → lexLt y.key x.key = false) ∨
      (n ∈ l ∧ ¬(n.id = x.id ∧ lexLt x.key n.key = true)))
  | [], _ => by simp [insNodeSpec]
  | y :: ys, h => by
    rw [SortedN, List.pairwise_cons] at h
    unfold insNodeSpec
    split
    · rename_i hlt
      have hne : ∀ z ∈ y :: ys, z.id ≠ x.id := by
        intro z hz; simp at hz
        rcases hz with rfl | hz
        · exact (Id.ne_of_lt hlt).symm
        · exact (Id.ne_of_lt (Id.lt_trans hlt (h.1 z hz))).symm
      constructor
      · intro hm; simp at hm
        rcases hm with rfl | rfl | hm
        · left; exact ⟨rfl, fun z hz e => absurd e (hne z hz)⟩
        · right; exact ⟨by simp, fun ⟨e, _⟩ => hne n (by simp) e⟩
        · right; exact ⟨by simp [hm], fun ⟨e, _⟩ => hne n (by simp [hm]) e⟩
      · intro hm
        rcases hm with ⟨rfl, _⟩ | ⟨hm, _⟩
        · simp
        · simp at hm ⊢; rcases hm with rfl | hm
          · simp
          · simp [hm]
    · split
      · rename_i _ heq
        have hu : ∀ z ∈ ys, z.id ≠ x.id := fun z hz e => Id.ne_of_lt (h.1 z hz) (by rw [e, heq])
        constructor
        · intro hm; simp at hm
          rcases hm with rfl | hm
          · unfold Node.min
            split
            · rename_i hk
              right; refine ⟨by simp, fun ⟨_, h2⟩ => ?_⟩
              rw [lexLt_asymm hk] at h2; exact absurd h2 (by simp)
            · rename_i hk
              left; refine ⟨rfl, fun z hz e => ?_⟩
              simp at hz; rcases hz with rfl | hz
              · simpa using hk
              · exact absurd e (hu z hz)
          · right; exact ⟨by simp [hm], fun ⟨e, _⟩ => hu n hm e⟩
        · intro hm
          rcases hm with ⟨rfl, hall⟩ | ⟨hm, hn⟩
          · have := hall y (by simp) heq.symm
            simp [Node.min, this]
          · simp at hm ⊢; rcases hm with rfl | hm
            · left; unfold Node.min
              split
              · rfl
              · rename_i hk
                have h2 : lexLt x.key n.key = false := by
                  cases h' : lexLt x.key n.key
                  · rfl
                  · exact absurd ⟨heq.symm, h'⟩ hn
                exact Node.key_inj (Classical.byContradiction fun hne => by
                  rcases lexLt_total hne with h1 | h1 <;> simp_all)
            · right; exact hm
      · rename_i hlt hne
        have hgt : y.id.lt x.id = true := by
          rcases Id.lt_total hne with h' | h'
          · simp [h'] at hlt
          · exact h'
        have ih := @mem_insNodeSpec x n ys h.2
        simp only [List.mem_cons]
        rw [ih]
        constructor
        · rintro (rfl | ⟨rfl, hall⟩ | ⟨hm, hn⟩)
          · right; exact ⟨Or.inl rfl, fun ⟨e, _⟩ => hne e.symm⟩
          · left; refine ⟨rfl, fun z hz e => ?_⟩
            rcases hz with rfl | hz
            · exact absurd e.symm hne
            · exact hall z hz e
          · right; exact ⟨Or.inr hm, hn⟩
        · rintro (⟨rfl, hall⟩ | ⟨rfl | hm, hn⟩)
          · right; left; exact ⟨rfl, fun z hz e => hall z (Or.inr hz) e⟩
          · left; rfl
          · right; right; exact ⟨hm, hn⟩

theorem sorted_insIdSpec (x : Id) : ∀ {l : List Id}, SortedI l → SortedI (insIdSpec x l)
  | [], _ => by simp [insIdSpec]
  | y :: ys, h => by
    unfold insIdSpec
    rw [SortedI, List.pairwise_cons] at h
    split
    · rename_i hlt
      refine List.Pairwise.cons ?_ (List.Pairwise.cons h.1 h.2)
      intro z hz; simp at hz; rcases hz with rfl | hz
      · exact hlt
      · exact Id.lt_trans hlt (h.1 z hz)
    · split
      · exact List.Pairwise.cons h.1 h.2
      · rename_i hlt hne
        refine List.Pairwise.cons ?_ (sorted_insIdSpec x h.2)
        have hmem : ∀ {z}, z ∈ insIdSpec x ys → z = x ∨ z ∈ ys := by
          intro z hz
          clear h hlt hne
          induction ys with
          | nil => simp [insIdSpec] at hz; exact Or.inl hz
          | cons w ws ih =>
            unfold insIdSpec at hz
            split at hz
            · simp at hz; rcases hz with rfl | rfl | hz <;> simp_all
            · split at hz
              · simp at hz; rcases hz with rfl | hz <;> simp_all
              · simp at hz; rcases hz with rfl | hz
                · simp
                · rcases ih hz with h | h <;> simp_all
        intro z hz
        rcases hmem hz with rfl | e
        · rcases Id.lt_total hne with h' | h'
          · simp [h'] at hlt
          · exact h'
        · exact h.1 z e

theorem mem_insIdSpec {x z : Id} : ∀ {l : List Id}, z ∈ insIdSpec x l ↔ z = x ∨ z ∈ l
  | [] => by simp [insIdSpec]
  | y :: ys => by
    unfold insIdSpec
    split
    · simp
    · split
      · rename_i _ e; subst e; simp
      · simp only [List.mem_cons]; rw [mem_insIdSpec]
        constructor <;> rintro (h | h | h) <;> simp [h]

/-! Two sorted lists with the same members are equal. -/

theorem eq_of_sorted_mem {α : Type} {lt : α → α → Bool} (irr : ∀ a, lt a a = false)
    (asymm : ∀ a b, lt a b = true → lt b a = false) :
    ∀ {l₁ l₂ : List α}, l₁.Pairwise (fun a b => lt a b = true) → l₂.Pairwise (fun a b => lt a b = true) →
      (∀ x, x ∈ l₁ ↔ x ∈ l₂) → l₁ = l₂
  | [], [], _, _, _ => rfl
  | [], b :: _, _, _, h => absurd ((h b).2 (by simp)) (by simp)
  | a :: _, [], _, _, h => absurd ((h a).1 (by simp)) (by simp)
  | a :: as, b :: bs, h1, h2, h => by
    rw [List.pairwise_cons] at h1 h2
    have hab : a = b := by
      have ha := (h a).1 (by simp)
      have hb := (h b).2 (by simp)
      simp at ha hb
      rcases ha with ha | ha
      · exact ha
      · rcases hb with hb | hb
        · exact hb.symm
        · have x1 := h2.1 a ha
          have x2 := h1.1 b hb
          rw [asymm _ _ x1] at x2; simp at x2
    subst hab
    have hnot1 : a ∉ as := fun m => by have := h1.1 a m; rw [irr] at this; simp at this
    have hnot2 : a ∉ bs := fun m => by have := h2.1 a m; rw [irr] at this; simp at this
    congr 1
    apply eq_of_sorted_mem irr asymm h1.2 h2.2
    intro x
    constructor
    · intro hx
      have := (h x).1 (by simp [hx]); simp at this
      rcases this with rfl | this
      · exact absurd hx hnot1
      · exact this
    · intro hx
      have := (h x).2 (by simp [hx]); simp at this
      rcases this with rfl | this
      · exact absurd hx hnot2
      · exact this

theorem eq_of_sortedN {l₁ l₂ : List Node} (h1 : SortedN l₁) (h2 : SortedN l₂) (h : ∀ x, x ∈ l₁ ↔ x ∈ l₂) :
    l₁ = l₂ :=
  eq_of_sorted_mem (lt := fun a b => a.id.lt b.id) (fun a => Id.lt_irrefl a.id)
    (fun _ _ h => Id.lt_asymm h) h1 h2 h

theorem eq_of_sortedI {l₁ l₂ : List Id} (h1 : SortedI l₁) (h2 : SortedI l₂) (h : ∀ x, x ∈ l₁ ↔ x ∈ l₂) :
    l₁ = l₂ :=
  eq_of_sorted_mem (lt := Id.lt) Id.lt_irrefl (fun _ _ h => Id.lt_asymm h) h1 h2 h

/-! The set semantics -/

/-- `n` is the node a set of insertions keeps for its id: it is in the set,
and no node of the set with the same id has a smaller key. -/
def Best (S : List Node) (n : Node) : Prop := n ∈ S ∧ ∀ m ∈ S, m.id = n.id → lexLt m.key n.key = false

/-- Adding `s` to a set whose best node for an id is `y`. -/
theorem best_cons {s y : Node} {ss : List Node} (hy : Best ss y) (e : s.id = y.id) :
    (lexLt s.key y.key = true ∧ Best (s :: ss) s) ∨ (lexLt s.key y.key = false ∧ Best (s :: ss) y) := by
  cases hk : lexLt s.key y.key
  · right; refine ⟨rfl, by simp [hy.1], fun z hz ez => ?_⟩
    simp at hz; rcases hz with rfl | hz
    · exact hk
    · exact hy.2 z hz ez
  · left; refine ⟨rfl, by simp, fun z hz ez => ?_⟩
    simp at hz; rcases hz with rfl | hz
    · exact lexLt_irrefl _
    · cases hz' : lexLt z.key s.key
      · rfl
      · have := hy.2 z hz (by rw [ez, e]); rw [lexLt_trans hz' hk] at this; exact this.symm ▸ rfl

theorem exists_best : ∀ {S : List Node} {m : Node}, m ∈ S →
    ∃ y, Best S y ∧ y.id = m.id ∧ lexLt m.key y.key = false
  | [], _, h => by simp at h
  | s :: ss, m, h => by
    by_cases hm : ∃ z ∈ ss, z.id = m.id
    · obtain ⟨z, hz, ez⟩ := hm
      obtain ⟨y, hy, ey, -⟩ := exists_best hz
      have ey' : y.id = m.id := by rw [ey, ez]
      -- for m in ss, y is not larger than m
      have hss : m ∈ ss → lexLt m.key y.key = false := fun hms => hy.2 m hms ey'.symm
      by_cases es : s.id = y.id
      · rcases best_cons hy es with ⟨hk, hb⟩ | ⟨hk, hb⟩
        · refine ⟨s, hb, by rw [es, ey'], ?_⟩
          simp at h; rcases h with rfl | hms
          · exact lexLt_irrefl _
          · cases h' : lexLt m.key s.key
            · rfl
            · have := hss hms; rw [lexLt_trans h' hk] at this; exact this
        · refine ⟨y, hb, ey', ?_⟩
          simp at h; rcases h with rfl | hms
          · exact hk
          · exact hss hms
      · have hms : m ∈ ss := by
          simp at h; rcases h with rfl | h
          · exact absurd ey'.symm es
          · exact h
        refine ⟨y, ⟨by simp [hy.1], fun w hw ew => ?_⟩, ey', hss hms⟩
        simp at hw; rcases hw with rfl | hw
        · exact absurd ew es
        · exact hy.2 w hw ew
    · have hms : m = s := by
        simp at h; rcases h with h | h
        · exact h
        · exact absurd ⟨m, h, rfl⟩ hm
      subst hms
      refine ⟨m, ⟨by simp, fun w hw ew => ?_⟩, rfl, lexLt_irrefl _⟩
      simp at hw; rcases hw with rfl | hw
      · exact lexLt_irrefl _
      · exact absurd ⟨w, hw, ew⟩ hm

/-- The nodes of a list are exactly the best nodes of `S`. -/
def CanonN (S : List Node) (l : List Node) : Prop := SortedN l ∧ ∀ n, n ∈ l ↔ Best S n

theorem canonN_nil : CanonN [] [] := ⟨List.Pairwise.nil, by simp [Best]⟩

theorem canonN_ins {S l : List Node} (x : Node) (h : CanonN S l) : CanonN (x :: S) (insNodeSpec x l) := by
  refine ⟨sorted_insNodeSpec x h.1, fun n => ?_⟩
  rw [mem_insNodeSpec h.1]
  constructor
  · rintro (⟨rfl, hall⟩ | ⟨hm, hn⟩)
    · refine ⟨by simp, fun m hm e => ?_⟩
      simp at hm; rcases hm with rfl | hm
      · exact lexLt_irrefl _
      · obtain ⟨y, hy, ey, hmy⟩ := exists_best hm
        have hyl : y ∈ l := (h.2 y).2 hy
        have := hall y hyl (by rw [ey, e])
        cases h' : lexLt m.key n.key
        · rfl
        · cases h'' : lexLt y.key m.key
          · -- y and m: y ≤ m and m ≤ y, so y = m by keys
            have hk : y.key = m.key := Classical.byContradiction fun hne => by
              rcases lexLt_total hne with h1 | h1 <;> simp_all
            rw [← hk] at h'; rw [this] at h'; exact h'.symm ▸ rfl
          · rw [lexLt_trans h'' h'] at this; exact this
    · have hb := (h.2 n).1 hm
      refine ⟨by simp [hb.1], fun m hm' e => ?_⟩
      simp at hm'; rcases hm' with rfl | hm'
      · cases h' : lexLt m.key n.key
        · rfl
        · exact absurd ⟨e.symm, h'⟩ hn
      · exact hb.2 m hm' e
  · rintro ⟨hm, hall⟩
    simp at hm; rcases hm with rfl | hm
    · left; refine ⟨rfl, fun y hy e => hall y (by simp [((h.2 y).1 hy).1]) e⟩
    · right; refine ⟨(h.2 n).2 ⟨hm, fun m hm' e => hall m (by simp [hm']) e⟩, fun ⟨e, hlt⟩ => ?_⟩
      have := hall x (by simp) e.symm
      rw [hlt] at this; simp at this

theorem best_congr {S T : List Node} (h : ∀ x, x ∈ S ↔ x ∈ T) (n : Node) : Best S n ↔ Best T n := by
  simp only [Best, h]

/-- The deletions: exactly the ids of `S`, sorted. -/
def CanonI (S : List Id) (l : List Id) : Prop := SortedI l ∧ ∀ i, i ∈ l ↔ i ∈ S

/-! The state of a replica that applied `ops` -/

/-- The valid insertions among `ops`. -/
def insOf (ops : List Op) : List Node :=
  ops.filterMap fun | .ins n => if n.valid then some n else none | .del _ => none

/-- The ids deleted by `ops`. -/
def delsOf (ops : List Op) : List Id :=
  ops.filterMap fun | .ins _ => none | .del i => some i

theorem mem_insOf {ops : List Op} {n : Node} : n ∈ insOf ops ↔ Op.ins n ∈ ops ∧ n.valid = true := by
  simp only [insOf, List.mem_filterMap]
  constructor
  · rintro ⟨o, ho, e⟩
    cases o with
    | ins m => by_cases hv : m.valid <;> simp_all
    | del _ => simp at e
  · rintro ⟨h, hv⟩; exact ⟨_, h, by simp [hv]⟩

theorem mem_delsOf {ops : List Op} {i : Id} : i ∈ delsOf ops ↔ Op.del i ∈ ops := by
  simp only [delsOf, List.mem_filterMap]
  constructor
  · rintro ⟨o, ho, e⟩; cases o <;> simp_all
  · intro h; exact ⟨_, h, rfl⟩

/-- A replica's state after applying `ops` to a state that is the canonical
form of `ops₀`, is the canonical form of `ops₀ ++ ops`. -/
theorem canon_applyAll : ∀ (ops : List Op) {d : Doc} {ops₀ : List Op},
    CanonN (insOf ops₀) d.nodes → CanonI (delsOf ops₀) d.dels →
    CanonN (insOf (ops₀ ++ ops)) (d.applyAll ops).nodes ∧ CanonI (delsOf (ops₀ ++ ops)) (d.applyAll ops).dels
  | [], d, ops₀, h1, h2 => by simpa [Doc.applyAll] using ⟨h1, h2⟩
  | o :: os, d, ops₀, h1, h2 => by
    have step : CanonN (insOf (ops₀ ++ [o])) (d.apply o).nodes ∧ CanonI (delsOf (ops₀ ++ [o])) (d.apply o).dels := by
      cases o with
      | ins n =>
        by_cases hv : n.valid = true
        · simp only [Doc.apply, hv, ite_true, insNode_eq]
          refine ⟨?_, ?_⟩
          · have := canonN_ins n h1
            refine ⟨this.1, fun m => ?_⟩
            rw [this.2 m]; apply best_congr; intro x; simp [insOf, List.filterMap_append, hv, or_comm]
          · refine ⟨h2.1, fun i => ?_⟩; rw [h2.2 i]; simp [delsOf, List.filterMap_append]
        · simp only [Doc.apply, Bool.not_eq_true] at hv ⊢
          simp only [hv, Bool.false_eq_true, ite_false]
          refine ⟨⟨h1.1, fun m => ?_⟩, ⟨h2.1, fun i => ?_⟩⟩
          · rw [h1.2 m]; apply best_congr; intro x; simp [insOf, List.filterMap_append, hv]
          · rw [h2.2 i]; simp [delsOf, List.filterMap_append]
      | del i =>
        simp only [Doc.apply, insId_eq]
        refine ⟨⟨h1.1, fun m => ?_⟩, ⟨sorted_insIdSpec i h2.1, fun j => ?_⟩⟩
        · rw [h1.2 m]; apply best_congr; intro x; simp [insOf, List.filterMap_append]
        · rw [mem_insIdSpec, h2.2 j]; simp [delsOf, List.filterMap_append, or_comm]
    have := canon_applyAll os step.1 step.2
    simpa [Doc.applyAll, List.foldl_cons] using this

theorem canon_of_ops (ops : List Op) :
    CanonN (insOf ops) (Doc.empty.applyAll ops).nodes ∧ CanonI (delsOf ops) (Doc.empty.applyAll ops).dels := by
  have := canon_applyAll ops (d := Doc.empty) (ops₀ := []) canonN_nil ⟨List.Pairwise.nil, by simp [delsOf, Doc.empty]⟩
  simpa using this

/-- Strong eventual consistency: the state depends only on the set of
operations applied. -/
theorem state_of_set {ops₁ ops₂ : List Op} (h : ∀ o, o ∈ ops₁ ↔ o ∈ ops₂) :
    Doc.empty.applyAll ops₁ = Doc.empty.applyAll ops₂ := by
  obtain ⟨a1, a2⟩ := canon_of_ops ops₁
  obtain ⟨b1, b2⟩ := canon_of_ops ops₂
  have hn : (Doc.empty.applyAll ops₁).nodes = (Doc.empty.applyAll ops₂).nodes := by
    apply eq_of_sortedN a1.1 b1.1; intro x
    rw [a1.2, b1.2]; apply best_congr; intro y; simp [mem_insOf, h]
  have hd : (Doc.empty.applyAll ops₁).dels = (Doc.empty.applyAll ops₂).dels := by
    apply eq_of_sortedI a2.1 b2.1; intro x
    rw [a2.2, b2.2]; simp [mem_delsOf, h]
  cases e1 : Doc.empty.applyAll ops₁; cases e2 : Doc.empty.applyAll ops₂
  simp_all

end Tandem.Proofs
