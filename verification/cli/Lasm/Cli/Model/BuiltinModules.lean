/-
# src/edge/builtin-modules.mjs, in Lean: `builtinModuleClosure`

A model of the JavaScript, checked against it on generated builtin
directories by test/models/cli-differential.mjs (the `cli-models`
workflow).

| src/edge/builtin-modules.mjs              | here                          |
| ----------------------------------------- | ----------------------------- |
| `isBuiltinModule(specifier)`              | `isBuiltinModule`             |
| the `relativeImport` matches of a file    | `imports` (given)             |
| `builtinModuleClosure(specifiers, dir)`   | `builtinModuleClosure`, `closureVisit` |

Reading guide. The JavaScript reads each builtin's file and takes the
builtins it imports from the lines `relativeImport` matches; the model is
given that relation, `imports`, as the entries of a map from a specifier to
the specifiers its file imports, in order (the differential writes the files
from such a map, in every import form, so the reading is checked too). As
in Model/EdgeInitializers.lean, the walk carries fuel, the number of entries
plus one, which nested visits cannot exhaust. Outside the model: a specifier
whose file does not exist (the JavaScript throws, naming the builtins).
-/
import Lasm.Cli.Model.EdgeInitializers

namespace Lasm.Cli

/-- `isBuiltinModule(specifier)`: it starts with `lasm:`. -/
def isBuiltinModule (s : String) : Bool := s.startsWith "lasm:"

/-- `visit(specifier)`: a specifier not yet seen is marked, the builtins its
file imports are visited in order, and then it is appended. -/
def closureVisit (imports : List (String × List String)) :
    Nat → List String × List String → String → List String × List String
  | 0, st, _ => st
  | fuel + 1, (seen, order), s =>
    if s ∈ seen then (seen, order)
    else
      let after := (edgesOf imports s).foldl (closureVisit imports fuel) (s :: seen, order)
      (after.1, after.2 ++ [s])

/-- `builtinModuleClosure(specifiers, directory)`: the requested builtins and
those they import, each once, in dependency order. -/
def builtinModuleClosure (imports : List (String × List String)) (specifiers : List String) : List String :=
  ((specifiers.filter isBuiltinModule).foldl (closureVisit imports (imports.length + 1)) ([], [])).2

end Lasm.Cli
