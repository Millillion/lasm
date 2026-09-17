/- Scalar-only probe: intentionally does not establish runtime support. -/
@[export lasm_add_u32]
def addU32 (a b : UInt32) : UInt32 := a + b

@[export lasm_mix_u32]
def mixU32 (x : UInt32) : UInt32 :=
  ((x ^^^ (x >>> (16 : UInt32))) * (2246822507 : UInt32)) ^^^ (x >>> (13 : UInt32))

def main : IO Unit := do
  let values : List UInt32 := [0, 1, 42, 65535, 2147483647, 2147483648, 4294967295]
  for a in values do
    for b in values do
      IO.println s!"{a.toNat},{b.toNat},{(addU32 a b).toNat},{(mixU32 a).toNat}"
