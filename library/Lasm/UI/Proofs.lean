/-
Lasm.UI's diff is proved correct against the DOM model (Lasm.UI.Model).

* `diff_correct`: from the DOM of a well-formed live tree, the patch of
  `diff old new` gives exactly the DOM of the new live tree, which shows `new`
  and is well formed again (so frames compose). Keyed moves, the two-ended
  matching, the key-map fallback, inserts, removals, `clear`, replacements of
  nodes whose kind or tag changed, text changes and attribute changes are all
  covered: the theorem is about the executable `diff`, not a specification.
* `mount_correct`: the first render.
* `session_correct`: any sequence of frames, starting from an empty root.
* `diffAttrs_correct`: the attribute diff.

What is modelled (and so outside the theorem): that the binary encoding
(Lasm.UI.Encode) and the JavaScript applier (src/browser/ui-dom.mjs) implement
`applyOps` (tested, not proved), and that the DOM behaves as the model.

Proof files: Proofs/Basic (unfolding, `WF`, `create`, attributes),
Proofs/Lists (sibling lists, slices), Proofs/Children (steps of the children
diff), Proofs/TwoEnded, Proofs/Diff.
-/
import Lasm.UI.Proofs.Diff

namespace Lasm.UI.Proofs
open Lasm.UI Lasm.UI.Model

variable {Msg : Type}

/-- `diff` is correct: applying its patch to the DOM of `old` yields the DOM of
the new live tree, which shows `new`; the result is well formed and ids only grow. -/
theorem diff_correct (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat) (h : WF old next) :
    let r := diff old new next
    applyOps r.ops.toList (old.map toDom) = r.live.map toDom ∧ r.live.map Live.erase = new ∧
      WF r.live r.next ∧ next ≤ r.next := by
  have hs := diffChildren_spec id diffNode (fun o b n hw hsm => diffNode_spec b o n hw hsm) old new next h
  simp only [List.map_id] at hs
  exact ⟨hs.ops, hs.erase, hs.wf, hs.le⟩

/-- The first render: its patch builds, under an empty root, the DOM of a live
tree that shows the view. -/
theorem mount_correct (new : List (Html Msg)) (next : Nat) :
    let r := mountOps new next
    applyOps r.ops.toList [] = r.live.map toDom ∧ r.live.map Live.erase = new ∧ WF r.live r.next := by
  have := diff_correct (Msg := Msg) [] new next ⟨by simp, by simp⟩
  exact ⟨this.1, this.2.1, this.2.2.1⟩

/-- What the runtime keeps between frames: the DOM under the root (as the
applier changed it), the live tree and the next free id. -/
structure Session (Msg : Type) where
  dom : List Dom
  live : List (Live Msg)
  next : Nat

/-- One frame: diff the live tree against the next view and apply the patch. -/
def Session.step (s : Session Msg) (view : List (Html Msg)) : Session Msg :=
  let r := diff s.live view s.next
  ⟨applyOps r.ops.toList s.dom, r.live, r.next⟩

/-- An empty root (ids start at 1; the root is node 0). -/
def Session.empty : Session Msg := ⟨[], [], 1⟩

/-- Any sequence of frames keeps the DOM equal to the DOM of the live tree,
which shows the latest view. -/
theorem session_correct (views : List (List (Html Msg))) :
    let s := views.foldl Session.step Session.empty
    s.dom = s.live.map toDom ∧ WF s.live s.next ∧ ∀ v, views.getLast? = some v → s.live.map Live.erase = v := by
  suffices ∀ (s : Session Msg), s.dom = s.live.map toDom → WF s.live s.next →
      let s' := views.foldl Session.step s
      s'.dom = s'.live.map toDom ∧ WF s'.live s'.next ∧
        ∀ v, views.getLast? = some v → s'.live.map Live.erase = v from
    this Session.empty rfl ⟨by simp [Session.empty], by simp [Session.empty]⟩
  induction views with
  | nil => intro s h1 h2; exact ⟨h1, h2, by simp⟩
  | cons v vs ih =>
    intro s h1 h2
    have hd := diff_correct s.live v s.next h2
    have := ih (s.step v) (by simp only [Session.step, h1]; exact hd.1) hd.2.2.1
    refine ⟨this.1, this.2.1, ?_⟩
    intro w hw
    cases vs with
    | nil =>
      simp only [List.getLast?_singleton, Option.some.injEq] at hw
      subst hw
      exact hd.2.1
    | cons v' vs' =>
      apply this.2.2
      simpa [List.getLast?_cons_cons] using hw

end Lasm.UI.Proofs
