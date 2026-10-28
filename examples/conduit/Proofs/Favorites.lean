/-
Favorites (`Conduit/Rules.lean`, `articleOf`, used for every article the API
returns): `favoritesCount` is the number of distinct users who favorited
the article, and `favorited` says exactly whether the viewer is one of them.
Without Mathlib's `Finset`, "the number of distinct users" is stated as: the
length of a list with no repeats whose members are exactly those users.
-/
import Conduit.Rules

namespace Conduit.Proofs

/-- `eraseDups` leaves no repeats. -/
theorem nodup_eraseDups {α : Type} [BEq α] [LawfulBEq α] : ∀ (l : List α), l.eraseDups.Nodup
  | [] => by simp
  | a :: as => by
    rw [List.eraseDups_cons, List.nodup_cons]
    have : (as.filter fun b => !b == a).length < as.length + 1 :=
      Nat.lt_add_one_of_le (List.length_filter_le _ as)
    refine ⟨?_, nodup_eraseDups _⟩
    simp [List.mem_eraseDups, List.mem_filter]
termination_by l => l.length

/-- The fans of an article are exactly the users with a favorite pair for it … -/
theorem mem_fansOf (favorites : List (Nat × Nat)) (id u : Nat) :
    u ∈ fansOf favorites id ↔ (id, u) ∈ favorites := by
  simp only [fansOf, List.mem_eraseDups, List.mem_map, List.mem_filter, beq_iff_eq]
  constructor
  · rintro ⟨⟨a, b⟩, ⟨h, ha⟩, hb⟩
    simp only at ha hb
    subst ha hb; exact h
  · intro h; exact ⟨(id, u), ⟨h, rfl⟩, rfl⟩

/-- … each listed once. -/
theorem fansOf_nodup (favorites : List (Nat × Nat)) (id : Nat) : (fansOf favorites id).Nodup :=
  nodup_eraseDups _

/-- **`favoritesCount` counts distinct users, and `favorited` is the
viewer's own favorite**, for every article the API shows. -/
theorem articleOf_favorites (viewer : Option Nat) (withBody : Bool) (d : Loaded) (a : ArticleRow) (art : Article)
    (h : articleOf viewer withBody d a = some art) :
    ∃ fans : List Nat, fans.Nodup ∧ (∀ u, u ∈ fans ↔ (a.id, u) ∈ d.favorites) ∧
      art.favoritesCount = fans.length ∧
      (art.favorited = true ↔ ∃ v, viewer = some v ∧ (a.id, v) ∈ d.favorites) := by
  unfold articleOf at h
  simp only [Option.bind_eq_bind, Option.bind_eq_some_iff, Option.pure_def, Option.some.injEq] at h
  obtain ⟨u, _, rfl⟩ := h
  refine ⟨fansOf d.favorites a.id, fansOf_nodup _ _, mem_fansOf _ _, rfl, ?_⟩
  cases viewer with
  | none => simp
  | some v => simp [mem_fansOf]

end Conduit.Proofs
