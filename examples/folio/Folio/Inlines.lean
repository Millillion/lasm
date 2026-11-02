/-
Inline parsing (CommonMark 0.31.2 §6), a port of commonmark.js 0.31.2's
inlines.js (BSD-2-Clause, Copyright (c) 2014, John MacFarlane; NOTICE.md).

commonmark.js builds a linked list of nodes and rewires it when it finds
emphasis. Here the parser produces a flat array of tokens, and the
delimiter algorithm (§6.2, "process emphasis") only records, on each
delimiter run, which emphasis it opens and closes; `build` then turns the
tokens into a tree with a stack. Links are built as soon as their closing
bracket is found, as in commonmark.js. Every loop is bounded by the length
of the input, so the parser is total.
-/
import Std.Data.HashMap
import Folio.Ast
import Folio.Scan

namespace Folio.Inlines
open Scan

abbrev RefMap := Std.HashMap String LinkRef

/-- A token: a finished inline, or a run of `*` or `_` with what it opens
and closes (`true` for strong emphasis), each list most recent match
first. -/
inductive Tok where
  | node (i : Inline)
  | run (c : Char) (n : Nat) (opens closes : List Bool)
  deriving Inhabited

structure Delim where
  tok : Nat
  cc : Char
  num : Nat
  orig : Nat
  canOpen : Bool
  canClose : Bool
  prev : Option Nat
  next : Option Nat
  deriving Inhabited

structure Bracket where
  tok : Nat
  prevDelim : Option Nat
  index : Nat
  image : Bool
  /-- Its position in the bracket stack (0 at the bottom). -/
  depth : Nat
  bracketAfter : Bool := false

structure St where
  toks : Array Tok := #[]
  delims : Array Delim := #[]
  top : Option Nat := none
  brackets : List Bracket := []
  /-- Link brackets below this depth are inactive (a link was made after
  them; CommonMark's "set all [ delimiters before the opener to inactive",
  in constant time). -/
  linkFloor : Nat := 0
  pos : Nat := 0

/-- The first index of a sorted array whose element is at least `x`. -/
def bsearchFirst (arr : Array Nat) (x : Nat) : Nat := go 0 arr.size
where
  go (lo hi : Nat) : Nat :=
    if _h : lo < hi then
      let mid := (lo + hi) / 2
      if arr[mid]! < x then go (mid + 1) hi else go lo mid
    else lo
  termination_by hi - lo
  decreasing_by all_goals omega

/-- Turns tokens into inlines: each run closes, shows its remaining
characters, then opens (outermost first). -/
def build (toks : Array Tok) : List Inline := Id.run do
  let wrap (strong : Bool) (cs : Array Inline) : Inline :=
    if strong then .strong cs.toList else .emph cs.toList
  let mut frames : Array (Bool × Array Inline) := #[(false, #[])]
  for t in toks do
    match t with
    | .node i => frames := frames.modify (frames.size - 1) fun (s, cs) => (s, cs.push i)
    | .run c n opens closes =>
      for _ in closes.reverse do
        if frames.size > 1 then
          let (s, cs) := frames.back!
          frames := frames.pop
          frames := frames.modify (frames.size - 1) fun (s', cs') => (s', cs'.push (wrap s cs))
      if n > 0 then
        frames := frames.modify (frames.size - 1) fun (s, cs) => (s, cs.push (.text (String.ofList (List.replicate n c))))
      for st in opens do frames := frames.push (st, #[])
  for _ in [0:frames.size] do
    if frames.size > 1 then
      let (s, cs) := frames.back!
      frames := frames.pop
      frames := frames.modify (frames.size - 1) fun (s', cs') => (s', cs'.push (wrap s cs))
  return (frames[0]?.map (·.2.toList)).getD []

namespace St

def push (s : St) (i : Inline) : St := { s with toks := s.toks.push (.node i) }
def text (s : St) (t : String) : St := s.push (.text t)

def getD (s : St) (i : Nat) : Delim := s.delims[i]!
def setD (s : St) (i : Nat) (f : Delim → Delim) : St := { s with delims := s.delims.modify i f }

/-- Removes a delimiter from the stack (inlines.js `removeDelimiter`). -/
def removeDelim (s : St) (i : Nat) : St := Id.run do
  let d := s.getD i
  let mut s := s
  if let some p := d.prev then s := s.setD p fun x => { x with next := d.next }
  match d.next with
  | none => s := { s with top := d.prev }
  | some n => s := s.setD n fun x => { x with prev := d.prev }
  return s

/-- Records that `strong` (or emphasis) is opened at the opener's token and
closed at the closer's, and takes the characters from both runs. -/
def useDelims (s : St) (opener closer use : Nat) : St := Id.run do
  let o := s.getD opener
  let c := s.getD closer
  let strong := use == 2
  let toks := s.toks.modify o.tok fun
    | .run ch n opens closes => .run ch (n - use) (strong :: opens) closes
    | t => t
  let toks := toks.modify c.tok fun
    | .run ch n opens closes => .run ch (n - use) opens (strong :: closes)
    | t => t
  return { s with toks }

/-- CommonMark's "process emphasis" (§6.2; inlines.js `processEmphasis`). -/
def processEmphasis (s : St) (bottom : Option Nat) (bound : Nat) : St := Id.run do
  let mut s := s
  let mut openersBottom : Array (Option Nat) := Array.replicate 14 bottom
  -- the first delimiter above the bottom (none when the bottom is the top:
  -- commonmark.js then walks the whole stack to find nothing)
  let mut closer := if s.top == bottom then none else s.top
  for _ in [0:s.delims.size] do
    match closer with
    | some c => if (s.getD c).prev != bottom then closer := (s.getD c).prev else break
    | none => break
  for _ in [0:bound] do
    let some ci := closer | break
    let cd := s.getD ci
    if !cd.canClose then
      closer := cd.next
    else
      let idx := (if cd.cc == '_' then 2 else 8) + (if cd.canOpen then 3 else 0) + cd.orig % 3
      let mut opener := cd.prev
      let mut found := false
      for _ in [0:s.delims.size] do
        match opener with
        | none => break
        | some oi =>
          -- delimiters are numbered in text order, so "at or below a bottom"
          -- is a comparison (commonmark.js compares for identity, and walks
          -- past a bottom that has since been removed: issue #389)
          let below (b : Option Nat) : Bool := match b with
            | some bi => oi ≤ bi
            | none => false
          if below bottom || below openersBottom[idx]! then break
          let od := s.getD oi
          let oddMatch := (cd.canOpen || od.canClose) && cd.orig % 3 != 0 && (od.orig + cd.orig) % 3 == 0
          if od.cc == cd.cc && od.canOpen && !oddMatch then
            found := true
            break
          opener := od.prev
      let oldCloser := ci
      if !found then
        closer := cd.next
      else
        let oi := opener.getD 0
        let od := s.getD oi
        let use := if cd.num ≥ 2 && od.num ≥ 2 then 2 else 1
        s := s.useDelims oi ci use
        s := s.setD oi fun d => { d with num := d.num - use }
        s := s.setD ci fun d => { d with num := d.num - use }
        -- remove the delimiters between opener and closer
        if (s.getD oi).next != some ci then
          s := s.setD oi fun d => { d with next := some ci }
          s := s.setD ci fun d => { d with prev := some oi }
        if (s.getD oi).num == 0 then s := s.removeDelim oi
        if (s.getD ci).num == 0 then
          let nxt := (s.getD ci).next
          s := s.removeDelim ci
          closer := nxt
      if !found then
        openersBottom := openersBottom.set! idx (s.getD oldCloser).prev
        if !(s.getD oldCloser).canOpen then s := s.removeDelim oldCloser
  -- remove every delimiter above the bottom
  for _ in [0:s.delims.size] do
    match s.top with
    | some t => if s.top != bottom then s := s.removeDelim t else break
    | none => break
  return s

end St

/-- `scanDelims`: the number of `c` at `pos`, and whether the run can open
and close emphasis (§6.2, left- and right-flanking). -/
def scanDelims (a : Array Char) (pos : Nat) (c : Char) : Nat × Bool × Bool :=
  let n := countWhile a pos a.size (· == c)
  let before := if pos == 0 then '\n' else a[pos - 1]!
  let after := a[pos + n]?.getD '\n'
  let afterWs := isUnicodeSpace after
  let afterP := isPunct after
  let beforeWs := isUnicodeSpace before
  let beforeP := isPunct before
  let left := !afterWs && (!afterP || beforeWs || beforeP)
  let right := !beforeWs && (!beforeP || afterWs || afterP)
  if c == '_' then (n, left && (!right || beforeP), right && (!left || afterP))
  else (n, left, right)

/-- A link destination at `i` (inlines.js `parseLinkDestination`): the
normalized URL and where it ends. -/
def linkDest (a : Array Char) (i : Nat) : Option (String × Nat) :=
  match destBraces a i with
  | some e => some (normalizeURI (unescape (slice a (i + 1) (e - 1))), e)
  | none =>
    if a[i]? == some '<' then none
    else (destPlain a i).map fun e => (normalizeURI (unescape (slice a i e)), e)

/-- A link title at `i`, unescaped, and where it ends. -/
def linkTitleAt (a : Array Char) (i : Nat) : Option (String × Nat) :=
  (linkTitle a i).map fun e => (unescape (slice a (i + 1) (e - 1)), e)

/-- `reMain`: a run of characters with no special meaning. -/
def isMainChar (c : Char) : Bool :=
  !(c == '\n' || c == '`' || c == '[' || c == ']' || c == '\\' || c == '!' || c == '<' || c == '&' ||
    c == '*' || c == '_' || c == '\'' || c == '"')

/-! ## Facts about the text, computed once

They keep the parser linear on the CommonMark pathological inputs: without
them, each backtick run, each `<!--`, and each `](` could scan to the end of
the text again (commonmark.js does, and takes minutes on some of them). -/

structure Pre where
  /-- For each length, where the maximal runs of backticks of that length start, in order. -/
  ticks : Std.HashMap Nat (Array Nat) := {}
  /-- One past the last start of `-->`, `?>`, `]]>` and `>` (0: none). -/
  lastComment : Nat := 0
  lastPi : Nat := 0
  lastCdata : Nat := 0
  lastGt : Nat := 0
  /-- For link destinations: the first ASCII whitespace at or after each
  position, and the first position after it where the parenthesis balance
  falls below the balance there (escaped parentheses do not count). -/
  stop : Array Nat := #[]
  less : Array Nat := #[]
  /-- The balance of unescaped parentheses before each position. -/
  bal : Array Int := #[]

/-- The last position where `pat` starts, plus one (0: nowhere). -/
def lastStart (a : Array Char) (pat : List Char) : Nat := Id.run do
  let mut last := 0
  for i in [0:a.size] do
    if hasAt a i pat then last := i + 1
  return last

def Pre.of (a : Array Char) : Pre := Id.run do
  let n := a.size
  -- backtick runs
  let mut ticks : Std.HashMap Nat (Array Nat) := {}
  let mut i := 0
  for _ in [0:n] do
    if i ≥ n then break
    if a[i]! == '`' then
      let r := countWhile a i n (· == '`')
      ticks := ticks.insert r ((ticks.getD r #[]).push i)
      i := i + r
    else i := i + 1
  -- escapes (left to right, as a scan starting after a non-backslash sees
  -- them), then the balance before each position
  let mut bal : Array Int := Array.mkEmpty (n + 1)
  let mut b : Int := 0
  let mut j := 0
  let mut escaped := Array.replicate n false
  for _ in [0:n] do
    if j ≥ n then break
    if a[j]! == '\\' && (a[j + 1]?.map isEscapable).getD false then
      escaped := escaped.set! (j + 1) true
      j := j + 2
    else j := j + 1
  for k in [0:n] do
    bal := bal.push b
    if !escaped[k]! then
      if a[k]! == '(' then b := b + 1
      else if a[k]! == ')' then b := b - 1
  bal := bal.push b
  -- the first position after each where the balance is lower (n + 1: none)
  let mut less := Array.replicate (n + 1) (n + 1)
  let mut stack : Array Nat := #[]
  for t in [0:n + 1] do
    let k := n - t
    for _ in [0:stack.size] do
      match stack.back? with
      | some top => if bal[top]! ≥ bal[k]! then stack := stack.pop else break
      | none => break
    less := less.set! k (stack.back?.getD (n + 1))
    stack := stack.push k
  -- the next ASCII whitespace
  let mut stop := Array.replicate (n + 1) n
  for t in [0:n] do
    let k := n - 1 - t
    stop := stop.set! k (if isAsciiSpace a[k]! then k else stop[k + 1]!)
  return { ticks, stop, less, bal, lastComment := lastStart a "-->".toList, lastPi := lastStart a "?>".toList,
           lastCdata := lastStart a "]]>".toList, lastGt := lastStart a ">".toList }

/-- `destPlain` in constant time: the destination ends at the first ASCII
whitespace, or at the first unescaped `)` that would close a parenthesis
opened before it; it fails if parentheses are left open, or if it is empty
and not followed by `)`. Requires that `a[i - 1]` is not a backslash. -/
def Pre.destPlain (pre : Pre) (a : Array Char) (i : Nat) : Option Nat :=
  let n := a.size
  let s := pre.stop[i]!
  let j := pre.less[i]!
  if j ≤ n && j - 1 < s then some (j - 1)
  else if s == i then none
  else if pre.bal[s]! != pre.bal[i]! then none
  else some s

/-- A link destination at `i`, with the facts about the text. -/
def linkDestPre (pre : Pre) (a : Array Char) (i : Nat) : Option (String × Nat) :=
  match destBraces a i with
  | some e => some (normalizeURI (unescape (slice a (i + 1) (e - 1))), e)
  | none =>
    if a[i]? == some '<' then none
    else (pre.destPlain a i).map fun e => (normalizeURI (unescape (slice a i e)), e)

/-- Raw HTML at `i`, with the facts about the text: a comment, processing
instruction, CDATA section or declaration is only looked for when its end
occurs later in the text. -/
def htmlTagPre (pre : Pre) (a : Array Char) (i : Nat) : Option Nat :=
  (openTag a i).orElse fun _ => (closeTag a i).orElse fun _ =>
    (if pre.lastComment > i then comment a i
     else if hasAt a i "<!--".toList && (a[i + 4]? == some '>' || hasAt a (i + 4) "->".toList) then comment a i
     else none).orElse fun _ =>
    (if pre.lastPi > i then processing a i else none).orElse fun _ =>
    (if pre.lastGt > i then declaration a i else none).orElse fun _ =>
    (if pre.lastCdata > i then cdata a i else none)

def addBracket (s : St) (index : Nat) (image : Bool) : St :=
  let brackets := match s.brackets with
    | b :: rest => { b with bracketAfter := true } :: rest
    | [] => []
  let depth := (s.brackets.head?.map (·.depth + 1)).getD 0
  let b : Bracket := { tok := s.toks.size - 1, prevDelim := s.top, index := index, image := image, depth := depth }
  { s with brackets := b :: brackets }

/-- What follows a `]` whose opener is `op`: an inline link's destination,
title and end, or a reference's (inlines.js `parseCloseBracket`). `startpos`
is just after the `]`. -/
def findLink (refs : RefMap) (pre : Pre) (a : Array Char) (op : Bracket) (startpos : Nat) :
    Option (String × String × Nat) := Id.run do
  -- an inline link: ( destination title? )
  if a[startpos]? == some '(' then
    let p := spnl a (startpos + 1)
    if let some (dest, p) := linkDestPre pre a p then
      let p := spnl a p
      let (title, p) :=
        if p > 0 && (a[p - 1]?.map isAsciiSpace).getD false then
          match linkTitleAt a p with
          | some (t, e) => (t, e)
          | none => ("", p)
        else ("", p)
      let p := spnl a p
      if a[p]? == some ')' then return some (dest, title, p + 1)
  -- a reference link: full, collapsed or shortcut
  let n := linkLabel a startpos
  let label :=
    if n > 2 then some (slice a startpos (startpos + n))
    else if !op.bracketAfter then some (slice a op.index startpos)
    else none
  let endPos := if n == 0 then startpos else startpos + n
  match label with
  | some l =>
    match refs.get? (normalizeLabel l) with
    | some r => return some (r.dest, r.title, endPos)
    | none => return none
  | none => return none

/-- A `]` (inlines.js `parseCloseBracket`). -/
def closeBracket (refs : RefMap) (pre : Pre) (a : Array Char) (s : St) : St :=
  let startpos := s.pos + 1
  match s.brackets with
  | [] => { s.text "]" with pos := startpos }
  | op :: rest =>
    if !op.image && op.depth < s.linkFloor then
      { s.text "]" with brackets := rest, linkFloor := min s.linkFloor op.depth, pos := startpos }
    else
      match findLink refs pre a op startpos with
      | none => { s.text "]" with brackets := rest, pos := startpos, linkFloor := min s.linkFloor op.depth }
      | some (dest, title, endPos) =>
        let s := s.processEmphasis op.prevDelim (2 * a.size + 2)
        let floor := if op.image then min s.linkFloor op.depth else op.depth
        -- take the tokens out of `s` so that shrinking them does not copy them
        let toks := s.toks
        let s := { s with toks := #[], brackets := rest, linkFloor := floor, pos := endPos }
        let children := build (toks.extract (op.tok + 1) toks.size)
        let node := if op.image then Inline.image dest title children else .link dest title children
        { s with toks := (toks.shrink op.tok).push (.node node) }

/-- A line ending (inlines.js `parseNewline`): a hard break after two
spaces, otherwise a soft break; spaces at the end of the line and at the
start of the next are dropped. -/
def newline (a : Array Char) (s : St) : St :=
  let s := { s with pos := s.pos + 1 }
  let (s, hard) := match s.toks.back? with
    | some (.node (.text t)) =>
      if t.endsWith " " then
        let cs := t.toList
        let hard := cs.length ≥ 2 && cs[cs.length - 2]! == ' '
        ({ s with toks := s.toks.set! (s.toks.size - 1) (.node (.text (String.ofList (cs.reverse.dropWhile (· == ' ')).reverse))) }, hard)
      else (s, false)
    | _ => (s, false)
  let s := s.push (if hard then .linebreak else .softbreak)
  { s with pos := skip a s.pos (· == ' ') }

/-- One inline element at `s.pos` (inlines.js `parseInline`). -/
def step (refs : RefMap) (pre : Pre) (a : Array Char) (s : St) : St := Id.run do
  let some c := a[s.pos]? | return s
  match c with
  | '\n' => return newline a s
  | '\\' =>
    match a[s.pos + 1]? with
    | some '\n' => return { s.push .linebreak with pos := s.pos + 2 }
    | some d => if isEscapable d then return { s.text (String.singleton d) with pos := s.pos + 2 }
                else return { s.text "\\" with pos := s.pos + 1 }
    | none => return { s.text "\\" with pos := s.pos + 1 }
  | '`' =>
    let n := countWhile a s.pos a.size (· == '`')
    let start := s.pos + n
    -- the first run of exactly n backticks after the opening one
    let runs := pre.ticks.getD n #[]
    let k := (bsearchFirst runs start)
    match runs[k]? with
    | some e =>
      let contents := (slice a start e).map fun ch => if ch == '\n' then ' ' else ch
      let cs := contents.toList
      let contents :=
        if cs.length > 0 && cs.any (· != ' ') && cs.head! == ' ' && cs.getLast! == ' ' then
          String.ofList (cs.drop 1).dropLast
        else contents
      return { s.push (.code contents) with pos := e + n }
    | none => return { s.text (String.ofList (List.replicate n '`')) with pos := start }
  | '*' | '_' =>
    let (n, canOpen, canClose) := scanDelims a s.pos c
    let tok := s.toks.size
    let s := { s with toks := s.toks.push (.run c n [] []), pos := s.pos + n }
    if canOpen || canClose then
      let i := s.delims.size
      let d : Delim := { tok, cc := c, num := n, orig := n, canOpen, canClose, prev := s.top, next := none }
      let s := { s with delims := s.delims.push d, top := some i }
      match d.prev with
      | some p => return s.setD p fun x => { x with next := some i }
      | none => return s
    return s
  | '[' =>
    let s := { s.text "[" with pos := s.pos + 1 }
    return addBracket s (s.pos - 1) false
  | '!' =>
    if a[s.pos + 1]? == some '[' then
      let s := { s.text "![" with pos := s.pos + 2 }
      return addBracket s (s.pos - 1) true
    return { s.text "!" with pos := s.pos + 1 }
  | ']' => return closeBracket refs pre a s
  | '<' =>
    if let some e := emailAutolink a s.pos then
      let d := slice a (s.pos + 1) (e - 1)
      return { s.push (.link (normalizeURI ("mailto:" ++ d)) "" [.text d]) with pos := e }
    if let some e := uriAutolink a s.pos then
      let d := slice a (s.pos + 1) (e - 1)
      return { s.push (.link (normalizeURI d) "" [.text d]) with pos := e }
    if let some e := htmlTagPre pre a s.pos then
      return { s.push (.html (slice a s.pos e)) with pos := e }
    return { s.text "<" with pos := s.pos + 1 }
  | '&' =>
    match entityAt a s.pos with
    | some (v, n) => return { s.text v with pos := s.pos + n }
    | none => return { s.text "&" with pos := s.pos + 1 }
  | _ =>
    let e := skip a s.pos isMainChar
    if e > s.pos then return { s.text (slice a s.pos e) with pos := e }
    return { s.text (String.singleton c) with pos := s.pos + 1 }

/-- The inlines of a paragraph's or heading's text (already trimmed). -/
def parse (refs : RefMap) (text : String) : List Inline := Id.run do
  let a := chars text
  let pre := Pre.of a
  let mut s : St := {}
  for _ in [0:a.size + 1] do
    if s.pos ≥ a.size then break
    s := step refs pre a s
  s := s.processEmphasis none (2 * a.size + 2)
  return build s.toks

/-! ## Link reference definitions (inlines.js `parseReference`) -/

/-- A link reference definition starting at `st` (the start of the
paragraph's remaining text): where it ends, and its normalized label and
reference. -/
def reference (a : Array Char) (st : Nat) : Option (Nat × String × LinkRef) := Id.run do
  let n := linkLabel a st
  if n == 0 then return none
  let raw := slice a st (st + n)
  if a[st + n]? != some ':' then return none
  let p := spnl a (st + n + 1)
  let some (dest, p) := linkDest a p | return none
  let beforeTitle := p
  let q := spnl a p
  -- 0: no title tried, 1: tried and failed, 2: found
  let (state, title, p) :=
    if q != beforeTitle then
      match linkTitleAt a q with
      | some (t, e) => (2, t, e)
      | none => (1, "", beforeTitle)
    else (0, "", q)
  let atEnd (i : Nat) : Option Nat :=
    let j := skip a i (· == ' ')
    if a[j]? == some '\n' then some (j + 1) else if j ≥ a.size then some j else none
  let (title, endPos) ← match atEnd p with
    | some e => pure (title, e)
    | none =>
      if state == 1 then return none
      match atEnd beforeTitle with
      | some e => pure ("", e)
      | none => return none
  let label := normalizeLabel raw
  if label == "" then return none
  return some (endPos, label, { dest, title })

end Folio.Inlines
