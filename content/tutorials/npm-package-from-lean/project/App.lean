/-! Pure Lean: no JavaScript, so `lake build App` can also check it natively. -/

namespace App

/-- One line of the report, from what semver said about `version`. -/
def line (version range : String) (normalized : Option String) (inRange : Bool) : String :=
  match normalized with
  | none => s!"{version}: not a version"
  | some v => if inRange then s!"{v}: satisfies {range}" else s!"{v}: does not satisfy {range}"

end App
