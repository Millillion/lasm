/-
# src/package.mjs, in Lean: `parsePackageArguments`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| JavaScript (src/package.mjs) | Lean |
| --- | --- |
| `packageTargets` (the fields the usage text reads: `summary`, `output`) | `packageTable`; `packageTargets` its names |
| `packageUsage` | `packageUsage` |
| `parsePackageArguments(tokens)` | `parsePackageArguments` (the loop, `packageLoop`) |

The rest of the module packages a build: files, processes and archives,
tested end to end.
-/
import Lasm.Cli.Model.Init

namespace Lasm.Cli

/-- A packaging target: its name, what it writes and its summary. -/
structure PackageTarget where
  name : String
  output : String
  summary : String

def packageTable : List PackageTarget := [
  ⟨"lambda", "lambda.zip", "AWS Lambda .zip for the nodejs24.x runtime (x86_64 or arm64)"⟩,
  ⟨"lambda-edge", "lambda-edge.zip", "Lambda@Edge .zip (CloudFront origin request, x86_64)"⟩,
  ⟨"vercel", ".vercel/output", "Vercel Function, prebuilt (.vercel/output, Build Output API v3)"⟩,
  ⟨"netlify", "netlify/functions/lasm", "Netlify Function (v2, netlify/functions/lasm)"⟩,
  ⟨"azure", "azure-functions", "Azure Functions app (Node.js v4 programming model)"⟩,
  ⟨"gcf", "gcf", "Google Cloud Functions (gen2, Functions Framework) source directory"⟩]

def packageTargets : List String := packageTable.map (·.name)

def packageUsage : String := "Usage: lasm package [dist] --target " ++ "|".intercalate packageTargets ++ " [--output PATH] [--allow-dev]

Packages a built Lasm program (lasm build output, default dist/) for a
function platform. Its main publishes a fetch handler with
Lasm.JS.exportDefault (Request → Async Response), which the platform's handler
calls directly. Writes, by target:
" ++ "\n".intercalate (packageTable.map fun t => "  " ++ padEnd t.name 12 ++ " " ++ padEnd t.output 23 ++ " " ++ t.summary) ++ "
  " ++ padEnd "browser" 12 ++ " " ++ padEnd "(in place)" 23 ++ " a browser build (lasm build --target browser): checked against its manifest, _headers added

lasm build Main.lean --target <target> builds and packages in one step; use
lasm package to package one build for several platforms. Lasm never installs
or starts a platform's own tools: test and deploy with the platform's CLI.
Packages hold release builds; a dev build (lasm build --dev, lasm run) is
refused unless --allow-dev is given.

Example: npx lasm build Main.lean && npx lasm package --target lambda"

/-- The `for` loop: `.ok none` is the early `return { command: 'package-help' }`. -/
def packageLoop (r : Parsed) (positional : List String) : List String → Except String (Option (Parsed × List String))
  | [] => .ok (some (r, positional))
  | token :: rest =>
    if token = "--help" ∨ token = "-h" then .ok none
    else if token = "--allow-dev" then packageLoop { r with allowDev? := some true } positional rest
    else match (valuedOption "target" token).map ("target", ·) |>.orElse fun _ => (valuedOption "output" token).map ("output", ·) with
      | some (name, inline) =>
        let next := takeValue inline rest
        have : next.2.length < rest.length + 1 := Nat.lt_succ_of_le (takeValue_length inline rest)
        if missingValue next.1 then .error ("--" ++ name ++ " requires a value\n\n" ++ packageUsage)
        else if (if name = "target" then r.target? else r.output?).isSome then .error ("Specify --" ++ name ++ " only once")
        else
          let v := next.1.getD ""
          packageLoop (if name = "target" then { r with target? := some v } else { r with output? := some v }) positional next.2
      | none =>
        if token.startsWith "-" then .error ("Unknown lasm package option: " ++ token ++ "\n\n" ++ packageUsage)
        else packageLoop r (positional ++ [token]) rest
termination_by tokens => tokens.length

/-- `parsePackageArguments(tokens)`. -/
def parsePackageArguments (tokens : List String) : Except String Parsed :=
  match packageLoop { command := "package" } [] tokens with
  | .error e => .error e
  | .ok none => .ok { command := "package-help" }
  | .ok (some (r, positional)) =>
    if positional.length > 1 then .error packageUsage
    else match r.target? with
      | none => .error ("--target is required\n\n" ++ packageUsage)
      | some target =>
        if target ∉ packageTargets ∧ target ≠ "browser" then
          .error ("Unknown target \"" ++ target ++ "\". Choose one of: " ++ ", ".intercalate (packageTargets ++ ["browser"]))
        else if target = "browser" ∧ r.output?.isSome then .error "lasm package --target browser checks the build in place; --output does not apply"
        else .ok { r with input? := some (positional.head?.getD "dist") }

end Lasm.Cli
