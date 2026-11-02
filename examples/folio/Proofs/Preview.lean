/-
Proofs about the live preview (Preview/Page.lean): the elements it puts in
the page are Folio's own, with no event handlers and only allowed URLs.
-/
import Proofs.Render
import Preview.Page

namespace Folio
open Proofs

/-- An attribute the preview may set: one of Folio's, as a plain attribute
(not a property or an event handler), with an allowed URL. -/
def UiAttrOk {Msg : Type} : Lasm.UI.Attr Msg → Prop
  | .attr name v => ∃ a : Attr, name = a.name ∧ UrlAttrSafe (a, v)
  | _ => False

mutual
/-- Every element in a Lasm.UI tree is an HTML element of Folio's, with
attributes `UiAttrOk`. -/
def UiSafe {Msg : Type} : Lasm.UI.Html Msg → Prop
  | .text _ => True
  | .elem ns tag _ attrs cs => ns = .html ∧ (∃ t : Tag, tag = t.name) ∧ (∀ a ∈ attrs, UiAttrOk a) ∧ UiSafeList cs

def UiSafeList {Msg : Type} : List (Lasm.UI.Html Msg) → Prop
  | [] => True
  | h :: hs => UiSafe h ∧ UiSafeList hs
end

end Folio

namespace Folio.Proofs
open Folio Preview

theorem uiAttrs_ok (as : List (Attr × String)) (h : ∀ p ∈ as, UrlAttrSafe p) :
    ∀ a ∈ as.map uiAttr, UiAttrOk a := by
  intro a ha
  simp only [List.mem_map] at ha
  obtain ⟨p, hp, rfl⟩ := ha
  exact ⟨p.1, rfl, h p hp⟩

theorem uiSafeList_append {Msg : Type} : ∀ (a b : List (Lasm.UI.Html Msg)), UiSafeList a → UiSafeList b → UiSafeList (a ++ b)
  | [], _, _, hb => hb
  | _ :: t, b, ⟨h1, h2⟩, hb => ⟨h1, uiSafeList_append t b h2 hb⟩

mutual
theorem toUI_safe : (h : Html) → h.SafeUrls → UiSafe (toUI h)
  | .text _, _ => trivial
  | .raw _, _ => trivial
  | .elem t as cs, ⟨ha, hc⟩ => ⟨rfl, ⟨t, rfl⟩, uiAttrs_ok as ha, toUIList_safe #[] trivial cs hc⟩
  | .void t as, ha => ⟨rfl, ⟨t, rfl⟩, uiAttrs_ok as ha, trivial⟩

theorem toUIList_safe (acc : Array (Lasm.UI.Html Msg)) (hacc : UiSafeList acc.toList) :
    (hs : List Html) → Html.SafeUrlsList hs → UiSafeList (toUIList acc hs).toList
  | [], _ => hacc
  | h :: hs, ⟨h1, h2⟩ => by
    simp only [toUIList]
    refine toUIList_safe _ ?_ hs h2
    rw [Array.toList_push]
    exact uiSafeList_append _ _ hacc ⟨toUI_safe h h1, trivial⟩
end

theorem rendered_safe (m : Model) : UiSafeList (rendered m) :=
  toUIList_safe #[] trivial _ ((tree_ok {} m.source).2.1 rfl)

end Folio.Proofs
