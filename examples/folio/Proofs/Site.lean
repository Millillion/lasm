/-
Proofs about the site generator (Folio/Site.lean): unique, well-formed
slugs; distinct output paths inside the output directory; the index links
exactly the published pages; drafts are not published; newest first.
-/
import Proofs.Render

namespace Folio
open Proofs Site

mutual
/-- Every `href` in a tree. -/
def Html.hrefs : Html → List String
  | .text _ | .raw _ | .void _ _ => []
  | .elem _ as cs => (as.filter (·.1 == .href)).map (·.2) ++ Html.hrefsList cs

def Html.hrefsList : List Html → List String
  | [] => []
  | h :: hs => Html.hrefs h ++ Html.hrefsList hs
end

end Folio

namespace Folio.Proofs
open Folio Site

/-! ## Slugs -/

theorem isSlug_append (a b : String) (ha : isSlug a = true) (hb : b.toList.all isSlugChar = true) :
    isSlug (a ++ b) = true := by
  simp only [isSlug, String.toList_append, Bool.and_eq_true, Bool.not_eq_true', List.all_append] at *
  refine ⟨?_, ha.2, hb⟩
  cases h : a.toList with
  | nil => simp [h] at ha
  | cons _ _ => simp

theorem slugify_slug (s : String) : isSlug (slugify s) = true := by
  unfold slugify; dsimp only; split
  · assumption
  · decide

theorem le_foldr_max (taken : List String) : ∀ t ∈ taken, t.length ≤ (taken.map (·.length)).foldr max 0 := by
  induction taken with
  | nil => simp
  | cons x xs ih =>
    intro t ht
    simp only [List.mem_cons] at ht
    simp only [List.map_cons, List.foldr_cons]
    rcases ht with rfl | ht
    · exact Nat.le_max_left _ _
    · exact Nat.le_trans (ih t ht) (Nat.le_max_right _ _)

theorem uniqueSlug_fresh (base : String) (taken : List String) : uniqueSlug base taken ∉ taken := by
  unfold uniqueSlug; dsimp only; split
  · rename_i s hs
    have := List.find?_some hs
    simpa using this
  · intro hm
    have h1 := le_foldr_max taken _ hm
    simp only [String.length_append, String.length_ofList, List.length_replicate] at h1
    omega

theorem uniqueSlug_slug (base : String) (taken : List String) (h : isSlug base = true) :
    isSlug (uniqueSlug base taken) = true := by
  unfold uniqueSlug; dsimp only; split
  · rename_i s hs
    have hm := List.mem_of_find?_eq_some hs
    simp only [List.mem_cons, List.mem_map] at hm
    rcases hm with rfl | ⟨d, hd, rfl⟩
    · exact h
    · apply isSlug_append _ _ h
      simp only [String.toList_ofList]
      simp only [List.not_mem_nil, or_false] at hd
      rcases hd with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide
  · apply isSlug_append _ _ h
    simp [String.toList_ofList, isSlugChar]

theorem assignSlugs_spec : ∀ (taken ws : List String),
    (assignSlugs taken ws).Nodup ∧ (∀ s ∈ assignSlugs taken ws, s ∉ taken) ∧
    (assignSlugs taken ws).length = ws.length ∧
    ((∀ w ∈ ws, isSlug w = true) → ∀ s ∈ assignSlugs taken ws, isSlug s = true)
  | _, [] => by simp [assignSlugs]
  | taken, w :: ws => by
    have ih := assignSlugs_spec (uniqueSlug w taken :: taken) ws
    have hf := uniqueSlug_fresh w taken
    simp only [assignSlugs]
    refine ⟨List.nodup_cons.2 ⟨fun hm => ih.2.1 _ hm (List.mem_cons_self ..), ih.1⟩, ?_, by simp [ih.2.2.1], ?_⟩
    · intro s hs
      simp only [List.mem_cons] at hs
      rcases hs with rfl | hs
      · exact hf
      · exact fun ht => ih.2.1 s hs (List.mem_cons_of_mem _ ht)
    · intro hw s hs
      simp only [List.mem_cons] at hs
      rcases hs with rfl | hs
      · exact uniqueSlug_slug _ _ (hw w (List.mem_cons_self ..))
      · exact ih.2.2.2 (fun x hx => hw x (List.mem_cons_of_mem _ hx)) s hs

/-! ## The published pages -/

theorem published_perm (o : Options) (pages : List (String × String)) :
    (published o pages).Perm (unsorted o pages) := List.mergeSort_perm _ _

theorem assign_length (o : Options) (pages : List (String × String)) :
    (assignSlugs [] ((readPages o pages).map wish)).length = (readPages o pages).length := by
  rw [(assignSlugs_spec _ _).2.2.1, List.length_map]

theorem unsorted_slugs (o : Options) (pages : List (String × String)) :
    (unsorted o pages).map (·.slug) = assignSlugs [] ((readPages o pages).map wish) := by
  simp only [unsorted, List.map_map]
  have : ((fun p : Page => p.slug) ∘ mkPage) = Prod.snd := by funext x; rfl
  rw [this, List.map_snd_zip (by rw [assign_length]; exact Nat.le_refl _)]

theorem unsorted_files (o : Options) (pages : List (String × String)) :
    (unsorted o pages).map (·.file) = (readPages o pages).map (·.1) := by
  simp only [unsorted, List.map_map]
  have : ((fun p : Page => p.file) ∘ mkPage) = (fun r => r.1) ∘ Prod.fst := by funext x; rfl
  rw [this, ← List.map_map, List.map_fst_zip (by rw [assign_length]; exact Nat.le_refl _)]

theorem published_slugs_nodup (o : Options) (pages : List (String × String)) :
    ((published o pages).map (·.slug)).Nodup := by
  rw [((published_perm o pages).map _).nodup_iff, unsorted_slugs]
  exact (assignSlugs_spec _ _).1

theorem published_slug_ok (o : Options) (pages : List (String × String)) :
    ∀ p ∈ published o pages, isSlug p.slug = true := by
  intro p hp
  have hm : p.slug ∈ (unsorted o pages).map (·.slug) :=
    List.mem_map_of_mem ((published_perm o pages).mem_iff.1 hp)
  rw [unsorted_slugs] at hm
  refine (assignSlugs_spec _ _).2.2.2 ?_ _ hm
  intro w hw
  simp only [List.mem_map] at hw
  obtain ⟨_, _, rfl⟩ := hw
  exact slugify_slug _

theorem published_html (o : Options) (pages : List (String × String)) :
    ∀ p ∈ published o pages, ∃ src, p.html = toHtml o (Blocks.parse src) := by
  intro p hp
  have hu := (published_perm o pages).mem_iff.1 hp
  simp only [unsorted, List.mem_map] at hu
  obtain ⟨x, hz, rfl⟩ := hu
  have hr := (List.of_mem_zip hz).1
  simp only [readPages, List.mem_filter, List.mem_map] at hr
  obtain ⟨⟨page, _, he⟩, _⟩ := hr
  refine ⟨(parseSource page.2).body, ?_⟩
  show x.1.2.2 = _
  rw [← he]; rfl

theorem published_files (o : Options) (pages : List (String × String)) :
    ((published o pages).map (·.file)).Perm ((pages.filter fun f => !isDraft (parseSource f.2)).map (·.1)) := by
  refine ((published_perm o pages).map _).trans ?_
  rw [unsorted_files]
  simp only [readPages, List.filter_map, List.map_map]
  exact List.Perm.refl _

/-! ## Newest first -/

theorem newerFirst_iff (a b : Page) :
    newerFirst a b = true ↔ (a.date = b.date ∧ a.slug ≤ b.slug) ∨ (a.date ≠ b.date ∧ b.date ≤ a.date) := by
  unfold newerFirst
  by_cases h : a.date = b.date <;> simp [h]

theorem newerFirst_total (a b : Page) : (newerFirst a b || newerFirst b a) = true := by
  rw [Bool.or_eq_true, newerFirst_iff, newerFirst_iff]
  by_cases h : a.date = b.date
  · rcases String.le_total a.slug b.slug with h' | h'
    · exact Or.inl (Or.inl ⟨h, h'⟩)
    · exact Or.inr (Or.inl ⟨h.symm, h'⟩)
  · rcases String.le_total a.date b.date with h' | h'
    · exact Or.inr (Or.inr ⟨fun e => h e.symm, h'⟩)
    · exact Or.inl (Or.inr ⟨h, h'⟩)

theorem newerFirst_trans (a b c : Page) (h1 : newerFirst a b = true) (h2 : newerFirst b c = true) :
    newerFirst a c = true := by
  rw [newerFirst_iff] at *
  rcases h1 with ⟨e1, s1⟩ | ⟨n1, l1⟩ <;> rcases h2 with ⟨e2, s2⟩ | ⟨n2, l2⟩
  · exact Or.inl ⟨e1.trans e2, String.le_trans s1 s2⟩
  · exact Or.inr ⟨by rw [e1]; exact n2, by rw [e1]; exact l2⟩
  · exact Or.inr ⟨by rw [← e2]; exact n1, by rw [← e2]; exact l1⟩
  · by_cases hac : a.date = c.date
    · exfalso; apply n2; rw [hac] at l1; exact String.le_antisymm l1 l2
    · exact Or.inr ⟨hac, String.le_trans l2 l1⟩

theorem published_sorted (o : Options) (pages : List (String × String)) :
    (published o pages).Pairwise (fun a b => newerFirst a b = true) := by
  exact List.pairwise_mergeSort (fun a b c => newerFirst_trans a b c) newerFirst_total _

/-! ## The site's files -/

theorem build_published (input : Input) :
    (build input).published = published (config (parseSource input.index)).options input.pages := rfl

theorem build_paths (input : Input) :
    (build input).files.map (·.1) = "index.html" :: "feed.xml" :: (build input).published.map (·.path) := by
  simp [build, List.map_map]

theorem path_injective (a b : Page) (h : a.path = b.path) : a.slug = b.slug := by
  unfold Page.path Page.href at h
  have := congrArg String.toList h
  simp only [String.toList_append] at this
  exact String.toList_injective (List.append_cancel_right (List.append_cancel_right this))

theorem path_long (p : Page) : p.path.length ≥ 11 := by
  unfold Page.path Page.href
  simp only [String.length_append]
  have : ("index.html" : String).length = 10 := by decide
  have : ("/" : String).length = 1 := by decide
  omega

theorem paths_nodup (input : Input) : ((build input).files.map (·.1)).Nodup := by
  rw [build_paths]
  have hs := published_slugs_nodup (config (parseSource input.index)).options input.pages
  rw [← build_published] at hs
  have hp : ((build input).published.map (·.path)).Nodup :=
    List.pairwise_map.2 ((List.pairwise_map.1 hs).imp fun h e => h (path_injective _ _ e))
  refine List.nodup_cons.2 ⟨?_, List.nodup_cons.2 ⟨?_, hp⟩⟩
  · simp only [List.mem_cons, List.mem_map, not_or]
    refine ⟨by decide, fun ⟨p, _, e⟩ => ?_⟩
    have := path_long p; rw [e] at this; revert this; decide
  · simp only [List.mem_map, not_exists, not_and]
    intro p _ e
    have := path_long p; rw [e] at this; revert this; decide

theorem paths_inside (input : Input) : ∀ f ∈ (build input).files,
    f.1 = "index.html" ∨ f.1 = "feed.xml" ∨ ∃ s, isSlug s = true ∧ f.1 = s ++ "/index.html" := by
  intro f hf
  have hm : f.1 ∈ (build input).files.map (·.1) := List.mem_map_of_mem hf
  rw [build_paths] at hm
  simp only [List.mem_cons, List.mem_map] at hm
  rcases hm with h | h | ⟨p, hp, e⟩
  · exact Or.inl h
  · exact Or.inr (Or.inl h)
  · refine Or.inr (Or.inr ⟨p.slug, ?_, ?_⟩)
    · rw [build_published] at hp; exact published_slug_ok _ _ p hp
    · rw [← e]; unfold Page.path Page.href; rw [String.append_assoc]; rfl

/-! ## The index -/

theorem indexList_hrefs (ps : List Page) : Html.hrefsList [indexList ps] = ps.map (·.href) := by
  simp only [indexList, Html.hrefsList, Html.hrefs, List.filter_nil, List.map_nil, List.nil_append, List.append_nil]
  induction ps with
  | nil => rfl
  | cons p ps ih =>
    simp only [List.map_cons, Html.hrefsList, Html.hrefs, List.filter_nil, List.map_nil, List.nil_append]
    rw [ih]
    split <;> simp [Html.hrefsList, Html.hrefs]

theorem index_links (input : Input) : ∀ h ∈ Html.hrefsList [indexList (build input).published],
    ∃ f ∈ (build input).files, f.1 = h ++ "index.html" := by
  intro h hh
  rw [indexList_hrefs] at hh
  simp only [List.mem_map] at hh
  obtain ⟨p, hp, rfl⟩ := hh
  have : p.path ∈ (build input).files.map (·.1) := by
    rw [build_paths]; exact List.mem_cons_of_mem _ (List.mem_cons_of_mem _ (List.mem_map_of_mem hp))
  simp only [List.mem_map] at this
  obtain ⟨f, hf, e⟩ := this
  exact ⟨f, hf, e⟩

theorem index_complete (input : Input) : ∀ p ∈ (build input).published,
    p.href ∈ Html.hrefsList [indexList (build input).published] := by
  intro p hp
  rw [indexList_hrefs]
  exact List.mem_map_of_mem hp

/-! ## Templates -/

theorem fill_var (n : String) (vars : List (String × String)) (content : String) (h : n ≠ "content") :
    fill [.var n] vars content = escapeHtml ((vars.lookup n).getD "") := by
  simp only [fill, List.map_cons, List.map_nil]
  simp [String.join]

end Folio.Proofs
