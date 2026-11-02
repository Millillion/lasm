/-
Porter's cryptography, all from the platform's Web Crypto (`crypto.subtle`,
which Node, Bun, Deno and Cloudflare Workers provide) through `Lasm.JS`;
none of it is written in Lean (docs/DECISIONS.md):

- SHA-256, for PKCE (S256), client secrets, and the hashes under which
  codes, tokens, sessions and interactions are stored;
- random values (`crypto.getRandomValues`), 32 bytes each;
- PBKDF2-HMAC-SHA-256 password hashes, `pbkdf2_sha256$<iterations>$<salt>$<hash>`
  (base64url), as Conduit stores them;
- ID token signatures: ECDSA P-256 with SHA-256 (ES256; Web Crypto's
  signature is already JWS's `r ‖ s`) and Ed25519 (EdDSA, RFC 8037);
- the signing keys: generated on first start, kept as private JWKs in the
  database, and published as public JWKs whose `kid` is the RFC 7638
  thumbprint.
-/
import Lasm.JS
import Lean.Data.Json
import Porter.Store
import Porter.Text
open Lasm.JS Lean

namespace Porter.Server.Crypto

def subtle : IO Value := do (← (← global).get "crypto").get "subtle"

def bufferBytes (buffer : Value) : IO ByteArray := do
  (← (← global).get "Uint8Array").new #[.ref buffer ""] ByteArray

def randomBytes (n : Nat) : IO ByteArray := do
  let g ← global
  let arr ← (← g.get "Uint8Array").new #[toJS n]
  (← g.get "crypto").callMethod "getRandomValues" #[.ref arr ""] ByteArray

/-- 32 random bytes, base64url (43 characters). -/
def fresh : IO String := do return Text.b64url (← randomBytes 32).toList

def sha256Bytes (b : ByteArray) : Async ByteArray := do
  bufferBytes (← (← subtle).callMethodAwait "digest" #[toJS "SHA-256", .bytes b] Value)

/-- SHA-256 of a string's UTF-8 bytes, base64url. -/
def sha256 (s : String) : Async String := do return Text.b64url (← sha256Bytes s.toUTF8).toList

def b64decode (s : String) : Option ByteArray := do
  let vals ← s.toList.mapM (Text.sextetValue? Text.b64UrlAlphabet)
  let bytes ← Text.unsextets #[] 0 0 vals <|> none
  pure ⟨bytes⟩

/-- Equal bytes, comparing every byte (no early exit). -/
def sameBytes (a b : ByteArray) : Bool :=
  a.size == b.size && (List.range a.size).foldl (fun acc i => acc && a[i]! == b[i]!) true

def pbkdf2 (password : String) (salt : ByteArray) (iters : Nat) : Async ByteArray := do
  let s ← subtle
  let key ← s.callMethodAwait "importKey" #[toJS "raw", .bytes password.toUTF8, toJS "PBKDF2", toJS false,
    .array #[toJS "deriveBits"]] Value
  let bits ← s.callMethodAwait "deriveBits"
    #[obj [("name", toJS "PBKDF2"), ("hash", toJS "SHA-256"), ("salt", .bytes salt), ("iterations", toJS iters)],
      .ref key "", toJS 256] Value
  bufferBytes bits

def iterations : Nat := 100000

def hashPassword (password : String) : Async String := do
  let salt ← randomBytes 16
  let hash ← pbkdf2 password salt iterations
  return s!"pbkdf2_sha256${iterations}${Text.b64url salt.toList}${Text.b64url hash.toList}"

/-- Whether a password matches a stored hash. A malformed hash matches
nothing, after the same work as a real check. -/
def checkPassword (password stored : String) : Async Bool := do
  match stored.splitOn "$" with
  | ["pbkdf2_sha256", iters, salt, hash] =>
    match iters.toNat?, b64decode salt, b64decode hash with
    | some n, some salt, some hash =>
      if n ≤ iterations then return sameBytes (← pbkdf2 password salt n) hash
      else return false
    | _, _, _ => let _ ← pbkdf2 password (ByteArray.mk #[0]) iterations; return false
  | _ => let _ ← pbkdf2 password (ByteArray.mk #[0]) iterations; return false

/-! ## Signing keys -/

def algorithm : Alg → Data
  | .ES256 => obj [("name", toJS "ECDSA"), ("namedCurve", toJS "P-256")]
  | .EdDSA => obj [("name", toJS "Ed25519")]

def signAlgorithm : Alg → Data
  | .ES256 => obj [("name", toJS "ECDSA"), ("hash", toJS "SHA-256")]
  | .EdDSA => obj [("name", toJS "Ed25519")]

def json : IO Value := do (← global).get "JSON"

/-- A new key pair's private key, as JWK JSON text. -/
def generate (alg : Alg) : Async String := do
  let s ← subtle
  let pair ← s.callMethodAwait "generateKey" #[algorithm alg, toJS true, .array #[toJS "sign", toJS "verify"]] Value
  let jwk ← s.callMethodAwait "exportKey" #[toJS "jwk", .ref (← pair.get "privateKey") ""] Value
  (← json).callMethod "stringify" #[.ref jwk ""] String

/-- A private JWK (JSON text) imported for signing. -/
def importPrivate (alg : Alg) (jwk : String) : Async Value := do
  let parsed ← (← json).callMethod "parse" #[toJS jwk] Value
  (← subtle).callMethodAwait "importKey" #[toJS "jwk", .ref parsed "", algorithm alg, toJS false, .array #[toJS "sign"]]
    Value

/-- The members of the public JWK, in RFC 7638's order for the thumbprint. -/
def publicMembers (alg : Alg) (jwk : Json) : Except String (List (String × String)) := do
  let get (k : String) : Except String String := jwk.getObjValAs? String k
  match alg with
  | .ES256 => return [("crv", ← get "crv"), ("kty", ← get "kty"), ("x", ← get "x"), ("y", ← get "y")]
  | .EdDSA => return [("crv", ← get "crv"), ("kty", ← get "kty"), ("x", ← get "x")]

/-- A signing key: its algorithm, `kid`, Web Crypto key and public JWK (JSON text). -/
structure Key where
  alg : Alg
  kid : String
  key : Value
  publicJwk : String

def loadKey (alg : Alg) (privateJwk : String) : Async Key := do
  let parsed ← IO.ofExcept (Json.parse privateJwk)
  let members ← IO.ofExcept (publicMembers alg parsed)
  let canonical := Text.jsonObject (members.map fun (k, v) => (k, .str v))
  let kid ← sha256 canonical
  let publicJwk := Text.jsonObject ((members.map fun (k, v) => (k, Text.JV.str v)) ++
    [("kid", .str kid), ("alg", .str alg.name), ("use", .str "sig")])
  return { alg, kid, key := ← importPrivate alg privateJwk, publicJwk }

/-- The signature of a JWS signing input, base64url. -/
def sign (k : Key) (input : String) : Async String := do
  let sig ← (← subtle).callMethodAwait "sign" #[signAlgorithm k.alg, .ref k.key "", .bytes input.toUTF8] Value
  return Text.b64url (← bufferBytes sig).toList

end Porter.Server.Crypto
