module
public import Lean.Expr
public section
open Lean

def main : IO Unit := do
  IO.println s!"hashes {hash ("u" : String)} {hash (`u : Name)} {mixHash 2239 (hash (`u : Name))}"
  let level := Level.max (.succ (.param `u)) (.succ (.succ .zero))
  let expression := mkAppN (mkConst `f [level]) #[mkBVar 2, mkConst `a, mkNatLit 123456789]
  IO.println s!"level {level.hash} {level.depth} {level.hasParam}"
  IO.println s!"expr {expression.hash} {expression.looseBVarRange} {expression.hasLevelParam}"
  IO.println s!"arguments {expression.getAppArgs.size} {expression.getAppFn.isConst}"
  -- Saturation of packed depth metadata must agree with the native primitives.
  let deep := (List.range 300).foldl (fun e _ => mkApp e (mkConst `x)) expression
  IO.println s!"deep {deep.hash} {deep.approxDepth}"
