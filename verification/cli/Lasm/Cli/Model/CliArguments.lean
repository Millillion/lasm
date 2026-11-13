/-
# src/cli-arguments.mjs, in Lean: the command-line parser

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| JavaScript (src/cli-arguments.mjs) | Lean |
| --- | --- |
| `buildTargets`, `suspendModes`, `fixedLayoutTargets`, `platformBuildTargets`, `commandNames`, `cliUsage` | the definitions of the same names |
| `targetAliases`, `targetHint(value)` | `targetAliases`, `targetHint` |
| `asciiLower(text)` | `asciiLower` |
| `editDistance(a, b)` | `editDistance` (the row, `nextCells`) |
| `closest(word, candidates)` | `closest` |
| `parseLasmArguments(argv)` | `parseLasmArgumentsWith` (the option loop, `optionLoop`; Interface.lean's `parseLasmArguments` is it with the imports) |

What the module imports is a parameter, `ArgumentsEnv`: whether a file
exists (`existsSync`), the runtime the CLI runs on (`jsRuntime`, of
src/js-runtime.mjs), and the parsers of `lasm init`, `lasm dev` and
`lasm package` (their own modules', src/init.mjs, src/dev.mjs,
src/package.mjs, not modelled here).

A JavaScript string is read as a Lean `String`: one with an unpaired
surrogate has none, and the differential draws none. The words the parser
compares are spread into code points (`[...a]`) before they are measured,
so `.length` of a spread word is `String.length` here.
-/

namespace Lasm.Cli

/-- What `parseLasmArguments` returns: a plain object, each field present
(`some`) or absent (`none`). `template?`, `deploy?`, `directory?`, `run?`,
`watch?`, `port?`, `host?` and `outputs?` are fields of the objects that the
parsers of `lasm init` and `lasm dev` return (Model/Init.lean,
Model/Dev.lean); this module never sets them. -/
structure Parsed where
  command : String
  rebuild? : Option Bool := none
  verbose? : Option Bool := none
  args? : Option (List String) := none
  profile? : Option String := none
  allowDev? : Option Bool := none
  bundler? : Option Bool := none
  target? : Option String := none
  suspend? : Option String := none
  output? : Option String := none
  input? : Option String := none
  template? : Option String := none
  deploy? : Option (List String) := none
  outputs? : Option (List (String × String)) := none
  directory? : Option String := none
  run? : Option Bool := none
  watch? : Option Bool := none
  port? : Option Nat := none
  host? : Option String := none
deriving Inhabited, DecidableEq, Repr

/-- What the module imports. -/
structure ArgumentsEnv where
  /-- `existsSync(path)`. -/
  fileExists : String → Bool
  /-- `jsRuntime`: `"node"`, `"bun"` or `"deno"`. -/
  jsRuntime : String
  /-- `parseInitArguments(tokens)`, the parse or the message it throws. -/
  parseInit : List String → Except String Parsed
  /-- `parseDevArguments(tokens)`. -/
  parseDev : List String → Except String Parsed
  /-- `parsePackageArguments(tokens)`. -/
  parsePackage : List String → Except String Parsed

instance : Inhabited ArgumentsEnv := ⟨⟨fun _ => false, "node", fun _ => .error "", fun _ => .error "", fun _ => .error ""⟩⟩

def edgeBuildTargets : List String := ["workers", "vercel-edge", "netlify-edge", "bun", "deno", "deno-deploy", "supabase-edge"]
def wasiBuildTargets : List String := ["wasi", "fastly", "wasi-http"]
/-- `['node', ...Object.keys(packageTargets), ...edgeBuildTargets, ...wasiBuildTargets, 'browser']`:
the keys of src/package.mjs `packageTargets` are written out. -/
def buildTargets : List String :=
  ["node"] ++ ["lambda", "lambda-edge", "vercel", "netlify", "azure", "gcf"] ++ edgeBuildTargets ++ wasiBuildTargets ++ ["browser"]
def platformBuildTargets : List String := edgeBuildTargets ++ wasiBuildTargets ++ ["browser"]
def fixedLayoutTargets : List String := ["vercel-edge", "netlify-edge"]
def suspendModes : List String := ["none", "jspi"]
def commandNames : List String := ["build", "run", "dev", "init", "package", "editor", "cache"]

def targetAliases : List (String × String) :=
  [("cloudflare", "workers"), ("cloudflare-workers", "workers"), ("worker", "workers"), ("aws", "lambda"), ("aws-lambda", "lambda"),
   ("cloudfront", "lambda-edge"), ("supabase", "supabase-edge"), ("deno-deploy-edge", "deno-deploy"), ("spin", "wasi-http"),
   ("wasmtime", "wasi"), ("web", "browser"), ("vite", "browser"), ("azure-functions", "azure"), ("google-cloud-functions", "gcf"),
   ("cloud-functions", "gcf"), ("vercel-functions", "vercel"), ("netlify-functions", "netlify")]

/-- The usage text: one literal in the JavaScript, two pieces here, so that a
proof sees its first word without decoding the whole text. -/
def cliUsage : String := "Usage:" ++ " lasm <Main.lean> [--release] [-- arguments…]
       lasm dev [Main.lean] [--target node|bun|deno|workers|vercel-edge|netlify-edge|deno-deploy|supabase-edge|browser] [-- arguments…]
       lasm build <Main.lean> [--output DIR] [--target node|lambda|lambda-edge|vercel|netlify|azure|gcf|workers|vercel-edge|netlify-edge|bun|deno|deno-deploy|supabase-edge|wasi|fastly|wasi-http|browser] [--suspend none|jspi] [--bundler] [--dev]
       lasm init <directory> [--template plain|express|hono|fastify|std-http|web|fetch|fullstack] [--deploy …]
       lasm package [dist] --target lambda|lambda-edge|vercel|netlify|azure|gcf|browser
       lasm editor [project-directory]
       lasm cache repair

Options: --rebuild, --verbose, --help, --version
Profiles: lasm build makes release builds (optimized, byte-reproducible, for
deployment); --dev skips the size optimizations for a faster build. lasm run
(lasm Main.lean) makes dev builds; --release runs a release build.
Application arguments must follow --."

/-- `text.replace(/[A-Z]/g, c => c.toLowerCase())`. -/
def asciiLower (s : String) : String := s.map Char.toLower

/-! ## Edit distance -/

/-- One row of the table after the first: `x` is the character of `a` this
row is for, `ys` the characters of `b` still to fill, `old` the previous
row's cells above them; `diag` is `previous` (the old cell above-left) and
`left` the new cell to the left.

```js
for (let j = 1; j <= b.length; j++) {
  const current = row[j];
  row[j] = Math.min(row[j] + 1, row[j - 1] + 1, previous + (a[i - 1] === b[j - 1] ? 0 : 1));
  previous = current;
}
``` -/
def nextCells (x : Char) : List Char → List Nat → Nat → Nat → List Nat
  | y :: ys, o :: os, diag, left =>
    let cell := min (min (o + 1) (left + 1)) (diag + if x = y then 0 else 1)
    cell :: nextCells x ys os o cell
  | _, _, _, _ => []

/-- `editDistance(a, b)` over code points (`a = [...a]; b = [...b]`): the
first row is `0 … b.length`; each character of `a` (the `i`th) makes the next
(`row[0] = i`, then `nextCells`); the answer is `row[b.length]`, the last
cell. -/
def editDistance (a b : String) : Nat :=
  let b := b.toList
  let first := List.range (b.length + 1)
  let rows := a.toList.foldl (fun (i, row) x => (i + 1, (i + 1) :: nextCells x b row.tail (row.headD 0) (i + 1))) (0, first)
  rows.2.getLastD 0

/-- `closest(word, candidates)`: the first candidate at the least distance
(`distance` is `none` for `Infinity`), when within `max(2, ⌊length / 3⌋)`
of it. -/
def closest (word : String) (candidates : List String) : Option String :=
  let (best, distance) := candidates.foldl (init := ((none : Option String), (none : Option Nat))) fun (best, distance) candidate =>
    let d := editDistance (asciiLower word) (asciiLower candidate)
    if distance.all (d < ·) then (some candidate, some d) else (best, distance)
  if distance.any (· ≤ max 2 ((best.map String.length).getD 0 / 3)) then best else none

/-- `targetHint(value)`. -/
def targetHint (value : String) : String :=
  match (targetAliases.lookup (asciiLower value)).or (closest value buildTargets) with
  | some guess => " (did you mean --target " ++ guess ++ "?)"
  | none => ""

/-! ## The parser -/

/-- `/^--name(?:=(.*))?$/s.exec(token)`: `none` when it does not match,
`some none` for `--name`, `some (some v)` for `--name=v`. -/
def valuedOption (name token : String) : Option (Option String) :=
  if token = "--" ++ name then some none
  else if token.startsWith ("--" ++ name ++ "=") then some (some (token.drop (name.length + 3)).toString)
  else none

/-- `match[1] ?? tokens[++i]`: the value written in the token, or the next
token (consumed, and `undefined` past the end). -/
def takeValue : Option String → List String → Option String × List String
  | some v, rest => (some v, rest)
  | none, v :: rest => (some v, rest)
  | none, [] => (none, [])

theorem takeValue_length (inline : Option String) (rest : List String) : (takeValue inline rest).2.length ≤ rest.length := by
  unfold takeValue; split <;> simp

/-- `!value || value.startsWith('--')`. -/
def missingValue : Option String → Bool
  | none => true
  | some v => v = "" || v.startsWith "--"

/-- A valued option (`target`, `suspend` or `output`) with its value: the
checks of its branch of the loop. -/
def setValued (r : Parsed) (supplied : List String) (name : String) (value : Option String) : Except String Parsed :=
  if name = "target" then
    if r.command ≠ "build" then .error "--target is available only with lasm build"
    else if "target" ∈ supplied then .error "Specify --target only once"
    else match value with
      | some v =>
        if missingValue value then .error ("--target requires a value: " ++ ", ".intercalate buildTargets)
        else if v ∉ buildTargets then .error ("Unknown build target \"" ++ v ++ "\"" ++ targetHint v ++ ". Choose one of: " ++ ", ".intercalate buildTargets)
        else .ok { r with target? := some v }
      | none => .error ("--target requires a value: " ++ ", ".intercalate buildTargets)
  else if name = "suspend" then
    if "suspend" ∈ supplied then .error "Specify --suspend only once"
    else match value with
      | some v => if v ∈ suspendModes then .ok { r with suspend? := some v } else .error ("--suspend requires one of: " ++ ", ".intercalate suspendModes)
      | none => .error ("--suspend requires one of: " ++ ", ".intercalate suspendModes)
  else
    if "output" ∈ supplied then .error "Specify --output only once"
    else match value with
      | some v => if missingValue value then .error "--output requires a value" else .ok { r with output? := some v }
      | none => .error "--output requires a value"

/-- The valued option a token names, in the loop's order. -/
def valuedOf (token : String) : Option (String × Option String) :=
  match valuedOption "target" token with
  | some v => some ("target", v)
  | none => match valuedOption "suspend" token with
    | some v => some ("suspend", v)
    | none => (valuedOption "output" token).map ("output", ·)

/-- The `for` loop over the tokens after the command: `.ok none` is the early
`return { command: 'help' }`; `.ok (some (result, positional))` the state
after it (ended or broken at `--`); `.error` a throw. `supplied` is the
`Set` of valued options seen. -/
def optionLoop (r : Parsed) (positional supplied : List String) : List String → Except String (Option (Parsed × List String))
  | [] => .ok (some (r, positional))
  | token :: rest =>
    if token = "--" then
      if r.command ≠ "run" then .error "Application arguments are accepted by lasm run, not lasm build"
      else .ok (some ({ r with args? := some rest }, positional))
    else if token = "--help" ∨ token = "-h" then .ok none
    else if token = "--rebuild" then optionLoop { r with rebuild? := some true } positional supplied rest
    else if token = "--verbose" then optionLoop { r with verbose? := some true } positional supplied rest
    else if token = "--dev" ∨ token = "--release" then
      let profile := (token.drop 2).toString
      if r.profile?.any (· ≠ profile) then .error "Choose one of --dev and --release"
      else optionLoop { r with profile? := some profile } positional supplied rest
    else if token = "--allow-dev" then optionLoop { r with allowDev? := some true } positional supplied rest
    else if token = "--bundler" then optionLoop { r with bundler? := some true } positional supplied rest
    else match valuedOf token with
      | some (name, inline) =>
        let next := takeValue inline rest
        have : next.2.length < rest.length + 1 := Nat.lt_succ_of_le (takeValue_length inline rest)
        match setValued r supplied name next.1 with
        | .ok r => optionLoop r positional (name :: supplied) next.2
        | .error e => .error e
      | none =>
        if token.startsWith "-" then .error ("Unknown Lasm option: " ++ token ++ ". Application arguments must follow --.")
        else optionLoop r (positional ++ [token]) supplied rest
termination_by tokens => tokens.length

/-- `/[./\\]/.test(word)`. -/
def pathLike (word : String) : Bool := word.toList.any fun c => c = '.' || c = '/' || c = '\\'

/-- `if (positional.length === 2 && command === 'build' && parsed.output === undefined)`:
a second positional word of `lasm build` is its output directory. Returns the
parse and the words left over. -/
def placeOutput (r : Parsed) (more : List String) : Parsed × List String :=
  match more with
  | [o] => if r.command = "build" ∧ r.output? = none then ({ r with output? := some o }, []) else (r, more)
  | _ => (r, more)

/-- The default profile of a Lean source: release for `lasm build`, dev for
running it. -/
def defaultProfile (r : Parsed) (first : String) : Parsed :=
  if first.endsWith ".lean" ∧ r.profile? = none then { r with profile? := some (if r.command = "build" then "release" else "dev") } else r

/-- The checks after the profile is set, and `lasm build`'s target and output. -/
def checkOptions (env : ArgumentsEnv) (r : Parsed) (first : String) : Except String Parsed :=
  if r.allowDev? = some true ∧ !(r.command = "build" ∧ r.target?.any (· ≠ "node")) then
    .error "--allow-dev applies to lasm build --target <platform> and lasm package"
  else if r.suspend?.isSome ∧ r.target? ≠ some "browser" then .error "--suspend applies to lasm build --target browser"
  else if r.bundler? = some true ∧ r.target? ≠ some "browser" then .error "--bundler applies to lasm build --target browser"
  else if r.command = "build" then
    let target := r.target?.getD (if env.jsRuntime = "node" ∨ first.endsWith ".json" then "node" else env.jsRuntime)
    let r := { r with target? := some target }
    if target ≠ "node" ∧ first.endsWith ".json" then .error "--target applies to Lean applications, not binding configurations"
    else if target ∈ fixedLayoutTargets ∧ r.output?.isSome then
      .error ("--output does not apply to --target " ++ target ++ ": the platform fixes its layout (" ++
        (if target = "vercel-edge" then "api/lasm.mjs and api/_lasm/" else "netlify/edge-functions/lasm.mjs and netlify/lasm/") ++ ")")
    else .ok (if target ∉ platformBuildTargets ∧ r.output? = none then { r with output? := some "dist" } else r)
  else .ok r

/-- After the loop: the checks from `if (!positional.length)` on. -/
def finish (env : ArgumentsEnv) (r : Parsed) (positional : List String) : Except String Parsed :=
  match positional with
  | [] => .error cliUsage
  | first :: more =>
    if r.command = "run" ∧ !pathLike first then
      let guess := if env.fileExists (first ++ ".lean") then some (first ++ ".lean") else closest first commandNames
      .error ("Unknown command \"" ++ first ++ "\"" ++ (match guess with | some g => " (did you mean lasm " ++ g ++ "?)" | none => "") ++
        ". Commands: " ++ ", ".intercalate commandNames ++ "; or run a program with lasm Main.lean.")
    else
      let (r, more) := placeOutput { r with input? := some first } more
      if more ≠ [] then .error "Unexpected positional arguments. Put application arguments after --."
      else if r.command = "run" ∧ r.output?.isSome then .error "--output is available only with lasm build"
      else if !(first.endsWith ".lean" || r.command = "build" && first.endsWith ".json") then
        .error "Expected a Lean source file, or a binding configuration for lasm build"
      else if first.endsWith ".json" ∧ r.profile?.isSome then .error "--dev and --release apply to Lean applications"
      else checkOptions env (defaultProfile r first) first

/-- `parseLasmArguments(argv)`, with the module's imports `env`. -/
def parseLasmArgumentsWith (env : ArgumentsEnv) (argv : List String) : Except String Parsed :=
  match argv with
  | [t] => if t ∈ ["--version", "-v", "version"] then .ok { command := "version" } else rest argv
  | _ => rest argv
where
  rest (tokens : List String) : Except String Parsed :=
    match tokens with
    | c :: more =>
      if c = "init" then env.parseInit more
      else if c = "dev" then env.parseDev more
      else if c = "package" then env.parsePackage more
      else if c = "editor" then
        if "--help" ∈ tokens ∨ "-h" ∈ tokens then .ok { command := "help" }
        else if more.length > 1 ∨ more.head?.any (·.startsWith "-") then .error "Usage: lasm editor [project-directory]"
        else .ok { command := "editor", input? := some (more.headD ".") }
      else if c = "cache" then
        if "--help" ∈ tokens ∨ "-h" ∈ tokens then .ok { command := "help" }
        else if more ≠ ["repair"] then .error "Usage: lasm cache repair"
        else .ok { command := "cache-repair" }
      else if c = "build" ∨ c = "run" then program { start with command := c } more
      else program start tokens
    | [] => program start []
  /-- `{ command: 'run', rebuild: false, verbose: false, args: [] }`. -/
  start : Parsed := { command := "run", rebuild? := some false, verbose? := some false, args? := some [] }
  /-- From the `for` loop on, with the command shifted off. -/
  program (r : Parsed) (tokens : List String) : Except String Parsed :=
    match optionLoop r [] [] tokens with
    | .error e => .error e
    | .ok none => .ok { command := "help" }
    | .ok (some (r, positional)) => finish env r positional

end Lasm.Cli
