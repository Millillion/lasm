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

/-! ### Without recursion

`altParts`, `inlines` and `blocks` recurse once per level of nesting (an image
in a link in emphasis, a list in a block quote in a list item, …), and so
does `Html.write`. CommonMark allows any depth, and an engine's stack can be
small (just under 10,000 frames on the edge and in browsers). Each one has a
version with an explicit stack (`altLoop`, `inlineLoop`, `blockLoop`), proved
equal to it; an `@[csimp]` theorem makes compiled code run that version in
its place, and the proofs keep talking about the recursive definitions. -/

/-- The size of the lists of inlines left on a stack. -/
noncomputable def inlineListsSize : List (List Inline) → Nat
  | [] => 0
  | is :: st => sizeOf is + inlineListsSize st

/-- `altParts` of `is`, then of each list on `st`. -/
def altLoop (nl : Bool) (acc : Array (Bool × String)) : List Inline → List (List Inline) → Array (Bool × String) × Bool
  | [], [] => (acc, nl)
  | [], is :: st => altLoop nl acc is st
  | .text t :: is, st => altLoop (t == "\n") (acc.push (false, t)) is st
  | .code t :: is, st => altLoop (t == "\n") (acc.push (false, t)) is st
  | .html t :: is, st => altLoop (t == "\n") (acc.push (true, t)) is st
  | .softbreak :: is, st => altLoop true (acc.push (false, "\n")) is st
  | .linebreak :: is, st => altLoop true (acc.push (false, if nl then "" else "\n")) is st
  | .emph cs :: is, st => altLoop nl acc cs (is :: st)
  | .strong cs :: is, st => altLoop nl acc cs (is :: st)
  | .link _ _ cs :: is, st => altLoop nl acc cs (is :: st)
  | .image _ _ cs :: is, st => altLoop nl acc cs (is :: st)
termination_by is st => sizeOf is + inlineListsSize st
decreasing_by
  all_goals simp only [inlineListsSize, List.cons.sizeOf_spec, List.nil.sizeOf_spec, Inline.emph.sizeOf_spec,
    Inline.strong.sizeOf_spec, Inline.link.sizeOf_spec, Inline.image.sizeOf_spec, Inline.text.sizeOf_spec,
    Inline.code.sizeOf_spec, Inline.html.sizeOf_spec, Inline.softbreak.sizeOf_spec, Inline.linebreak.sizeOf_spec]
  all_goals omega

/-- `altParts` of each list on the stack, in order. -/
def altUnwind : Array (Bool × String) × Bool → List (List Inline) → Array (Bool × String) × Bool
  | r, [] => r
  | r, is :: st => altUnwind (altParts r.2 r.1 is) st

theorem altLoop_eq (nl : Bool) (acc : Array (Bool × String)) (is : List Inline) (st : List (List Inline)) :
    altLoop nl acc is st = altUnwind (altParts nl acc is) st := by
  induction nl, acc, is, st using altLoop.induct <;> simp_all [altLoop, altUnwind, altParts]

/-- `altParts`, with an explicit stack. -/
def altPartsFast (nl : Bool) (acc : Array (Bool × String)) (is : List Inline) : Array (Bool × String) × Bool :=
  altLoop nl acc is []

@[csimp] theorem altParts_eq_fast : @altParts = @altPartsFast := by
  funext nl acc is; simp [altPartsFast, altLoop_eq, altUnwind]

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

/-- An element `inlineLoop` is inside: its tag and attributes, the nodes
before it, and the inlines after it. -/
structure IFrame where
  tag : Tag
  attrs : List (Attr × String)
  acc : Array Html
  rest : List Inline

/-- The size of the inlines left in the frames. -/
noncomputable def iframesSize : List IFrame → Nat
  | [] => 0
  | f :: st => sizeOf f.rest + iframesSize st

/-- `inlinesAux` of `is`, then, for each frame, the element around what was
built and the inlines after it. -/
def inlineLoop (o : Options) (nl : Bool) (acc : Array Html) : List Inline → List IFrame → Array Html × Bool
  | [], [] => (acc, nl)
  | [], f :: st => inlineLoop o false (f.acc.appendList [.elem f.tag f.attrs acc.toList]) f.rest st
  | .text s :: is, st => inlineLoop o (s == "\n") (acc.appendList [.text s]) is st
  | .softbreak :: is, st => inlineLoop o true (acc.appendList [.text "\n"]) is st
  | .linebreak :: is, st => inlineLoop o true (acc.appendList [.void .br [], .text "\n"]) is st
  | .code s :: is, st => inlineLoop o false (acc.appendList [.elem .code [] [.text s]]) is st
  | .html s :: is, st => inlineLoop o (s == "\n") (acc.appendList [rawOr o s]) is st
  | .image d t cs :: is, st => inlineLoop o false (acc.appendList [image o d t cs]) is st
  | .emph cs :: is, st => inlineLoop o false #[] cs (⟨.em, [], acc, is⟩ :: st)
  | .strong cs :: is, st => inlineLoop o false #[] cs (⟨.strong, [], acc, is⟩ :: st)
  | .link d t cs :: is, st =>
    inlineLoop o false #[] cs
      (⟨.a, (if !o.anyUrl && unsafeUrl d then [] else [(Attr.href, d)]) ++ (if t.isEmpty then [] else [(Attr.title, t)]), acc, is⟩ :: st)
termination_by is st => sizeOf is + iframesSize st
decreasing_by
  all_goals simp only [iframesSize, List.cons.sizeOf_spec, List.nil.sizeOf_spec, Inline.emph.sizeOf_spec,
    Inline.strong.sizeOf_spec, Inline.link.sizeOf_spec, Inline.image.sizeOf_spec, Inline.text.sizeOf_spec,
    Inline.code.sizeOf_spec, Inline.html.sizeOf_spec, Inline.softbreak.sizeOf_spec, Inline.linebreak.sizeOf_spec]
  all_goals omega

/-- What `inlineLoop` builds after a list: each frame's element and the
inlines after it. -/
def inlineUnwind (o : Options) : Array Html × Bool → List IFrame → Array Html × Bool
  | r, [] => r
  | r, f :: st => inlineUnwind o (inlinesAux o false (f.acc.appendList [.elem f.tag f.attrs r.1.toList]) f.rest) st

theorem inlineLoop_eq (o : Options) (nl : Bool) (acc : Array Html) (is : List Inline) (st : List IFrame) :
    inlineLoop o nl acc is st = inlineUnwind o (inlinesAux o nl acc is) st := by
  induction nl, acc, is, st using inlineLoop.induct o <;> simp_all [inlineLoop, inlineUnwind, inlinesAux, inline]

/-- `inlines`, with an explicit stack. -/
def inlinesFast (o : Options) (nl : Bool) (is : List Inline) : List Html × Bool :=
  let (a, nl) := inlineLoop o nl #[] is []
  (a.toList, nl)

@[csimp] theorem inlines_eq_fast : @inlines = @inlinesFast := by
  funext o nl is; simp [inlines, inlinesFast, inlineLoop_eq, inlineUnwind]

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

/-- What `blockLoop` is working through: a list's blocks or a list's items,
with its `tight` and `nl` and the nodes built so far (as `blocksAux` and
`itemsAux` take them). -/
inductive RRun where
  | blocks (tight nl : Bool) (acc : Array Html) (bs : List Block)
  | items (tight nl : Bool) (acc : Array Html) (items : List (List Block))

/-- A block or item `blockLoop` is inside, and the run it continues. -/
inductive RFrame where
  /-- A block quote, in a run of blocks (`tight`, `nl`, `acc`, `rest`). -/
  | quote (tight nl : Bool) (acc : Array Html) (rest : List Block)
  /-- A list (`tag`, `attrs`), in a run of blocks. -/
  | list (tag : Tag) (attrs : List (Attr × String)) (tight nl : Bool) (acc : Array Html) (rest : List Block)
  /-- A list item, in a run of items. -/
  | item (tight : Bool) (acc : Array Html) (rest : List (List Block))

/-- The run a frame continues, once its block's or item's nodes are built
(`inner`, ending with exactly "\n" when `nl'`). -/
def RFrame.resume (inner : Array Html) (nl' : Bool) : RFrame → RRun
  | .quote tight nl acc rest =>
    .blocks tight true (acc.appendList (cr nl ++ [.elem .blockquote [] (.text "\n" :: inner.toList ++ cr nl'), .text "\n"])) rest
  | .list tag attrs tight nl acc rest =>
    .blocks tight true (acc.appendList (cr nl ++ [.elem tag attrs (.text "\n" :: inner.toList ++ cr nl'), .text "\n"])) rest
  | .item tight acc rest => .items tight true (acc.appendList [.elem .li [] inner.toList, .text "\n"]) rest

/-- The size of what a run has left. -/
noncomputable def RRun.size : RRun → Nat
  | .blocks _ _ _ bs => sizeOf bs
  | .items _ _ _ its => sizeOf its

/-- The size of what a frame's run has left. -/
noncomputable def RFrame.size : RFrame → Nat
  | .quote _ _ _ rest => sizeOf rest
  | .list _ _ _ _ _ rest => sizeOf rest
  | .item _ _ rest => sizeOf rest

theorem RFrame.resume_size (inner : Array Html) (nl' : Bool) (f : RFrame) : (f.resume inner nl').size = f.size := by
  cases f <;> rfl

/-- The size of what the frames' runs have left. -/
noncomputable def rframesSize : List RFrame → Nat
  | [] => 0
  | f :: st => f.size + rframesSize st

/-- `blocksAux` or `itemsAux` of the run, then each frame's run, resumed
with what was built. A block quote or list pushes a frame and starts the run
inside it, a list item the same; the other blocks (`block` does not recurse
on them) are added as `block` renders them. -/
def blockLoop (o : Options) : RRun → List RFrame → Array Html × Bool
  | .blocks _ nl acc [], [] => (acc, nl)
  | .items _ nl acc [], [] => (acc, nl)
  | .blocks _ nl acc [], f :: st => blockLoop o (f.resume acc nl) st
  | .items _ nl acc [], f :: st => blockLoop o (f.resume acc nl) st
  | .blocks tight nl acc (.quote bs :: rest), st => blockLoop o (.blocks false true #[] bs) (.quote tight nl acc rest :: st)
  | .blocks tight nl acc (.list ordered start tight' items :: rest), st =>
    blockLoop o (.items tight' true #[] items)
      (.list (if ordered then Tag.ol else .ul) (if ordered && start != 1 then [(Attr.start, toString start)] else [])
        tight nl acc rest :: st)
  | .blocks tight nl acc (.para cs :: rest), st =>
    blockLoop o (.blocks tight (block o tight nl (.para cs)).2 (acc.appendList (block o tight nl (.para cs)).1) rest) st
  | .blocks tight nl acc (.heading n cs :: rest), st =>
    blockLoop o (.blocks tight (block o tight nl (.heading n cs)).2 (acc.appendList (block o tight nl (.heading n cs)).1) rest) st
  | .blocks tight nl acc (.thematic :: rest), st =>
    blockLoop o (.blocks tight (block o tight nl .thematic).2 (acc.appendList (block o tight nl .thematic).1) rest) st
  | .blocks tight nl acc (.code info lit :: rest), st =>
    blockLoop o (.blocks tight (block o tight nl (.code info lit)).2 (acc.appendList (block o tight nl (.code info lit)).1) rest) st
  | .blocks tight nl acc (.html lit :: rest), st =>
    blockLoop o (.blocks tight (block o tight nl (.html lit)).2 (acc.appendList (block o tight nl (.html lit)).1) rest) st
  | .items tight _ acc (item :: rest), st => blockLoop o (.blocks tight false #[] item) (.item tight acc rest :: st)
termination_by r st => r.size + rframesSize st
decreasing_by
  all_goals try simp only [RFrame.resume_size]
  all_goals simp only [RRun.size, RFrame.size, rframesSize, List.cons.sizeOf_spec,
    List.nil.sizeOf_spec, Block.quote.sizeOf_spec, Block.list.sizeOf_spec, Block.para.sizeOf_spec,
    Block.heading.sizeOf_spec, Block.thematic.sizeOf_spec, Block.code.sizeOf_spec, Block.html.sizeOf_spec]
  all_goals omega

/-- What a run builds, by `blocksAux` or `itemsAux`. -/
def RRun.spec (o : Options) : RRun → Array Html × Bool
  | .blocks tight nl acc bs => blocksAux o tight nl acc bs
  | .items tight nl acc its => itemsAux o tight nl acc its

/-- What `blockLoop` builds after a run: each frame's run, resumed. -/
def blockUnwind (o : Options) : Array Html × Bool → List RFrame → Array Html × Bool
  | r, [] => r
  | r, f :: st => blockUnwind o ((f.resume r.1 r.2).spec o) st

theorem blockLoop_eq (o : Options) (r : RRun) (st : List RFrame) :
    blockLoop o r st = blockUnwind o (r.spec o) st := by
  induction r, st using blockLoop.induct o <;> simp_all [blockLoop, blockUnwind, RRun.spec, RFrame.resume, blocksAux, itemsAux, block]

/-- `blocks`, with an explicit stack. -/
def blocksFast (o : Options) (tight nl : Bool) (bs : List Block) : List Html × Bool :=
  let (a, nl) := blockLoop o (.blocks tight nl #[] bs) []
  (a.toList, nl)

@[csimp] theorem blocks_eq_fast : @blocks = @blocksFast := by
  funext o tight nl bs; simp [blocks, blocksFast, blockLoop_eq, blockUnwind, RRun.spec]

/-- The HTML tree of a Markdown document. -/
def toHtml (o : Options) (bs : List Block) : List Html := (blocks o false true bs).1

/-- The HTML tree of a Markdown text. -/
def tree (o : Options) (markdown : String) : List Html := toHtml o (Blocks.parse markdown)

/-- **Markdown to HTML**: CommonMark 0.31.2. -/
def render (o : Options) (markdown : String) : String := Html.serialize (tree o markdown)

end Folio
