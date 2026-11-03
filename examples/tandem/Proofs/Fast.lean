/-
What runs is what is proved: the traversal with the children index and an
explicit stack (`Doc.seq`) is the recursive traversal of the paper
(`Doc.seqSpec`), and the visible characters with the hash set of deletions
are the ones the list of deletions says.
-/
import Proofs.Tree
import Std.Data.HashMap.Lemmas
import Std.Data.HashSet.Lemmas

namespace Tandem.Proofs
open Tandem Doc

theorem index_getD (d : Doc) (p : Option Id) (s : Side) : d.index.getD (p, s) [] = d.kids p s := by
  unfold Doc.index Doc.kids
  induction d.nodes with
  | nil => simp
  | cons n ns ih =>
    rw [List.foldr_cons, Std.HashMap.getD_insert, List.filter_cons]
    by_cases e : n.parent = p ∧ n.side = s
    · obtain ⟨e1, e2⟩ := e
      subst e1; subst e2
      simp [ih]
    · have : ((n.parent, n.side) == (p, s)) = false := by
        simp only [beq_eq_false_iff_ne, ne_eq, Prod.mk.injEq]; exact e
      rw [this]; simp only [Bool.false_eq_true, ite_false, ih]
      have : (n.parent == p && n.side == s) = false := by
        simp only [Bool.and_eq_false_iff, beq_eq_false_iff_ne, ne_eq]
        by_cases h1 : n.parent = p
        · exact Or.inr (fun h2 => e ⟨h1, h2⟩)
        · exact Or.inl h1
      simp [this]

theorem walk_nil (k : Option Id → Side → List Node) : ∀ (g : Nat) (acc : List Node), walk k g [] acc = acc.reverse
  | 0, _ => rfl
  | _ + 1, _ => rfl

/-- The stack machine computes the traversal of each subtree it visits. -/
theorem walk_trav {d : Doc} (h : Wf d) : ∀ (f : Nat) (n : Node), n.id.c ≤ d.maxCounter → d.maxCounter < f + n.id.c →
    ∀ g st acc, walk d.kids (2 * (d.trav f n).length + g) (.visit n :: st) acc =
      walk d.kids g st ((d.trav f n).reverse ++ acc) := by
  intro f
  induction f with
  | zero => intro n hn hf; omega
  | succ f ih =>
    intro n hn hf g st acc
    -- the children, each with enough fuel
    have multi : ∀ (cs : List Node), (∀ c ∈ cs, c.id.c ≤ d.maxCounter ∧ d.maxCounter < f + c.id.c) →
        ∀ g st acc, walk d.kids (2 * (cs.flatMap (d.trav f)).length + g) (cs.map .visit ++ st) acc =
          walk d.kids g st ((cs.flatMap (d.trav f)).reverse ++ acc) := by
      intro cs
      induction cs with
      | nil => intro _ g st acc; simp
      | cons c cs ihc =>
        intro hc g st acc
        have h1 := hc c (by simp)
        simp only [List.flatMap_cons, List.length_append, List.map_cons, List.cons_append, List.reverse_append,
          List.append_assoc]
        rw [show 2 * ((d.trav f c).length + (cs.flatMap (d.trav f)).length) + g =
          2 * (d.trav f c).length + (2 * (cs.flatMap (d.trav f)).length + g) by omega]
        rw [ih c h1.1 h1.2, ihc (fun c' hc' => hc c' (by simp [hc']))]
    have hk : ∀ s, ∀ c ∈ d.kids (some n.id) s, c.id.c ≤ d.maxCounter ∧ d.maxCounter < f + c.id.c := by
      intro s c hc
      exact ⟨node_le_max (mem_kids.1 hc).1, by have := kid_gt h hc; omega⟩
    simp only [Doc.trav, List.length_append, List.length_cons]
    rw [show 2 * ((((d.kids (some n.id) .L).flatMap (d.trav f)).length +
        (((d.kids (some n.id) .R).flatMap (d.trav f)).length + 1))) + g =
        (2 * ((d.kids (some n.id) .L).flatMap (d.trav f)).length +
          (2 * ((d.kids (some n.id) .R).flatMap (d.trav f)).length + g + 1)) + 1 by omega]
    simp only [walk]
    rw [List.append_assoc, multi _ (hk .L)]
    simp only [walk, List.cons_append]
    rw [show 2 * ((d.kids (some n.id) .R).flatMap (d.trav f)).length + g =
      2 * ((d.kids (some n.id) .R).flatMap (d.trav f)).length + g by rfl, multi _ (hk .R)]
    simp [List.reverse_append]

theorem length_le_of_uniq {m : List Node} : ∀ {l : List Node}, Uniq l → (∀ x ∈ l, x ∈ m) → l.length ≤ m.length
  | [], _, _ => by simp
  | x :: xs, hu, hs => by
    rw [Uniq, List.pairwise_cons] at hu
    have hx : x ∈ m := hs x (by simp)
    have : xs.length ≤ (m.erase x).length :=
      @length_le_of_uniq (m.erase x) xs hu.2 fun y hy =>
        (List.mem_erase_of_ne (fun e => hu.1 y hy (by rw [e]))).2 (hs y (by simp [hy]))
    rw [List.length_erase_of_mem hx] at this
    have : 0 < m.length := List.length_pos_of_mem hx
    simp; omega

theorem seqSpec_sub {d : Doc} (h : Wf d) : ∀ x ∈ d.seqSpec, x ∈ d.nodes := by
  intro x hx
  rw [seqSpec_eq, List.mem_flatMap] at hx
  obtain ⟨r, hr, hx⟩ := hx
  rcases trav_ge h hx with rfl | ⟨hm, _⟩
  · exact (mem_kids.1 hr).1
  · exact hm

/-- The traversal that runs is the paper's. -/
theorem seq_eq {d : Doc} (h : Wf d) : d.seq = d.seqSpec := by
  have hidx : (fun p s => d.index.getD (p, s) []) = d.kids := by
    funext p s; exact index_getD d p s
  unfold Doc.seq
  simp only []
  rw [hidx]
  have hroots : ∀ c ∈ d.kids none .R, c.id.c ≤ d.maxCounter ∧ d.maxCounter < (d.maxCounter + 1) + c.id.c :=
    fun c hc => ⟨node_le_max (mem_kids.1 hc).1, by omega⟩
  have hlen : d.seqSpec.length ≤ d.nodes.length := length_le_of_uniq (uniq_seqSpec h) (seqSpec_sub h)
  -- run the roots, then the empty stack
  have multi : ∀ (cs : List Node), (∀ c ∈ cs, c.id.c ≤ d.maxCounter ∧ d.maxCounter < (d.maxCounter + 1) + c.id.c) →
      ∀ g acc, walk d.kids (2 * (cs.flatMap (d.trav (d.maxCounter + 1))).length + g) (cs.map .visit) acc =
        walk d.kids g [] ((cs.flatMap (d.trav (d.maxCounter + 1))).reverse ++ acc) := by
    intro cs
    induction cs with
    | nil => intro _ g acc; simp
    | cons c cs ihc =>
      intro hc g acc
      have h1 := hc c (by simp)
      simp only [List.flatMap_cons, List.length_append, List.map_cons, List.reverse_append, List.append_assoc]
      rw [show 2 * ((d.trav (d.maxCounter + 1) c).length + (cs.flatMap (d.trav (d.maxCounter + 1))).length) + g =
        2 * (d.trav (d.maxCounter + 1) c).length + (2 * (cs.flatMap (d.trav (d.maxCounter + 1))).length + g) by omega]
      rw [walk_trav h _ c h1.1 h1.2, ihc (fun c' hc' => hc c' (by simp [hc']))]
  rw [seqSpec_eq] at hlen
  rw [show 2 * d.nodes.length + 1 = 2 * ((d.kids none .R).flatMap (T d)).length +
    (2 * (d.nodes.length - ((d.kids none .R).flatMap (T d)).length) + 1) by omega]
  rw [index_getD d none .R]
  rw [multi _ hroots, walk_nil]
  simp [seqSpec_eq]

/-- The visible characters, as the proofs see them. -/
def _root_.Tandem.Doc.visibleSpec (d : Doc) : List Node := d.seqSpec.filter fun n => !d.dels.contains n.id

theorem visible_eq {d : Doc} (h : Wf d) : d.visible = d.visibleSpec := by
  unfold Doc.visible Doc.visibleSpec Doc.delSet
  rw [seq_eq h]
  simp only [Std.HashSet.contains_ofList]

theorem chars_eq {d : Doc} (h : Wf d) : d.chars = d.visibleSpec.map (·.ch) := by
  unfold Doc.chars; rw [visible_eq h]

end Tandem.Proofs
