/-
Article bodies (`Conduit/Markdown.lean`): a link's target is never a
`javascript:` (or `data:`, `vbscript:`, …) URL. The reader builds a tree, the
view makes elements and text nodes from it (never HTML text), so the only
place author text reaches a URL attribute is a link's `href`, and every
link the reader builds has passed `safeHref`.
-/
import Conduit.Markdown

namespace Conduit.Proofs
open Conduit.Markdown

/-- `safeHref` only returns allowed targets. -/
theorem safeHref_allowed (h : String) : allowedHref (safeHref h) = true := by
  unfold safeHref
  split
  · assumption
  · unfold allowedHref; rw [String.toList_ofList]; decide

/-- Every link in a list of inlines has an allowed target. -/
def SafeLinks : List Inline → Prop
  | [] => True
  | .link h cs :: rest => allowedHref h = true ∧ SafeLinks cs ∧ SafeLinks rest
  | .strong cs :: rest => SafeLinks cs ∧ SafeLinks rest
  | .em cs :: rest => SafeLinks cs ∧ SafeLinks rest
  | _ :: rest => SafeLinks rest

theorem pushText_safe {acc : List Inline} (c : Char) (h : SafeLinks acc) : SafeLinks (pushText acc c) := by
  unfold pushText
  split
  · simp_all [SafeLinks]
  · simp [SafeLinks]; exact h

theorem text_safe (s : String) (acc : List Inline) (h : SafeLinks acc) : SafeLinks (.text s :: acc) := by
  simpa [SafeLinks] using h

/-- **The reader never produces an unsafe link.** -/
theorem inlinesRev_safe (acc : List Inline) (cs : List Char) (h : SafeLinks acc) : SafeLinks (inlinesRev acc cs) := by
  induction acc, cs using inlinesRev.induct <;> rw [inlinesRev] <;> (try split) <;>
    simp_all [SafeLinks, pushText_safe, safeHref_allowed] <;> (obtain ⟨rfl, rfl⟩ := ‹_ ∧ _›) <;> split <;>
    simp_all [SafeLinks, pushText_safe, safeHref_allowed]

theorem safeLinks_reverse_aux : ∀ (l r : List Inline), SafeLinks l → SafeLinks r → SafeLinks (l.reverseAux r)
  | [], _, _, hr => hr
  | x :: xs, r, hl, hr => by
    simp only [List.reverseAux]
    apply safeLinks_reverse_aux xs (x :: r)
    · cases x <;> simp_all [SafeLinks]
    · cases x <;> simp_all [SafeLinks]

theorem inlines_safe (s : String) : SafeLinks (inlines s) := by
  unfold inlines
  rw [List.reverse]
  exact safeLinks_reverse_aux _ _ (inlinesRev_safe [] _ (by simp [SafeLinks])) (by simp [SafeLinks])

end Conduit.Proofs
