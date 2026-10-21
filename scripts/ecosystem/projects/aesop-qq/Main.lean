import Proofs

def main : IO Unit := do
  IO.println s!"clamp: {[0, 5, 12].map (clamp 2 10)}"
  IO.println s!"answer: {answer}"
