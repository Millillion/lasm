/-
The theorems of the propositions about the CLI's JavaScript (Spec.lean):
each `Theorems.x` has type exactly `Spec.x`, proved about the models of
`Lasm/Cli/Model/`.
-/
import Lasm.Cli.Spec

namespace Lasm.Cli.Theorems
open Lasm.Cli

/-! ## Response files -/

theorem unescape_cons {c : Char} (h : c ≠ '\\') (r : List Char) : unescape (c :: r) = c :: unescape r := by
  cases r <;> simp [unescape, h]

theorem unescape_escape (l : List Char) : unescape (l.flatMap escapeChar) = l := by
  induction l with
  | nil => rfl
  | cons c t ih =>
    by_cases h1 : c = '\\'
    · subst h1; simp [escapeChar, unescape, ih]
    · by_cases h2 : c = '"'
      · subst h2; simp [escapeChar, unescape, ih]
      · simp only [List.flatMap_cons, escapeChar, h1, h2, ite_false, List.singleton_append]
        rw [unescape_cons h1, ih]

theorem unquote_quote (a : String) : unquote (quoteArgument a) = some a := by
  simp [unquote, quoteArgument, unescape_escape]

theorem newline_not_escaped {a : String} (h : '\n' ∉ a.toList) : '\n' ∉ a.toList.flatMap escapeChar := by
  simp only [List.mem_flatMap, not_exists, not_and]
  intro c hc
  unfold escapeChar
  split
  · simp
  · split
    · simp
    · simp only [List.mem_singleton]; rintro rfl; exact h hc

theorem intercalate_concat {sep m : List Char} : ∀ ls : List (List Char), ls ≠ [] →
    sep.intercalate (ls ++ [m]) = sep.intercalate ls ++ sep ++ m
  | [], h => absurd rfl h
  | [l], _ => by simp [List.intercalate_cons_cons]
  | l :: l' :: t, _ => by
    rw [List.cons_append, List.cons_append, List.intercalate_cons_cons, ← List.cons_append,
      intercalate_concat (l' :: t) (by simp), List.intercalate_cons_cons]
    simp

theorem response_file_round_trip : Spec.response_file_round_trip := by
  intro args hargs
  have hsafe : args.any unsafeArgument = false := by
    rw [List.any_eq_false]
    intro a ha
    have := hargs a ha
    rw [unsafeArgument, Bool.not_eq_true, List.any_eq_false]
    intro c hc h
    simp only [Bool.or_eq_true, decide_eq_true_eq] at h
    rcases h with (rfl | rfl) | rfl
    · exact this.2.2 hc
    · exact this.2.1 hc
    · exact this.1 hc
  by_cases hnil : args = []
  · subst hnil
    exact ⟨"\n", [""], rfl, by decide, by simp⟩
  · refine ⟨String.intercalate "\n" (args.map quoteArgument) ++ "\n", args.map quoteArgument, by simp [responseFile, hsafe], ?_, ?_⟩
    · have hq : ((args.map quoteArgument).map String.toList) ≠ [] := by simpa using hnil
      simp only [String.toList_append, String.toList_intercalate]
      rw [show "\n".toList = ['\n'] from rfl, ← List.append_nil (['\n'].intercalate _ ++ ['\n']), ← intercalate_concat _ hq, List.splitOn_intercalate]
      · simp [List.map_map, Function.comp_def]
      · simp only [List.mem_append, List.mem_map, List.mem_singleton]
        rintro l (⟨q, ⟨a, ha, rfl⟩, rfl⟩ | rfl)
        · simp [quoteArgument, newline_not_escaped (hargs a ha).1]
        · simp
      · simp
    · simp [hnil, List.map_map, Function.comp_def, unquote_quote]

/-! ## Development server -/

theorem lookup_of_mem {l : List (String × Option String)} {k : String} {h : Option String}
    (hn : (l.map (·.1)).Nodup) (hm : (k, h) ∈ l) : l.lookup k = some h := by
  induction l with
  | nil => simp at hm
  | cons p t ih =>
    obtain ⟨a, b⟩ := p
    simp only [List.map_cons, List.nodup_cons] at hn
    rw [List.lookup_cons]
    rcases List.mem_cons.1 hm with he | ht
    · cases he; simp
    · have hka : k ≠ a := by
        rintro rfl; exact hn.1 (List.mem_map_of_mem (f := (·.1)) ht)
      have : (k == a) = false := by simpa using hka
      simp only [this, ih hn.2 ht]

theorem changed_files_exact : Spec.changed_files_exact := by
  intro a b ha hb
  have mem : ∀ k, k ∈ changedFiles a b ↔ (k ∈ a.map (·.1) ∨ k ∈ b.map (·.1)) ∧ a.lookup k ≠ b.lookup k := by
    intro k
    constructor
    · intro hk
      simp only [changedFiles, List.mem_append, List.mem_map, List.mem_filter] at hk
      rcases hk with ⟨⟨f, h⟩, ⟨hm, hne⟩, rfl⟩ | ⟨⟨f, h⟩, ⟨hm, hnb⟩, rfl⟩
      · refine ⟨Or.inr (List.mem_map_of_mem (f := (·.1)) hm), ?_⟩
        rw [lookup_of_mem hb hm]; simpa using hne
      · refine ⟨Or.inl (List.mem_map_of_mem (f := (·.1)) hm), ?_⟩
        have : b.lookup f = none := by
          simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq] at hnb
          simp only [List.lookup_eq_none_iff, bne_iff_ne, ne_eq]
          exact fun p hp e => hnb p hp e.symm
        rw [this, lookup_of_mem ha hm]; simp
    · rintro ⟨hk, hne⟩
      simp only [changedFiles, List.mem_append, List.mem_map, List.mem_filter]
      by_cases hkb : k ∈ b.map (·.1)
      · obtain ⟨⟨f, h⟩, hm, rfl⟩ := List.mem_map.1 hkb
        rw [lookup_of_mem hb hm] at hne
        exact Or.inl ⟨(f, h), ⟨hm, by simpa using hne⟩, rfl⟩
      · obtain ⟨⟨f, h⟩, hm, rfl⟩ := List.mem_map.1 (hk.resolve_right hkb)
        refine Or.inr ⟨(f, h), ⟨hm, ?_⟩, rfl⟩
        simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq]
        intro p hp e
        exact hkb (e ▸ List.mem_map_of_mem (f := (·.1)) hp)
  refine ⟨?_, mem⟩
  rw [changedFiles, List.nodup_append]
  refine ⟨hb.sublist (List.filter_sublist.map _), ha.sublist (List.filter_sublist.map _), ?_⟩
  intro x hx y hy e
  subst e
  obtain ⟨p, hp, rfl⟩ := List.mem_map.1 hx
  obtain ⟨q, hq, hqp⟩ := List.mem_map.1 hy
  have hq' := (List.mem_filter.1 hq).2
  simp only [Bool.not_eq_true', List.any_eq_false, beq_iff_eq] at hq'
  exact hq' p (List.mem_filter.1 hp).1 hqp.symm

/-! ## The Node host -/

theorem numbers_le64 : Spec.numbers_le64 := fun _ => rfl

end Lasm.Cli.Theorems
