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

mutual
theorem toUI_safe : (h : Html) → h.SafeUrls → UiSafe (toUI h)
  | .text _, _ => trivial
  | .raw _, _ => trivial
  | .elem t as cs, ⟨ha, hc⟩ => ⟨rfl, ⟨t, rfl⟩, uiAttrs_ok as ha, toUIList_safe cs hc⟩
  | .void t as, ha => ⟨rfl, ⟨t, rfl⟩, uiAttrs_ok as ha, trivial⟩

theorem toUIList_safe : (hs : List Html) → Html.SafeUrlsList hs → UiSafeList (toUIList hs)
  | [], _ => trivial
  | h :: hs, ⟨h1, h2⟩ => ⟨toUI_safe h h1, toUIList_safe hs h2⟩
end

theorem rendered_safe (m : Model) : UiSafeList (rendered m) :=
  toUIList_safe _ ((tree_ok {} m.source).2.1 rfl)

end Folio.Proofs
