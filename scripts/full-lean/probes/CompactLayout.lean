import Lean

structure SmallFields where
  label : String
  flag : Bool
  byte : UInt8
  word : UInt16
  deriving Repr, Inhabited

def small : SmallFields := ⟨"λ", true, 37, 513⟩
def large : Nat := 2 ^ 137 + 19
def array : Array SmallFields := #[small, { label := "second", flag := false, byte := 255, word := 65535 }]

example : large > 2 ^ 100 := by decide

def main : IO Unit := do
  IO.println (repr array)
  IO.println large
