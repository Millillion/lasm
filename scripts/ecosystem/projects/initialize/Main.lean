import A
import B
import C
import D
def main : IO Unit := do
  IO.println s!"registry: {← registry.get}"
  IO.println s!"constant: {dConst}"
