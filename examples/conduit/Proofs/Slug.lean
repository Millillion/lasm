/-
Slugs (`Conduit/Slug.lean`): `uniqueSlug` never returns a slug that is taken,
keeps the plain slug when it is free, and `slugify` only produces lowercase
ASCII letters, digits and `-`, and never the empty string.
-/
import Conduit.Slug
import Std.Data.String.ToNat
import Proofs.Spec

namespace Conduit.Proofs

/-- Different `n` give different candidates. -/
theorem candidate_injective (base : String) : Function.Injective (candidate base) := by
  intro m n h
  unfold candidate at h
  by_cases hm : m = 0 <;> by_cases hn : n = 0
  · omega
  · simp only [hm, hn, ↓reduceIte] at h
    have := congrArg String.length h
    have dash : "-".length = 1 := by decide
    simp only [String.length_append, dash] at this
    omega
  · simp only [hm, hn, ↓reduceIte] at h
    have := congrArg String.length h
    have dash : "-".length = 1 := by decide
    simp only [String.length_append, dash] at this
    omega
  · simp only [hm, hn, ↓reduceIte, String.append_assoc, String.append_right_inj] at h
    have : Nat.repr (m + 1) = Nat.repr (n + 1) := h
    have := Nat.repr_injective this
    omega

/-- **`uniqueSlug` never returns a taken slug.** Among the first
`taken.length + 1` candidates, which are all different, at least one is free. -/
theorem uniqueSlug_fresh (base : String) (taken : List String) : uniqueSlug base taken ∉ taken := by
  unfold uniqueSlug
  split
  · rename_i n h
    have := List.find?_some h
    simpa using this
  · rename_i h
    rw [List.find?_eq_none] at h
    exfalso
    have hsub : (List.range (taken.length + 1)).map (candidate base) ⊆ taken := by
      intro s hs
      obtain ⟨n, hn, rfl⟩ := List.mem_map.mp hs
      have := h n hn
      simpa using this
    have hnodup : ((List.range (taken.length + 1)).map (candidate base)).Nodup :=
      List.Pairwise.map _ (fun _ _ hab heq => hab (candidate_injective base heq)) List.nodup_range
    have := List.Nodup.length_le_of_subset hnodup hsub
    simp only [List.length_map, List.length_range] at this
    omega

/-- A free slug is kept as it is: titles get `-2`, `-3`, … only when needed. -/
theorem uniqueSlug_of_free (base : String) (taken : List String) (h : base ∉ taken) :
    uniqueSlug base taken = base := by
  unfold uniqueSlug
  have h0 : (List.range (taken.length + 1)).find? (fun n => !taken.contains (candidate base n)) = some 0 := by
    rw [List.range_succ_eq_map, List.find?_cons]
    simp [candidate, h]
  rw [h0]; rfl

/-- Every character the table produces is in the alphabet (checked by `decide`). -/
theorem slugTable_ok : ∀ p ∈ slugTable, p.2 ∈ slugAlphabet := by decide

theorem slugChar_ok {c d : Char} (h : slugChar? c = some d) : d ∈ slugAlphabet := by
  unfold slugChar? at h
  cases hf : slugTable.find? (·.1 == c) with
  | none => simp [hf] at h
  | some p =>
    simp [hf] at h; subst h
    exact slugTable_ok p (List.mem_of_find?_eq_some hf)

theorem groups_ok : ∀ (l : List (Option Char)), (∀ d, some d ∈ l → d ∈ slugAlphabet) →
    ∀ w ∈ groups l, ∀ d ∈ w, d ∈ slugAlphabet
  | [], _ => by simp [groups]
  | none :: rest, h => by
    intro w hw d hd
    simp only [groups, List.mem_cons] at hw
    rcases hw with rfl | hw
    · simp at hd
    · exact groups_ok rest (fun d hd => h d (List.mem_cons_of_mem _ hd)) w hw d hd
  | some c :: rest, h => by
    have hrest := groups_ok rest (fun d hd => h d (List.mem_cons_of_mem _ hd))
    have hc : c ∈ slugAlphabet := h c (List.mem_cons_self ..)
    intro w hw d hd
    simp only [groups] at hw
    split at hw
    · simp at hw; subst hw; simp at hd; subst hd; exact hc
    · rename_i w' ws heq
      simp only [List.mem_cons] at hw
      rcases hw with rfl | hw
      · simp only [List.mem_cons] at hd
        rcases hd with rfl | hd
        · exact hc
        · exact hrest w' (by rw [heq]; simp) d hd
      · exact hrest w (by rw [heq]; simp [hw]) d hd

theorem mem_intercalate_dash {ws : List (List Char)} {d : Char} (h : d ∈ ['-'].intercalate ws) :
    d = '-' ∨ ∃ w ∈ ws, d ∈ w := by
  induction ws with
  | nil => simp [List.intercalate_nil] at h
  | cons w ws ih =>
    cases ws with
    | nil => rw [List.intercalate_singleton] at h; exact Or.inr ⟨w, by simp, h⟩
    | cons w' ws' =>
      rw [List.intercalate_cons_of_ne_nil (by simp)] at h
      simp only [List.mem_append, List.mem_singleton] at h
      rcases h with (h | h) | h
      · exact Or.inr ⟨w, by simp, h⟩
      · exact Or.inl h
      · rcases ih h with h | ⟨v, hv, hd⟩
        · exact Or.inl h
        · exact Or.inr ⟨v, List.mem_cons_of_mem _ hv, hd⟩

theorem article_ok : ∀ x ∈ "article".toList, x ∈ slugAlphabet := by decide

/-- The words are made of alphabet characters. -/
theorem slugWords_ok (title : String) : ∀ w ∈ slugWords title.toList, ∀ d ∈ w, d ∈ slugAlphabet := by
  intro w hw d hd
  unfold slugWords at hw
  rw [List.mem_filter] at hw
  refine groups_ok _ ?_ w hw.1 d hd
  intro e he
  obtain ⟨c, _, hc⟩ := List.mem_map.mp he
  exact slugChar_ok hc

/-- **A slug has only lowercase ASCII letters, digits and `-`.** -/
theorem slugify_chars (title : String) : ∀ d ∈ (slugify title).toList, d ∈ slugAlphabet ∨ d = '-' := by
  intro d hd
  have hok := slugWords_ok title
  unfold slugify at hd
  generalize slugWords title.toList = ws at hd hok
  cases ws with
  | nil => exact Or.inl (article_ok d hd)
  | cons w ws =>
    simp only [String.toList_ofList] at hd
    rcases mem_intercalate_dash hd with h | ⟨v, hv, hdv⟩
    · exact Or.inr h
    · exact Or.inl (hok v hv d hdv)

/-- A slug is never empty. -/
theorem slugify_ne_empty (title : String) : slugify title ≠ "" := by
  have hne : ∀ w ∈ slugWords title.toList, w ≠ [] := by
    intro w hw
    unfold slugWords at hw
    rw [List.mem_filter] at hw
    intro h; subst h; simp at hw
  unfold slugify
  generalize slugWords title.toList = ws at hne
  cases ws with
  | nil => decide
  | cons w ws =>
    simp only
    intro h
    have := congrArg String.toList h
    rw [String.toList_ofList] at this
    cases w with
    | nil => exact hne [] (by simp) rfl
    | cons c cs => cases ws <;> simp [List.intercalate_cons_of_ne_nil] at this

theorem slugify_spec : Spec.slugify_spec := fun t => ⟨slugify_chars t, slugify_ne_empty t⟩

theorem uniqueSlug_spec : Spec.uniqueSlug_spec := fun b t => ⟨uniqueSlug_fresh b t, uniqueSlug_of_free b t⟩

end Conduit.Proofs
