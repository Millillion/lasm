import App

/-- `npm run dev -- Ada` prints `Hello, Ada, from Lean!`. -/
def main (args : List String) : IO Unit := do
  IO.println (App.greet (args.headD "world"))
