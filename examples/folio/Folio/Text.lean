/-
Characters and strings for the CommonMark renderer: the character classes,
case folding, character references, backslash escapes, and the URL
normalization CommonMark's reference implementation (commonmark.js 0.31.2)
applies. Everything here is total: loops have explicit bounds, recursion is
structural or well founded.

The algorithms follow commonmark.js (BSD-2-Clause, Copyright (c) 2014, John
MacFarlane) and mdurl (MIT, Vitaly Puzrin and Alex Kocharin); see NOTICE.md.
-/
import Folio.Tables

namespace Folio

/-! ## Small helpers -/

/-- The value of a hexadecimal digit. -/
def hexVal (c : Char) : Option Nat :=
  if '0' ≤ c ∧ c ≤ '9' then some (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
  else if 'A' ≤ c ∧ c ≤ 'F' then some (c.toNat - 'A'.toNat + 10)
  else none

def parseHex (s : String) : Nat := s.foldl (fun n c => n * 16 + (hexVal c).getD 0) 0

def isDigit (c : Char) : Bool := '0' ≤ c && c ≤ '9'
def isAsciiAlpha (c : Char) : Bool := ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z')
def isAsciiAlnum (c : Char) : Bool := isDigit c || isAsciiAlpha c
def isHexDigit (c : Char) : Bool := (hexVal c).isSome
def asciiLower (c : Char) : Char := if 'A' ≤ c && c ≤ 'Z' then Char.ofNat (c.toNat + 32) else c

/-- The characters of a string, as an array. -/
def chars (s : String) : Array Char := s.toList.toArray

/-- The string of the characters `a[i]`, …, `a[j-1]`. -/
def slice (a : Array Char) (i j : Nat) : String := String.ofList (a.extract i j).toList

/-- `a[i]`, or `none` past the end. -/
@[inline] def at? (a : Array Char) (i : Nat) : Option Char := a[i]?

/-- Binary search in an array sorted by key: the value whose key compares
`.eq` with `cmp`. -/
def bsearch {α β : Type} (arr : Array (α × β)) (cmp : α → Ordering) : Option β :=
  go 0 arr.size
where
  go (lo hi : Nat) : Option β :=
    if _h : lo < hi then
      let mid := (lo + hi) / 2
      match arr[mid]? with
      | none => none
      | some (k, v) =>
        match cmp k with
        | .lt => go lo mid
        | .gt => go (mid + 1) hi
        | .eq => some v
    else none
  termination_by hi - lo
  decreasing_by all_goals omega

def codePoints (s : String) : String :=
  String.ofList ((s.splitOn ",").map (fun h => Char.ofNat (parseHex h)))

/-! ## The tables (Folio/Tables.lean, generated) -/

def punctRanges : Array (Nat × Nat) :=
  ((Tables.punctuationData.splitOn "\n").map fun l =>
    match l.splitOn " " with
    | [a, b] => (parseHex a, parseHex b)
    | _ => (0, 0)).toArray

def caseTable : Array (Nat × String) :=
  ((Tables.caseData.splitOn "\n").map fun l =>
    match l.splitOn " " with
    | [a, b] => (parseHex a, codePoints b)
    | _ => (0, "")).toArray

def entityTable : Array (String × String) :=
  ((Tables.entityData.splitOn "\n").map fun l =>
    match l.splitOn " " with
    | [a, b] => (a, codePoints b)
    | _ => ("", "")).toArray

/-- CommonMark's Unicode punctuation: ASCII punctuation, and the general
categories P and S. -/
def isPunct (c : Char) : Bool :=
  (bsearch (punctRanges.map fun (a, b) => ((a, b), ())) fun (a, b) =>
    if c.toNat < a then .lt else if c.toNat > b then .gt else .eq).isSome

/-- Whitespace as JavaScript's `\s` matches it, which commonmark.js uses for
"Unicode whitespace". -/
def isUnicodeSpace (c : Char) : Bool :=
  let n := c.toNat
  n == 9 || n == 10 || n == 11 || n == 12 || n == 13 || n == 32 || n == 0xA0 || n == 0x1680 ||
  (0x2000 ≤ n && n ≤ 0x200A) || n == 0x2028 || n == 0x2029 || n == 0x202F || n == 0x205F ||
  n == 0x3000 || n == 0xFEFF

/-- Space, tab, newline, vertical tab, form feed, carriage return. -/
def isAsciiSpace (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\x0b' || c == '\x0c' || c == '\r'

def isSpaceOrTab (c : Char) : Bool := c == ' ' || c == '\t'

/-- ASCII punctuation that a backslash escapes. -/
def isEscapable (c : Char) : Bool := "!\"#$%&'()*+,./:;<=>?@[\\]^_`{|}~-".toList.contains c

/-- `.toLowerCase().toUpperCase()` of one character, as JavaScript computes it. -/
def foldChar (c : Char) : String :=
  match bsearch caseTable (fun k => compare c.toNat k) with
  | some s => s
  | none => String.singleton c

/-! ## Trimming -/

/-- Drops the characters satisfying `p` from both ends. -/
def trimBy (p : Char → Bool) (s : String) : String :=
  String.ofList (((s.toList.dropWhile p).reverse.dropWhile p).reverse)

/-- JavaScript's `String.prototype.trim`. -/
def jsTrim (s : String) : String := trimBy isUnicodeSpace s

/-! ## Escaping for HTML -/

/-- The escape of one character in HTML text or an attribute value: `&`,
`<`, `>` and `"` become character references, everything else is itself. -/
def escapeChar : Char → List Char
  | '&' => "&amp;".toList
  | '<' => "&lt;".toList
  | '>' => "&gt;".toList
  | '"' => "&quot;".toList
  | c => [c]

/-- Escapes text for HTML (commonmark.js's `escapeXml`). -/
def escapeList : List Char → List Char
  | [] => []
  | c :: cs => escapeChar c ++ escapeList cs

def escapeHtml (s : String) : String := String.ofList (escapeList s.toList)

/-! ## Character references -/

/-- The character a numeric reference stands for (the `entities` package's
`decodeCodePoint`): U+FFFD for 0, surrogates and values past U+10FFFF, the
Windows-1252 reading for 0x80–0x9F as HTML5 specifies. -/
def decodeCodePoint (n : Nat) : String :=
  let w1252 : List (Nat × Nat) := [(128, 8364), (130, 8218), (131, 402), (132, 8222), (133, 8230),
    (134, 8224), (135, 8225), (136, 710), (137, 8240), (138, 352), (139, 8249), (140, 338), (142, 381),
    (145, 8216), (146, 8217), (147, 8220), (148, 8221), (149, 8226), (150, 8211), (151, 8212), (152, 732),
    (153, 8482), (154, 353), (155, 8250), (156, 339), (158, 382), (159, 376)]
  if n == 0 || (0xD800 ≤ n && n ≤ 0xDFFF) || n > 0x10FFFF then "�"
  else match w1252.lookup n with
    | some m => String.singleton (Char.ofNat m)
    | none => String.singleton (Char.ofNat n)

/-- Counts the characters satisfying `p` from position `i`, at most `max`. -/
def countWhile (a : Array Char) (i max : Nat) (p : Char → Bool) : Nat := Id.run do
  let mut n := 0
  for _ in [0:max] do
    match a[i + n]? with
    | some c => if p c then n := n + 1 else break
    | none => break
  return n

/-- An entity or numeric character reference at position `i` (which holds
`&`): what it decodes to, and its length. A well-formed name that is not
an HTML5 entity decodes to itself, as in commonmark.js. -/
def entityAt (a : Array Char) (i : Nat) : Option (String × Nat) :=
  if a[i]? != some '&' then none
  else if a[i + 1]? == some '#' then
    if a[i + 2]? == some 'x' || a[i + 2]? == some 'X' then
      let n := countWhile a (i + 3) 7 isHexDigit
      if 1 ≤ n && n ≤ 6 && a[i + 3 + n]? == some ';' then
        some (decodeCodePoint (parseHex (slice a (i + 3) (i + 3 + n))), n + 4)
      else none
    else
      let n := countWhile a (i + 2) 8 isDigit
      if 1 ≤ n && n ≤ 7 && a[i + 2 + n]? == some ';' then
        some (decodeCodePoint ((slice a (i + 2) (i + 2 + n)).foldl (fun m c => m * 10 + (c.toNat - 48)) 0), n + 3)
      else none
  else
    match a[i + 1]? with
    | some c =>
      if isAsciiAlpha c then
        let n := countWhile a (i + 2) 32 isAsciiAlnum
        if 1 ≤ n && n ≤ 31 && a[i + 2 + n]? == some ';' then
          let name := slice a (i + 1) (i + 2 + n)
          match bsearch entityTable (fun k => compare name k) with
          | some v => some (v, n + 3)
          | none => some (slice a i (i + 3 + n), n + 3)
        else none
      else none
    | none => none

/-- Replaces backslash escapes and character references
(commonmark.js's `unescapeString`). -/
def unescape (s : String) : String := Id.run do
  let a := chars s
  let mut out := ""
  let mut i := 0
  for _ in [0:a.size] do
    if i ≥ a.size then break
    let c := a[i]!
    if c == '\\' && (a[i + 1]?.map isEscapable).getD false then
      out := out.push a[i + 1]!
      i := i + 2
    else if c == '&' then
      match entityAt a i with
      | some (v, n) => out := out ++ v; i := i + n
      | none => out := out.push c; i := i + 1
    else
      out := out.push c
      i := i + 1
  return out

/-! ## URLs -/

def hexDigitUpper (n : Nat) : Char := "0123456789ABCDEF".toList.getD n '0'

def percent (b : Nat) : String := (("%".push (hexDigitUpper (b / 16))).push (hexDigitUpper (b % 16)))

/-- Percent-encodes what does not belong in a URL, keeping existing
`%XX` escapes (mdurl's `encode` with its default characters, as
commonmark.js's `normalizeURI` calls it). -/
def normalizeURI (s : String) : String := Id.run do
  let a := chars s
  let keep := ";/?:@&=+$,-_.!~*'()#".toList
  let mut out := ""
  let mut i := 0
  for _ in [0:a.size] do
    if i ≥ a.size then break
    let c := a[i]!
    if c == '%' && i + 2 < a.size && isHexDigit a[i + 1]! && isHexDigit a[i + 2]! then
      out := ((out.push c).push a[i + 1]!).push a[i + 2]!
      i := i + 3
    else
      if isAsciiAlnum c || keep.contains c then out := out.push c
      else if c.toNat < 128 then out := out ++ percent c.toNat
      else
        for b in (String.singleton c).toUTF8.toList do out := out ++ percent b.toNat
      i := i + 1
  return out

/-- Link-label normalization (commonmark.js's `normalizeReference`): strip
the brackets, trim, collapse runs of space, tab and line endings to one
space, and case-fold. -/
def normalizeLabel (label : String) : String := Id.run do
  let inner := jsTrim (String.ofList ((label.toList.drop 1).dropLast))
  let mut out := ""
  let mut space := false
  for c in inner.toList do
    if c == ' ' || c == '\t' || c == '\r' || c == '\n' then space := true
    else
      if space then out := out.push ' '
      space := false
      out := out ++ foldChar c
  return out

end Folio
