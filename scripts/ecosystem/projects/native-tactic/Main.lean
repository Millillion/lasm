import Tac

def precomputed : Nat := magic! 7

theorem small : magic! 2 = 5 := by magic_rfl

def main : IO Unit := IO.println s!"computed during elaboration: {precomputed}, {magic! 12}"
