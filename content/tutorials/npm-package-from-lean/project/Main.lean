import App
import Lasm.JS
open Lasm.JS

/-- `semver.valid(v)`: the normalized version, or `null` (`none`). -/
@[js "semver" "valid"] opaque valid : String → IO (Option String)

/-- `semver.satisfies(version, range)`. -/
@[js "semver" "satisfies"] opaque satisfies : String → String → IO Bool

/-- `semver.maxSatisfying(versions, range)`: the highest match, or `null`. -/
@[js "semver" "maxSatisfying"] opaque maxSatisfying : Array String → String → IO (Option String)

/-- `npm run dev -- RANGE VERSION…` -/
def main (args : List String) : IO UInt32 := do
  match args with
  | range :: versions@(_ :: _) =>
    for version in versions do
      let normalized ← valid version
      let inRange ← match normalized with
        | some v => satisfies v range
        | none => pure false
      IO.println (App.line version range normalized inRange)
    match ← maxSatisfying versions.toArray range with
    | some best => IO.println s!"highest match: {best}"
    | none => IO.println "highest match: none"
    return 0
  | _ =>
    IO.eprintln "usage: npm run dev -- RANGE VERSION…"
    return 2
