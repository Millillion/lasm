/-
# src/dev.mjs, in Lean: `changedFiles` and `parseDevArguments`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| JavaScript (src/dev.mjs) | Lean |
| --- | --- |
| `changedFiles(before, after)` | `changedFiles` |
| `runtimeTargets`, `edgeOnlyTargets`, `devTargets`, `devUsage` | the definitions of the same names |
| `parseDevArguments(tokens)` | `parseDevArgumentsWith` (the loop, `devLoop`; the checks after it, `devFinish`), with the runtime the CLI runs on (`jsRuntime`, src/js-runtime.mjs) as a parameter; Interface.lean's `parseDevArguments` is it with `jsRuntime` |

A snapshot is a JavaScript `Map` from a file to its hash (`null`, `none`
here, for a file that could not be read), read as its entries in insertion
order; a `Map` has each key once.
-/
import Lasm.Cli.Model.CliArguments

namespace Lasm.Cli

/-- `changedFiles(before, after)`:

```js
for (const [file, hash] of after) if (before.get(file) !== hash) changed.push(file);
for (const file of before.keys()) if (!after.has(file)) changed.push(file);
```

`before.get(file)` of a file `before` lacks is `undefined`, which differs
from every hash and from `null`: here `before.lookup file` is `none`, which
differs from every `some hash`. -/
def changedFiles (before after : List (String × Option String)) : List String :=
  (after.filter fun (file, hash) => before.lookup file != some hash).map (·.1) ++
    (before.filter fun (file, _) => !(after.any (·.1 == file))).map (·.1)

/-! ## `parseDevArguments` -/

def runtimeTargets : List String := ["node", "bun", "deno"]
def edgeOnlyTargets : List String := ["workers", "vercel-edge", "netlify-edge", "deno-deploy", "supabase-edge"]
def devTargets : List String := runtimeTargets ++ edgeOnlyTargets ++ ["browser"]

def devUsage : String := "Usage: lasm dev [Main.lean] [--target " ++ "|".intercalate devTargets ++ "] [--release] [--no-run] [-- arguments…]
       lasm dev [Main.lean] --target browser [--release] [--no-watch] [--port 5173] [--host 127.0.0.1] [--output DIR]

Watches the project's Lean sources and Lake/npm configuration, rebuilds after
each change (dev profile: about 2 s for an ordinary edit once the first build
is done) and restarts the program. Arguments after -- are passed to main.
  node, bun, deno   run the program with that runtime (default: the runtime
                    running Lasm); a build error keeps the last good program running
  workers, vercel-edge, netlify-edge, deno-deploy
                    rebuild the edge output only; run the platform's own local
                    server yourself (for example npx wrangler dev). Lasm never
                    starts platform tools.
  browser           serve the browser build on http://127.0.0.1:5173 (--port,
                    --host) with live reload (src/browser/browser-dev.mjs);
                    --no-watch serves once built; open it yourself
Several outputs of one project rebuild together: --target node,browser, or
with their own sources --target node=Server.lean,browser=Client.lean (one
program runs; the browser output is served with live reload).
--release builds the release profile instead; --no-run only rebuilds.
Type rs and Enter to rebuild and restart; Ctrl+C stops."

/-- `/^--(target|port|host|output)(?:=(.*))?$/s.exec(token)`: the option's
name and the value written in the token. -/
def devValued (token : String) : Option (String × Option String) :=
  ["target", "port", "host", "output"].findSome? fun name => (valuedOption name token).map (name, ·)

/-- One item of `value.split(',')`: `const [target, input] = item.split('=')`,
then the checks, and `{ target, ...(input ? { input } : {}) }` (`""` is
falsy: no input). -/
def devOutput (item : String) : Except String (String × Option String) :=
  let parts := item.splitOn "="
  let target := parts.headD ""
  let input := parts[1]?
  if target ∉ devTargets then .error ("lasm dev --target accepts " ++ ", ".intercalate devTargets ++ ", not \"" ++ target ++ "\"")
  else if input.any (fun i => !i.endsWith ".lean") then .error ("--target " ++ item ++ ": the source must be a .lean file")
  else .ok (target, input.filter (· ≠ ""))

/-- `/^\d{1,5}$/.test(value) && Number(value) <= 65535`: the port. -/
def devPort (value : String) : Option Nat :=
  if 1 ≤ value.length ∧ value.length ≤ 5 ∧ value.all Char.isDigit ∧ value.toNat! ≤ 65535 then some value.toNat! else none

/-- The loop's state besides the result: the outputs as the loop leaves them
(each with its source when the item named one). -/
structure DevState where
  result : Parsed
  outputs : Option (List (String × Option String)) := none
  positional : List String := []

/-- A valued option with its value: the checks of its branch of the loop. -/
def devSetValued (st : DevState) (name : String) (value : Option String) : Except String DevState :=
  match value with
  | none => .error ("--" ++ name ++ " requires a value\n\n" ++ devUsage)
  | some v =>
    if v = "" ∨ v.startsWith "--" then .error ("--" ++ name ++ " requires a value\n\n" ++ devUsage)
    else if name = "target" then
      match (v.splitOn ",").mapM devOutput with
      | .error e => .error e
      | .ok outputs =>
        if (outputs.filter fun o => o.1 ∈ runtimeTargets).length > 1 then .error "lasm dev runs one program: choose one of node, bun and deno"
        else .ok { st with outputs := some outputs, result := { st.result with target? := some (outputs.headD ("", none)).1 } }
    else if name = "port" then
      match devPort v with
      | some p => .ok { st with result := { st.result with port? := some p } }
      | none => .error ("--port needs a port number, not \"" ++ v ++ "\"")
    else if name = "host" then .ok { st with result := { st.result with host? := some v } }
    else .ok { st with result := { st.result with output? := some v } }

/-- The `for` loop: `.ok none` is the early `return { command: 'dev-help' }`. -/
def devLoop (st : DevState) : List String → Except String (Option DevState)
  | [] => .ok (some st)
  | token :: rest =>
    if token = "--" then .ok (some { st with result := { st.result with args? := some rest } })
    else if token = "--help" ∨ token = "-h" then .ok none
    else if token = "--release" then devLoop { st with result := { st.result with profile? := some "release" } } rest
    else if token = "--dev" then devLoop { st with result := { st.result with profile? := some "dev" } } rest
    else if token = "--no-run" then devLoop { st with result := { st.result with run? := some false } } rest
    else if token = "--verbose" then devLoop { st with result := { st.result with verbose? := some true } } rest
    else if token = "--no-watch" then devLoop { st with result := { st.result with watch? := some false } } rest
    else match devValued token with
      | some (name, inline) =>
        let next := takeValue inline rest
        have : next.2.length < rest.length + 1 := Nat.lt_succ_of_le (takeValue_length inline rest)
        match devSetValued st name next.1 with
        | .ok st => devLoop st next.2
        | .error e => .error e
      | none =>
        if token.startsWith "-" then .error ("Unknown lasm dev option: " ++ token ++ ". Program arguments follow --.\n\n" ++ devUsage)
        else devLoop { st with positional := st.positional ++ [token] } rest
termination_by tokens => tokens.length

/-- After the loop: the checks from `if (positional.length > 1)` on. -/
def devFinish (runtime : String) (st : DevState) : Except String Parsed :=
  if st.positional.length > 1 then .error ("lasm dev takes one Lean source.\n\n" ++ devUsage)
  else
    let input := st.positional.head?.getD (((st.outputs.getD []).findSome? (·.2)).getD "Main.lean")
    if !input.endsWith ".lean" then .error ("lasm dev expects a Lean source (Main.lean), not " ++ input)
    else
      let target := st.result.target?.getD runtime
      let outputs := (st.outputs.getD [(target, none)]).map fun (t, i) => (t, i.getD input)
      let r : Parsed := { st.result with input? := some input, target? := some target, outputs? := some outputs }
      let browser := outputs.any (·.1 == "browser")
      if r.port?.isSome ∧ !browser then .error "--port applies to lasm dev --target browser (servers read $PORT and $HOST)"
      else if r.host?.isSome ∧ !browser then .error "--host applies to lasm dev --target browser (servers read $PORT and $HOST)"
      else if r.output?.isSome ∧ !browser then .error "--output applies to lasm dev --target browser (servers read $PORT and $HOST)"
      else if r.watch?.isSome ∧ !browser then .error "--no-watch applies to lasm dev --target browser (servers read $PORT and $HOST)"
      else .ok r

/-- `parseDevArguments(tokens)`, on the runtime `runtime`. -/
def parseDevArgumentsWith (runtime : String) (tokens : List String) : Except String Parsed :=
  let start : Parsed := { command := "dev", profile? := some "dev", args? := some [], run? := some true, verbose? := some false }
  match devLoop { result := start } tokens with
  | .error e => .error e
  | .ok none => .ok { command := "dev-help" }
  | .ok (some st) => devFinish runtime st

end Lasm.Cli
