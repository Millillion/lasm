/-
Lean's half of the Lasm.JS value codec (`Wire` in library/Lasm/JS/Core.lean,
the code every Lasm program runs) as an oracle for the lasm-js-wire fuzz
target: one JSON request per line on stdin, one JSON answer per line on
stdout. Run by test/fuzz/support/js-wire-model.mjs (`lean --run`).

  {"decode": "<hex>"}  → {"ok": <value>} or {"error": "…"}   (Wire.decodeWith)
  {"encode": <value>}  → {"ok": "<hex>"} or {"error": "…"}   (Wire.encode)

A value is a JSON array: ["u"] undefined, ["n"] null, ["b", bool],
["f", "<16 hex digits: the number's bits>"], ["s", "<hex of UTF-8>"],
["i", "<decimal>"] bigint, ["y", "<hex>"] bytes, ["a", [values]],
["o", [["<hex of the key's UTF-8>", value], …]] (fields in order, repeats kept).
Text travels as hex so that no JSON escaping stands between the two sides.
References (tag 10) are refused: the target holds none.
-/
import Lean.Data.Json
import Lasm.JS.Core

open Lean Lasm.JS

def hexDigit (n : Nat) : Char := "0123456789abcdef".toList[n % 16]!

def hex (b : ByteArray) : String :=
  b.foldl (init := "") fun s x => s.push (hexDigit (x.toNat / 16)) |>.push (hexDigit (x.toNat % 16))

def unhexDigit (c : Char) : Except String Nat :=
  if '0' ≤ c ∧ c ≤ '9' then .ok (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then .ok (c.toNat - 'a'.toNat + 10)
  else .error s!"not a hex digit: {c}"

def unhex (s : String) : Except String ByteArray := do
  let cs := s.toList.toArray
  if cs.size % 2 != 0 then throw "odd hex length"
  let mut out := ByteArray.emptyWithCapacity (cs.size / 2)
  for i in [0:cs.size / 2] do
    out := out.push (16 * (← unhexDigit cs[2 * i]!) + (← unhexDigit cs[2 * i + 1]!)).toUInt8
  return out

def text (s : String) : Except String String := do
  match String.fromUTF8? (← unhex s) with
  | some t => .ok t
  | none => .error "text that is not UTF-8"

def bits (s : String) : Except String UInt64 := do
  let b ← unhex s
  if b.size != 8 then throw "a number is 8 bytes"
  return (List.range 8).foldl (fun acc i => acc ||| (b[i]!.toUInt64 <<< (8 * i).toUInt64)) 0

def bitsHex (n : UInt64) : String :=
  hex ⟨(List.range 8).toArray.map fun i => (n >>> (8 * i).toUInt64).toUInt8⟩

partial def toData (j : Json) : Except String Data := do
  let tag : String ← j.getArrVal? 0 >>= (·.getStr?)
  let arg := j.getArrVal? 1
  match tag with
  | "u" => return .undefined
  | "n" => return .null
  | "b" => return .bool (← arg >>= (·.getBool?))
  | "f" => return .number (Float.ofBits (← bits (← arg >>= (·.getStr?))))
  | "s" => return .string (← text (← arg >>= (·.getStr?)))
  | "i" =>
    match (← arg >>= (·.getStr?)).toInt? with
    | some i => return .bigint i
    | none => throw "a bigint"
  | "y" => return .bytes (← unhex (← arg >>= (·.getStr?)))
  | "a" => return .array (← (← arg >>= (·.getArr?)).mapM toData)
  | "o" =>
    let fields ← (← arg >>= (·.getArr?)).mapM fun f => do
      return (← text (← f.getArrVal? 0 >>= (·.getStr?)), ← toData (← f.getArrVal? 1))
    return .object fields
  | t => throw s!"tag {t}"

partial def ofData : Data → Json
  | .undefined => Json.arr #["u"]
  | .null => Json.arr #["n"]
  | .bool b => Json.arr #["b", toJson b]
  | .number n => Json.arr #["f", toJson (bitsHex n.toBits)]
  | .string s => Json.arr #["s", toJson (hex s.toUTF8)]
  | .bigint i => Json.arr #["i", toJson (toString i)]
  | .bytes b => Json.arr #["y", toJson (hex b)]
  | .array xs => Json.arr #["a", Json.arr (xs.map ofData)]
  | .object fs => Json.arr #["o", Json.arr (fs.map fun (k, v) => Json.arr #[toJson (hex k.toUTF8), ofData v])]
  | .ref _ _ => Json.arr #["r"]

def answer (j : Json) : Except String Json := do
  match j.getObjVal? "decode", j.getObjVal? "encode" with
  | .ok h, _ =>
    let b ← unhex (← h.getStr?)
    return match Wire.decodeWith (m := Except String) id (fun h _ => .error s!"a reference ({h})") b with
      | .ok d => Json.mkObj [("ok", ofData d)]
      | .error e => Json.mkObj [("error", toJson e)]
  | _, .ok v =>
    return match Wire.encode (← toData v) with
      | .ok b => Json.mkObj [("ok", toJson (hex b))]
      | .error e => Json.mkObj [("error", toJson e)]
  | _, _ => throw "neither decode nor encode"

def main : IO Unit := do
  let stdin ← IO.getStdin
  let stdout ← IO.getStdout
  repeat
    let line ← stdin.getLine
    if line.isEmpty then break
    let out := match Json.parse line >>= answer with
      | .ok j => j
      | .error e => Json.mkObj [("fault", toJson e)]
    stdout.putStrLn out.compress
    stdout.flush
