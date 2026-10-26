/-
Lasm.Web crypto: cryptographically secure random bytes, UUIDs and digests
(Web Crypto). `IO.getRandomBytes` also uses the browser's generator.
-/
import Lasm.JS.Core
import Lasm.JS.Meta

namespace Lasm.Web
open Lasm.JS

namespace Raw
@[js "lasm:web" "randomBytes"] opaque randomBytes : Nat → IO ByteArray
@[js "lasm:web" "randomUUID"] opaque randomUUID : IO String
@[js "lasm:web" "digest"] opaque digest : String → ByteArray → Async ByteArray
end Raw

namespace Crypto
/-- `n` random bytes (`crypto.getRandomValues`). -/
def randomBytes (n : Nat) : IO ByteArray := Raw.randomBytes n
/-- A random version 4 UUID (`crypto.randomUUID`; secure contexts: HTTPS or localhost). -/
def randomUUID : IO String := Raw.randomUUID
/-- A digest (`crypto.subtle.digest`): `SHA-256`, `SHA-384`, `SHA-512` or `SHA-1`.
Secure contexts only. -/
def digest (algorithm : String) (data : ByteArray) : Async ByteArray := Raw.digest algorithm data
/-- SHA-256 of `data`. -/
def sha256 (data : ByteArray) : Async ByteArray := digest "SHA-256" data
/-- Lower-case hexadecimal of bytes. -/
def hex (bytes : ByteArray) : String :=
  let digit (n : UInt8) : Char := if n < 10 then Char.ofNat (48 + n.toNat) else Char.ofNat (87 + n.toNat)
  bytes.foldl (init := "") fun s b => (s.push (digit (b / 16))).push (digit (b % 16))
end Crypto

end Lasm.Web
