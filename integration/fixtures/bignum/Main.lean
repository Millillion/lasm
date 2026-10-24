/- Big-number differential test (docs/PLAN.md decision 5). Lasm's Wasm runtime
   uses Lean's own big-number code (USE_GMP=OFF); native Lean uses GMP. This
   program prints the results of Nat/Int/bitwise/shift/division/gcd/power/
   conversion/string operations over edge-case and pseudo-random values; the
   Wasm output must equal native Lean's byte for byte
   (integration/bignum-differential.mjs). Argument: number of random pairs. -/

/-- xorshift64* : a deterministic generator, identical on every platform. -/
structure Rng where
  s : UInt64

def Rng.next (r : Rng) : UInt64 × Rng :=
  let x := r.s
  let x := x ^^^ (x >>> 12)
  let x := x ^^^ (x <<< 25)
  let x := x ^^^ (x >>> 27)
  (x * 0x2545F4914F6CDD1D, ⟨x⟩)

/-- A 32-bit digit, biased towards the patterns that exercise carries and
    quotient-digit corrections: 0, 1, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF. -/
def Rng.digit (r : Rng) : Nat × Rng :=
  let (a, r) := r.next
  let v := match a.toNat % 8 with
    | 0 => 0 | 1 => 1 | 2 => 0x7FFFFFFF | 3 => 0x80000000 | 4 => 0xFFFFFFFF
    | _ => (a >>> 32).toNat
  (v, r)

/-- A value of 0 to `maxDigits` 32-bit digits. -/
def Rng.big (r : Rng) (maxDigits : Nat) : Nat × Rng := Id.run do
  let (a, r0) := r.next
  let mut r := r0
  let n := a.toNat % (maxDigits + 1)
  let mut v := 0
  for _ in [0:n] do
    let (d, r') := r.digit
    r := r'
    v := v * 2^32 + d
  return (v, r)

def edgeNats : List Nat :=
  [0, 1, 2, 3, 10, 255, 256, 2^31 - 1, 2^31, 2^31 + 1, 2^32 - 1, 2^32, 2^32 + 1,
   2^62, 2^63 - 1, 2^63, 2^63 + 1, 2^64 - 1, 2^64, 2^64 + 1, 2^96 - 1, 2^127, 2^128 - 1, 2^128,
   2^128 + 1, 2^256, 2^256 - 1, 10^18, 10^19, 10^20, 10^38, 10^100, 3^200, 7^300 + 12345,
   2^1000 - 1, 2^4096 + 2^2048 + 1, (2^64 - 1) * (2^64 - 1), 0xFFFFFFFF00000000FFFFFFFF,
   0x8000000000000000000000000000000000000001]

def nats (a b : Nat) : String :=
  let shift := b % 300
  s!"N {a} {b} | + {a + b} - {a - b} {b - a} * {a * b} / {a / b} % {a % b} gcd {Nat.gcd a b} lcm {Nat.lcm a b} " ++
  s!"cmp {repr (compare a b)} {decide (a = b)} {decide (a < b)} {Nat.ble a b} | << {a <<< shift} >> {a >>> shift} " ++
  s!"and {a &&& b} or {a ||| b} xor {a ^^^ b} | log2 {Nat.log2 a} sqrt {Nat.sqrt a} bit {a.testBit shift} " ++
  s!"pow {a ^ (b % 7)} | u8 {a.toUInt8} u16 {a.toUInt16} u32 {a.toUInt32} u64 {a.toUInt64} usize {a.toUSize} " ++
  s!"i64 {Int.toInt64 a} f {a.toFloat} hex {String.ofList (Nat.toDigits 16 a)} bin {(Nat.toDigits 2 (a % 2^200)).length} " ++
  s!"parse {(toString a).toNat? == some a} {"0" ++ toString a |>.toNat?} succ {a + 1 - 1 == a} pred {a.pred} " ++
  s!"min {min a b} max {max a b} dvd {decide (b ∣ a)}"

def ints (a b : Int) : String :=
  let shift := (b.natAbs % 200)
  s!"I {a} {b} | + {a + b} - {a - b} * {a * b} / {a / b} % {a % b} tdiv {a.tdiv b} tmod {a.tmod b} " ++
  s!"fdiv {a.fdiv b} fmod {a.fmod b} ediv {Int.ediv a b} emod {Int.emod a b} bdiv {Int.bdiv a b.natAbs} bmod {Int.bmod a b.natAbs} | " ++
  s!"neg {-a} abs {a.natAbs} toNat {a.toNat} sign {a.sign} gcd {Int.gcd a b} lcm {Int.lcm a b} pow {a ^ (b.natAbs % 6)} " ++
  s!">> {a >>> shift} << {a <<< shift} not {Int.not a} | " ++
  s!"cmp {repr (compare a b)} {decide (a = b)} {decide (a < b)} {decide (a ≤ b)} | " ++
  s!"i8 {a.toInt8} i16 {a.toInt16} i32 {a.toInt32} i64 {a.toInt64} isize {a.toISize} f {Float.ofInt a} " ++
  s!"parse {(toString a).toInt? == some a} repr {repr a} emod2 {a % 2} bit {a.toNat.testBit shift}"

def floats (a : Nat) : String :=
  let f := a.toFloat
  s!"F {a} | {f} {f.toUInt64} {f.toUInt32} {f.toUSize} {f.toUInt8} {Float.ofNat a == f} {f.floor} " ++
  s!"{(Float.ofScientific a true 30)} {(Float.ofScientific (a % 2^80) false 3)} {(-f).toUInt64} " ++
  s!"{f.toInt64} {(f / 3).toUInt64.toNat} {(f.sqrt).toUInt64} {Float.ofInt (-(a : Int))}"

def main (args : List String) : IO Unit := do
  let pairs := (args.head?.bind String.toNat?).getD 600
  -- Edge-case cross product, as Nat and with every sign as Int.
  for a in edgeNats do
    IO.println (floats a)
    for b in edgeNats do
      IO.println (nats a b)
      IO.println (ints a b); IO.println (ints (-a) b); IO.println (ints a (-b)); IO.println (ints (-a) (-b))
  -- Pseudo-random values of up to 100 32-bit digits, divisors of every size.
  let mut r : Rng := ⟨0x9E3779B97F4A7C15⟩
  for i in [0:pairs] do
    let (a, r1) := r.big (if i % 10 == 0 then 100 else 24)
    let (b, r2) := r1.big (if i % 3 == 0 then 3 else 20)
    let (s, r3) := r2.next
    r := r3
    IO.println (nats a b)
    IO.println (ints (if s &&& 1 == 0 then a else -a) (if s &&& 2 == 0 then b else -b))
    if i % 25 == 0 then IO.println (floats a)
    -- Division identity on constructed values: (q * d + rem) / d = q.
    let d := b + 1
    let q := a
    let rem := (s.toNat * 0x9E3779B9) % d
    let n := q * d + rem
    IO.println s!"D {n / d == q} {n % d == rem} {(n : Int) / (d : Int) == q} {(-(n : Int)).tdiv d == -(q : Int)}"
  -- Huge values: powers, decimal conversion and parsing.
  for (base, exp) in [(2, 10000), (3, 6000), (10, 5000), (7, 3333), (2^64 - 1, 150)] do
    let v : Nat := base ^ exp
    let text := toString v
    let digitSum := text.foldl (fun acc c => acc + (c.toNat - '0'.toNat)) 0
    IO.println <| s!"H {base}^{exp} len {text.length} sum {digitSum} head {text.take 40} tail {text.drop (text.length - 40)} " ++
      s!"parse {text.toNat? == some v} log2 {Nat.log2 v} mod {v % 1000000007} div {(v / (3^777 + 1)) % 10^30} " ++
      s!"sq {(v * v) % (2^127 - 1)} gcd {Nat.gcd v (6^500)} neg {(-(v : Int)) / 12345678901234567890} {(-(v : Int)) % 12345678901234567890}"
  IO.println "done"
