module
import Lean

public def main : IO Unit := do
  IO.println (← Lean.findSysroot).toString
