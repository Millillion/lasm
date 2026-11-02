/-
From the document tree to the HTML tree (commonmark.js 0.31.2's
render/html.js, BSD-2-Clause, Copyright (c) 2014, John MacFarlane;
NOTICE.md), and `render`, Markdown text to HTML text.

commonmark.js writes a line break before a block only if the last thing it
wrote was not a line break (`cr`). The functions here carry that one bit
(`nl`: the last thing written was exactly "\n") so that the tree they build
writes out exactly what commonmark.js writes.

**Safety.** With the default options, raw HTML in the source (HTML blocks
and inline tags) becomes text, which is escaped when written, and link and
image URLs with a `javascript:`, `vbscript:`, `file:` or (other than a few
image types) `data:` scheme are dropped, as commonmark.js's `safe` option
drops them. `Options.rawHtml` passes raw HTML through and `Options.anyUrl` keeps
every URL, which is what the CommonMark specification's examples expect.
-/
import Folio.Blocks
import Folio.Html

namespace Folio

structure Options where
  /-- Raw HTML in the source is written out as HTML (CommonMark's own
  behaviour; only for trusted input). Off by default: raw HTML is shown as
  text. -/
  rawHtml : Bool := false
  /-- Every link and image URL is kept. Off by default: `javascript:`,
  `vbscript:`, `file:` and most `data:` URLs are dropped. -/
  anyUrl : Bool := false
  deriving Repr, Inhabited

/-- commonmark.js's `potentiallyUnsafe`: a URL starting `javascript:`, or
containing `vbscript:`, `file:` or `data:` (its expression anchors only the
first), ignoring case, unless it starts `data:image/` and `png`, `gif`,
`jpeg` or `webp`. -/
def containsSeq (p : List Char) : List Char → Bool
  | [] => p.isEmpty
  | c :: t => p.isPrefixOf (c :: t) || containsSeq p t

def unsafeUrl (url : String) : Bool :=
  let l := url.toList.map asciiLower
  let has (p : String) : Bool := containsSeq p.toList l
  ("javascript:".toList.isPrefixOf l || has "vbscript:" || has "file:" || has "data:") &&
    !(["png", "gif", "jpeg", "webp"].any fun t => ("data:image/" ++ t).toList.isPrefixOf l)

/-- A link's or image's URL as written: dropped (empty) if it is unsafe and
the options do not allow any URL. -/
def safeUrl (o : Options) (url : String) : String := if !o.anyUrl && unsafeUrl url then "" else url

/-- Raw HTML from the source: as it is when unsafe, else as text. -/
def rawOr (o : Options) (s : String) : Html := if o.rawHtml then .raw s else .text s

/-- A line break, unless the last thing written was one. -/
def cr (nl : Bool) : List Html := if nl then [] else [.text "\n"]

/-- The `alt` text of an image: the plain text of its description, as
commonmark.js writes it with tags turned off, in pieces; `true` marks raw
HTML from the source. -/
def altParts (nl : Bool) (acc : Array (Bool × String)) : List Inline → Array (Bool × String) × Bool
  | [] => (acc, nl)
  | i :: is =>
    let (acc, nl) := match i with
      | .text t | .code t => (acc.push (false, t), t == "\n")
      | .html t => (acc.push (true, t), t == "\n")
      | .softbreak => (acc.push (false, "\n"), true)
      | .linebreak => (acc.push (false, if nl then "" else "\n"), true)
      | .emph cs | .strong cs | .link _ _ cs | .image _ _ cs => altParts nl acc cs
    altParts nl acc is

/-- An image. Its description's text becomes the `alt` attribute. When raw
HTML is enabled and the description holds some, commonmark.js writes that
HTML into the attribute unescaped; the image is then raw HTML too. -/
def image (o : Options) (d t : String) (cs : List Inline) : Html :=
  if o.rawHtml && (altParts false #[] cs).1.toList.any (·.1) then
    .raw ("<img src=\"" ++ escapeHtml (safeUrl o d) ++ "\" alt=\"" ++
      String.join ((altParts false #[] cs).1.toList.map fun (r, s) => if r then s else escapeHtml s) ++ "\"" ++
      (if t.isEmpty then "" else " title=\"" ++ escapeHtml t ++ "\"") ++ " />")
  else .void .img ([(Attr.src, safeUrl o d), (Attr.alt, String.join ((altParts false #[] cs).1.toList.map (·.2)))] ++
    if t.isEmpty then [] else [(Attr.title, t)])

mutual
/-- One inline: its nodes, and whether they end with exactly "\n". -/
def inline (o : Options) (_nl : Bool) : Inline → List Html × Bool
  | .text s => ([.text s], s == "\n")
  | .softbreak => ([.text "\n"], true)
  | .linebreak => ([.void .br [], .text "\n"], true)
  | .code s => ([.elem .code [] [.text s]], false)
  | .html s => ([rawOr o s], s == "\n")
  | .emph cs => ([.elem .em [] (inlinesAux o false #[] cs).1.toList], false)
  | .strong cs => ([.elem .strong [] (inlinesAux o false #[] cs).1.toList], false)
  | .link d t cs =>
    let href := if !o.anyUrl && unsafeUrl d then [] else [(Attr.href, d)]
    let title := if t.isEmpty then [] else [(Attr.title, t)]
    ([.elem .a (href ++ title) (inlinesAux o false #[] cs).1.toList], false)
  | .image d t cs => ([image o d t cs], false)

/-- A list of inlines, after the nodes `acc` (tail recursive: a paragraph
can hold hundreds of thousands of inlines). -/
def inlinesAux (o : Options) (nl : Bool) (acc : Array Html) : List Inline → Array Html × Bool
  | [] => (acc, nl)
  | i :: is =>
    let (h, nl) := inline o nl i
    inlinesAux o nl (acc.appendList h) is
end

def inlines (o : Options) (nl : Bool) (is : List Inline) : List Html × Bool :=
  let (a, nl) := inlinesAux o nl #[] is
  (a.toList, nl)

/-- The `class` of a code block: `language-` and the first word of its info
string. -/
def codeClass (info : String) : List (Attr × String) :=
  let word := String.ofList (info.toList.takeWhile (!isUnicodeSpace ·))
  if word.isEmpty then []
  else [(Attr.cls, if word.startsWith "language-" then word else "language-" ++ word)]

mutual
/-- One block (in a tight list, paragraphs lose their `<p>`). -/
def block (o : Options) (tight nl : Bool) : Block → List Html × Bool
  | .para cs =>
    if tight then inlines o nl cs
    else (cr nl ++ [.elem .p [] (inlines o false cs).1, .text "\n"], true)
  | .heading n cs => (cr nl ++ [.elem (Tag.heading n) [] (inlines o false cs).1, .text "\n"], true)
  | .thematic => (cr nl ++ [.void .hr [], .text "\n"], true)
  | .code info lit => (cr nl ++ [.elem .pre [] [.elem .code (codeClass info) [.text lit]], .text "\n"], true)
  | .html lit => (cr nl ++ [rawOr o lit] ++ cr (lit == "\n"), true)
  | .quote bs =>
    let (inner, nl') := blocksAux o false true #[] bs
    (cr nl ++ [.elem .blockquote [] (.text "\n" :: inner.toList ++ cr nl'), .text "\n"], true)
  | .list ordered start tight' items =>
    let tag := if ordered then Tag.ol else .ul
    let attrs := if ordered && start != 1 then [(Attr.start, toString start)] else []
    let (inner, nl') := itemsAux o tight' true #[] items
    (cr nl ++ [.elem tag attrs (.text "\n" :: inner.toList ++ cr nl'), .text "\n"], true)

/-- A list of blocks, after the nodes `acc` (tail recursive). -/
def blocksAux (o : Options) (tight nl : Bool) (acc : Array Html) : List Block → Array Html × Bool
  | [] => (acc, nl)
  | b :: bs =>
    let (h, nl) := block o tight nl b
    blocksAux o tight nl (acc.appendList h) bs

/-- A list's items, after the nodes `acc` (tail recursive). -/
def itemsAux (o : Options) (tight nl : Bool) (acc : Array Html) : List (List Block) → Array Html × Bool
  | [] => (acc, nl)
  | item :: items =>
    itemsAux o tight true (acc.appendList [.elem .li [] (blocksAux o tight false #[] item).1.toList, .text "\n"]) items
end

def blocks (o : Options) (tight nl : Bool) (bs : List Block) : List Html × Bool :=
  let (a, nl) := blocksAux o tight nl #[] bs
  (a.toList, nl)

/-- The HTML tree of a Markdown document. -/
def toHtml (o : Options) (bs : List Block) : List Html := (blocks o false true bs).1

/-- The HTML tree of a Markdown text. -/
def tree (o : Options) (markdown : String) : List Html := toHtml o (Blocks.parse markdown)

/-- **Markdown to HTML**: CommonMark 0.31.2. -/
def render (o : Options) (markdown : String) : String := Html.serialize (tree o markdown)

end Folio
