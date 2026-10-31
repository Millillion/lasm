/- base64url (RFC 4648 §5, no padding), for password hashes and tokens (`Server/Crypto.lean`, `Server/LeanCrypto.lean`). -/
namespace Conduit.Server.Crypto

def alphabet : String := "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"

def b64encode (b : ByteArray) : String := Id.run do
  let chars := alphabet.toList.toArray
  let mut out : Array Char := #[]
  let mut i := 0
  while i + 2 < b.size do
    let n := (b[i]!.toNat <<< 16) ||| (b[i+1]!.toNat <<< 8) ||| b[i+2]!.toNat
    out := out.push chars[(n >>> 18) % 64]! |>.push chars[(n >>> 12) % 64]! |>.push chars[(n >>> 6) % 64]! |>.push chars[n % 64]!
    i := i + 3
  if i + 1 == b.size then
    let n := b[i]!.toNat <<< 16
    out := out.push chars[(n >>> 18) % 64]! |>.push chars[(n >>> 12) % 64]!
  else if i + 2 == b.size then
    let n := (b[i]!.toNat <<< 16) ||| (b[i+1]!.toNat <<< 8)
    out := out.push chars[(n >>> 18) % 64]! |>.push chars[(n >>> 12) % 64]! |>.push chars[(n >>> 6) % 64]!
  return String.ofList out.toList

def b64value (c : Char) : Option Nat :=
  if 'A' ≤ c && c ≤ 'Z' then some (c.toNat - 'A'.toNat)
  else if 'a' ≤ c && c ≤ 'z' then some (c.toNat - 'a'.toNat + 26)
  else if '0' ≤ c && c ≤ '9' then some (c.toNat - '0'.toNat + 52)
  else if c == '-' then some 62
  else if c == '_' then some 63
  else none

def b64decode (s : String) : Option ByteArray := do
  let vals ← s.toList.mapM b64value
  let mut out := ByteArray.empty
  let mut acc := 0
  let mut bits := 0
  for v in vals do
    acc := (acc <<< 6) ||| v
    bits := bits + 6
    if bits ≥ 8 then
      bits := bits - 8
      out := out.push ((acc >>> bits) % 256).toUInt8
      acc := acc % (1 <<< bits)
  return out

end Conduit.Server.Crypto
