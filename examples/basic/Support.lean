module
prelude
public import Init.Data.Int.Basic
public import Init.Data.String.Bootstrap
public import Init.Data.UInt.Basic

public section
namespace Support

-- This value requires allocation during module initialization.
@[noinline] def offset : Nat := 340282366920938463463374607431768211507

inductive Tree where
  | leaf : Nat → Tree
  | branch : Tree → Tree → Tree

def total : Tree → Nat
  | .leaf n => n
  | .branch a b => Nat.add (total a) (total b)

end Support
