/-
The app as the program's default export (`export default` in JavaScript):
Bun, Deno, Cloudflare Workers, the other edge targets and the function
platforms (Vercel, Netlify, AWS Lambda, Azure Functions, Google Cloud
Functions) call the handler (Handler.lean) for every request. Their
`build:<target>` scripts build this file.
-/
import Handler
import Lasm.JS
open Lasm.JS

def main : IO Unit := exportDefault Handler.handle
