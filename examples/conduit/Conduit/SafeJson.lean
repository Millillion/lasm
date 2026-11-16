/-
JSON from the network, parsed safely: `parseJson` refuses numbers whose
exponent has more than four significant digits before Lean's parser sees
them, and writes every parsed zero as `0`. Lean's `Json.parse` computes
`10 ^ exponent` for such a number, so a 90-byte body with `1E26191701`
took a server's whole time and memory (leanprover/lean4#13987); Lean 4.36's
cap of 100,000 digits (#15994) still lets a short body make a large number,
so the limit here stays. A parsed zero with more than ten decimal places
(`-0.0e-51`) printed back as `0.e-42`, which is not JSON.

Copied from Lasm.RPC.Core (Lasm's own library, removed with Lasm.RPC) so
the app keeps it.
-/
import Lean.Data.Json.Basic
import Lean.Data.Json.Parser
import Lean.Data.Json.Printer
open Lean

namespace Conduit

/-- Whether JSON text holds a number, outside strings, whose exponent has more
than four significant digits (`1e10000`). -/
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

/-- `j` with every zero written `0`. -/
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

#guard hugeExponent "{\"a\":1e10000}" && hugeExponent "[2E+26191701]" && hugeExponent "1.5e-99999"
#guard !hugeExponent "{\"a\":1e9999,\"b\":\"1e99999\"}" && !hugeExponent "1e0000005" && !hugeExponent "[\"\\\"1e99999\"]"
#guard (parseJson "[1,2,{\"a\":[null,true,-0.0e-51]},0e-11,0.0,-2.50e-1]").toOption.map (·.compress)
  == some "[1,2,{\"a\":[null,true,0]},0,0,-0.25]"

end Conduit
