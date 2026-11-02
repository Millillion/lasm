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

/-- What the inline reader builds, whatever the input: anything it builds
satisfies an invariant that its pieces (text, code, strong and emphasised
text, links with or without text) preserve. -/
theorem inlinesRev_inv (I : List Inline → Prop)
    (push : ∀ acc c, I acc → I (pushText acc c))
    (code : ∀ acc s, I acc → I (.code s :: acc))
    (strong : ∀ acc s, I acc → I (.strong [.text s] :: acc))
    (em : ∀ acc s, I acc → I (.em [.text s] :: acc))
    (bare : ∀ acc (u : List Char), (∃ c ∈ u, c.isWhitespace = false) → I acc →
      I (.link (safeHref (String.ofList u)) [] :: acc))
    (link : ∀ acc (u label : List Char), (∃ c ∈ label, c.isWhitespace = false) → I acc →
      I (.link (safeHref (String.ofList u)) [.text (String.ofList label)] :: acc))
    (acc : List Inline) (cs : List Char) (h : I acc) : I (inlinesRev acc cs) := by
  fun_induction inlinesRev acc cs <;> try simp_all
  all_goals (obtain ⟨x, hx, hw⟩ := ‹∃ x, x ∈ _ ∧ _›; solve_by_elim)

/-- **The reader never produces an unsafe link.** -/
theorem inlinesRev_safe (acc : List Inline) (cs : List Char) (h : SafeLinks acc) : SafeLinks (inlinesRev acc cs) :=
  inlinesRev_inv SafeLinks (fun _ c h => pushText_safe c h) (fun _ _ h => by simpa [SafeLinks] using h)
    (fun _ _ h => by simpa [SafeLinks] using h) (fun _ _ h => by simpa [SafeLinks] using h)
    (fun _ _ _ h => by simpa [SafeLinks, safeHref_allowed] using h)
    (fun _ _ _ _ h => by simpa [SafeLinks, safeHref_allowed] using h) acc cs h

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

/-! ## Links have text -/

/-- What an inline the reader builds looks like: a link has text with a
character other than whitespace, or no text and such a target; strong and
emphasised text is plain text. -/
def LinkVisible : Inline → Prop
  | .link h cs => (cs = [] ∧ ∃ c ∈ h.toList, c.isWhitespace = false) ∨
      ∃ s, cs = [.text s] ∧ ∃ c ∈ s.toList, c.isWhitespace = false
  | .strong cs | .em cs => ∃ s, cs = [.text s]
  | _ => True

theorem safeHref_visible (u : List Char) (h : ∃ c ∈ u, c.isWhitespace = false) :
    ∃ c ∈ (safeHref (String.ofList u)).toList, c.isWhitespace = false := by
  unfold safeHref
  split
  · simpa using h
  · exact ⟨'#', by simp, by decide⟩

theorem inlines_visible (s : String) : ∀ x ∈ inlines s, LinkVisible x := by
  unfold inlines
  simp only [List.mem_reverse]
  refine inlinesRev_inv (fun acc => ∀ x ∈ acc, LinkVisible x) ?_ ?_ ?_ ?_ ?_ ?_ [] _ (by simp)
  · intro acc c h; unfold pushText; split <;> simp_all [LinkVisible]
  · intro acc s h; simpa [LinkVisible] using h
  · intro acc s h; simpa [LinkVisible] using h
  · intro acc s h; simpa [LinkVisible] using h
  · intro acc u hu h; simpa [LinkVisible, safeHref_visible u hu] using h
  · intro acc u l hl h; simpa [LinkVisible] using And.intro hl h

end Conduit.Proofs
