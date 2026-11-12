/-
Block parsing (CommonMark 0.31.2 §4–§5), a port of commonmark.js 0.31.2's
blocks.js (BSD-2-Clause, Copyright (c) 2014, John MacFarlane; NOTICE.md).

The parser reads the input line by line and keeps the open blocks as a
stack (`P.stack`: the document at the bottom, the innermost open block on
top), which is the chain of last children commonmark.js walks. A closed
block becomes a `Blk` in its parent's children. When the input ends, link
reference definitions are taken out of paragraphs, and paragraphs and
headings get their inlines (Inlines.lean). Every loop is bounded by the
length of the input.
-/
import Folio.Inlines

namespace Folio.Blocks
open Scan Inlines

structure ListData where
  ordered : Bool
  bullet : Char := ' '
  start : Nat := 1
  delim : Char := ' '
  padding : Nat := 0
  markerOffset : Nat := 0
  tight : Bool := true
  deriving Inhabited

inductive Kind where
  | document
  | quote
  | list (d : ListData)
  | item (d : ListData)
  | heading (level : Nat)
  | thematic
  | code (fenced : Bool) (fenceChar : Char) (fenceLength fenceOffset : Nat)
  | html (type : Nat)
  | para
  deriving Inhabited

def Kind.isPara : Kind → Bool | .para => true | _ => false
def Kind.isList : Kind → Bool | .list _ => true | _ => false
def Kind.acceptsLines : Kind → Bool | .code .. | .html _ | .para => true | _ => false

/-- Whether a block of kind `k` may contain one of kind `t`. -/
def Kind.canContain : Kind → Kind → Bool
  | .document, .item _ | .quote, .item _ | .item _, .item _ => false
  | .document, _ | .quote, _ | .item _, _ => true
  | .list _, .item _ => true
  | _, _ => false

/-- A closed block: its kind, first and last line, text (a paragraph's or
heading's raw text, a code or HTML block's literal), info string, children. -/
inductive Blk where
  | mk (kind : Kind) (first last : Nat) (content info : String) (children : Array Blk)
  deriving Inhabited

def Blk.first : Blk → Nat | .mk _ f .. => f
def Blk.last : Blk → Nat | .mk _ _ l .. => l

structure Open where
  kind : Kind
  first : Nat
  content : String := ""
  children : Array Blk := #[]
  deriving Inhabited

structure P where
  stack : Array Open := #[{ kind := .document, first := 1 }]
  refs : RefMap := {}
  lineNo : Nat := 0
  ln : Array Char := #[]
  offset : Nat := 0
  column : Nat := 0
  nextNonspace : Nat := 0
  nextNonspaceColumn : Nat := 0
  indent : Nat := 0
  indented : Bool := false
  blank : Bool := false
  partialTab : Bool := false
  allClosed : Bool := true
  lastMatched : Nat := 0
  oldtip : Nat := 0
  /-- Open containers `first` to `last` (indices in `stack`, `first ≥ 1`,
  `last > first`) are lists and list items that have content: on a blank
  line they all continue, so the walk can skip them (otherwise every blank
  line in deeply nested lists walks the whole stack). `(0, 0)`: none known. -/
  blankRun : Nat × Nat := (0, 0)
  /-- On the current line, no thematic break starts before this position. -/
  breakKill : Nat := 0

/-- A line consisting only of spaces and tabs (`/^[ \t]*$/`). -/
def isSpaceTabLine (s : String) : Bool := s.all isSpaceOrTab

/-- `isBlank`: no character other than space, tab, form feed, vertical tab,
carriage return or line feed. -/
def isBlankText (s : String) : Bool := s.all fun c => c == ' ' || c == '\t' || c == '\x0c' || c == '\x0b' || c == '\r' || c == '\n'

/-- Whether `b` is followed by `next` with a line between them. -/
def gapBetween (b next : Blk) : Bool := b.last + 1 != next.first

/-- A list is loose if two of its items, or two blocks in one item, are
separated by a blank line (blocks.js, `list.finalize`). -/
def tightList (items : Array Blk) : Bool := Id.run do
  for i in [0:items.size] do
    if i + 1 < items.size && gapBetween items[i]! items[i + 1]! then return false
    let .mk _ _ _ _ _ cs := items[i]!
    for j in [0:cs.size] do
      if j + 1 < cs.size && gapBetween cs[j]! cs[j + 1]! then return false
  return true

/-- Closes an open block at line `endLine` (blocks.js, each `finalize`). -/
def finalizeBlock (o : Open) (endLine : Nat) : Blk :=
  match o.kind with
  | .list d =>
    let last := (o.children.back?.map (·.last)).getD endLine
    .mk (.list { d with tight := tightList o.children }) o.first last "" "" o.children
  | .item d =>
    let last := (o.children.back?.map (·.last)).getD o.first
    .mk (.item d) o.first last "" "" o.children
  | .code true c l off =>
    let (first, rest) := match o.content.splitOn "\n" with
      | f :: r => (f, "\n".intercalate r)
      | [] => ("", "")
    .mk (.code true c l off) o.first endLine rest (unescape (jsTrim first)) #[]
  | .code false c l off =>
    let lines := (o.content.splitOn "\n").reverse.dropWhile isSpaceTabLine |>.reverse
    .mk (.code false c l off) o.first (o.first + lines.length - 1) ("\n".intercalate lines ++ "\n") "" #[]
  | .html t =>
    let lit := if o.content.endsWith "\n" then String.ofList o.content.toList.dropLast else o.content
    .mk (.html t) o.first endLine lit "" #[]
  | k => .mk k o.first endLine o.content "" o.children

/-- Whether every character from `i` on satisfies `p` (stopping at the
first that does not). -/
def allFrom (a : Array Char) (i : Nat) (p : Char → Bool) : Bool := Id.run do
  for j in [i:a.size] do
    if !p a[j]! then return false
  return true

namespace P

def tip (p : P) : Open := p.stack.back!
def tipIndex (p : P) : Nat := p.stack.size - 1
def modifyTip (p : P) (f : Open → Open) : P := { p with stack := p.stack.modify (p.stack.size - 1) f }
def peekAt (p : P) (i : Nat) : Option Char := p.ln[i]?

/-- Closes the innermost open block (never the document). -/
def finalize (p : P) (endLine : Nat) : P :=
  if p.stack.size ≤ 1 then p else
  let b := finalizeBlock p.tip endLine
  let stack := p.stack.pop
  let (f, l) := p.blankRun
  let blankRun := if l < stack.size then (f, l) else if stack.size - 1 > f then (f, stack.size - 1) else (0, 0)
  { p with stack := stack.modify (stack.size - 1) (fun o => { o with children := o.children.push b }), blankRun }

def findNextNonspace (p : P) : P := Id.run do
  let mut i := p.offset
  let mut cols := p.column
  for _ in [0:p.ln.size] do
    match p.ln[i]? with
    | some ' ' => i := i + 1; cols := cols + 1
    | some '\t' => i := i + 1; cols := cols + (4 - cols % 4)
    | _ => break
  let blank := match p.ln[i]? with
    | none | some '\n' | some '\r' => true
    | _ => false
  let indent := cols - p.column
  { p with nextNonspace := i, nextNonspaceColumn := cols, indent, indented := indent ≥ 4, blank }

/-- Moves `count` characters (or columns, splitting tabs) forward. -/
def advanceOffset (p : P) (count : Nat) (columns : Bool) : P := Id.run do
  let mut p := p
  let mut count := count
  for _ in [0:p.ln.size + 2] do
    if count == 0 then break
    let some c := p.ln[p.offset]? | break
    if c == '\t' then
      let toTab := 4 - p.column % 4
      if columns then
        let partialTab := toTab > count
        let adv := if partialTab then count else toTab
        p := { p with partialTab, column := p.column + adv, offset := if partialTab then p.offset else p.offset + 1 }
        count := count - adv
      else
        p := { p with partialTab := false, column := p.column + toTab, offset := p.offset + 1 }
        count := count - 1
    else
      p := { p with partialTab := false, offset := p.offset + 1, column := p.column + 1 }
      count := count - 1
  return p

def advanceNextNonspace (p : P) : P :=
  { p with offset := p.nextNonspace, column := p.nextNonspaceColumn, partialTab := false }

def addLine (p : P) : P :=
  let (p, pre) :=
    if p.partialTab then
      ({ p with offset := p.offset + 1 }, String.ofList (List.replicate (4 - p.column % 4) ' '))
    else (p, "")
  p.modifyTip fun o => { o with content := o.content ++ pre ++ slice p.ln p.offset p.ln.size ++ "\n" }

/-- Closes the blocks the current line did not continue. -/
def closeUnmatched (p : P) : P := Id.run do
  if p.allClosed then return p
  let mut p := p
  for _ in [0:p.stack.size] do
    if p.tipIndex > p.lastMatched then p := p.finalize (p.lineNo - 1) else break
  return { p with allClosed := true }

def addChild (p : P) (k : Kind) : P := Id.run do
  let mut p := p
  for _ in [0:p.stack.size] do
    if !p.tip.kind.canContain k then p := p.finalize (p.lineNo - 1) else break
  return { p with stack := p.stack.push { kind := k, first := p.lineNo } }

/-- Takes link reference definitions from the start of a paragraph's text;
returns the rest and whether any were found. -/
def takeRefs (refs : RefMap) (content : String) : RefMap × String × Bool := Id.run do
  let mut refs := refs
  let a := chars content
  let mut start := 0
  let mut found := false
  for _ in [0:a.size] do
    if a[start]? != some '[' then break
    match reference a start with
    | none => break
    | some (e, label, r) =>
      if !refs.contains label then refs := refs.insert label r
      start := e
      found := true
  return (refs, if found then slice a start a.size else content, found)

end P

/-! ## Continuing open blocks (blocks.js `blocks[…].continue`) -/

/-- 0: matched, 1: not matched, 2: the line is done (a closing fence). -/
def continueBlock (p : P) (i : Nat) : Nat × P :=
  let o := p.stack[i]!
  match o.kind with
  | .document | .list _ => (0, p)
  | .quote =>
    if !p.indented && p.peekAt p.nextNonspace == some '>' then
      let p := (p.advanceNextNonspace).advanceOffset 1 false
      let p := if (p.peekAt p.offset).any isSpaceOrTab then p.advanceOffset 1 true else p
      (0, p)
    else (1, p)
  | .item d =>
    if p.blank then
      if o.children.isEmpty && i + 1 ≥ p.stack.size then (1, p) else (0, p.advanceNextNonspace)
    else if p.indent ≥ d.markerOffset + d.padding then (0, p.advanceOffset (d.markerOffset + d.padding) true)
    else (1, p)
  | .heading _ | .thematic => (1, p)
  | .code true fc fl off =>
    let run := countWhile p.ln p.nextNonspace p.ln.size (· == fc)
    let restBlank := allFrom p.ln (p.nextNonspace + run) isSpaceOrTab
    if p.indent ≤ 3 && p.peekAt p.nextNonspace == some fc && run ≥ 3 && restBlank && run ≥ fl then
      (2, p.finalize p.lineNo)
    else Id.run do
      let mut p := p
      let mut k := off
      for _ in [0:off] do
        if k > 0 && (p.peekAt p.offset).any isSpaceOrTab then
          p := p.advanceOffset 1 true
          k := k - 1
        else break
      return (0, p)
  | .code false .. =>
    if p.indent ≥ 4 then (0, p.advanceOffset 4 true)
    else if p.blank then (0, p.advanceNextNonspace)
    else (1, p)
  | .html t => (if p.blank && (t == 6 || t == 7) then 1 else 0, p)
  | .para => (if p.blank then 1 else 0, p)

/-! ## Starting new blocks (blocks.js `blockStarts`) -/

def htmlBlockNames : List String :=
  ["address", "article", "aside", "base", "basefont", "blockquote", "body", "caption", "center", "col",
   "colgroup", "dd", "details", "dialog", "dir", "div", "dl", "dt", "fieldset", "figcaption", "figure",
   "footer", "form", "frame", "frameset", "h1", "h2", "h3", "h4", "h5", "h6", "head", "header", "hr",
   "html", "iframe", "legend", "li", "link", "main", "menu", "menuitem", "nav", "noframes", "ol",
   "optgroup", "option", "p", "param", "section", "search", "summary", "table", "tbody", "td", "tfoot",
   "th", "thead", "title", "tr", "track", "ul"]

/-- The type (1–7) of the HTML block a line starting `<` at `i` opens, if
any (blocks.js `reHtmlBlockOpen`). Type 7 is only tested when `allow7`. -/
def htmlBlockStart (a : Array Char) (i : Nat) (allow7 : Bool) : Option Nat :=
  let endsName (j : Nat) : Bool := match a[j]? with
    | none => true
    | some c => isUnicodeSpace c || c == '>'
  if ["script", "pre", "textarea", "style"].any (fun n => hasAtCI a (i + 1) n.toList && endsName (i + 1 + n.length)) then some 1
  else if hasAt a i "<!--".toList then some 2
  else if hasAt a i "<?".toList then some 3
  else if hasAt a i "<!".toList && (a[i + 2]?.map isAsciiAlpha).getD false then some 4
  else if hasAt a i "<![CDATA[".toList then some 5
  else
    let j := if a[i + 1]? == some '/' then i + 2 else i + 1
    let ends6 (k : Nat) : Bool := match a[k]? with
      | none => true
      | some c => isUnicodeSpace c || c == '>' || (c == '/' && a[k + 1]? == some '>')
    if htmlBlockNames.any (fun n => hasAtCI a j n.toList && ends6 (j + n.length)) then some 6
    else if allow7 then
      match (openTag a i).orElse fun _ => closeTag a i with
      | some e => if allFrom a e isUnicodeSpace then some 7 else none
      | none => none
    else none

/-- Whether a line (from `i`) closes an HTML block of type `t` (1–5). -/
def htmlBlockEnds (a : Array Char) (i t : Nat) : Bool :=
  match t with
  | 1 => (List.range a.size).any fun j => j ≥ i && hasAt a j "</".toList &&
      ["script", "pre", "textarea", "style"].any fun n => hasAtCI a (j + 2) n.toList && a[j + 2 + n.length]? == some '>'
  | 2 => (findSeq a i "-->".toList).isSome
  | 3 => (findSeq a i "?>".toList).isSome
  | 4 => (findChar a i '>').isSome
  | 5 => (findSeq a i "]]>".toList).isSome
  | _ => false

/-- `^(?:\*[ \t]*){3,}$` and its `_`, `-` variants, and when it fails, the
position that made it fail (a scan starting before it, on the same line,
fails too: cmark's `thematic_break_kill_pos`). -/
def thematicBreak (a : Array Char) (i : Nat) : Bool × Nat := Id.run do
  let some c := a[i]? | return (false, i)
  if !(c == '*' || c == '_' || c == '-') then return (false, i)
  let mut n := 0
  for j in [i:a.size] do
    let d := a[j]!
    if d == c then n := n + 1
    else if !isSpaceOrTab d then return (false, j)
  return (n ≥ 3, a.size)

/-- A list marker (blocks.js `parseListMarker`). -/
def listMarker (p : P) (containerIsPara : Bool) : Option (ListData × P) := Id.run do
  if p.indent ≥ 4 then return none
  let a := p.ln
  let i := p.nextNonspace
  let some c := a[i]? | return none
  let mut d : ListData := { ordered := false, markerOffset := p.indent }
  let mut len := 0
  if c == '*' || c == '+' || c == '-' then
    d := { d with bullet := c }
    len := 1
  else
    let n := countWhile a i 10 isDigit
    if 1 ≤ n && n ≤ 9 then
      match a[i + n]? with
      | some e =>
        if e == '.' || e == ')' then
          let start := (slice a i (i + n)).foldl (fun m ch => m * 10 + (ch.toNat - 48)) 0
          if containerIsPara && start != 1 then return none
          d := { d with ordered := true, start, delim := e }
          len := n + 1
        else return none
      | none => return none
    else return none
  match a[i + len]? with
  | some ' ' | some '\t' | none => pure ()
  | _ => return none
  if containerIsPara && allFrom a (i + len) isAsciiSpace then return none
  let mut p := (p.advanceNextNonspace).advanceOffset len true
  let startCol := p.column
  let startOff := p.offset
  for _ in [0:6] do
    p := p.advanceOffset 1 true
    if !(p.column - startCol < 5 && (p.peekAt p.offset).any isSpaceOrTab) then break
  let blankItem := (p.peekAt p.offset).isNone
  let spaces := p.column - startCol
  if spaces ≥ 5 || spaces < 1 || blankItem then
    d := { d with padding := len + 1 }
    p := { p with column := startCol, offset := startOff }
    if (p.peekAt p.offset).any isSpaceOrTab then p := p.advanceOffset 1 true
  else
    d := { d with padding := len + spaces }
  return some (d, p)

/-- The block starts, tried in order on the container `ci`: 0 no match, 1
a container block started, 2 a leaf block started. -/
def blockStart (p : P) (ci : Nat) : Nat × P := Id.run do
  let a := p.ln
  let nn := p.nextNonspace
  let container := p.stack[ci]!
  let mut p := p
  -- block quote
  if !p.indented && a[nn]? == some '>' then
    p := (p.advanceNextNonspace).advanceOffset 1 false
    if (p.peekAt p.offset).any isSpaceOrTab then p := p.advanceOffset 1 true
    p := p.closeUnmatched
    return (1, p.addChild .quote)
  -- ATX heading
  let hashes := countWhile a nn 7 (· == '#')
  if !p.indented && 1 ≤ hashes && hashes ≤ 6 && (a[nn + hashes]?.all isSpaceOrTab) then
    let after := skip a (nn + hashes) isSpaceOrTab
    p := (p.advanceNextNonspace).advanceOffset (after - nn) false
    p := p.closeUnmatched
    p := p.addChild (.heading hashes)
    let raw := (a.extract p.offset a.size).toList
    let t1 := (raw.reverse.dropWhile isSpaceOrTab).reverse
    let t2 := (t1.reverse.dropWhile (· == '#')).reverse
    let content :=
      if t2.length < t1.length && t2.all isSpaceOrTab then []
      else if t2.length < t1.length && (t2.getLast?.any isSpaceOrTab) then (t2.reverse.dropWhile isSpaceOrTab).reverse
      else raw
    p := p.modifyTip fun o => { o with content := String.ofList content }
    return (2, p.advanceOffset (a.size - p.offset) false)
  -- fenced code
  if !p.indented then
    if let some fc := a[nn]? then
      if fc == '`' || fc == '~' then
        let run := countWhile a nn a.size (· == fc)
        let restOk := fc == '~' || !((a.extract (nn + run) a.size).toList.takeWhile Scan.isDotChar).contains '`'
        if run ≥ 3 && restOk then
          p := p.closeUnmatched
          p := p.addChild (.code true fc run p.indent)
          return (2, (p.advanceNextNonspace).advanceOffset run false)
  -- HTML block
  if !p.indented && a[nn]? == some '<' then
    let allow7 := !container.kind.isPara && !(!p.allClosed && !p.blank && p.tip.kind.isPara)
    if let some t := htmlBlockStart a nn allow7 then
      p := p.closeUnmatched
      return (2, p.addChild (.html t))
  -- setext heading underline (if the paragraph was only link reference
  -- definitions, the next block starts are tried)
  if !p.indented && container.kind.isPara then
    if let some c := a[nn]? then
      if (c == '=' || c == '-') then
        let run := countWhile a nn a.size (· == c)
        if allFrom a (nn + run) isSpaceOrTab then
          p := p.closeUnmatched
          let (refs, content, _) := P.takeRefs p.refs p.tip.content
          p := { p with refs }
          p := p.modifyTip fun o => { o with content }
          if content.length > 0 then
            p := p.modifyTip fun o => { o with kind := .heading (if c == '=' then 1 else 2) }
            return (2, p.advanceOffset (a.size - p.offset) false)
  -- thematic break
  let isBreak ← if !p.indented && nn ≥ p.breakKill then
      let (ok, kill) := thematicBreak a nn
      if !ok then p := { p with breakKill := kill }
      pure ok
    else pure false
  if isBreak then
    p := p.closeUnmatched
    p := p.addChild .thematic
    return (2, p.advanceOffset (a.size - p.offset) false)
  -- list item
  if !p.indented || container.kind.isList then
    if let some (d, q) := listMarker p container.kind.isPara then
      let q := q.closeUnmatched
      let same := match q.tip.kind with
        | .list ld => ld.ordered == d.ordered && ld.delim == d.delim && ld.bullet == d.bullet
        | _ => false
      let q := if same then q else q.addChild (.list d)
      return (1, q.addChild (.item d))
  -- indented code
  if p.indented && !p.tip.kind.isPara && !p.blank then
    p := p.advanceOffset 4 true
    p := p.closeUnmatched
    return (2, p.addChild (.code false ' ' 0 0))
  return (0, p)

/-- `reMaybeSpecial`: a line that might start a block. -/
def maybeSpecial (c : Char) : Bool := "#`~*+_=<>0123456789-".toList.contains c

/-- One line of input (blocks.js `incorporateLine`). -/
def incorporateLine (p : P) (raw : Array Char) : P := Id.run do
  let ln := raw.map fun c => if c == '\x00' then '�' else c
  let mut p := { p with ln, offset := 0, column := 0, blank := false, partialTab := false,
                        lineNo := p.lineNo + 1, oldtip := p.stack.size - 1, breakKill := 0 }
  let mut container := 0
  -- the current run of lists and items with content (0: none)
  let mut runFirst := 0
  for _ in [0:p.stack.size] do
    if container + 1 ≥ p.stack.size then break
    container := container + 1
    p := p.findNextNonspace
    let (f, l) := p.blankRun
    if p.blank && f == container && l > f && l < p.stack.size then
      -- every container from f to l continues on a blank line; together they
      -- move to the end of the line's spaces
      p := p.advanceNextNonspace
      runFirst := f
      container := l
      continue
    let (r, p') := continueBlock p container
    p := p'
    if r == 2 then return p
    if r == 1 then
      container := container - 1
      break
    let o := p.stack[container]!
    let inRun := match o.kind with
      | .list _ => true
      | .item _ => !o.children.isEmpty || container + 1 < p.stack.size
      | _ => false
    if inRun then
      if runFirst == 0 then runFirst := container
      if container > runFirst && container - runFirst > p.blankRun.2 - p.blankRun.1 then
        p := { p with blankRun := (runFirst, container) }
    else runFirst := 0
  p := { p with allClosed := container == p.oldtip, lastMatched := container }
  let ck := p.stack[container]!.kind
  let mut matchedLeaf := !ck.isPara && ck.acceptsLines
  for _ in [0:ln.size + 2] do
    if matchedLeaf then break
    p := p.findNextNonspace
    if !p.indented && !(ln[p.nextNonspace]?.any maybeSpecial) then
      p := p.advanceNextNonspace
      break
    let (r, p') := blockStart p container
    p := p'
    if r == 0 then
      p := p.advanceNextNonspace
      break
    container := p.stack.size - 1
    if r == 2 then matchedLeaf := true
  if !p.allClosed && !p.blank && p.tip.kind.isPara then
    return p.addLine
  p := p.closeUnmatched
  match p.tip.kind with
  | .html t =>
    p := p.addLine
    if 1 ≤ t && t ≤ 5 && htmlBlockEnds p.ln p.offset t then p := p.finalize p.lineNo
  | .code .. | .para => p := p.addLine
  | _ =>
    if p.offset < ln.size && !p.blank then
      p := p.addChild .para
      p := p.advanceNextNonspace
      p := p.addLine
  return p

/-- The input's lines: split at `\r\n`, `\n` or `\r`; a final line ending
does not start another line. -/
def splitLines (a : Array Char) : Array (Array Char) := Id.run do
  let mut lines : Array (Array Char) := #[]
  let mut cur : Array Char := #[]
  let mut i := 0
  for _ in [0:a.size] do
    if i ≥ a.size then break
    let c := a[i]!
    if c == '\n' then lines := lines.push cur; cur := #[]; i := i + 1
    else if c == '\r' then
      lines := lines.push cur; cur := #[]
      i := if a[i + 1]? == some '\n' then i + 2 else i + 1
    else cur := cur.push c; i := i + 1
  lines := lines.push cur
  if a.back? == some '\n' then lines := lines.pop
  return lines

/-! ## Finishing: reference definitions, then inlines -/

/-- Removes link reference definitions from every paragraph, in document
order (blocks.js `removeLinkReferenceDefinitions`). -/
def takeAllRefs (refs : RefMap) : Blk → RefMap × Option Blk
  | .mk k f l content info cs =>
    match k with
    | .para =>
      if content.startsWith "[" then
        let (refs, rest, found) := P.takeRefs refs content
        (refs, if found && isBlankText rest then none else some (.mk k f l rest info cs))
      else (refs, some (.mk k f l content info cs))
    | _ =>
      let (refs, cs') := cs.attach.foldl (init := (refs, #[])) fun (refs, acc) ⟨c, _⟩ =>
        let (refs, c') := takeAllRefs refs c
        (refs, match c' with | some c' => acc.push c' | none => acc)
      (refs, some (.mk k f l content info cs'))
termination_by b => sizeOf b
decreasing_by
  have := Array.sizeOf_lt_of_mem ‹c ∈ cs›
  simp_wf; omega

/-- The document tree, with inlines parsed: a block becomes one `Block`,
a list item or the document the list of its children's. -/
def toBlocks (refs : RefMap) : Blk → List Block
  | .mk k _ _ content info cs =>
    let kids := fun (_ : Unit) => cs.attach.toList.flatMap fun ⟨c, _⟩ => toBlocks refs c
    match k with
    | .document | .item _ => kids ()
    | .quote => [.quote (kids ())]
    | .list d => [.list d.ordered d.start d.tight (cs.attach.toList.map fun ⟨c, _⟩ => toBlocks refs c)]
    | .heading n => [.heading n (Inlines.parse refs (jsTrim content))]
    | .thematic => [.thematic]
    | .code _ _ _ _ => [.code info content]
    | .html _ => [.html content]
    | .para => [.para (Inlines.parse refs (jsTrim content))]
termination_by b => sizeOf b
decreasing_by
  all_goals (have := Array.sizeOf_lt_of_mem ‹_ ∈ cs›; simp_wf; omega)

/-! ### Without recursion

`takeAllRefs` and `toBlocks` recurse once per level of nesting, and an
engine's stack can be small (just under 10,000 frames on the edge and in
browsers), while CommonMark allows any depth (cmark's pathological cases nest
block quotes 25,000 deep). `refsLoop` and `toBlocksLoop` do the same work with
an explicit stack, and are proved equal to them; the `@[csimp]` theorems
make compiled code (`parse`) run them in their place. -/

theorem sizeOf_toList_lt {α : Type} [SizeOf α] (a : Array α) : sizeOf a.toList < sizeOf a := by
  cases a; simp

/-- `takeAllRefs` on one block of a list: the definitions found, and the
blocks kept. -/
def refsStep (r : RefMap × Array Blk) (c : Blk) : RefMap × Array Blk :=
  let (refs, c') := takeAllRefs r.1 c
  (refs, match c' with | some c' => r.2.push c' | none => r.2)

theorem takeAllRefs_container (refs : RefMap) (k : Kind) (f l : Nat) (content info : String) (cs : Array Blk)
    (h : k.isPara = false) :
    takeAllRefs refs (.mk k f l content info cs) =
      ((cs.toList.foldl refsStep (refs, #[])).1, some (.mk k f l content info (cs.toList.foldl refsStep (refs, #[])).2)) := by
  rw [takeAllRefs.eq_def]
  cases k <;> simp only [Kind.isPara, Bool.true_eq_false] at h <;>
    (dsimp only; rw [Array.foldl_toList, ← Array.foldl_attach (xs := cs) (f := refsStep)]; rfl)

/-- A container block `refsLoop` is inside: its fields, the blocks kept
before it, and the blocks after it. -/
structure RefsFrame where
  kind : Kind
  first : Nat
  last : Nat
  content : String
  info : String
  acc : Array Blk
  rest : List Blk

/-- The size of the blocks left in the frames. -/
noncomputable def refsFramesSize : List RefsFrame → Nat
  | [] => 0
  | f :: st => sizeOf f.rest + refsFramesSize st

/-- `refsStep` over `bs`, then, for each frame, its block with what was kept
and the blocks after it. -/
def refsLoop (refs : RefMap) (acc : Array Blk) : List Blk → List RefsFrame → RefMap × Array Blk
  | [], [] => (refs, acc)
  | [], f :: st => refsLoop refs (f.acc.push (.mk f.kind f.first f.last f.content f.info acc)) f.rest st
  | .mk k fst lst content info cs :: rest, st =>
    if k.isPara then
      let r := refsStep (refs, acc) (.mk k fst lst content info cs)
      refsLoop r.1 r.2 rest st
    else refsLoop refs #[] cs.toList (⟨k, fst, lst, content, info, acc, rest⟩ :: st)
termination_by bs st => sizeOf bs + refsFramesSize st
decreasing_by
  all_goals simp only [refsFramesSize, List.cons.sizeOf_spec, List.nil.sizeOf_spec, Blk.mk.sizeOf_spec]
  all_goals (try have := sizeOf_toList_lt cs)
  all_goals omega

/-- What `refsLoop` does after a list: each frame's block, then the blocks after it. -/
def refsUnwind : RefMap × Array Blk → List RefsFrame → RefMap × Array Blk
  | r, [] => r
  | r, f :: st => refsUnwind (f.rest.foldl refsStep (r.1, f.acc.push (.mk f.kind f.first f.last f.content f.info r.2))) st

theorem refsLoop_eq (refs : RefMap) (acc : Array Blk) (bs : List Blk) (st : List RefsFrame) :
    refsLoop refs acc bs st = refsUnwind (bs.foldl refsStep (refs, acc)) st := by
  induction refs, acc, bs, st using refsLoop.induct with
  | case1 refs acc => simp [refsLoop, refsUnwind]
  | case2 refs acc f st ih => simp [refsLoop, refsUnwind, ih]
  | case3 refs acc k fst lst content info cs rest st h r ih => simp [refsLoop, h, ih, r]
  | case4 refs acc k fst lst content info cs rest st h ih =>
    simp only [Bool.not_eq_true] at h
    simp [refsLoop, h, ih, refsUnwind, refsStep, takeAllRefs_container refs k fst lst content info cs h]

/-- `takeAllRefs`, with an explicit stack. -/
def takeAllRefsFast (refs : RefMap) (b : Blk) : RefMap × Option Blk :=
  let r := refsLoop refs #[] [b] []
  (r.1, r.2[0]?)

@[csimp] theorem takeAllRefs_eq_fast : @takeAllRefs = @takeAllRefsFast := by
  funext refs b
  simp only [takeAllRefsFast, refsLoop_eq, refsUnwind, List.foldl_cons, List.foldl_nil, refsStep]
  cases takeAllRefs refs b with
  | mk refs' c => cases c <;> simp

/-- How `toBlocksLoop` finishes a container from its children's blocks: a
document or list item is its children's blocks, a block quote holds them, a
list holds them as its items. -/
inductive BFin where
  | flat
  | quote
  | list (d : ListData)

def BFin.finish : BFin → List (List Block) → List Block
  | .flat, xs => xs.flatten
  | .quote, xs => [.quote xs.flatten]
  | .list d, xs => [.list d.ordered d.start d.tight xs]

/-- A container `toBlocksLoop` is inside: how it finishes the container
around (`fin`), its earlier children's blocks, and the children after it. -/
structure BFrame where
  fin : BFin
  acc : Array (List Block)
  rest : List Blk

/-- The size of the blocks left in the frames. -/
noncomputable def bframesSize : List BFrame → Nat
  | [] => 0
  | f :: st => sizeOf f.rest + bframesSize st

/-- `toBlocks` of each of `bs`, after `acc`, finished by `fin`; then each
frame's container. -/
def toBlocksLoop (refs : RefMap) (fin : BFin) (acc : Array (List Block)) : List Blk → List BFrame → List Block
  | [], [] => fin.finish acc.toList
  | [], f :: st => toBlocksLoop refs f.fin (f.acc.push (fin.finish acc.toList)) f.rest st
  | .mk k fst lst content info cs :: rest, st =>
    match k with
    | .document => toBlocksLoop refs .flat #[] cs.toList (⟨fin, acc, rest⟩ :: st)
    | .item _ => toBlocksLoop refs .flat #[] cs.toList (⟨fin, acc, rest⟩ :: st)
    | .quote => toBlocksLoop refs .quote #[] cs.toList (⟨fin, acc, rest⟩ :: st)
    | .list d => toBlocksLoop refs (.list d) #[] cs.toList (⟨fin, acc, rest⟩ :: st)
    | k => toBlocksLoop refs fin (acc.push (toBlocks refs (.mk k fst lst content info cs))) rest st
termination_by bs st => sizeOf bs + bframesSize st
decreasing_by
  all_goals simp only [bframesSize, List.cons.sizeOf_spec, List.nil.sizeOf_spec, Blk.mk.sizeOf_spec]
  all_goals (try have := sizeOf_toList_lt cs)
  all_goals omega

/-- What `toBlocksLoop` builds after a container's blocks: each frame's
container, finished. -/
def toBlocksUnwind (refs : RefMap) : List Block → List BFrame → List Block
  | v, [] => v
  | v, f :: st => toBlocksUnwind refs (f.fin.finish (f.acc.toList ++ v :: f.rest.map (toBlocks refs))) st

theorem toBlocks_children (refs : RefMap) (cs : Array Blk) :
    (cs.attach.toList.flatMap fun ⟨c, _⟩ => toBlocks refs c) = (cs.toList.map (toBlocks refs)).flatten := by
  simp [List.flatMap_def]

theorem toBlocksLoop_eq (refs : RefMap) (fin : BFin) (acc : Array (List Block)) (bs : List Blk) (st : List BFrame) :
    toBlocksLoop refs fin acc bs st = toBlocksUnwind refs (fin.finish (acc.toList ++ bs.map (toBlocks refs))) st := by
  induction fin, acc, bs, st using toBlocksLoop.induct refs <;>
    simp_all [toBlocksLoop, toBlocksUnwind, BFin.finish, toBlocks, List.flatMap_def]

/-- `toBlocks`, with an explicit stack. -/
def toBlocksFast (refs : RefMap) (b : Blk) : List Block := toBlocksLoop refs .flat #[] [b] []

@[csimp] theorem toBlocks_eq_fast : @toBlocks = @toBlocksFast := by
  funext refs b; simp [toBlocksFast, toBlocksLoop_eq, toBlocksUnwind, BFin.finish]

/-- Parses a CommonMark document. -/
def parse (input : String) : List Block := Id.run do
  let lines := splitLines (chars input)
  let mut p : P := {}
  for ln in lines do p := incorporateLine p ln
  for _ in [0:p.stack.size] do p := p.finalize lines.size
  let doc : Blk := .mk .document 1 lines.size "" "" p.stack[0]!.children
  let (refs, doc) := takeAllRefs p.refs doc
  match doc with
  | some d => toBlocks refs d
  | none => []

end Folio.Blocks
