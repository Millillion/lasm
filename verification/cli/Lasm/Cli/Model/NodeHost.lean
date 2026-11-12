/-
# src/node-host.mjs, in Lean: `numbers`

A model of the JavaScript, written to mirror it call for call, and checked
against it on generated inputs by test/models/cli-differential.mjs (the
`cli-models` workflow). Lasm.Cli.Theorems proves its propositions.

| src/node-host.mjs                                | here                  |
| ------------------------------------------------ | --------------------- |
| `BigInt.asUintN(64, BigInt(value))`              | `asUintN64`           |
| `result.writeBigUInt64LE(n, 8 * i)`              | `writeBigUInt64LE`    |
| `numbers(...values)`                             | `numbers`             |

A JavaScript number or bigint is read as the integer it is (`BigInt(value)`
of a non-integral number throws; the host passes integers only).
-/

namespace Lasm.Cli

/-- `BigInt.asUintN(64, v)`: `v` modulo 2⁶⁴, as a non-negative integer. -/
def asUintN64 (v : Int) : Nat := (v % 2 ^ 64).toNat

/-- The eight bytes `Buffer.prototype.writeBigUInt64LE` writes for `n`, low
byte first. -/
def writeBigUInt64LE (n : Nat) : List UInt8 :=
  (List.range 8).map fun i => (n / 256 ^ i % 256).toUInt8

/-- `numbers(...values)`: a buffer of eight bytes per value, in order. -/
def numbers (values : List Int) : ByteArray :=
  ⟨(values.flatMap fun v => writeBigUInt64LE (asUintN64 v)).toArray⟩

end Lasm.Cli
