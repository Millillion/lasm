/-
Shared by the server (Site.lean) and the browser (Client.lean): the data, the
API's request and response types, and the validation. A rule proved here holds
on both sides: the browser checks a title before sending it, and the server
only stores titles that passed the same check, with the proof in hand.

The API is plain REST, JSON in and out:
  GET    /api/todos        → 200 [Todo]
  POST   /api/todos        {"title"} → 201 Todo, or 400 {"error"}
  PATCH  /api/todos/ID     {"done"}  → 200 Todo, or 404 {"error"}
  DELETE /api/todos/ID     → 204, or 404 {"error"}
-/
import Lean.Data.Json
open Lean

structure Todo where
  id : Nat
  title : String
  done : Bool
  deriving ToJson, FromJson, Repr, BEq, Inhabited

/-- A title as stored: without surrounding spaces. -/
def clean (title : String) : String := title.trimAscii.toString

/-- The longest title, in characters. -/
def maxTitle : Nat := 80

/-- What a new title must satisfy. (Irreducible: Lean compares it by name, and
proofs use `checkTitle_ok` instead of computing it.) -/
@[irreducible] def checkTitle (title : String) : Except String Unit :=
  let n := (clean title).length
  if n = 0 then .error "Write something first."
  else if n > maxTitle then .error s!"Keep it under {maxTitle} characters."
  else .ok ()

/-- Proved once, holds in the browser and on the server: an accepted title is
non-empty and at most `maxTitle` characters long once cleaned. -/
theorem checkTitle_ok {title : String} (h : checkTitle title = .ok ()) :
    0 < (clean title).length ∧ (clean title).length ≤ maxTitle := by
  unfold checkTitle at h
  by_cases h0 : (clean title).length = 0
  · simp [h0] at h
  · by_cases h1 : (clean title).length > maxTitle
    · simp [h0, h1] at h
    · omega

/-- A title that passed `checkTitle`, with the proof. -/
abbrev ValidTitle := { title : String // checkTitle title = .ok () }

/-- `title` as a `ValidTitle`, or `checkTitle`'s message. -/
def ValidTitle.check (title : String) : Except String ValidTitle :=
  match h : checkTitle title with
  | .ok () => .ok ⟨title, h⟩
  | .error e => .error e

/-- The body of `POST /api/todos`. -/
structure NewTodo where
  title : String
  deriving ToJson, FromJson

/-- The body of `PATCH /api/todos/ID`. -/
structure TodoPatch where
  done : Bool
  deriving ToJson, FromJson

/-- The body of every 4xx answer. -/
structure ApiError where
  error : String
  deriving ToJson, FromJson

/-! ## JSON from the network

Lean 4.35's `Json.parse` computes `10 ^ exponent` for a number such as
`1E26191701`, so a 90-byte request can take a server's whole time and memory,
and it prints some parsed zeros in a form that is not JSON. `parseJson` guards
against both; use it for every JSON text that comes from the network. -/

/-- Whether JSON text holds a number, outside strings, whose exponent has more
than four significant digits (`1e10000`). Lean's parser computes
`10 ^ exponent` for such a number, so a 90-byte request with `1E26191701`
took the server's whole time and memory (test/fuzz, target lean-rpc). -/
def hugeExponent (text : String) : Bool := Id.run do
  let mut inString := false
  let mut escaped := false
  let mut afterDigit := false
  -- `some n`: inside an exponent, with `n` significant digits so far.
  let mut exponent : Option Nat := none
  for c in text.toList do
    if inString then
      if escaped then escaped := false
      else if c == '\\' then escaped := true
      else if c == '"' then inString := false
      continue
    if let some n := exponent then
      if c.isDigit then
        if n == 0 && c == '0' then continue
        if n + 1 > 4 then return true
        exponent := some (n + 1)
        continue
      if (c == '+' || c == '-') && n == 0 then continue
      exponent := none
    if c == '"' then
      inString := true
      afterDigit := false
    else if (c == 'e' || c == 'E') && afterDigit then
      exponent := some 0
      afterDigit := false
    else afterDigit := c.isDigit || c == '.'
  return false

/-- `j` with every zero written `0`. Lean prints a zero with more than ten
decimal places (`0e-11`, which `-0.0e-51` parses to) as `0.e-42`, which is
not JSON, so a parsed zero echoed back could not be read (#135). -/
partial def zerosAsZero : Json → Json
  | .num n => if n.mantissa == 0 then .num ⟨0, 0⟩ else .num n
  | .arr a => .arr (a.map zerosAsZero)
  | .obj kvs => .obj (kvs.foldl (fun acc k v => acc.insert k (zerosAsZero v)) kvs)
  | j => j

/-- `Json.parse`, refusing numbers with exponents of more than four digits
(`hugeExponent`), with zeros written `0` (`zerosAsZero`): use it for JSON
from the network. -/
def parseJson (text : String) : Except String Json :=
  if hugeExponent text then .error "a number's exponent has more than four digits"
  else zerosAsZero <$> Json.parse text

/-- JSON text from the network as an `α`. -/
def decodeJson [FromJson α] (text : String) : Except String α :=
  parseJson text >>= fromJson?
