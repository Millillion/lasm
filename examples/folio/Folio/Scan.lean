/-
Scanners: each looks at the characters `a` from position `i` and returns
where the construct it recognizes ends (or `none`). They replace the regular
expressions of commonmark.js 0.31.2 (common.js, inlines.js, blocks.js) one
for one; the comments give the expression each one implements. Every loop is
bounded by the length of the input.
-/
import Folio.Text

namespace Folio.Scan

/-- JavaScript's `.` without the `s` flag: anything but a line terminator. -/
def isDotChar (c : Char) : Bool := !(c == '\n' || c == '\r' || c == ' ' || c == ' ')

/-- Skips characters satisfying `p` from `i`. -/
def skip (a : Array Char) (i : Nat) (p : Char → Bool) : Nat := i + countWhile a i a.size p

/-- `[^…]*` up to the first `c`: the position just after it. -/
def findChar (a : Array Char) (i : Nat) (c : Char) : Option Nat := Id.run do
  for j in [i:a.size] do
    if a[j]! == c then return some (j + 1)
  return none

/-- The first occurrence of `pat` at or after `i`: the position just after it. -/
def findSeq (a : Array Char) (i : Nat) (pat : List Char) : Option Nat := Id.run do
  for j in [i:a.size] do
    if (pat.zipIdx.all fun (c, k) => a[j + k]? == some c) then return some (j + pat.length)
  return none

/-- Whether `a` has `pat` at `i`. -/
def hasAt (a : Array Char) (i : Nat) (pat : List Char) : Bool :=
  pat.zipIdx.all fun (c, k) => a[i + k]? == some c

/-- Like `hasAt`, ignoring ASCII case. -/
def hasAtCI (a : Array Char) (i : Nat) (pat : List Char) : Bool :=
  pat.zipIdx.all fun (c, k) => (a[i + k]?.map asciiLower) == some (asciiLower c)

/-! ## Raw HTML (common.js `reHtmlTag`) -/

def isTagNameChar (c : Char) : Bool := isAsciiAlnum c || c == '-'
def isAttrNameStart (c : Char) : Bool := isAsciiAlpha c || c == '_' || c == ':'
def isAttrNameChar (c : Char) : Bool := isAsciiAlnum c || c == '_' || c == '.' || c == ':' || c == '-'
def isUnquotedChar (c : Char) : Bool :=
  !(c == '"' || c == '\'' || c == '=' || c == '<' || c == '>' || c == '`' || c.toNat ≤ 0x20)

/-- `\s*` (JavaScript's `\s`). -/
def ws (a : Array Char) (i : Nat) : Nat := skip a i isUnicodeSpace

/-- An attribute value: unquoted `[^"'=<>`\x00-\x20]+`, `'[^']*'` or `"[^"]*"`. -/
def attrValue (a : Array Char) (i : Nat) : Option Nat :=
  match a[i]? with
  | some '\'' => findChar a (i + 1) '\''
  | some '"' => findChar a (i + 1) '"'
  | some c => if isUnquotedChar c then some (skip a i isUnquotedChar) else none
  | none => none

/-- One attribute `\s+ name (\s*=\s* value)?`, or `none` (the position does
not move). A `=` not followed by a value fails the whole tag. -/
def attrAt (a : Array Char) (i : Nat) : Option (Option Nat) :=
  let j := ws a i
  if j == i then some none else
  match a[j]? with
  | some c =>
    if !isAttrNameStart c then some none else
    let k := skip a (j + 1) isAttrNameChar
    let m := ws a k
    if a[m]? == some '=' then
      match attrValue a (ws a (m + 1)) with
      | some e => some (some e)
      | none => none
    else some (some k)
  | none => some none

/-- `<` TAGNAME ATTRIBUTE* `\s*/?>`. -/
def openTag (a : Array Char) (i : Nat) : Option Nat := Id.run do
  if !(a[i]? == some '<' && (a[i + 1]?.map isAsciiAlpha).getD false) then return none
  let mut j := skip a (i + 2) isTagNameChar
  for _ in [0:a.size] do
    match attrAt a j with
    | none => return none
    | some none => break
    | some (some k) => j := k
  let k := ws a j
  let k := if a[k]? == some '/' then k + 1 else k
  if a[k]? == some '>' then return some (k + 1) else return none

/-- `</` TAGNAME `\s*>`. -/
def closeTag (a : Array Char) (i : Nat) : Option Nat :=
  if a[i]? == some '<' && a[i + 1]? == some '/' && (a[i + 2]?.map isAsciiAlpha).getD false then
    let k := ws a (skip a (i + 3) isTagNameChar)
    if a[k]? == some '>' then some (k + 1) else none
  else none

/-- `<!-->`, `<!--->` or `<!--` … `-->`. -/
def comment (a : Array Char) (i : Nat) : Option Nat :=
  if hasAt a i "<!--".toList then
    if a[i + 4]? == some '>' then some (i + 5)
    else if hasAt a (i + 4) "->".toList then some (i + 6)
    else findSeq a (i + 4) "-->".toList
  else none

/-- `<?` … `?>`. -/
def processing (a : Array Char) (i : Nat) : Option Nat :=
  if hasAt a i "<?".toList then findSeq a (i + 2) "?>".toList else none

/-- `<!` letters `[^>]*>`. -/
def declaration (a : Array Char) (i : Nat) : Option Nat :=
  if hasAt a i "<!".toList && (a[i + 2]?.map isAsciiAlpha).getD false then findChar a (i + 3) '>' else none

/-- `<![CDATA[` … `]]>`. -/
def cdata (a : Array Char) (i : Nat) : Option Nat :=
  if hasAt a i "<![CDATA[".toList then findSeq a (i + 9) "]]>".toList else none

/-- Raw HTML at `i` (common.js `reHtmlTag`): where it ends. -/
def htmlTag (a : Array Char) (i : Nat) : Option Nat :=
  (openTag a i).orElse fun _ => (closeTag a i).orElse fun _ => (comment a i).orElse fun _ =>
    (processing a i).orElse fun _ => (declaration a i).orElse fun _ => cdata a i

/-! ## Autolinks (inlines.js `reEmailAutolink`, `reAutolink`) -/

def isEmailLocalChar (c : Char) : Bool := isAsciiAlnum c || ".!#$%&'*+/=?^_`{|}~-".toList.contains c

/-- `<local@domain>`: where it ends. -/
def emailAutolink (a : Array Char) (i : Nat) : Option Nat := Id.run do
  if a[i]? != some '<' then return none
  let j := skip a (i + 1) isEmailLocalChar
  if j == i + 1 || a[j]? != some '@' then return none
  let mut k := j + 1
  for _ in [0:a.size] do
    let e := skip a k (fun c => isAsciiAlnum c || c == '-')
    let n := e - k
    if n == 0 || n > 63 || a[k]? == some '-' || a[e - 1]? == some '-' then return none
    match a[e]? with
    | some '.' => k := e + 1
    | some '>' => return some (e + 1)
    | _ => return none
  return none

/-- `<scheme:…>` with a scheme of 2 to 32 characters. -/
def uriAutolink (a : Array Char) (i : Nat) : Option Nat :=
  if a[i]? == some '<' && (a[i + 1]?.map isAsciiAlpha).getD false then
    let j := skip a (i + 2) (fun c => isAsciiAlnum c || c == '.' || c == '+' || c == '-')
    let n := j - (i + 1)
    if 2 ≤ n && n ≤ 32 && a[j]? == some ':' then
      let k := skip a (j + 1) (fun c => !(c == '<' || c == '>' || c.toNat ≤ 0x20))
      if a[k]? == some '>' then some (k + 1) else none
    else none
  else none

/-! ## Links (inlines.js) -/

/-- `reLinkLabel`: `\[(?:[^\\\[\]]|\\.){0,1000}\]`, at most 1001 UTF-16
code units long. Returns the length (0: no label). -/
def linkLabel (a : Array Char) (i : Nat) : Nat := Id.run do
  if a[i]? != some '[' then return 0
  let units (c : Char) : Nat := if c.toNat > 0xFFFF then 2 else 1
  let mut j := i + 1
  let mut u := 0
  for _ in [0:a.size] do
    if u > 999 then return 0
    match a[j]? with
    | none => return 0
    | some ']' => return j + 1 - i
    | some '[' => return 0
    | some '\\' =>
      match a[j + 1]? with
      | some c => j := j + 2; u := u + 1 + units c
      | none => return 0
    | some c => j := j + 1; u := u + units c
  return 0

/-- `reLinkDestinationBraces`: `<(?:[^<>\n\\\x00]|\\.)*>`; where it ends. -/
def destBraces (a : Array Char) (i : Nat) : Option Nat := Id.run do
  if a[i]? != some '<' then return none
  let mut j := i + 1
  for _ in [0:a.size] do
    match a[j]? with
    | none => return none
    | some '>' => return some (j + 1)
    | some '<' | some '\n' | some '\x00' => return none
    | some '\\' =>
      match a[j + 1]? with
      | some c => if isDotChar c then j := j + 2 else return none
      | none => return none
    | some _ => j := j + 1
  return none

/-- A link destination without braces (inlines.js `parseLinkDestination`):
balanced parentheses, no whitespace; where it ends. -/
def destPlain (a : Array Char) (i : Nat) : Option Nat := Id.run do
  let mut j := i
  let mut parens := 0
  let mut last : Option Char := none
  for _ in [0:a.size + 1] do
    last := a[j]?
    match a[j]? with
    | none => break
    | some c =>
      if c == '\\' && (a[j + 1]?.map isEscapable).getD false then
        j := j + 2
      else if c == '(' then j := j + 1; parens := parens + 1
      else if c == ')' then
        if parens < 1 then break
        j := j + 1; parens := parens - 1
      else if isAsciiSpace c then break
      else j := j + 1
  if j == i && last != some ')' then return none
  if parens != 0 then return none
  return some j

/-- `reLinkTitle`: a title in `"…"`, `'…'` or `(…)`; where it ends. -/
def linkTitle (a : Array Char) (i : Nat) : Option Nat := Id.run do
  let close ← match a[i]? with
    | some '"' => pure '"'
    | some '\'' => pure '\''
    | some '(' => pure ')'
    | _ => return none
  let mut j := i + 1
  for _ in [0:a.size] do
    match a[j]? with
    | none => return none
    | some c =>
      if c == close then return some (j + 1)
      else if c == '\\' then
        if a[j + 1]?.isSome then j := j + 2 else return none
      else if c == '\x00' || (close == ')' && c == '(') then return none
      else j := j + 1
  return none

/-- `reSpnl`: ` *(?:\n *)?`. -/
def spnl (a : Array Char) (i : Nat) : Nat :=
  let j := skip a i (· == ' ')
  if a[j]? == some '\n' then skip a (j + 1) (· == ' ') else j

end Folio.Scan
