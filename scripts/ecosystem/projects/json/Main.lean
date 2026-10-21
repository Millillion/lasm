import Lean.Data.Json
import Lean.Elab.Deriving.FromToJson
open Lean

structure Item where
  name : String
  price : Float
  tags : Array String := #[]
  stock : Option Nat := none
deriving ToJson, FromJson, Repr

inductive Shape where
  | circle (r : Nat)
  | rect (w h : Nat)
deriving ToJson, FromJson, Repr

def main : IO Unit := do
  let items := #[{ name := "apple", price := 1.25, tags := #["fruit"] : Item }, { name := "pear", price := 2.5, stock := some 3 }]
  IO.println (toJson items).compress
  IO.println (toJson items).pretty
  IO.println (toJson [Shape.circle 2, .rect 3 4]).compress
  let input := "{\"name\": \"plum\", \"price\": 0.75, \"tags\": [\"stone\", \"fruit\"], \"stock\": 12, \"extra\": null}"
  match Json.parse input >>= fromJson? (α := Item) with
  | .ok item => IO.println s!"{repr item}"
  | .error e => IO.println s!"error: {e}"
  match Json.parse "[1, 2.5e3, -0.001, true, null, \"\\u00e9\\n\"]" with
  | .ok j => IO.println j.compress
  | .error e => IO.println e
  match (Json.parse "{\"a\": [1, }") with
  | .ok j => IO.println j.compress
  | .error e => IO.println s!"parse error: {e}"
  IO.println ((fromJson? (Json.mkObj [("r", 5)]) : Except String Shape) matches .error _)
