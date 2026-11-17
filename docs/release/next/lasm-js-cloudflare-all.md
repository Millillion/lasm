## Lasm.JS.Cloudflare

- **Lasm.JS.Cloudflare generates every API of Cloudflare's own** in
  `@cloudflare/workers-types`, 838 declarations in 24 modules: besides KV, D1,
  R2, Durable Objects and Queues, also Workers AI with every model's inputs and
  outputs (`Lasm.JS.Cloudflare.Ai`), AI Gateway and AI Search, Vectorize,
  Hyperdrive, Images, Email, Tail Workers and tracing, Containers, Workflows,
  service bindings and RPC, Browser Rendering, Analytics Engine, Stream,
  HTMLRewriter and the other bindings. There is no umbrella module: a Worker
  imports the modules of the areas it uses (`Lasm.JS.Cloudflare.Kv`, `.D1`,
  `.Workers`, …) and links only those. `Support`, `Kv`, `D1` and `Workers` ship
  compiled; the others compile on first import. Migration: replace
  `import Lasm.JS.Cloudflare` with the modules the program uses. Migration from the
  first Lasm.JS.Cloudflare (same release): `ExportedHandler` moved to
  `Lasm.JS.Cloudflare.Handlers` and the queue handler to `.Queues` (both are in
  the umbrella import); overloads with the same parameter names now give the
  plain name to the least constrained one (`R2Bucket.get key (options?)`). The
  Workers entry also forwards `email`, `tail`, `trace`, `tailStream`, `connect`
  and `test` events to the published handler.
