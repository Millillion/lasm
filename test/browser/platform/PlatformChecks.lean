/-
Conformance checks for the rest of the browser platform (`Lasm.JS.Web.Platform`,
docs/JS_BINDINGS.md "The rest of the browser platform"), part of the platform suite
(Main.lean), run on Chromium, Firefox and WebKit by scripts/browser/browser-ci.mjs and
reported as `bindings.platform.<name>`. As in Bindings.lean, each check is a property
over generated inputs against a Lean model of the spec's algorithm, stated in a comment.
-/
import Lasm.JS.Web.Browser
import Lasm.JS.Web.Platform.Cssom
import Lasm.JS.Web.Platform.Dom
import Lasm.JS.Web.Platform.HtmlAndWebcodecs
import Bindings
open Lasm.JS Lasm.JS.Web

namespace PlatformChecks
open Bindings

/-- CSSOM's "serialize an identifier" (the algorithm `CSS.escape` runs), in Lean. -/
def serializeIdentifier (s : String) : String := Id.run do
  let cs := s.toList
  let hex (c : Char) : String := "\\" ++ String.mk (Nat.toDigits 16 c.toNat) ++ " "
  let mut out := ""
  let mut i := 0
  for c in cs do
    let n := c.toNat
    let first := cs.head?
    out := out ++
      if n == 0 then "�"
      else if (1 ≤ n ∧ n ≤ 0x1F) ∨ n == 0x7F then hex c
      else if i == 0 ∧ c.isDigit then hex c
      else if i == 1 ∧ c.isDigit ∧ first == some '-' then hex c
      else if i == 0 ∧ c == '-' ∧ cs.length == 1 then "\\-"
      else if n ≥ 0x80 ∨ c == '-' ∨ c == '_' ∨ c.isAlphanum then c.toString
      else "\\" ++ c.toString
    i := i + 1
  return out

/-- A random identifier-ish string: digits, hyphens, controls, NUL, punctuation, letters and non-ASCII. -/
def identifier (g : Gen) : IO String := do
  let n ← g.below 6
  let mut s := ""
  for _ in [0:n] do
    let pick ← g.below 8
    let c := match pick with
      | 0 => '-' | 1 => Char.ofNat (48 + 0) | 2 => '7' | 3 => Char.ofNat 0 | 4 => Char.ofNat 0x1F
      | 5 => ' ' | 6 => 'é' | _ => 'a'
    s := s.push c
  return s

def run (record : Record) (root : Element) : IO Unit := do
  -- ∀ s, CSS.escape s = serializeIdentifier s (CSSOM; the vectors of WPT's css/cssom/escape.html are such strings)
  check record "platform.css-escape" do
    let g ← gen 21
    let mut bad : Array String := #[]
    for s in ["0a", "-", "-0a", "a b", "\u007F", "--a", "_"] ++ (← (List.range 200).mapM fun _ => identifier g) do
      let got ← CSS.escape s
      unless got == serializeIdentifier s do bad := bad.push s!"{repr s} → {repr got}"
    return (bad.isEmpty, s!"{bad.size} differ {bad.toList.take 3}")
  -- ∀ text t, a Range over an element holding t serializes to t (DOM: Range's stringifier)
  check record "platform.range-text" do
    let g ← gen 22
    let mut ok := true
    for _ in [0:20] do
      let t ← g.string 12
      let e ← (← document).createElement "span"
      e.setTextContent (some t)
      discard <| root.appendChild e
      let r ← Range.new
      r.selectNodeContents e
      ok := ok && (← r.toString) == t
      discard <| root.removeChild e
    return (ok, "Range.toString over generated text")
  -- ∀ t, parsing "<p>" ++ escapeText t ++ "</p>" as text/html gives a body whose text is t (HTML parser), and
  -- XMLSerializer of the paragraph gives back markup that parses to the same text
  check record "platform.dom-parser" do
    let g ← gen 23
    let parser ← DOMParser.new
    let serializer ← XMLSerializer.new
    let mut ok := true
    let mut last := ""
    for _ in [0:20] do
      let t ← g.string 12
      let html : String := "<p>" ++ escapeText t ++ "</p>"
      let doc ← parser.parseFromString html .textHtml
      let some body ← doc.body | return (false, "no body")
      let text ← body.textContent
      let some p ← body.firstElementChild | return (false, "no paragraph")
      let markup ← serializer.serializeToString p
      let again ← parser.parseFromString markup .textHtml
      let some body2 ← again.body | return (false, "no body after a round trip")
      ok := ok && text == some (t.replace " " " ") && (← body2.textContent) == text
      last := markup
    return (ok, last)
  -- Rule A12 on a platform interface: a parsed document is a Document, not a Range
  check record "platform.cast" do
    let doc ← (← DOMParser.new).parseFromString "<b>x</b>" .textHtml
    return ((← Document.cast? doc.val).isSome && (← Range.cast? doc.val).isNone, "Document.cast?, Range.cast?")

end PlatformChecks
