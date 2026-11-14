/-
# src/init.mjs, in Lean: `parseInitArguments`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

| JavaScript (src/init.mjs) | Lean |
| --- | --- |
| `deployTargets` (the fields the parser reads: `summary`, `templates`, `cli`, `conflicts`) | `deployTable`; `deployTargets` its names |
| `templates` (`summary`, `server`) | `templateTable`; `templates` its names |
| `initUsage` | `initUsage` (`padEnd`) |
| `parseInitArguments(tokens)` | `parseInitArguments` (the loop, `initLoop`; the checks after it, `initFinish`) |
| `packageName(directory)` after `basename(resolve(directory)).toLowerCase()` | `packageNameOf` |
| `lakeName(name)` | `lakeNameOf` |
| `supabaseFunctionNameOf(packageName)` after `String(packageName).toLowerCase()` | `supabaseNameOf` (the scope, `dropScope`) |
| `.replace(/[^…]+/g, r)`, `.replace(/^[…]+\|[…]+$/g, '')` | `replaceRuns`, `strip` |

`Object.keys` lists an object's keys in insertion order: the tables are in
the source's order. `Object.hasOwn(table, name)` is membership of the names.

The names work on characters: the patterns' classes are ASCII, so a run of
UTF-16 units outside a class is a run of characters outside it. What comes
before them, Node's `path.basename(path.resolve(…))` and JavaScript's
`toLowerCase` (Unicode's mapping), is not modelled: the models take its
result, which the differential computes in JavaScript.
-/
import Lasm.Cli.Model.CliArguments

namespace Lasm.Cli

/-- A `--deploy` target as the parser reads it. -/
structure DeployTarget where
  name : String
  summary : String
  templates : List String
  cli : Bool := false
  conflicts : List String := []

def functionTemplates : List String := ["express", "hono", "fastify", "std-http", "fetch"]

def deployTable : List DeployTarget := [
  { name := "lambda", summary := "AWS Lambda container image (Dockerfile.lambda, AWS Lambda Web Adapter)", templates := functionTemplates },
  { name := "lambda-zip", summary := "AWS Lambda .zip for nodejs24.x (npm run build:lambda)", templates := functionTemplates },
  { name := "lambda-edge", summary := "Lambda@Edge .zip for CloudFront origin requests (npm run build:lambda-edge)", templates := functionTemplates },
  { name := "vercel", summary := "Vercel Function (vercel.json; Vercel runs the build)", templates := functionTemplates },
  { name := "netlify", summary := "Netlify Function (netlify.toml; Netlify runs the build)", templates := functionTemplates },
  { name := "azure", summary := "Azure Functions app (npm run build:azure)", templates := functionTemplates },
  { name := "gcf", summary := "Google Cloud Functions gen2 (npm run build:gcf)", templates := functionTemplates },
  { name := "workers", summary := "Cloudflare Workers (wrangler.toml; npm run build:workers, then npx wrangler dev)", templates := ["hono", "fetch", "fullstack"] },
  { name := "vercel-edge", summary := "Vercel Edge Function (vercel.json; Vercel runs npm run build:vercel-edge)", templates := ["hono", "fetch", "fullstack"], conflicts := ["vercel"] },
  { name := "netlify-edge", summary := "Netlify Edge Function (netlify.toml; Netlify runs npm run build:netlify-edge)", templates := ["hono", "fetch", "fullstack"], conflicts := ["netlify"] },
  { name := "deno-deploy", summary := "Deno Deploy (npm run build:deno-deploy, then deno task start:deno; entrypoint deno/main.mjs)", templates := ["hono", "fetch", "fullstack"] },
  { name := "supabase-edge", summary := "Supabase Edge Function (supabase/config.toml; npm run build:supabase-edge, then npx supabase functions deploy NAME)", templates := ["hono"] },
  { name := "fastly", summary := "Fastly Compute (fastly.toml; npm run build:fastly, then fastly compute serve)", templates := ["fetch", "fullstack"] },
  { name := "wasi", summary := "a WASI module (npm run build:wasi writes wasi/main.wasm; wasmtime run --dir . wasi/main.wasm)", templates := ["fetch", "plain"], cli := true },
  { name := "wasi-http", summary := "a wasi-http component (npm run build:wasi-http writes wasi-http/main.wasm; wasmtime serve wasi-http/main.wasm)", templates := ["fetch", "fullstack"] },
  { name := "spin", summary := "Fermyon Spin (spin.toml; npm run build:wasi-http, then spin up)", templates := ["fetch", "fullstack"] }]

/-- A template as the parser reads it. -/
structure Template where
  name : String
  summary : String
  server : Bool

def templateTable : List Template := [
  ⟨"plain", "a Lean program (IO only)", false⟩,
  ⟨"express", "Express 5 with Lean request handlers (Lasm.JS)", true⟩,
  ⟨"hono", "Hono on @hono/node-server with Lean request handlers (Lasm.JS)", true⟩,
  ⟨"fastify", "Fastify 5 with Lean route handlers (Lasm.JS)", true⟩,
  ⟨"std-http", "an HTTP server in pure Lean (Std.Http)", true⟩,
  ⟨"web", "a browser app in Lean (Lasm.UI): a counter", false⟩,
  ⟨"fetch", "an HTTP handler on the web's Request and Response (Lasm.JS.Web) for Node, the edge, Bun and Deno, and on Fastly Compute, WASI and Spin through their own interfaces", true⟩,
  ⟨"fullstack", "a full-stack Lean app: shared API and validation (Lasm.RPC), a server (Lasm.Fetch) that renders the first page, a browser app (Lasm.UI) that hydrates it; Node, Workers, Bun, Deno, and every edge --deploy target", true⟩]

def deployTargets : List String := deployTable.map (·.name)
def templates : List String := templateTable.map (·.name)

/-- `text.padEnd(n)` of an ASCII text: spaces up to `n` characters. -/
def padEnd (s : String) (n : Nat) : String := s ++ String.ofList (List.replicate (n - s.length) ' ')

def initUsage : String := "Usage: lasm init <directory> [--template " ++ "|".intercalate templates ++ "] [--deploy TARGET]…

Creates a Lean project for Lasm: lakefile, lean-toolchain, package.json,
Main.lean, README.md, Dockerfile, .dockerignore and .gitignore.
The directory must be new or empty. The default template is plain.
--deploy (repeatable; server templates, and wasi for plain too) adds a target's files and
npm scripts (build:<target> runs lasm build --target <target>). Lasm never
installs or starts a platform's own tools; use the platform's CLI for that:
" ++ "\n".intercalate (deployTable.map fun t => "  " ++ padEnd t.name 12 ++ " " ++ t.summary) ++ "

Templates:
" ++ "\n".intercalate (templateTable.map fun t => "  " ++ padEnd t.name 9 ++ " " ++ t.summary) ++ "

Example: npx @lasm/cli init my-app --template hono"

/-- `/^(?:--template|-t)(?:=(.*))?$/s.exec(token)`. -/
def templateOption (token : String) : Option (Option String) :=
  if token = "--template" ∨ token = "-t" then some none
  else if token.startsWith "--template=" then some (some (token.drop 11).toString)
  else if token.startsWith "-t=" then some (some (token.drop 3).toString)
  else none

/-- The loop's state: the template, the deploy targets (each once, in order)
and the positional words. -/
structure InitState where
  template : String := "plain"
  deploy : List String := []
  positional : List String := []

/-- The `for` loop: `.ok none` is the early `return { command: 'init-help' }`. -/
def initLoop (st : InitState) : List String → Except String (Option InitState)
  | [] => .ok (some st)
  | token :: rest =>
    if token = "--help" ∨ token = "-h" then .ok none
    else match templateOption token with
      | some inline =>
        let next := takeValue inline rest
        have : next.2.length < rest.length + 1 := Nat.lt_succ_of_le (takeValue_length inline rest)
        match next.1 with
        | some v => if v = "" ∨ v.startsWith "-" then .error ("--template requires a value\n\n" ++ initUsage) else initLoop { st with template := v } next.2
        | none => .error ("--template requires a value\n\n" ++ initUsage)
      | none => match valuedOption "deploy" token with
        | some inline =>
          let next := takeValue inline rest
          have : next.2.length < rest.length + 1 := Nat.lt_succ_of_le (takeValue_length inline rest)
          let v := next.1.getD ""
          if v ∉ deployTargets then .error ("--deploy accepts " ++ ", ".intercalate deployTargets ++ "\n\n" ++ initUsage)
          else initLoop { st with deploy := if v ∈ st.deploy then st.deploy else st.deploy ++ [v] } next.2
        | none =>
          if token.startsWith "-" then .error ("Unknown lasm init option: " ++ token ++ "\n\n" ++ initUsage)
          else initLoop { st with positional := st.positional ++ [token] } rest
termination_by tokens => tokens.length

/-- `names.length === 1 ? … : …`: the templates a target supports, in words. -/
def templateList (names : List String) : String :=
  if names.length = 1 then "the " ++ names.headD "" ++ " template"
  else "the " ++ ", ".intercalate names.dropLast ++ " and " ++ names.getLastD "" ++ " templates"

/-- The `for (const target of result.deploy)` loop. -/
def deployChecks (template : String) (deploy : List String) : List DeployTarget → Except String Unit
  | [] => .ok ()
  | t :: rest =>
    if template ∉ t.templates then
      let supported := (deployTable.filter fun d => template ∈ d.templates).map (·.name)
      .error ("--deploy " ++ t.name ++ " supports " ++ templateList t.templates ++ ", not " ++ template ++ ". The " ++ template ++
        " template supports --deploy " ++ ", ".intercalate supported)
    else match t.conflicts.find? (· ∈ deploy) with
      | some other => .error ("--deploy " ++ t.name ++ " and --deploy " ++ other ++ " both configure the same platform; choose one")
      | none => deployChecks template deploy rest

/-- After the loop: the checks from `if (positional.length !== 1)` on. -/
def initFinish (st : InitState) : Except String Parsed :=
  if st.positional.length ≠ 1 then .error initUsage
  else match templateTable.find? (·.name == st.template) with
    | none => .error ("Unknown template \"" ++ st.template ++ "\". Choose one of: " ++ ", ".intercalate templates)
    | some t =>
      let chosen := st.deploy.filterMap fun d => deployTable.find? (·.name == d)
      match chosen.find? (!·.cli) with
      | some serverOnly =>
        if !t.server then .error ("--deploy " ++ serverOnly.name ++ " needs a server template (express, hono, fastify, std-http or fetch), not " ++ st.template)
        else finishChecks t chosen
      | none => finishChecks t chosen
where
  finishChecks (t : Template) (chosen : List DeployTarget) : Except String Parsed :=
    match deployChecks t.name st.deploy chosen with
    | .error e => .error e
    | .ok () => .ok { command := "init", template? := some st.template, deploy? := some st.deploy, directory? := st.positional.head? }

/-- `parseInitArguments(tokens)`. -/
def parseInitArguments (tokens : List String) : Except String Parsed :=
  match initLoop {} tokens with
  | .error e => .error e
  | .ok none => .ok { command := "init-help" }
  | .ok (some st) => initFinish st

/-! ## Generated names -/

/-- `text.replace(/[^…]+/g, r)`: each maximal run of characters outside
`keep` becomes `r`. -/
def replaceRuns (keep : Char → Bool) (r : Char) : List Char → List Char
  | [] => []
  | c :: cs => if keep c then c :: replaceRuns keep r cs else r :: replaceRuns keep r (cs.dropWhile (fun d => !keep d))
termination_by l => l.length
decreasing_by
  all_goals
    have := (List.dropWhile_sublist (l := cs) (fun d => !keep d)).length_le
    simp only [List.length_cons]
    omega

/-- Removing a leading run of `lead` and a trailing run of `trail`
(`.replace(/^[…]+|[…]+$/g, '')`). -/
def strip (lead trail : Char → Bool) (l : List Char) : List Char :=
  ((l.dropWhile lead).reverse.dropWhile trail).reverse

/-- The characters of an npm package name. -/
def npmChar (c : Char) : Bool := c.isLower || c.isDigit || c = '.' || c = '_' || c = '-'

/-- `packageName(directory)` after `basename(resolve(directory)).toLowerCase()`. -/
def packageNameOf (lowered : String) : String :=
  let name := strip (fun c => c = '.' || c = '_' || c = '-') (· = '-') (replaceRuns npmChar '-' lowered.toList)
  if name = [] then "lean-app" else String.ofList name

/-- The characters of a Lake package name. -/
def lakeChar (c : Char) : Bool := c.isAlphanum || c = '_'

/-- `lakeName(name)`. -/
def lakeNameOf (name : String) : String :=
  let id := strip (· = '_') (· = '_') (replaceRuns lakeChar '_' name.toList)
  if (id.head?.map Char.isAlpha) = some true then String.ofList id
  else String.ofList ("app".toList ++ (if id = [] then [] else '_' :: id))

/-- The characters of a Supabase function name. -/
def supabaseChar (c : Char) : Bool := c.isLower || c.isDigit || c = '-'

/-- `.replace(/^@[^/]+\//, '')`. -/
def dropScope : List Char → List Char
  | '@' :: rest =>
    match rest.span (· ≠ '/') with
    | (a, '/' :: b) => if a = [] then '@' :: rest else b
    | _ => '@' :: rest
  | l => l

/-- `supabaseFunctionNameOf(packageName)` after `String(packageName).toLowerCase()`. -/
def supabaseNameOf (lowered : String) : String :=
  let name := (strip (· = '-') (· = '-') (replaceRuns supabaseChar '-' (dropScope lowered.toList))).take 54
  let name := if name = [] then "lasm-app".toList else name
  if (name.head?.map Char.isLower) = some true then String.ofList name
  else String.ofList (("lasm-".toList ++ name).take 54)

end Lasm.Cli
