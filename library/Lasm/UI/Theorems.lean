/-
The theorems of Lasm.UI's propositions (Spec.lean): each `Theorems.x` has
type exactly `Spec.x`. The diff's proofs are in Proofs/ (Proofs.lean lists
them), the encoding's in Proofs/Wire.lean; this file connects them to the
propositions and proves the rest.
-/
import Lasm.UI.Spec

namespace Lasm.UI.Theorems
open Lasm.UI Lasm.UI.Model

theorem diff_correct : Spec.diff_correct :=
  fun _ old new next h => Proofs.diff_correct old new next h

theorem mount_correct : Spec.mount_correct :=
  fun _ new next => Proofs.mount_correct new next

theorem session_correct : Spec.session_correct :=
  fun _ views => Proofs.session_correct views

theorem diffAttrs_correct : Spec.diffAttrs_correct :=
  fun _ old new => Proofs.diffAttrs_correct old new

theorem frames_decode : Spec.frames_decode :=
  fun _ frames => Proofs.Wire.frames_decode {} {} frames Proofs.Wire.synced_empty

theorem applier_correct : Spec.applier_correct := fun _ ops dom used u hnd hz hsub hzu hc =>
  have h := Applier.run_ofOps ops dom used u hnd hz hsub hzu hc
  ⟨h.1, h.2.1⟩

theorem diff_conforms : Spec.diff_conforms :=
  fun _ old new next h _ _ _ => Proofs.diff_conforms old new next h

theorem applier_session : Spec.applier_session := fun _ views => Applier.session_applier views

theorem hydrate_correct : Spec.hydrate_correct := by
  intro _ view server
  obtain ⟨ws, st, h1, h2⟩ := Applier.hydrate_first view server
  exact ⟨ws, st, _, h1, h2, Applier.hydrateIn_bare _ _, Applier.hydrateIn_rendered⟩

theorem create_correct : Spec.create_correct := by
  intro _ h n
  have s := Proofs.create_spec h n
  exact ⟨s.id, s.lt, s.wf, s.erase⟩

theorem effect_map_comp {α β γ : Type} (f : β → γ) (g : α → β) (e : Effect α) :
    (e.map g).map f = e.map (f ∘ g) := by
  cases e <;> rfl

theorem effect_map_id {α : Type} (e : Effect α) : e.map id = e := by
  cases e <;> rfl

theorem cmd_map_comp : Spec.cmd_map_comp := by
  intro _ _ _ f g c
  simp only [Cmd.map, List.map_map]
  congr 1
  apply List.map_congr_left
  intro e _
  exact effect_map_comp f g e

theorem cmd_map_effects : Spec.cmd_map_effects := by
  intro _ _ f c
  simp only [Cmd.map, List.map_map]
  apply List.map_congr_left
  intro e _
  exact effect_map_comp _ f e

theorem cmd_map_id : Spec.cmd_map_id := by
  intro _ c
  cases c with
  | mk effects =>
    simp only [Cmd.map]
    congr 1
    conv => rhs; rw [← List.map_id effects]
    apply List.map_congr_left
    intro e _
    exact effect_map_id e

theorem cmd_map_batch : Spec.cmd_map_batch := by
  intro _ _ f cs
  simp [Cmd.map, Cmd.batch, List.map_flatMap, List.flatMap_map]

end Lasm.UI.Theorems
