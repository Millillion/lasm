/-
Passwords and tokens in pure Lean, for the targets without Web Crypto
(Fastly Compute, wasi-http): SHA-256 (FIPS 180-4), HMAC (RFC 2104) and
PBKDF2 (RFC 8018) written here, with the same formats as `Server/Crypto.lean`
(`pbkdf2_sha256$100000$<salt>$<hash>`, HS256 JWTs), so a database or a token
moves between targets. Randomness is `IO.getRandomBytes` (the host's random
source); test/crypto-check.mjs checks these functions against Node's crypto.
-/
import Lean.Data.Json
import Std.Time.DateTime.Timestamp
import Std.Async.Basic
import Conduit.Store
import Server.Base64
open Lean Std.Async

namespace Conduit.Server.LeanCrypto
open Conduit.Server.Crypto (b64encode b64decode)

/-! ## SHA-256 -/

def K : Array UInt32 := #[
  0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
  0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
  0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
  0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
  0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
  0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
  0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
  0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2]

/-- The hash state: eight words. -/
structure St where
  a : UInt32
  b : UInt32
  c : UInt32
  d : UInt32
  e : UInt32
  f : UInt32
  g : UInt32
  h : UInt32

def initial : St := ⟨0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19⟩

@[inline] def rotr (x n : UInt32) : UInt32 := (x >>> n) ||| (x <<< (32 - n))

/-- The 64 rounds, from round `i`, on the message schedule `w`. -/
def rounds (w : Array UInt32) (i : Nat) (a b c d e f g h : UInt32) : St :=
  if i < 64 then
    let t1 := h + (rotr e 6 ^^^ rotr e 11 ^^^ rotr e 25) + ((e &&& f) ^^^ ((~~~e) &&& g)) + K[i]! + w[i]!
    let t2 := (rotr a 2 ^^^ rotr a 13 ^^^ rotr a 22) + ((a &&& b) ^^^ (a &&& c) ^^^ (b &&& c))
    rounds w (i + 1) (t1 + t2) a b c (d + t1) e f g
  else ⟨a, b, c, d, e, f, g, h⟩
termination_by 64 - i

/-- The compression function on state `st` and a block of 16 words. -/
def compress (st : St) (block : Array UInt32) : St := Id.run do
  let mut w := Array.mkEmpty 64 ++ block
  for i in [16:64] do
    let w15 := w[i - 15]!
    let w2 := w[i - 2]!
    let s0 := rotr w15 7 ^^^ rotr w15 18 ^^^ (w15 >>> 3)
    let s1 := rotr w2 17 ^^^ rotr w2 19 ^^^ (w2 >>> 10)
    w := w.push (w[i - 16]! + s0 + w[i - 7]! + s1)
  let r := rounds w 0 st.a st.b st.c st.d st.e st.f st.g st.h
  return ⟨st.a + r.a, st.b + r.b, st.c + r.c, st.d + r.d, st.e + r.e, st.f + r.f, st.g + r.g, st.h + r.h⟩

/-- Byte `i` of `bytes`, zero past the end. -/
def byteAt (bytes : ByteArray) (i : Nat) : UInt8 := if h : i < bytes.size then bytes[i] else 0

/-- Big-endian word `i` of `bytes` (zero past the end). -/
def word (bytes : ByteArray) (i : Nat) : UInt32 :=
  let b (j : Nat) : UInt32 := (byteAt bytes (4 * i + j)).toUInt32
  (b 0 <<< 24) ||| (b 1 <<< 16) ||| (b 2 <<< 8) ||| b 3

def St.words (s : St) : Array UInt32 := #[s.a, s.b, s.c, s.d, s.e, s.f, s.g, s.h]

def St.bytes (s : St) : ByteArray :=
  s.words.foldl (init := ByteArray.empty) fun (out : ByteArray) (w : UInt32) =>
    out.push (w >>> 24).toUInt8 |>.push (w >>> 16).toUInt8 |>.push (w >>> 8).toUInt8 |>.push w.toUInt8

def St.xor (s t : St) : St :=
  ⟨s.a ^^^ t.a, s.b ^^^ t.b, s.c ^^^ t.c, s.d ^^^ t.d, s.e ^^^ t.e, s.f ^^^ t.f, s.g ^^^ t.g, s.h ^^^ t.h⟩

/-- SHA-256 of `msg`, continuing from `st` after `prefixBytes` bytes already compressed. -/
def sha256From (st : St) (prefixBytes : Nat) (msg : ByteArray) : St := Id.run do
  let bits := (prefixBytes + msg.size) * 8
  let mut padded := msg.push 0x80
  while padded.size % 64 != 56 do padded := padded.push 0
  for k in [0:8] do padded := padded.push (bits >>> (8 * (7 - k))).toUInt8
  let mut s := st
  for blk in [0:padded.size / 64] do
    s := compress s ((List.range 16).toArray.map fun i => word padded (16 * blk + i))
  return s

def sha256 (msg : ByteArray) : ByteArray := (sha256From initial 0 msg).bytes

/-! ## HMAC-SHA-256 and PBKDF2 -/

/-- The states after the key's inner and outer padded blocks. -/
def hmacStates (key : ByteArray) : St × St :=
  let key := if key.size > 64 then sha256 key else key
  let padded (pad : UInt8) : Array UInt32 :=
    let bytes := (List.range 64).foldl (init := ByteArray.empty) fun out i => out.push (byteAt key i ^^^ pad)
    (List.range 16).toArray.map (word bytes ·)
  (compress initial (padded 0x36), compress initial (padded 0x5c))

def hmacWith (states : St × St) (msg : ByteArray) : St :=
  sha256From states.2 64 (sha256From states.1 64 msg).bytes

def hmac (key msg : ByteArray) : ByteArray := (hmacWith (hmacStates key) msg).bytes

/-- The final block of a 64 + 32-byte message: its 8 words, 0x80, zeros, the length in bits (768). -/
def St.block (u : St) : Array UInt32 := u.words ++ #[0x80000000, 0, 0, 0, 0, 0, 0, 768]

/-- HMAC of a 32-byte message: two compressions. -/
def hmac32 (states : St × St) (u : St) : St :=
  compress states.2 (compress states.1 u.block).block

/-- PBKDF2's iterations 2 to `n`: `u` the last HMAC, `t` the XOR of them all. -/
def iterate (states : St × St) : Nat → St → St → St
  | 0, _, t => t
  | n + 1, u, t => let u := hmac32 states u; iterate states n u (t.xor u)

/-- PBKDF2-HMAC-SHA-256 with a 32-byte result (one block). -/
def pbkdf2 (password salt : ByteArray) (iterations : Nat) : ByteArray :=
  let states := hmacStates password
  let u := hmacWith states (salt ++ ⟨#[0, 0, 0, 1]⟩)
  (iterate states (iterations - 1) u u).bytes

/-! ## Conduit's passwords and tokens -/

def iterations : Nat := 100000

/-- Equal bytes, comparing every byte (no early exit). -/
def sameBytes (a b : ByteArray) : Bool :=
  a.size == b.size && (List.range a.size).foldl (fun acc i => acc && a[i]! == b[i]!) true

def hashPassword (password : String) : IO String := do
  let salt ← IO.getRandomBytes 16
  return s!"pbkdf2_sha256${iterations}${b64encode salt}${b64encode (pbkdf2 password.toUTF8 salt iterations)}"

def checkPassword (password stored : String) : Bool :=
  match stored.splitOn "$" with
  | ["pbkdf2_sha256", iters, salt, hash] =>
    match iters.toNat?, b64decode salt, b64decode hash with
    | some n, some salt, some hash => sameBytes (pbkdf2 password.toUTF8 salt n) hash
    | _, _, _ => false
  | _ => false

def b64json (j : Json) : String := b64encode j.compress.toUTF8

def tokenLifetime : Nat := 30 * 24 * 3600

/-- A signed JWT (HS256) for user `id`, issued at `now` (seconds). -/
def issueToken (secret : String) (id now : Nat) : String :=
  let header := b64json (Json.mkObj [("alg", "HS256"), ("typ", "JWT")])
  let payload := b64json (Json.mkObj [("sub", toString id), ("iat", (now : Int)), ("exp", ((now + tokenLifetime : Nat) : Int))])
  let input := s!"{header}.{payload}"
  s!"{input}.{b64encode (hmac secret.toUTF8 input.toUTF8)}"

/-- The user id of a token whose signature verifies and that has not expired. -/
def readToken (secret token : String) (now : Nat) : Option Nat := do
  let [header, payload, sig] := token.splitOn "." | none
  let sigBytes ← b64decode sig
  let decodeJson (part : String) : Option Json := do
    let text ← String.fromUTF8? (← b64decode part)
    (Json.parse text).toOption
  let h ← decodeJson header
  unless (h.getObjValAs? String "alg").toOption == some "HS256" do none
  unless sameBytes (hmac secret.toUTF8 s!"{header}.{payload}".toUTF8) sigBytes do none
  let p ← decodeJson payload
  let exp ← (p.getObjValAs? Nat "exp").toOption
  unless now < exp do none
  (← (p.getObjValAs? String "sub").toOption).toNat?

/-! ## The services -/

/-- Milliseconds since the epoch (the host's wall clock). -/
def nowMs : IO Nat := do return (← Std.Time.Timestamp.now).toMillisecondsSinceUnixEpoch.toInt.toNat

/-- The clock, passwords and tokens, in pure Lean; tokens signed with `secret`. -/
def services (secret : IO String) : Services Async where
  now := nowMs
  hashPassword p := LeanCrypto.hashPassword p
  checkPassword p stored := pure (LeanCrypto.checkPassword p stored)
  issueToken id := do return LeanCrypto.issueToken (← secret) id ((← nowMs) / 1000)
  readToken token := do return LeanCrypto.readToken (← secret) token ((← nowMs) / 1000)

end Conduit.Server.LeanCrypto
