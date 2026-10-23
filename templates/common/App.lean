/-! Pure Lean: no JavaScript, so `lake build` can also test it natively. -/

namespace App

def greet (name : String) : String :=
  s!"Hello, {name}, from Lean!"

end App
