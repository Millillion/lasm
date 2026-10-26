/-
Server-side rendering: `render : Html Msg → String` (pure Lean, runs on a
server, at the edge, on Node or natively). Properties that have an HTML
attribute form (`value`, `checked`, `className`, …) are written as attributes,
styles as one `style` attribute, and handlers are left out. Adjacent text nodes
are separated by `<!---->`, so a browser app mounted with `{ hydrate: true }`
adopts exactly the nodes its first view describes.
-/
import Lasm.UI.Html
import Lasm.UI.Elements

namespace Lasm.UI

namespace Render

def escapeText (s : String) : String :=
  if s.any (fun c => c == '&' || c == '<' || c == '>') then
    s.foldl (init := "") fun acc c =>
      match c with
      | '&' => acc ++ "&amp;"
      | '<' => acc ++ "&lt;"
      | '>' => acc ++ "&gt;"
      | c => acc.push c
  else s

def escapeAttr (s : String) : String :=
  if s.any (fun c => c == '&' || c == '"' || c == '<' || c == '>') then
    s.foldl (init := "") fun acc c =>
      match c with
      | '&' => acc ++ "&amp;"
      | '"' => acc ++ "&quot;"
      | '<' => acc ++ "&lt;"
      | '>' => acc ++ "&gt;"
      | c => acc.push c
  else s

/-- Properties whose value is written as an attribute (`name` → attribute). -/
def propAttribute : String → Option String
  | "className" => some "class"
  | "htmlFor" => some "for"
  | "value" => some "value"
  | "checked" => some "checked"
  | "selected" => some "selected"
  | "disabled" => some "disabled"
  | "hidden" => some "hidden"
  | "readOnly" => some "readonly"
  | "required" => some "required"
  | "multiple" => some "multiple"
  | "autofocus" => some "autofocus"
  | "id" => some "id"
  | "title" => some "title"
  | "placeholder" => some "placeholder"
  | "href" => some "href"
  | "src" => some "src"
  | "alt" => some "alt"
  | "name" => some "name"
  | "type" => some "type"
  | "tabIndex" => some "tabindex"
  | "open" => some "open"
  | "muted" => some "muted"
  | "controls" => some "controls"
  | _ => none

/-- Keeps the last attribute of each slot (as the DOM ends up), in order of first appearance. -/
def finalAttrs (attrs : List (Attr Msg)) : List (Attr Msg) :=
  let rev := attrs.reverse
  let (_, kept) := rev.foldl (init := (([] : List AttrKey), ([] : List (Attr Msg)))) fun (seen, kept) a =>
    if seen.contains a.key then (seen, kept) else (a.key :: seen, a :: kept)
  kept

structure Parts where
  attrs : String := ""
  styles : String := ""
  /-- `innerHTML` or a textarea's `value`. -/
  content : Option String := none

def parts (tag : String) (attrs : List (Attr Msg)) : Parts :=
  (finalAttrs attrs).foldl (init := {}) fun p a =>
    match a with
    | .attr n v => { p with attrs := p.attrs ++ s!" {n}=\"{escapeAttr v}\"" }
    | .style n v => { p with styles := p.styles ++ (if p.styles.isEmpty then "" else ";") ++ s!"{n}:{v}" }
    | .prop "innerHTML" (.str s) => { p with content := some s }
    | .prop "textContent" (.str s) => { p with content := some (escapeText s) }
    | .prop "value" (.str s) =>
      if tag == "textarea" then { p with content := some (escapeText s) }
      else { p with attrs := p.attrs ++ s!" value=\"{escapeAttr s}\"" }
    | .prop n (.str s) =>
      match propAttribute n with
      | some an => { p with attrs := p.attrs ++ s!" {an}=\"{escapeAttr s}\"" }
      | none => p
    | .prop n (.bool b) =>
      match propAttribute n, b with
      | some an, true => { p with attrs := p.attrs ++ s!" {an}" }
      | _, _ => p
    | .on .. => p

def rawText (tag : String) : Bool := tag == "script" || tag == "style"

mutual
def node (out : String) : Html Msg → String
  | .text s => out ++ escapeText s
  | .elem ns tag _ attrs cs =>
    let p := parts tag attrs
    let out := out ++ "<" ++ tag ++ p.attrs ++
      (if p.styles.isEmpty then "" else s!" style=\"{escapeAttr p.styles}\"") ++ ">"
    if ns == .html && voidTags.contains tag then out
    else
      let out := match p.content with
        | some c => out ++ c
        | none =>
          if rawText tag then
            cs.foldl (init := out) fun out c => match c with
              | .text s => out ++ (s.replace "</" "<\\/")
              | _ => out
          else children out false cs
      out ++ "</" ++ tag ++ ">"
/-- Children; `afterText` says the previous sibling was a text node. -/
def children (out : String) (afterText : Bool) : List (Html Msg) → String
  | [] => out
  | c@(.text _) :: cs => children (node (if afterText then out ++ "<!---->" else out) c) true cs
  | c :: cs => children (node out c) false cs
end

end Render

/-- The HTML of a view. -/
def render (h : Html Msg) : String := Render.node "" h

/-- A whole page: `<!doctype html>`, a head and a body whose content is `body`
inside `<div id="app">` (where the browser app is mounted to hydrate it). -/
def renderPage (title : String) (body : Html Msg) (head : String := "") (mountId : String := "app") : String :=
  "<!doctype html><html><head><meta charset=\"utf-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"><title>" ++
    Render.escapeText title ++ "</title>" ++ head ++ "</head><body><div id=\"" ++ Render.escapeAttr mountId ++ "\">" ++
    render body ++ "</div></body></html>"

end Lasm.UI
