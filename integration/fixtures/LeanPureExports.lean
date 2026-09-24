import Init

-- Supplementary oracle for pure exports from the real const_fold application
-- module. This does not replace or modify the upstream benchmark.
def main : IO Unit := do
  for (a, b) in ([(0, 0), (0, 7), (9, 0), (48, 18), (17, 19), (65536, 256),
      (4294967296, 2147483648), (1152921504606846976, 576460752303423488),
      (123456789, 987654321)] : List (Nat × Nat)) do
    IO.println s!"gcd {a} {b} {Nat.gcd a b}"
  for n in ([0, 1, 2, 3, 7, 8, 255, 256, 65535, 65536, 4294967295,
      4294967296, 1152921504606846975, 1152921504606846976] : List Nat) do
    IO.println s!"log2 {n} {Nat.log2 n}"
