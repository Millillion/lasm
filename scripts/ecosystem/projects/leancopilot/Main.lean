import LeanCopilot

/-! Tier C measurement: LeanCopilot's native library (CTranslate2) loads while Lean
elaborates this file; the deployed program needs none of it. -/

theorem add_comm' (a b : Nat) : a + b = b + a := by omega

def main : IO Unit := IO.println "LeanCopilot elaborated; runtime is plain Lean"
