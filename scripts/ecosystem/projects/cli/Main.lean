import Cli
open Cli

def greet (p : Parsed) : IO UInt32 := do
  let name := p.positionalArg! "name" |>.as! String
  let times := p.flag? "times" |>.map (·.as! Nat) |>.getD 1
  for _ in [0:times] do
    IO.println s!"{if p.hasFlag "shout" then name.toUpper else name}!"
  return 0

def sum (p : Parsed) : IO UInt32 := do
  let xs := p.variableArgsAs! Nat
  IO.println s!"sum = {xs.foldl (· + ·) 0}"
  return 0

def greetCmd : Cmd := `[Cli|
  greet VIA greet; ["0.1"]
  "Greet someone."
  FLAGS:
    s, shout; "Use upper case."
    t, times : Nat; "Repeat count."
  ARGS:
    name : String; "Who to greet."
]

def sumCmd : Cmd := `[Cli|
  sum VIA sum; ["0.1"]
  "Add numbers."
  ARGS:
    ...numbers : Nat; "Numbers to add."
]

def app : Cmd := `[Cli|
  app NOOP; ["1.0.0"]
  "Lasm ecosystem check for lean4-cli."
  SUBCOMMANDS:
    greetCmd;
    sumCmd
]

def main (args : List String) : IO UInt32 := do
  let mut status : UInt32 := 0
  for argv in [["greet", "Lean"], ["greet", "-s", "--times", "2", "node"], ["sum", "1", "2", "39"], ["greet"], ["--help"]] do
    IO.println s!"$ app {" ".intercalate argv}"
    status := status + (← app.validate argv)
  let _ := args
  IO.println s!"status sum {status}"
  return 0
