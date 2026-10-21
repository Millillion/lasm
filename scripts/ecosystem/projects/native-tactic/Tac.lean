import Lean
open Lean Elab Term

@[extern "tac_magic"] opaque magic (n : UInt64) : UInt64

/-- Evaluated by the elaborator, which calls the native `tac_magic`. -/
elab "magic!" n:num : term => return mkNatLit (magic n.getNat.toUInt64).toNat

/-- A tactic that closes `n = k` goals after computing `k` natively. -/
elab "magic_rfl" : tactic => do Lean.Elab.Tactic.evalTactic (← `(tactic| decide))
