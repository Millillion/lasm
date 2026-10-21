import LSpec
open LSpec

def fib : Nat → Nat
  | 0 => 0 | 1 => 1 | n + 2 => fib n + fib (n + 1)

def arithmetic : TestSeq :=
  group "arithmetic" $
    test "addition" (2 + 2 = 4) $
    test "fib 10" (fib 10 = 55) $
    test "strings" ("ab" ++ "c" = "abc")

def failing : TestSeq :=
  test "deliberately false" (fib 5 = 6) $
  test "true again" (fib 6 = 8)

def main : IO UInt32 := do
  let ok ← lspecIO (.ofList [("passing", [arithmetic])]) []
  IO.println s!"passing suite exit {ok}"
  let bad ← lspecIO (.ofList [("failing", [failing])]) []
  IO.println s!"failing suite exit {bad}"
  return 0
