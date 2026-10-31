/-
Passwords and tokens with Web Crypto (`crypto.subtle`), which Node, Bun,
Deno and Cloudflare Workers all provide, through `Lasm.JS`:

- passwords: PBKDF2-HMAC-SHA-256, 100,000 iterations (Workers' maximum),
  a 16-byte random salt per password, stored as
  `pbkdf2_sha256$100000$<salt>$<hash>` (base64url);
- tokens: JWTs signed with HMAC-SHA-256 (`HS256`), valid for 30 days, with
  the user id as `sub`, as the spec's `Authorization: Token <jwt>` expects.
-/
import Lasm.JS
import Lean.Data.Json
import Server.Base64
open Lasm.JS Lean

namespace Conduit.Server.Crypto

/-! ## Web Crypto -/

def subtle : IO Value := do (← (← global).get "crypto").get "subtle"

def randomBytes (n : Nat) : IO ByteArray := do
  let g ← global
  let arr ← (← g.get "Uint8Array").new #[toJS n]
  let filled ← (← g.get "crypto").callMethod "getRandomValues" #[.ref arr ""] ByteArray
  return filled

/-- The bytes of an `ArrayBuffer`. -/
def bufferBytes (buffer : Value) : IO ByteArray := do
  (← (← global).get "Uint8Array").new #[.ref buffer ""] ByteArray

def iterations : Nat := 100000

def pbkdf2 (password : String) (salt : ByteArray) (iters : Nat) : Async ByteArray := do
  let s ← subtle
  let key ← s.callMethodAwait "importKey" #[toJS "raw", .bytes password.toUTF8, toJS "PBKDF2", toJS false,
    .array #[toJS "deriveBits"]] Value
  let bits ← s.callMethodAwait "deriveBits"
    #[obj [("name", toJS "PBKDF2"), ("hash", toJS "SHA-256"), ("salt", .bytes salt), ("iterations", toJS iters)],
      .ref key "", toJS 256] Value
  bufferBytes bits

/-- Equal bytes, comparing every byte (no early exit). -/
def sameBytes (a b : ByteArray) : Bool :=
  a.size == b.size && (List.range a.size).foldl (fun acc i => acc && a[i]! == b[i]!) true

def hashPassword (password : String) : Async String := do
  let salt ← randomBytes 16
  let hash ← pbkdf2 password salt iterations
  return s!"pbkdf2_sha256${iterations}${b64encode salt}${b64encode hash}"

def checkPassword (password stored : String) : Async Bool := do
  match stored.splitOn "$" with
  | ["pbkdf2_sha256", iters, salt, hash] =>
    match iters.toNat?, b64decode salt, b64decode hash with
    | some n, some salt, some hash => return sameBytes (← pbkdf2 password salt n) hash
    | _, _, _ => return false
  | _ => return false

def hmacKey (secret : String) (usage : String) : Async Value := do
  (← subtle).callMethodAwait "importKey" #[toJS "raw", .bytes secret.toUTF8,
    obj [("name", toJS "HMAC"), ("hash", toJS "SHA-256")], toJS false, .array #[toJS usage]] Value

def b64json (j : Json) : String := b64encode j.compress.toUTF8

def tokenLifetime : Nat := 30 * 24 * 3600

/-- A signed JWT for user `id`, issued at `now` (seconds). -/
def issueToken (secret : String) (id now : Nat) : Async String := do
  let header := b64json (Json.mkObj [("alg", "HS256"), ("typ", "JWT")])
  let payload := b64json (Json.mkObj [("sub", toString id), ("iat", (now : Int)), ("exp", ((now + tokenLifetime : Nat) : Int))])
  let input := s!"{header}.{payload}"
  let sig ← (← subtle).callMethodAwait "sign" #[toJS "HMAC", .ref (← hmacKey secret "sign") "", .bytes input.toUTF8] Value
  return s!"{input}.{b64encode (← bufferBytes sig)}"

/-- The user id of a token whose signature verifies and that has not expired. -/
def readToken (secret : String) (token : String) (now : Nat) : Async (Option Nat) := do
  let [header, payload, sig] := token.splitOn "." | return none
  let some sigBytes := b64decode sig | return none
  let decodeJson (part : String) : Option Json := do
    let bytes ← b64decode part
    let text ← String.fromUTF8? bytes
    (Json.parse text).toOption
  let some h := decodeJson header | return none
  unless (h.getObjValAs? String "alg").toOption == some "HS256" do return none
  let ok ← (← subtle).callMethodAwait "verify" #[toJS "HMAC", .ref (← hmacKey secret "verify") "",
    .bytes sigBytes, .bytes s!"{header}.{payload}".toUTF8] Bool
  unless ok do return none
  let some p := decodeJson payload | return none
  let some exp := (p.getObjValAs? Nat "exp").toOption | return none
  unless now < exp do return none
  match p.getObjValAs? String "sub" with
  | .ok sub => return sub.toNat?
  | .error _ => return none

end Conduit.Server.Crypto
