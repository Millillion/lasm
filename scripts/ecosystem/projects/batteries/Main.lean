import Batteries.Data.BinaryHeap
import Batteries.Data.UnionFind
import Batteries.Data.List.Basic
import Batteries.Data.String.Basic
import Batteries.Data.BinomialHeap

def heapSort (xs : Array Nat) : Array Nat := Id.run do
  let mut h : Batteries.BinaryHeap Nat := .empty
  for x in xs do h := h.insert x
  let mut out := #[]
  while true do
    match h.max with
    | none => break
    | some m => out := out.push m; h := h.popMax
  return out

def main : IO Unit := do
  IO.println (heapSort #[5, 3, 9, 1, 7, 3])
  let uf := (((Batteries.UnionFind.empty.push.push.push.push).union! 0 1).union! 2 3).union! 1 3
  IO.println s!"components: {(List.range 4).map fun i => (uf.find! i).2}"
  IO.println ([1, 2, 3, 4, 5, 6].splitAt 2)
  IO.println ([3, 1, 2, 9, 4].mergeSort (· ≤ ·))
  IO.println ("a,b,,c".splitOn ",")
  let bh := ([4, 8, 1, 6] : List Nat).foldl (fun h x => h.insert x) (Batteries.BinomialHeap.empty (α := Nat) (le := (· ≤ ·)))
  IO.println (bh.toList)
