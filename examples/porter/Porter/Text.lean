/-
The text formats Porter reads and writes, all total and written over lists of
characters and bytes (no indexing that could panic, no `partial`):

- `application/x-www-form-urlencoded` (query strings and form bodies), with
  percent-decoding that rejects malformed escapes and invalid UTF-8;
- the `Cookie` request header;
- base64 (RFC 4648 §4, for HTTP Basic client authentication) and base64url
  without padding (§5, for JWTs and PKCE);
- HTML text and attribute escaping, and JSON string escaping;
- `JV`, the few JSON shapes Porter writes, and their rendering.

These are the parsers the fuzzer targets (claim 5 of TESTING_STRATEGY.md):
every input, however malformed, gets an answer.
-/
namespace Porter.Text

/-! ## Characters and bytes -/

def hexValue? (c : Char) : Option Nat :=
  if '0' ≤ c ∧ c ≤ '9' then some (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
  else if 'A' ≤ c ∧ c ≤ 'F' then some (c.toNat - 'A'.toNat + 10)
  else none

def hexDigit (n : Nat) : Char :=
  if n < 10 then Char.ofNat ('0'.toNat + n) else Char.ofNat ('A'.toNat + n - 10)

/-- The UTF-8 bytes of a character. -/
def charBytes (c : Char) : List UInt8 := c.toString.toUTF8.toList

/-- The bytes as a string, if they are valid UTF-8. -/
def utf8? (bytes : Array UInt8) : Option String := String.fromUTF8? ⟨bytes⟩

/-! ## Percent-encoding -/

/-- Percent-decoding (`plus`: `+` is a space, as in forms), tail-recursive. -/
def decodeGo (plus : Bool) (acc : Array UInt8) : List Char → Option (Array UInt8)
  | [] => some acc
  | '%' :: a :: b :: rest =>
    match hexValue? a, hexValue? b with
    | some x, some y => decodeGo plus (acc.push (x * 16 + y).toUInt8) rest
    | _, _ => none
  | '%' :: _ => none
  | c :: rest =>
    if plus ∧ c = '+' then decodeGo plus (acc.push 32) rest
    else decodeGo plus (acc ++ (charBytes c).toArray) rest

/-- A percent-decoded string, or `none` for a malformed escape or bytes that
are not UTF-8. -/
def percentDecode (s : String) (plus : Bool := true) : Option String :=
  (decodeGo plus #[] s.toList).bind utf8?

/-- RFC 3986's unreserved characters, which are never escaped. -/
def unreserved (c : Char) : Bool :=
  ('A' ≤ c ∧ c ≤ 'Z') ∨ ('a' ≤ c ∧ c ≤ 'z') ∨ ('0' ≤ c ∧ c ≤ '9') ∨ c = '-' ∨ c = '.' ∨ c = '_' ∨ c = '~'

def escapeByte (b : UInt8) : List Char := ['%', hexDigit (b.toNat / 16), hexDigit (b.toNat % 16)]

/-- Percent-encoding of everything but the unreserved characters. -/
def percentEncode (s : String) : String :=
  String.ofList (s.toList.flatMap fun c => if unreserved c then [c] else (charBytes c).flatMap escapeByte)

/-! ## Forms and query strings -/

/-- Splits a list at the first `sep`: the part before it and, if there was
one, the part after it. Tail-recursive: an input of any length takes no
stack (a WebAssembly stack on Deno and Workers is small; the fuzzer found
that a 20,000-character form value overflowed the first version). -/
def splitFirst (sep : Char) (l : List Char) : List Char × Option (List Char) :=
  go [] l
where
  go (acc : List Char) : List Char → List Char × Option (List Char)
    | [] => (acc.reverse, none)
    | c :: rest => if c = sep then (acc.reverse, some rest) else go (c :: acc) rest

/-- Splits a list at every `sep`. -/
def splitAll (sep : Char) (l : List Char) : List (List Char) :=
  go [] [] l
where
  go (acc : List (List Char)) (cur : List Char) : List Char → List (List Char)
    | [] => (acc.cons cur.reverse).reverse
    | c :: rest => if c = sep then go (acc.cons cur.reverse) [] rest else go acc (c :: cur) rest

/-- `a=1&b=2` as `[("a", "1"), ("b", "2")]`, decoded; empty parts are
skipped and a part without `=` has the empty value. `none` if anything is
malformed. -/
def parseForm (s : String) : Option (List (String × String)) :=
  (splitAll '&' s.toList).filter (· ≠ []) |>.mapM fun part =>
    let (k, v) := splitFirst '=' part
    match percentDecode (String.ofList k), percentDecode (String.ofList (v.getD [])) with
    | some k, some v => some (k, v)
    | _, _ => none

/-- `a=1&b=2`, each name and value percent-encoded. -/
def encodeForm (ps : List (String × String)) : String :=
  "&".intercalate (ps.map fun (k, v) => percentEncode k ++ "=" ++ percentEncode v)

/-- A parameter: absent, given once, or given more than once (which OAuth
forbids for every parameter, RFC 6749 §3.1). -/
inductive Param where
  | absent
  | one (value : String)
  | repeated
  deriving DecidableEq, Repr

def param (ps : List (String × String)) (k : String) : Param :=
  match ps.filter (·.1 = k) with
  | [] => .absent
  | [(_, v)] => .one v
  | _ => .repeated

/-- A parameter given once and not empty (OAuth treats an empty value as
absent, RFC 6749 §3.1). -/
def Param.value? : Param → Option String
  | .one v => if v = "" then none else some v
  | _ => none

/-! ## Cookies and headers -/

def isSpace (c : Char) : Bool := c = ' ' ∨ c = '\t'

def trimList (l : List Char) : List Char := ((l.dropWhile isSpace).reverse.dropWhile isSpace).reverse

/-- The value of cookie `name` in a `Cookie` header (`a=1; b=2`); the first
one if it is there more than once. -/
def cookie? (header : String) (name : String) : Option String :=
  (splitAll ';' header.toList).findSome? fun part =>
    let (k, v) := splitFirst '=' (trimList part)
    if String.ofList k = name then v.map (String.ofList ∘ trimList) else none

/-- ASCII lower case, for header names and auth schemes. -/
def lower (s : String) : String := String.ofList (s.toList.map Char.toLower)

/-- The value of a header (names compared without case); `none` if absent,
and also if it is there more than once with different values. -/
def header? (hs : List (String × String)) (name : String) : Option String :=
  match (hs.filter fun h => lower h.1 = lower name).map (·.2) with
  | [] => none
  | v :: vs => if vs.all (· = v) then some v else none

/-- `Scheme value` in an `Authorization` header, the scheme without case. -/
def authorization? (header : String) (scheme : String) : Option String :=
  let (s, rest) := splitFirst ' ' header.toList
  if lower (String.ofList s) = lower scheme then rest.map (String.ofList ∘ trimList) else none

/-! ## Base64 -/

def b64Alphabet : List Char := "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".toList
def b64UrlAlphabet : List Char := "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".toList

/-- The `i`th element of a list, or `d` (by recursion, not indexing). -/
def nthD {α : Type} (d : α) : List α → Nat → α
  | [], _ => d
  | x :: _, 0 => x
  | _ :: xs, i + 1 => nthD d xs i

/-- The position of `x` in a list. -/
def indexOf? {α : Type} [DecidableEq α] (x : α) : List α → Option Nat
  | [] => none
  | y :: ys => if x = y then some 0 else (indexOf? x ys).map (· + 1)

def sextet (alphabet : List Char) (n : Nat) : Char := nthD 'A' alphabet (n % 64)

/-- Base64 of bytes, without padding, in the given alphabet. -/
def b64Go (alphabet : List Char) (acc : Array Char) : List UInt8 → Array Char
  | a :: b :: c :: rest =>
    let n := a.toNat * 65536 + b.toNat * 256 + c.toNat
    b64Go alphabet (acc ++ #[sextet alphabet (n / 262144), sextet alphabet (n / 4096), sextet alphabet (n / 64),
      sextet alphabet n]) rest
  | [a, b] =>
    let n := a.toNat * 65536 + b.toNat * 256
    acc ++ #[sextet alphabet (n / 262144), sextet alphabet (n / 4096), sextet alphabet (n / 64)]
  | [a] =>
    let n := a.toNat * 65536
    acc ++ #[sextet alphabet (n / 262144), sextet alphabet (n / 4096)]
  | [] => acc

/-- base64url without padding (RFC 4648 §5), as JWTs and PKCE use it. -/
def b64url (bytes : List UInt8) : String := String.ofList (b64Go b64UrlAlphabet #[] bytes).toList

/-- base64url of a string's UTF-8 bytes. -/
def b64urlText (s : String) : String := b64url s.toUTF8.toList

def sextetValue? (alphabet : List Char) (c : Char) : Option Nat := indexOf? c alphabet

/-- Decodes sextets into bytes, tail-recursive; the bits left over at the end
must be zero (a canonical encoding). -/
def unsextets (acc : Array UInt8) (bits : Nat) (nbits : Nat) : List Nat → Option (Array UInt8)
  | [] => if bits = 0 ∧ nbits < 6 then some acc else none
  | v :: rest =>
    let bits' := bits * 64 + v
    let nbits' := nbits + 6
    if nbits' ≥ 8 then
      unsextets (acc.push (bits' / 2 ^ (nbits' - 8)).toUInt8) (bits' % 2 ^ (nbits' - 8)) (nbits' - 8) rest
    else unsextets acc bits' nbits' rest

/-- Standard base64 (RFC 4648 §4) with optional `=` padding. -/
def b64Decode? (s : String) : Option (Array UInt8) :=
  let body := (s.toList.reverse.dropWhile (· = '=')).reverse
  let padding := s.length - body.length
  if padding > 2 ∨ (padding > 0 ∧ s.length % 4 ≠ 0) ∨ body.length % 4 = 1 then none
  else (body.mapM (sextetValue? b64Alphabet)).bind (unsextets #[] 0 0)

/-- Whether every character is in the base64url alphabet. -/
def isB64url (s : String) : Bool := s.toList.all fun c => b64UrlAlphabet.contains c

/-! ## HTML and JSON -/

/-- Escapes text for HTML element content and quoted attribute values. -/
def html (s : String) : String :=
  String.ofList (s.toList.flatMap fun c =>
    match c with
    | '&' => "&amp;".toList
    | '<' => "&lt;".toList
    | '>' => "&gt;".toList
    | '"' => "&quot;".toList
    | '\'' => "&#39;".toList
    | c => [c])

/-- A JSON string literal, quotes included. -/
def jsonString (s : String) : String :=
  "\"" ++ String.ofList (s.toList.flatMap fun c =>
    match c with
    | '"' => ['\\', '"']
    | '\\' => ['\\', '\\']
    | '\n' => ['\\', 'n']
    | '\r' => ['\\', 'r']
    | '\t' => ['\\', 't']
    | c => if c.toNat < 32 ∨ c = '<' ∨ c = '>' ∨ c = '&' ∨ c.toNat = 0x2028 ∨ c.toNat = 0x2029 then
        ['\\', 'u', hexDigit (c.toNat / 4096 % 16), hexDigit (c.toNat / 256 % 16), hexDigit (c.toNat / 16 % 16),
          hexDigit (c.toNat % 16)]
      else [c]) ++ "\""

/-- The JSON values Porter writes: object members are strings, numbers,
booleans, arrays of strings, or JSON text Porter already has (the JWK Set). -/
inductive JV where
  | str (s : String)
  | num (n : Nat)
  | bool (b : Bool)
  | strs (xs : List String)
  | raw (json : String)
  deriving DecidableEq, Repr

def JV.render : JV → String
  | .str s => jsonString s
  | .num n => toString n
  | .bool b => if b then "true" else "false"
  | .strs xs => "[" ++ ",".intercalate (xs.map jsonString) ++ "]"
  | .raw j => j

/-- A JSON object, its members in order. -/
def jsonObject (members : List (String × JV)) : String :=
  "{" ++ ",".intercalate (members.map fun (k, v) => jsonString k ++ ":" ++ v.render) ++ "}"

end Porter.Text
