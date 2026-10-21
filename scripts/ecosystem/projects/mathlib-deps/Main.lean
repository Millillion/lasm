import ProofWidgets.Component.HtmlDisplay
import ImportGraph.Imports
import LeanSearchClient

open ProofWidgets

/-- ProofWidgets HTML values are ordinary Lean data. -/
def page : Html := .element "div" #[("class", "note")] #[.text "rendered by Lean"]

partial def render : Html → String
  | .text s => s
  | .element tag attrs children =>
    let attrs := attrs.foldl (fun acc (k, v) => acc ++ s!" {k}=\"{v.compress}\"") ""
    s!"<{tag}{attrs}>" ++ String.join (children.toList.map render) ++ s!"</{tag}>"
  | .component .. => "<component/>"

def main : IO Unit := IO.println (render page)
