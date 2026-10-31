/- Prints Server/LeanCrypto.lean's SHA-256, HMAC and PBKDF2 of the inputs
test/crypto-check.mjs gives (hex arguments), one result per line, for that
script to compare with Node's crypto. -/
import Server.LeanCrypto
open Conduit.Server.LeanCrypto

def hex (b : ByteArray) : String :=
  b.foldl (init := "") fun s x => s ++ (if x < 16 then "0" else "") ++ (Nat.toDigits 16 x.toNat).asString

def unhex (s : String) : ByteArray := Id.run do
  let digit (c : Char) : Nat := if c.isDigit then c.toNat - '0'.toNat else c.toLower.toNat - 'a'.toNat + 10
  let cs := s.toList.toArray
  let mut out := ByteArray.empty
  for i in [0:cs.size / 2] do out := out.push (16 * digit cs[2 * i]! + digit cs[2 * i + 1]!).toUInt8
  return out

def main (args : List String) : IO Unit := do
  match args with
  | ["sha256", m] => IO.println (hex (sha256 (unhex m)))
  | ["hmac", k, m] => IO.println (hex (hmac (unhex k) (unhex m)))
  | ["pbkdf2", p, s, n] => IO.println (hex (pbkdf2 (unhex p) (unhex s) n.toNat!))
  | ["time", n] =>
    let t ← IO.monoMsNow
    let r := pbkdf2 "password".toUTF8 "salt".toUTF8 n.toNat!
    IO.println s!"{hex r} {(← IO.monoMsNow) - t} ms"
  | _ => throw (IO.userError "usage: sha256 HEX | hmac KEY MSG | pbkdf2 P S N | time N")
