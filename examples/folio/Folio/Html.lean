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

/-- The HTML text of a list of nodes. -/
def Html.serialize (hs : List Html) : String := Html.writeList "" hs

end Folio
