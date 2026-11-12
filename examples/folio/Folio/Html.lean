/-
The HTML the renderer produces, as a tree, and how the tree is written out.

A tree is built from the renderer's own tags and attributes (two closed
enumerations), text, and raw HTML. Text and attribute values are always
escaped when written; `raw` is written as it is, and only raw HTML from the
Markdown source becomes `raw`, only when the caller enables it
(`Options.unsafe`). `Html.chars` says what each node writes, as a list of
characters (the specification the proofs use); `Html.write` is the fast
version the program runs, and `Proofs/Html.lean` proves they agree.
-/
import Folio.Text

namespace Folio

/-- The elements the renderer writes. -/
inductive Tag where
  | p | h1 | h2 | h3 | h4 | h5 | h6 | ul | ol | li | blockquote | pre | code | em | strong | a | hr | br | img
  -- the site generator's pages
  | html | head | body | metaTag | title | link | main | header | footer | nav | article | time
  deriving DecidableEq, Repr, Inhabited

def Tag.name : Tag → String
  | .p => "p" | .h1 => "h1" | .h2 => "h2" | .h3 => "h3" | .h4 => "h4" | .h5 => "h5" | .h6 => "h6"
  | .ul => "ul" | .ol => "ol" | .li => "li" | .blockquote => "blockquote" | .pre => "pre"
  | .code => "code" | .em => "em" | .strong => "strong" | .a => "a" | .hr => "hr" | .br => "br"
  | .img => "img" | .html => "html" | .head => "head" | .body => "body" | .metaTag => "meta"
  | .title => "title" | .link => "link" | .main => "main" | .header => "header" | .footer => "footer"
  | .nav => "nav" | .article => "article" | .time => "time"

def Tag.all : List Tag :=
  [.p, .h1, .h2, .h3, .h4, .h5, .h6, .ul, .ol, .li, .blockquote, .pre, .code, .em, .strong, .a, .hr, .br,
   .img, .html, .head, .body, .metaTag, .title, .link, .main, .header, .footer, .nav, .article, .time]

/-- The heading element of a level (1–6). -/
def Tag.heading : Nat → Tag
  | 1 => .h1 | 2 => .h2 | 3 => .h3 | 4 => .h4 | 5 => .h5 | _ => .h6

/-- The attributes the renderer writes. -/
inductive Attr where
  | href | src | alt | title | start | cls | lang | charset | rel | datetime
  deriving DecidableEq, Repr, Inhabited

def Attr.name : Attr → String
  | .href => "href" | .src => "src" | .alt => "alt" | .title => "title" | .start => "start"
  | .cls => "class" | .lang => "lang" | .charset => "charset" | .rel => "rel" | .datetime => "datetime"

def Attr.all : List Attr := [.href, .src, .alt, .title, .start, .cls, .lang, .charset, .rel, .datetime]

inductive Html where
  /-- Text, escaped when written. -/
  | text (s : String)
  /-- Raw HTML, written as it is. -/
  | raw (s : String)
  /-- `<t attrs>children</t>`. -/
  | elem (t : Tag) (attrs : List (Attr × String)) (children : List Html)
  /-- `<t attrs />` (`hr`, `br`, `img`, `meta`, `link`). -/
  | void (t : Tag) (attrs : List (Attr × String))
  deriving Repr, Inhabited

/-- ` name="value"` for each attribute, the value escaped. -/
def attrChars : List (Attr × String) → List Char
  | [] => []
  | (a, v) :: rest => ' ' :: (a.name.toList ++ '=' :: '"' :: (escapeList v.toList ++ '"' :: attrChars rest))

mutual
/-- What a node writes. -/
def Html.chars : Html → List Char
  | .text s => escapeList s.toList
  | .raw s => s.toList
  | .elem t as cs => '<' :: (t.name.toList ++ attrChars as ++ '>' :: (Html.charsList cs ++ '<' :: '/' :: (t.name.toList ++ ['>'])))
  | .void t as => '<' :: (t.name.toList ++ attrChars as ++ [' ', '/', '>'])

/-- What a list of nodes writes. -/
def Html.charsList : List Html → List Char
  | [] => []
  | h :: hs => Html.chars h ++ Html.charsList hs
end

/-! ## Writing, fast -/

/-- Appends the escape of `s` to `acc`. -/
def writeEscaped (acc : String) (s : String) : String :=
  s.foldl (fun acc c => match c with
    | '&' => acc ++ "&amp;" | '<' => acc ++ "&lt;" | '>' => acc ++ "&gt;" | '"' => acc ++ "&quot;"
    | c => acc.push c) acc

def writeAttrs (acc : String) : List (Attr × String) → String
  | [] => acc
  | (a, v) :: rest => writeAttrs ((writeEscaped ((acc.push ' ' ++ a.name).push '=' |>.push '"') v).push '"') rest

mutual
def Html.write (acc : String) : Html → String
  | .text s => writeEscaped acc s
  | .raw s => acc ++ s
  | .elem t as cs => ((Html.writeList ((writeAttrs (acc.push '<' ++ t.name) as).push '>') cs).push '<' |>.push '/') ++ t.name |>.push '>'
  | .void t as => writeAttrs (acc.push '<' ++ t.name) as ++ " />"

def Html.writeList (acc : String) : List Html → String
  | [] => acc
  | h :: hs => Html.writeList (Html.write acc h) hs
end

/-! ## Writing without recursion

`Html.write` recurses once per level of nesting, and an engine's stack can be
small (just under 10,000 frames on the edge and in browsers), while
CommonMark allows any depth (cmark's pathological cases nest 30,000 deep).
`writeLoop` writes the same text with an explicit stack: the nodes still to
write at the current level and, for each element it is inside, the element's
tag and the nodes after it. `writeLoop_eq` proves it equal to `Html.writeList`,
and the `@[csimp]` theorem `Html.writeList_eq_fast` makes compiled code (`render`
and everything after this point) run it in place of `Html.writeList`; the
proofs keep talking about `Html.writeList`. -/

/-- `</t>`, as `Html.write` closes an element. -/
def closeTag (acc : String) (t : Tag) : String := ((acc.push '<').push '/' ++ t.name).push '>'

/-- The size of what is left to write in the open elements' frames. -/
noncomputable def writeFramesSize : List (Tag × List Html) → Nat
  | [] => 0
  | (_, rest) :: st => sizeOf rest + writeFramesSize st

/-- Writes `hs`, then closes each element of `st` and writes the nodes after it. -/
def writeLoop (acc : String) : List Html → List (Tag × List Html) → String
  | [], [] => acc
  | [], (t, rest) :: st => writeLoop (closeTag acc t) rest st
  | .text s :: hs, st => writeLoop (writeEscaped acc s) hs st
  | .raw s :: hs, st => writeLoop (acc ++ s) hs st
  | .void t as :: hs, st => writeLoop (writeAttrs (acc.push '<' ++ t.name) as ++ " />") hs st
  | .elem t as cs :: hs, st => writeLoop ((writeAttrs (acc.push '<' ++ t.name) as).push '>') cs ((t, hs) :: st)
termination_by hs st => sizeOf hs + writeFramesSize st
decreasing_by
  all_goals simp only [writeFramesSize, List.cons.sizeOf_spec, List.nil.sizeOf_spec, Html.elem.sizeOf_spec,
    Html.text.sizeOf_spec, Html.raw.sizeOf_spec, Html.void.sizeOf_spec]
  all_goals omega

/-- What `writeLoop` must write after `acc`: each frame's closing tag and the
nodes after it, in order. -/
def writeUnwind (acc : String) : List (Tag × List Html) → String
  | [] => acc
  | (t, rest) :: st => writeUnwind (Html.writeList (closeTag acc t) rest) st

theorem writeLoop_eq (acc : String) (hs : List Html) (st : List (Tag × List Html)) :
    writeLoop acc hs st = writeUnwind (Html.writeList acc hs) st := by
  induction acc, hs, st using writeLoop.induct with
  | case1 acc => simp [writeLoop, writeUnwind, Html.writeList]
  | case2 acc t rest st ih => simp [writeLoop, writeUnwind, Html.writeList, ih]
  | case3 acc s hs st ih => simp [writeLoop, Html.writeList, Html.write, ih]
  | case4 acc s hs st ih => simp [writeLoop, Html.writeList, Html.write, ih]
  | case5 acc t as hs st ih => simp [writeLoop, Html.writeList, Html.write, ih]
  | case6 acc t as cs hs st ih => simp [writeLoop, writeUnwind, Html.writeList, Html.write, closeTag, ih]

/-- `Html.writeList`, with an explicit stack. -/
def Html.writeListFast (acc : String) (hs : List Html) : String := writeLoop acc hs []

@[csimp] theorem Html.writeList_eq_fast : @Html.writeList = @Html.writeListFast := by
  funext acc hs; simp [Html.writeListFast, writeLoop_eq, writeUnwind]

/-- The HTML text of a list of nodes. -/
def Html.serialize (hs : List Html) : String := Html.writeList "" hs

end Folio
