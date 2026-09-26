-- Supplementary legacy import semantics; ordinary Lean without module phase separation.
import Std.Data.HashMap
import Lean.Data.Json

inductive Branch (α : Type) where
  | leaf : α → Branch α
  | pair : Branch α → Branch α → Branch α

def Branch.fold (f : α → β) (combine : β → β → β) : Branch α → β
  | .leaf x => f x
  | .pair left right => combine (left.fold f combine) (right.fold f combine)

structure Item where
  name : String
  value : Nat
  deriving Lean.ToJson, Lean.FromJson, BEq

initialize counter : IO.Ref Nat ← IO.mkRef 7

private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

def main (args : List String) : IO Unit := do
  let seed := (args.head?.getD "17").toNat?.getD 17
  let tree : Branch Nat := .pair (.leaf seed) (.pair (.leaf 3) (.leaf 5))
  -- Polymorphic recursion and a closure capturing a runtime input.
  let total := tree.fold (fun value => value + seed) (· + ·)
  ensure (total == 4 * seed + 8) "closure or recursive datatype"
  let huge := (2 : Nat) ^ 200 + seed
  ensure ((huge * 19) / 19 == huge) "arbitrary precision arithmetic"
  let values := (List.range 64).toArray.map (fun n => n * n + seed)
  let table : Std.HashMap Nat Nat := values.foldl (fun m v => m.insert v (v + 1)) {}
  ensure (table[seed]? == some (seed + 1)) "standard hash map"
  let item : Item := ⟨"λ 日本語", huge + total⟩
  let encoded := (Lean.toJson item).compress
  let decoded ← IO.ofExcept <| Lean.Json.parse encoded >>= Lean.fromJson? (α := Item)
  ensure (decoded == item) "derived JSON round trip"
  let tasks ← (List.range 4).mapM fun n => IO.asTask (do
    pure (tree.fold (· + n) (· + ·))) Task.Priority.dedicated
  for (task, n) in tasks.zip (List.range 4) do
    ensure ((← IO.ofExcept (← IO.wait task)) == seed + 8 + 3 * n) "task closure"
  counter.modify (· + total)
  ensure ((← counter.get) == 7 + total) "module initialization"
  let caught ← try
    throw (IO.userError "expected λ failure")
    pure false
  catch error => pure (error.toString == "expected λ failure")
  ensure caught "exception propagation"
  IO.println s!"features passed: {seed}, {total}, {encoded}"
