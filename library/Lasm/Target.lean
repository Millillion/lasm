/-
`Lasm.target`: the `--target` a program is built for (docs/api/decisions/0.6.md,
0.6-20). Every target has it, the JavaScript hosts and WASI, wasi-http and
Fastly alike: the build links it in (src/target-stamp.mjs).
-/
namespace Lasm

/-- A `lasm build --target`: one constructor per target, in the order of the
CLI's list (`buildTargets`, src/cli-names.mjs; test/lasm-target.test.mjs checks
both). `lasm run`, `lasm build` without `--target` and `lasm dev` on Node build
for `node`; under Bun or Deno, the CLI's default target is that runtime. -/
inductive Target where
  | node
  | lambda
  | lambdaEdge
  | vercel
  | netlify
  | azureFunctions
  | cloudFunctions
  | workers
  | vercelEdge
  | netlifyEdge
  | bun
  | deno
  | denoDeploy
  | supabaseEdge
  | wasi
  | fastly
  | wasiHttp
  | browser
  deriving DecidableEq, Repr, Inhabited

/-- The target's name on the command line: `Target.netlifyEdge.name = "netlify-edge"`. -/
def Target.name : Target → String
  | .node => "node"
  | .lambda => "lambda"
  | .lambdaEdge => "lambda-edge"
  | .vercel => "vercel"
  | .netlify => "netlify"
  | .azureFunctions => "azure-functions"
  | .cloudFunctions => "cloud-functions"
  | .workers => "workers"
  | .vercelEdge => "vercel-edge"
  | .netlifyEdge => "netlify-edge"
  | .bun => "bun"
  | .deno => "deno"
  | .denoDeploy => "deno-deploy"
  | .supabaseEdge => "supabase-edge"
  | .wasi => "wasi"
  | .fastly => "fastly"
  | .wasiHttp => "wasi-http"
  | .browser => "browser"

instance : ToString Target := ⟨Target.name⟩

/-- Every build links a generated `lasm_target`, which returns the index of
the target it is linked for (src/target-stamp.mjs). Lean cannot evaluate it
while compiling: it exists only in the linked program. -/
@[extern "lasm_target"] private opaque stamped : Unit → Target

/-- The target this program is built for, as `lasm build --target` names it
(`Lasm.target.name`). The build stamps it in when it links the program: it is
the same for the program's whole run, and fixed before `main` starts.

```lean
def main : IO Unit := do
  if Lasm.target == .workers then IO.println "on Cloudflare Workers"
  IO.println s!"built for {Lasm.target}"
```
-/
def target : Target := stamped ()

end Lasm
