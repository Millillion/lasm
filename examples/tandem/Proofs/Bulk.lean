/-
`applyMany` (sort, then keep the first node of each id) gives the same state
as `applyAll` (one operation at a time).
-/
import Tandem.Bulk
import Proofs.Canon

namespace Tandem.Proofs
open Tandem Doc

/-! The order -/

theorem le_trans' {a b c : Node} (h1 : Node.le a b = true) (h2 : Node.le b c = true) : Node.le a c = true := by
  simp only [Node.le, Bool.not_eq_true'] at *
  cases h : lexLt c.key a.key
  · rfl
  · by_cases e : a.key = b.key
    · rw [e] at h; rw [h] at h2; simp at h2
    · rcases lexLt_total e with h3 | h3
      · have := lexLt_trans h h3; rw [this] at h2; simp at h2
      · rw [h3] at h1; simp at h1

theorem le_total' (a b : Node) : (Node.le a b || Node.le b a) = true := by
  simp only [Node.le, Bool.or_eq_true, Bool.not_eq_true']
  cases h : lexLt b.key a.key
  · exact Or.inl rfl
  · exact Or.inr (lexLt_asymm h)

/-- Keys order ids first. -/
theorem id_lt_of_key {a b : Node} (h : a.id.lt b.id = true) : lexLt a.key b.key = true := by
  rw [Id.lt_iff] at h
  rcases a with ⟨⟨ac, ar⟩, _, _, _⟩; rcases b with ⟨⟨bc, br⟩, _, _, _⟩
  simp only [Node.key, List.cons_append, lexLt, Bool.or_eq_true, decide_eq_true_eq, Bool.and_eq_true, beq_iff_eq] at *
  rcases h with h | ⟨rfl, h⟩
  · exact Or.inl h
  · exact Or.inr ⟨rfl, Or.inl h⟩

theorem id_not_lt_of_le {a b : Node} (h : Node.le a b = true) : b.id.lt a.id = false := by
  cases h' : b.id.lt a.id
  · rfl
  · have := id_lt_of_key h'; simp [Node.le, this] at h

/-! Keeping the first node of each id -/

def firstSpec : Option Id → List Node → List Node
  | _, [] => []
  | prev, n :: ns => if prev = some n.id then firstSpec prev ns else n :: firstSpec (some n.id) ns

theorem firstGo_eq : ∀ (l : List Node) (prev : Option Id) (acc : List Node),
    firstOfIds.go l prev acc = acc.reverse ++ firstSpec prev l
  | [], _, acc => by simp [firstOfIds.go, firstSpec]
  | n :: ns, prev, acc => by
    simp only [firstOfIds.go, firstSpec]
    split
    · exact firstGo_eq ns prev acc
    · rw [firstGo_eq ns _ (n :: acc)]; simp

/-- Ids in `l` are not below `prev`. -/
def Above (prev : Option Id) (l : List Node) : Prop := ∀ i, prev = some i → ∀ m ∈ l, m.id.lt i = false

/-- The first node of each id is the one with the smallest key. -/
def Least (l : List Node) (n : Node) : Prop := ∀ m ∈ l, m.id = n.id → lexLt m.key n.key = false

theorem mem_firstSpec : ∀ {l : List Node} {prev : Option Id} {x : Node},
    l.Pairwise (fun a b => Node.le a b = true) → Above prev l →
    (x ∈ firstSpec prev l ↔ x ∈ l ∧ prev ≠ some x.id ∧ Least l x)
  | [], _, _, _, _ => by simp [firstSpec]
  | n :: ns, prev, x, hs, ha => by
    rw [List.pairwise_cons] at hs
    simp only [firstSpec]
    have haNs : Above prev ns := fun i e m hm => ha i e m (by simp [hm])
    split
    · rename_i e
      rw [mem_firstSpec hs.2 haNs]
      constructor
      · rintro ⟨hx, hp, hl⟩
        refine ⟨by simp [hx], hp, fun m hm em => ?_⟩
        simp at hm; rcases hm with rfl | hm
        · exact absurd (by rw [e, em]) hp
        · exact hl m hm em
      · rintro ⟨hx, hp, hl⟩
        simp at hx; rcases hx with rfl | hx
        · exact absurd e hp
        · exact ⟨hx, hp, fun m hm em => hl m (by simp [hm]) em⟩
    · rename_i e
      have haNs' : Above (some n.id) ns := fun i ei m hm => by
        simp at ei; subst ei; exact id_not_lt_of_le (hs.1 m hm)
      simp only [List.mem_cons]
      rw [mem_firstSpec hs.2 haNs']
      constructor
      · rintro (rfl | ⟨hx, hp, hl⟩)
        · refine ⟨Or.inl rfl, e, fun m hm em => ?_⟩
          simp at hm; rcases hm with rfl | hm
          · exact lexLt_irrefl _
          · have := hs.1 m hm; simp [Node.le] at this; exact this
        · refine ⟨Or.inr hx, fun ep => ?_, fun m hm em => ?_⟩
          · -- prev = x.id, n between prev and x, so n has x's id
            obtain ⟨i, rfl⟩ : ∃ i, prev = some i := ⟨_, ep⟩
            have h1 := ha i rfl n (by simp)
            have h2 := id_not_lt_of_le (hs.1 x hx)
            simp at ep; rw [ep] at h1
            have : n.id = x.id := Classical.byContradiction fun hne => by
              rcases Id.lt_total hne with h | h <;> simp_all
            exact hp (by rw [this])
          · simp at hm; rcases hm with rfl | hm
            · exact absurd (by rw [em]) hp
            · exact hl m hm em
      · rintro ⟨hx | hx, hp, hl⟩
        · exact Or.inl hx
        · by_cases ex : x.id = n.id
          · -- x has n's id; n comes no later, so x = n by keys
            left
            have h1 := hl n (by simp) ex.symm
            have h2 := hs.1 x hx
            simp [Node.le] at h2
            exact Node.key_inj (Classical.byContradiction fun hne => by
              rcases lexLt_total hne with h | h <;> simp_all)
          · exact Or.inr ⟨hx, fun e' => ex (Option.some_inj.1 e').symm, fun m hm em => hl m (by simp [hm]) em⟩

theorem firstSpec_sorted : ∀ {l : List Node} {prev : Option Id},
    l.Pairwise (fun a b => Node.le a b = true) → Above prev l → SortedN (firstSpec prev l)
  | [], _, _, _ => by simp [firstSpec]
  | n :: ns, prev, hs, ha => by
    have hs' := hs
    rw [List.pairwise_cons] at hs
    simp only [firstSpec]
    have haNs : Above prev ns := fun i e m hm => ha i e m (by simp [hm])
    have haNs' : Above (some n.id) ns := fun i ei m hm => by
      simp at ei; subst ei; exact id_not_lt_of_le (hs.1 m hm)
    split
    · exact firstSpec_sorted hs.2 haNs
    · refine List.Pairwise.cons (fun x hx => ?_) (firstSpec_sorted hs.2 haNs')
      obtain ⟨hx, hp, _⟩ := (mem_firstSpec hs.2 haNs').1 hx
      have h1 := id_not_lt_of_le (hs.1 x hx)
      have hne : n.id ≠ x.id := fun e => hp (by rw [e])
      rcases Id.lt_total hne with h | h
      · exact h
      · rw [h] at h1; simp at h1

/-! Ids -/

def uniqSpec : Option Id → List Id → List Id
  | _, [] => []
  | prev, i :: is => if prev = some i then uniqSpec prev is else i :: uniqSpec (some i) is

theorem uniqGo_eq : ∀ (l : List Id) (prev : Option Id) (acc : List Id),
    uniqIds.go l prev acc = acc.reverse ++ uniqSpec prev l
  | [], _, acc => by simp [uniqIds.go, uniqSpec]
  | i :: is, prev, acc => by
    simp only [uniqIds.go, uniqSpec]
    split
    · exact uniqGo_eq is prev acc
    · rw [uniqGo_eq is _ (i :: acc)]; simp

theorem idle_not_lt {a b : Id} (h : Id.le a b = true) : b.lt a = false := by
  simp [Id.le] at h; exact h

theorem uniqSpec_spec : ∀ {l : List Id} {prev : Option Id},
    l.Pairwise (fun a b => Id.le a b = true) → (∀ i, prev = some i → ∀ m ∈ l, m.lt i = false) →
    SortedI (uniqSpec prev l) ∧ ∀ x, x ∈ uniqSpec prev l ↔ x ∈ l ∧ prev ≠ some x
  | [], _, _, _ => by simp [uniqSpec]
  | n :: ns, prev, hs, ha => by
    rw [List.pairwise_cons] at hs
    simp only [uniqSpec]
    have haNs : ∀ i, prev = some i → ∀ m ∈ ns, m.lt i = false := fun i e m hm => ha i e m (by simp [hm])
    have haNs' : ∀ i, some n = some i → ∀ m ∈ ns, m.lt i = false := fun i ei m hm => by
      simp at ei; subst ei; exact idle_not_lt (hs.1 m hm)
    split
    · rename_i e
      obtain ⟨h1, h2⟩ := uniqSpec_spec hs.2 haNs
      refine ⟨h1, fun x => ?_⟩
      rw [h2]; simp only [List.mem_cons]
      constructor
      · rintro ⟨hx, hp⟩; exact ⟨Or.inr hx, hp⟩
      · rintro ⟨rfl | hx, hp⟩
        · exact absurd e hp
        · exact ⟨hx, hp⟩
    · rename_i e
      obtain ⟨h1, h2⟩ := uniqSpec_spec hs.2 haNs'
      refine ⟨List.Pairwise.cons (fun x hx => ?_) h1, fun x => ?_⟩
      · obtain ⟨hx, hp⟩ := (h2 x).1 hx
        have hl := idle_not_lt (hs.1 x hx)
        have hne : n ≠ x := fun e => hp (by rw [e])
        rcases Id.lt_total hne with h | h
        · exact h
        · rw [h] at hl; simp at hl
      · simp only [List.mem_cons]; rw [h2]
        constructor
        · rintro (rfl | ⟨hx, _⟩)
          · exact ⟨Or.inl rfl, e⟩
          · refine ⟨Or.inr hx, fun ep => ?_⟩
            obtain ⟨i, rfl⟩ : ∃ i, prev = some i := ⟨_, ep⟩
            have h1 := ha i rfl n (by simp)
            simp at ep; rw [ep] at h1
            have h3 := idle_not_lt (hs.1 x hx)
            have : n = x := Classical.byContradiction fun hne => by
              rcases Id.lt_total hne with h | h <;> simp_all
            exact e (by rw [ep, this])
        · rintro ⟨rfl | hx, hp⟩
          · exact Or.inl rfl
          · by_cases ex : x = n
            · exact Or.inl ex
            · exact Or.inr ⟨hx, fun e' => ex (Option.some_inj.1 e').symm⟩

/-! `applyMany` is `applyAll` -/

theorem idle_trans {a b c : Id} (h1 : Id.le a b = true) (h2 : Id.le b c = true) : Id.le a c = true := by
  simp only [Id.le, Bool.not_eq_true'] at *
  cases h : c.lt a
  · rfl
  · by_cases e : a = b
    · subst e; rw [h] at h2; simp at h2
    · rcases Id.lt_total e with h3 | h3
      · rw [Id.lt_trans h h3] at h2; simp at h2
      · rw [h3] at h1; simp at h1

theorem idle_total (a b : Id) : (Id.le a b || Id.le b a) = true := by
  simp only [Id.le, Bool.or_eq_true, Bool.not_eq_true']
  cases h : b.lt a
  · exact Or.inl rfl
  · exact Or.inr (Id.lt_asymm h)

theorem applyMany_eq (ops₀ ops : List Op) :
    (Doc.empty.applyAll ops₀).applyMany ops = Doc.empty.applyAll (ops₀ ++ ops) := by
  obtain ⟨c1, c2⟩ := canon_of_ops ops₀
  obtain ⟨e1, e2⟩ := canon_of_ops (ops₀ ++ ops)
  have hall : Doc.empty.applyAll (ops₀ ++ ops) = (Doc.empty.applyAll ops₀).applyAll ops := List.foldl_append
  generalize hd : Doc.empty.applyAll ops₀ = d at c1 c2 hall
  rw [hall] at e1 e2 ⊢
  have hins : (ops.filterMap fun | .ins n => if n.valid then some n else none | .del _ => none) = insOf ops := rfl
  have hdel : (ops.filterMap fun | .ins _ => none | .del i => some i) = delsOf ops := rfl
  -- the nodes
  have hn : (d.applyMany ops).nodes = (d.applyAll ops).nodes := by
    show firstOfIds ((d.nodes ++ insOf ops).mergeSort Node.le) = _
    generalize hL : (d.nodes ++ insOf ops).mergeSort Node.le = L
    have hperm : L.Perm (d.nodes ++ insOf ops) := hL ▸ List.mergeSort_perm _ _
    have hsort : L.Pairwise (fun a b => Node.le a b = true) := hL ▸
      List.pairwise_mergeSort (le := Node.le) (fun _ _ _ => le_trans') le_total' _
    have hab : Above none L := fun i e => by simp at e
    rw [firstOfIds, firstGo_eq]; simp only [List.reverse_nil, List.nil_append]
    apply eq_of_sortedN (firstSpec_sorted hsort hab) e1.1
    intro x
    rw [mem_firstSpec hsort hab, e1.2, hperm.mem_iff]
    have hs : insOf (ops₀ ++ ops) = insOf ops₀ ++ insOf ops := List.filterMap_append
    rw [hs]
    constructor
    · rintro ⟨hx, -, hl⟩
      have hx' : x ∈ insOf ops₀ ++ insOf ops := by
        rcases List.mem_append.1 hx with h | h
        · exact List.mem_append_left _ ((c1.2 x).1 h).1
        · exact List.mem_append_right _ h
      refine ⟨hx', fun m hm em => ?_⟩
      rcases List.mem_append.1 hm with h | h
      · obtain ⟨y, hy, ey, hmy⟩ := exists_best h
        have hyl := hl y (by rw [hperm.mem_iff]; exact List.mem_append_left _ ((c1.2 y).2 hy)) (by rw [ey, em])
        cases h' : lexLt m.key x.key
        · rfl
        · cases h'' : lexLt y.key m.key
          · have hk : y.key = m.key := Classical.byContradiction fun hne => by
              rcases lexLt_total hne with h1 | h1 <;> simp_all
            rw [← hk, hyl] at h'; exact h'.symm ▸ rfl
          · rw [lexLt_trans h'' h'] at hyl; exact hyl
      · exact hl m (by rw [hperm.mem_iff]; exact List.mem_append_right _ h) em
    · rintro ⟨hx, hl⟩
      refine ⟨?_, by simp, fun m hm em => hl m ?_ em⟩
      · rcases List.mem_append.1 hx with h | h
        · exact List.mem_append_left _ ((c1.2 x).2 ⟨h, fun m hm em => hl m (List.mem_append_left _ hm) em⟩)
        · exact List.mem_append_right _ h
      · rw [hperm.mem_iff] at hm
        rcases List.mem_append.1 hm with h | h
        · exact List.mem_append_left _ ((c1.2 m).1 h).1
        · exact List.mem_append_right _ h
  -- the deletions
  have hdl : (d.applyMany ops).dels = (d.applyAll ops).dels := by
    show uniqIds ((d.dels ++ delsOf ops).mergeSort Id.le) = _
    generalize hL : (d.dels ++ delsOf ops).mergeSort Id.le = L
    have hperm : L.Perm (d.dels ++ delsOf ops) := hL ▸ List.mergeSort_perm _ _
    have hsort : L.Pairwise (fun a b => Id.le a b = true) := hL ▸
      List.pairwise_mergeSort (le := Id.le) (fun _ _ _ => idle_trans) idle_total _
    obtain ⟨us, um⟩ := uniqSpec_spec (prev := none) hsort (fun i e => by simp at e)
    rw [uniqIds, uniqGo_eq]; simp only [List.reverse_nil, List.nil_append]
    apply eq_of_sortedI us e2.1
    intro x
    rw [um, e2.2, hperm.mem_iff, List.mem_append, c2.2]
    simp [delsOf, List.filterMap_append]
  cases e : d.applyMany ops; cases e' : d.applyAll ops
  simp_all

end Tandem.Proofs
