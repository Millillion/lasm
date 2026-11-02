/-
Each proposition of Proofs/Spec.lean, proved from the lemmas in the other
files of Proofs/.
-/
import Proofs.Spec
import Proofs.Html

namespace Folio.Proofs
open Folio Site

theorem escape_no_markup : Spec.escape_no_markup := by
  intro s
  simpa [escapeHtml, String.toList_ofList] using escapeList_no_markup s.toList

theorem escape_reads_back : Spec.escape_reads_back := by
  intro s
  have := lexText_escape s.toList []
  simpa [tokenize, escapeHtml, String.toList_ofList, lexText] using this

theorem no_raw_html : Spec.no_raw_html := fun o markdown h => (tree_ok o markdown).1 h

theorem output_reads_back : Spec.output_reads_back := fun o markdown h =>
  tokenize_serialize _ ((tree_ok o markdown).1 h)

theorem safe_urls : Spec.safe_urls := fun o markdown h => (tree_ok o markdown).2.1 h

theorem template_values_escaped : Spec.template_values_escaped := fun name vars content h =>
  fill_var name vars content h

theorem site_pages_safe : Spec.site_pages_safe := by
  intro input h p hp
  rw [build_published] at hp
  obtain ⟨src, e⟩ := published_html _ _ p hp
  have := blocks_ok (config (parseSource input.index)).options false true (Blocks.parse src)
  rw [e]
  exact ⟨this.1 h, this.2.1 rfl⟩

theorem preview_safe : Spec.preview_safe := rendered_safe

theorem render_total : Spec.render_total := fun _ _ => ⟨_, rfl⟩

theorem build_total : Spec.build_total := fun _ => ⟨_, rfl⟩

theorem render_writes_tree : Spec.render_writes_tree := fun _ _ => serialize_toList _

theorem tags_nest : Spec.tags_nest := fun _ _ => tokens_nest _

theorem content_model : Spec.content_model := fun o markdown => (tree_ok o markdown).2.2

theorem slugs_unique : Spec.slugs_unique := fun input => by
  rw [build_published]; exact published_slugs_nodup _ _

theorem slugs_well_formed : Spec.slugs_well_formed := fun input p hp => by
  rw [build_published] at hp; exact published_slug_ok _ _ p hp

theorem paths_unique : Spec.paths_unique := paths_nodup

theorem paths_inside_output : Spec.paths_inside_output := paths_inside

theorem index_links_resolve : Spec.index_links_resolve := index_links

theorem index_lists_every_page : Spec.index_lists_every_page := index_complete

theorem drafts_unpublished : Spec.drafts_unpublished := fun input => by
  rw [build_published]; exact published_files _ _

theorem newest_first : Spec.newest_first := fun input => by
  rw [build_published]; exact published_sorted _ _

theorem feed_lists_published : Spec.feed_lists_published := fun input => by
  simp [build]

end Folio.Proofs
