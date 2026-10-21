import Mathlib.Data.Nat.Factors
import Mathlib.Data.Nat.Prime.Basic
import Mathlib.Data.List.Sort
import Mathlib.Order.Basic

/-! Tier C measurement: a program that imports small, computable slices of Mathlib. -/

def primesBelow (n : Nat) : List Nat := (List.range n).filter fun k => decide (Nat.Prime k)

theorem two_prime : Nat.Prime 2 := Nat.prime_two

def main : IO Unit := do
  IO.println s!"prime factors of 360: {Nat.primeFactorsList 360}"
  IO.println s!"primes below 60: {primesBelow 60}"
  IO.println s!"sorted: {[5, 3, 9, 1].mergeSort (· ≤ ·)}"
