/-
The Hono app (Routes.lean) as the program's default export (`export default
app` in JavaScript): Cloudflare Workers, the other edge targets, Bun, Deno and
the function platforms (Vercel, Netlify, AWS Lambda, Azure Functions, Google
Cloud Functions) call its `fetch` for every request. Their `build:<target>`
scripts build this file.
-/
import Routes
import Lasm.JS
open Lasm.JS

def main : IO Unit := do exportDefault (← Routes.app)
