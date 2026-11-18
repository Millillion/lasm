## Example apps

- **Ledger on Lasm 0.9.0 and only the final APIs** (Stage 0):
  - SQLite through the generated bindings: `Lasm.JS.Node.Sqlite` on Node and Deno, `Lasm.JS.Bun.Sqlite` on Bun, and `Lasm.JS.Cloudflare.D1` on Workers. Workers' `Env` is typed (`deriving FromJS`).
  - Node serves with `Node.serve`, Deno with `Deno.serve` (`ServerDeno.lean`), and Bun with `Bun.serve`.
  - The function platforms (Lambda .zip and container image, Vercel, Netlify, Azure, Google Cloud Functions) run `ServerFunction.lean`, whose handler is published with `exportDefault`. There is no HTTP server inside the function and no Lasm.Fetch.
  - The page loads with `Cmd.task` and the generated `fetch`.
  - On Workers, the embedded files are served without their Brotli copies (Cloudflare compresses), and commits rely on D1's atomic batch (0.5-8).
  - No hand-written binding is left, except node:sqlite's `new DatabaseSync`, which Lasm 0.9.0 does not generate. It goes with the release that ships #352 (0.4-46), together with the NULL-capable parameter shapes (0.4-45).
