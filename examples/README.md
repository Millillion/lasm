# Lasm examples

Every example runs with one command from its directory: `npx @lasm/cli …` fetches
Lasm from npm (Node 24+ is the only prerequisite). They are MIT-0: copy them freely.
For a new project, use `npm create @lasm@latest` with a [template](../README.md#start-here).

| Example | What it shows | Run |
| --- | --- | --- |
| **[conduit](conduit)** (flagship) | The RealWorld "Conduit" app entirely in Lean: REST API, server-rendered `Lasm.UI` frontend, and **294 proved theorems** ([PROOFS.md](conduit/PROOFS.md)). The official API and Playwright suites pass on every platform Lasm supports, each with its own local tooling ([platforms](conduit#platforms)) | `npm install && npm run build && npm start`; `npm run proofs`; `npm test` |
| [hello](hello) | The smallest program | `npx @lasm/cli Main.lean` |
| [js-fetch](js-fetch) | A `@[js]` binding to Node's `fetch`, awaiting in `Async` | `npx @lasm/cli Main.lean -- https://example.com` |
| [js-crud](js-crud) | A REST API with Postgres (`pg`) and JWT (`jose`), on Express and on Hono | `npm install && npx @lasm/cli Express.lean` |
| [fetch](fetch) | One pure-Lean HTTP handler (`Lasm.Fetch`) on Node, the edge, Bun, Deno, Fastly, wasi-http and WASI | `npx @lasm/cli build Main.lean && node dist/main.mjs` |
| [edge-pure](edge-pure) | A pure-Lean Cloudflare Worker (also Vercel/Netlify Edge, Deno Deploy, Supabase) | `npx @lasm/cli build Main.lean --target workers` |
| [wasi-cli](wasi-cli) | A command-line program as a standard WASI module | `npx @lasm/cli build Main.lean --target wasi` |
| [ui](ui) | Browser apps with `Lasm.UI`: counter, TodoMVC with proofs, feature demo, benchmark | `npx @lasm/cli dev Main.lean --target browser` |

Maintainer fixtures, kept as regression tests and not the way to start:
[basic](basic), [io](io), [worker](worker), [express](express) (the earlier
`lasm.json` interface), [lean-server](lean-server) and [lean-server-latest](lean-server-latest)
(Lean 4.32-era servers; for a pure-Lean server use `--template std-http` or `fetch`).
