/-
The sync protocol's wire format: plain text, one line per item.

A client's message (an HTTP request body, or a WebSocket text frame):

    tandem 1
    sync <cursor>
    <op>
    …

The server's answer (and what it pushes over a WebSocket):

    tandem 1
    ops <from> <to>
    <op>
    …

or `tandem 1` then `error <reason>`. An operation is one line:
`i <c> <r> R <code point>` inserts a child of the root, `i <c> <r> <pc> <pr> L|R
<code point>` a child of the node `(pc, pr)`, and `d <c> <r>` deletes. Numbers
are decimal, at most 15 digits.

Every message comes from someone untrusted: the parsers are total functions
that accept only well-formed, bounded input (`Spec.decode_bounded`,
`Spec.decode_valid`) and reject everything else with a reason.
-/
import Tandem.Basic

namespace Tandem.Wire

/-- Every number on the wire is below this (and so exact in JavaScript). -/
def maxNum : Nat := 1000000000000000

/-- At most this many operations in one message. -/
def maxOps : Nat := 5000

/-- An id both of whose numbers are in range. -/
def okId (i : Id) : Bool := i.c < maxNum && i.r < maxNum

/-- An operation the server accepts: in range and, for an insertion, a node
that can be part of the tree. -/
def okOp : Op → Bool
  | .ins n => okId n.id && (match n.parent with | none => true | some p => okId p) && n.valid
  | .del i => okId i

/-- Splits at every `sep` (tail-recursive). -/
def splitBy (sep : Char) (s : List Char) : List (List Char) := go s [] []
where
  go : List Char → List Char → List (List Char) → List (List Char)
    | [], cur, acc => (cur.reverse :: acc).reverse
    | c :: cs, cur, acc => if c = sep then go cs [] (cur.reverse :: acc) else go cs (c :: cur) acc

/-- A decimal number: 1 to 15 digits, below `maxNum`. -/
def num? (s : List Char) : Option Nat :=
  if s.isEmpty || s.length > 15 || !s.all Char.isDigit then none
  else
    let n := s.foldl (fun n c => 10 * n + (c.toNat - 48)) 0
    if n < maxNum then some n else none

def side? : List Char → Option Side
  | ['L'] => some .L
  | ['R'] => some .R
  | _ => none

/-- A code point that is a character. -/
def char? (s : List Char) : Option Char := do
  let n ← num? s
  if n.isValidChar then some (Char.ofNat n) else none

/-- The operation a line spells, if any. -/
def parseOp (line : List Char) : Option Op :=
  match splitBy ' ' line with
  | [['i'], c, r, ['R'], cp] => do
    pure (.ins ⟨⟨← num? c, ← num? r⟩, none, .R, ← char? cp⟩)
  | [['i'], c, r, pc, pr, s, cp] => do
    pure (.ins ⟨⟨← num? c, ← num? r⟩, some ⟨← num? pc, ← num? pr⟩, ← side? s, ← char? cp⟩)
  | [['d'], c, r] => do pure (.del ⟨← num? c, ← num? r⟩)
  | _ => none

/-- One operation the server accepts, or `none`. -/
def decodeOp (line : List Char) : Option Op :=
  match parseOp line with
  | some op => if okOp op then some op else none
  | none => none

def sideStr : Side → String
  | .L => "L"
  | .R => "R"

/-- One operation, as a line. -/
def encodeOp : Op → String
  | .ins ⟨⟨c, r⟩, none, _, ch⟩ => s!"i {c} {r} R {ch.toNat}"
  | .ins ⟨⟨c, r⟩, some ⟨pc, pr⟩, s, ch⟩ => s!"i {c} {r} {pc} {pr} {sideStr s} {ch.toNat}"
  | .del ⟨c, r⟩ => s!"d {c} {r}"

/-- Decodes operation lines, at most `maxOps`, stopping at the first bad one. -/
def decodeOps (lines : List (List Char)) : Except String (List Op) :=
  if lines.length > maxOps then .error "too many operations"
  else go lines []
where
  go : List (List Char) → List Op → Except String (List Op)
    | [], acc => .ok acc.reverse
    | l :: ls, acc =>
      match decodeOp l with
      | some op => go ls (op :: acc)
      | none => .error "bad operation"

/-- A client's message. -/
structure Request where
  cursor : Nat
  ops : List Op
  deriving Repr, DecidableEq

/-- The lines of a message, without a final empty line. -/
def lines (s : String) : List (List Char) :=
  match (splitBy '\n' s.toList).reverse with
  | [] :: rest => rest.reverse
  | all => all.reverse

/-- The first line of every message. -/
def magic : List Char := "tandem 1".toList

/-- Decodes a client's message. -/
def decodeRequest (body : String) : Except String Request :=
  match lines body with
  | first :: head :: rest =>
    if first ≠ magic then .error "expected tandem 1" else
    match splitBy ' ' head with
    | [['s', 'y', 'n', 'c'], c] =>
      match num? c with
      | some cursor => do
        let ops ← decodeOps rest
        pure { cursor, ops }
      | none => .error "bad cursor"
    | _ => .error "expected sync"
  | _ => .error "expected tandem 1"

/-- Encodes a client's message. -/
def encodeRequest (r : Request) : String :=
  "tandem 1\nsync " ++ toString r.cursor ++ "\n" ++ String.join (r.ops.map (encodeOp · ++ "\n"))

/-- The server's answer: the log from `from` to `to`, or an error. -/
inductive Reply where
  | ops (start stop : Nat) (ops : List Op)
  | error (reason : String)
  deriving Repr, DecidableEq, Inhabited

def encodeReply : Reply → String
  | .ops a b ops => s!"tandem 1\nops {a} {b}\n" ++ String.join (ops.map (encodeOp · ++ "\n"))
  | .error reason => s!"tandem 1\nerror {reason}\n"

/-- Decodes the server's answer (the browser's side). -/
def decodeReply (body : String) : Except String Reply :=
  match lines body with
  | first :: head :: rest =>
    if first ≠ magic then .error "expected tandem 1" else
    match splitBy ' ' head with
    | [['o', 'p', 's'], a, b] =>
      match num? a, num? b with
      | some a, some b => do
        let ops ← decodeOps rest
        if a ≤ b && ops.length == b - a then pure (.ops a b ops) else .error "bad range"
      | _, _ => .error "bad range"
    | ['e', 'r', 'r', 'o', 'r'] :: _ => pure (.error (String.ofList (head.drop 6)))
    | _ => .error "expected ops"
  | _ => .error "expected tandem 1"

end Tandem.Wire
