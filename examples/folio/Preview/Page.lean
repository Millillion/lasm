/-
The live preview (Lasm.UI): Markdown on the left, as you type, its
rendering on the right, and the HTML text below. `update` and `view` are
pure, so the propositions about the preview (Proofs/Preview.lean) are about
the functions the browser runs.

The rendering is never handed to the browser as HTML text: `toUI` turns
Folio's HTML tree into Lasm.UI elements, one DOM element per tree element,
so the browser's HTML parser never sees anything from the Markdown. Raw HTML
is off (the defaults), so it shows as text.
-/
import Lasm.UI
import Folio
open Lasm.UI

namespace Folio.Preview

structure Model where
  source : String
  deriving Inhabited

inductive Msg where
  | edit (source : String)

def sample : String :=
  "# Hello, Folio\n\nType **Markdown** here; the preview follows as you type.\n\n" ++
  "- CommonMark 0.31.2\n- HTML such as <script>alert(1)</script> is shown, not run\n\n" ++
  "> [A link](https://commonmark.org) and `code`.\n"

def init : Model := { source := sample }

def update : Msg → Model → Model
  | .edit s, _ => { source := s }

/-- An attribute of Folio's tree as a Lasm.UI attribute. -/
def uiAttr (p : Folio.Attr × String) : Lasm.UI.Attr Msg := .attr p.1.name p.2

mutual
/-- Folio's HTML tree as Lasm.UI elements (raw HTML, which the preview's
options never produce, would be text too). -/
def toUI : Folio.Html → Lasm.UI.Html Msg
  | .text s | .raw s => .text s
  | .elem t as cs => .elem .html t.name none (as.map uiAttr) (toUIList #[] cs).toList
  | .void t as => .elem .html t.name none (as.map uiAttr) []

/-- A list of nodes, after `acc` (tail recursive). -/
def toUIList (acc : Array (Lasm.UI.Html Msg)) : List Folio.Html → Array (Lasm.UI.Html Msg)
  | [] => acc
  | h :: hs => toUIList (acc.push (toUI h)) hs
end

/-- The preview pane's contents: the rendering of the source. -/
def rendered (m : Model) : List (Lasm.UI.Html Msg) := (toUIList #[] (Folio.tree {} m.source)).toList

def view (m : Model) : Lasm.UI.Html Msg :=
  main_ [class_ "folio-preview"] [
    h1 [] [text "Folio live preview"],
    div [class_ "panes"] [
      textarea [id_ "source", attr "aria-label" "Markdown", attr "spellcheck" "false",
        value m.source, onInput .edit] [],
      div [id_ "preview", attr "aria-label" "Preview", role "region"] (rendered m)],
    h2 [] [text "HTML"],
    pre [id_ "html"] [code [] [text (Folio.render {} m.source)]]]

end Folio.Preview
