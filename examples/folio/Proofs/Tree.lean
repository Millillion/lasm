/-
What the propositions say about HTML trees: which URLs a tree links to, and
HTML's content model for the renderer's elements (phrasing content inside
paragraphs and headings, list items only inside lists, …).
-/
import Proofs.Tokens

namespace Folio
open Proofs

/-- An attribute that holds a URL (`href`, `src`) has an allowed one. -/
def UrlAttrSafe (p : Attr × String) : Prop := (p.1 = .href ∨ p.1 = .src) → unsafeUrl p.2 = false

mutual
/-- Every `href` and `src` in a tree (outside raw HTML) is an allowed URL. -/
def Html.SafeUrls : Html → Prop
  | .text _ | .raw _ => True
  | .elem _ as cs => (∀ p ∈ as, UrlAttrSafe p) ∧ Html.SafeUrlsList cs
  | .void _ as => ∀ p ∈ as, UrlAttrSafe p

def Html.SafeUrlsList : List Html → Prop
  | [] => True
  | h :: hs => Html.SafeUrls h ∧ Html.SafeUrlsList hs
end

def Tag.isHeading (t : Tag) : Prop := t = .h1 ∨ t = .h2 ∨ t = .h3 ∨ t = .h4 ∨ t = .h5 ∨ t = .h6
def Tag.isPhrasing (t : Tag) : Prop := t = .em ∨ t = .strong ∨ t = .a ∨ t = .code

mutual
/-- Phrasing content: text, and `em`, `strong`, `a`, `code` around phrasing
content, `br`, `img`. -/
def Html.Phrasing : Html → Prop
  | .text _ | .raw _ => True
  | .elem t _ cs => t.isPhrasing ∧ Html.PhrasingList cs
  | .void t _ => t = .br ∨ t = .img

def Html.PhrasingList : List Html → Prop
  | [] => True
  | h :: hs => Html.Phrasing h ∧ Html.PhrasingList hs
end

mutual
/-- Flow content: phrasing content; `p` and `h1`–`h6` around phrasing
content; `blockquote` around flow content; `ul` and `ol` around list items;
`pre` around one `code` around text; `hr`. -/
def Html.Flow : Html → Prop
  | .text _ | .raw _ => True
  | .elem t _ cs =>
    ((t = .p ∨ t.isHeading ∨ t.isPhrasing) ∧ Html.PhrasingList cs) ∨
    (t = .blockquote ∧ Html.FlowList cs) ∨
    ((t = .ul ∨ t = .ol) ∧ Html.ItemList cs) ∨
    (t = .pre ∧ ∃ as s, cs = [.elem .code as [.text s]])
  | .void t _ => t = .hr ∨ t = .br ∨ t = .img

def Html.FlowList : List Html → Prop
  | [] => True
  | h :: hs => Html.Flow h ∧ Html.FlowList hs

/-- The children of a list: `li` elements around flow content, and line
breaks between them. -/
def Html.ItemList : List Html → Prop
  | [] => True
  | .text s :: hs => s = "\n" ∧ Html.ItemList hs
  | .elem t _ cs :: hs => t = .li ∧ Html.FlowList cs ∧ Html.ItemList hs
  | .raw _ :: _ | .void _ _ :: _ => False
end

end Folio
