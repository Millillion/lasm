/-
# src/application-initialization.mjs, in Lean: `initializerClosure`, `unitsReaching`

A model of the JavaScript, written to mirror it function for function, and
checked against it on generated graphs by test/models/cli-differential.mjs
(the `cli-models` workflow).

| JavaScript (src/application-initialization.mjs) | Lean |
| --- | --- |
| `units.get(name).calls` of the `units` Map, `units.has(name)` | `callsOf`, `hasUnit` |
| `initializerClosure(units, roots)`'s `visit` | `visitUnit` |
| `initializerClosure(units, roots)` | `initializerClosure` |
| `unitsReaching(graph, candidates, targets)` | `unitsReaching` |

Reading guide. `units` is a Map, read as its entries (each key once), and
of each unit only `calls` is read. The JavaScript's `seen` holds exactly the
units in `order`, so the model keeps `order` alone. Its walks end because
every unit is visited once; the model's carry fuel instead: `visitUnit`
gets one more than the number of units (each nested visit first appends a
unit not yet in `order`), and `unitsReaching`'s worklist one more than the
number of targets and graph edges (each pop takes one; a referrer, which has
an edge, is pushed once).
The rest of the module (reading object files and archives, the C wrappers,
reading live symbols from the map, the planning probes) is not modelled.
-/

namespace Lasm.Cli.Initialization

/-- `units.has(name)`. -/
def hasUnit (units : List (String × List String)) (name : String) : Bool := (units.lookup name).isSome

/-- `units.get(name).calls`. -/
def callsOf (units : List (String × List String)) (name : String) : List String := (units.lookup name).getD []

/-- `visit(name)`: a unit not yet in `order` is appended, then its calls are
visited in order. -/
def visitUnit (units : List (String × List String)) : Nat → List String → String → List String
  | 0, order, _ => order
  | fuel + 1, order, name =>
    if name ∈ order ∨ !hasUnit units name then order
    else (callsOf units name).foldl (visitUnit units fuel) (order ++ [name])

/-- `initializerClosure(units, roots)`: the units reachable from the roots
through initializer calls, in first-visit order. -/
def initializerClosure (units : List (String × List String)) (roots : List String) : List String :=
  roots.foldl (visitUnit units (units.length + 1)) []

/-- The reverse graph of `unitsReaching`: for each referenced name, its
referrers in the order the entries list them. -/
def reverseGraph (graph : List (String × List String)) : List (String × List String) :=
  graph.foldl (fun rev (name, refs) => refs.foldl (fun rev r =>
    match rev.lookup r with
    | some _ => rev.map fun (k, v) => if k = r then (k, v ++ [name]) else (k, v)
    | none => rev ++ [(r, [name])]) rev) []

/-- The worklist loop: pop a name, mark and push its unseen referrers. -/
def reachingLoop (rev : List (String × List String)) : Nat → List String → List String → List String
  | 0, seen, _ => seen
  | _ + 1, seen, [] => seen
  | fuel + 1, seen, pending =>
    let name := pending.getLast!
    let pending := pending.dropLast
    let (seen, pending) := ((rev.lookup name).getD []).foldl
      (fun (seen, pending) caller => if caller ∈ seen then (seen, pending) else (seen ++ [caller], pending ++ [caller]))
      (seen, pending)
    reachingLoop rev fuel seen pending

/-- `unitsReaching(graph, candidates, targets)`: the candidates whose code
references one of the targets, directly or through other functions. -/
def unitsReaching (graph : List (String × List String)) (candidates targets : List String) : List String :=
  let rev := reverseGraph graph
  let fuel := (graph.map (·.2.length)).sum + targets.length + 1
  let seen := reachingLoop rev fuel targets targets
  candidates.filter (· ∈ seen)

end Lasm.Cli.Initialization
