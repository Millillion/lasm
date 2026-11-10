# Lasm examples

Every example runs with one command from its directory: `npx @lasm/cli …` fetches
Lasm from npm (Node 24+ is the only prerequisite). They are MIT-0: copy them freely.
For a new project, use `npm create @lasm@latest` with a [template](../README.md#start-here).

| Example | What it shows | Run |
| --- | --- | --- |
| **[conduit](conduit)** (flagship) | The RealWorld "Conduit" app entirely in Lean: REST API, server-rendered `Lasm.UI` frontend, and **52 proved propositions (307 theorems)** ([PROOFS.md](conduit/PROOFS.md)). The official API and Playwright suites pass on every platform Lasm supports, each with its own local tooling ([platforms](conduit#platforms)) | `npm install && npm run build && npm start`; `npm run proofs`; `npm test` |
| **[ledger](ledger)** (flagship, in progress) | A double-entry ledger in TigerBeetle's data model and result codes: two-phase transfers, linked chains, idempotent client-chosen ids. Proved: conservation in every ledger, two accounts per transfer, idempotency, chains all or nothing, and replay of the journal ([PROOFS.md](ledger/PROOFS.md), [SPEC.md](ledger/SPEC.md)). The server, the differential test against TigerBeetle and the platforms follow ([ROADMAP.md](../ROADMAP.md)) | `npm install && npm run proofs` |
| **[porter](porter)** (flagship, in progress) | An OpenID Connect provider: the authorization code flow with PKCE (S256), ES256 and EdDSA ID tokens from Web Crypto, refresh-token rotation with reuse detection, sessions, consent and logout. Proved: a code is redeemed at most once and only by its client, redirect URI and verifier; redirects only to registered URIs, exactly; a reused refresh token revokes its family; claims match the session and client; errors reveal nothing; the handlers are total ([PROOFS.md](porter/PROOFS.md), [SPEC.md](porter/SPEC.md)). The server, the oracle and adversarial tests and the platforms follow ([ROADMAP.md](../ROADMAP.md)) | `npm install && npm run proofs` |
| **[tandem](tandem)** (flagship) | A collaborative text editor on Fugue's sequence CRDT: a `Lasm.UI` editor that works offline and merges on reconnect, and a sync server (WebSockets, long-poll) on Node, Bun, Deno, Workers and Docker, the same Lean in both. Proved: replicas with the same operations hold the same document, in any order and with duplicates; insertions land where they were typed and every edit yields the user's text; concurrent typing at one place is never interleaved; the server never loses an acknowledged operation; the parsers are total and bounded ([PROOFS.md](tandem/PROOFS.md), [SPEC.md](tandem/SPEC.md)). Yjs is the differential oracle | `npm install && npm run build && npm start`; `npm run proofs`; `npm test` |
| [hello](hello) | The smallest program | `npx @lasm/cli Main.lean` |
| [js-fetch](js-fetch) | A `@[js]` binding to Node's `fetch`, awaiting in `Async` | `npx @lasm/cli Main.lean -- https://example.com` |
| [js-crud](js-crud) | A REST API with Postgres (`pg`) and JWT (`jose`), on Express and on Hono | `npm install && npx @lasm/cli Express.lean` |
| [fetch](fetch) | One pure-Lean HTTP handler (`Lasm.Fetch`) on Node, the edge, Bun, Deno, Fastly, wasi-http and WASI | `npx @lasm/cli build Main.lean && node dist/main.mjs` |
| [edge-pure](edge-pure) | A pure-Lean Cloudflare Worker (also Vercel/Netlify Edge, Deno Deploy, Supabase) | `npx @lasm/cli build Main.lean --target workers` |
| [wasi-cli](wasi-cli) | A command-line program as a standard WASI module | `npx @lasm/cli build Main.lean --target wasi` |
| [ui](ui) | Browser apps with `Lasm.UI`: counter, TodoMVC with proofs, feature demo, benchmark | `npx @lasm/cli dev Main.lean --target browser` |

Maintainer fixtures, kept as regression tests and not the way to start:
[lean-server](lean-server)
(a Lean 4.32-era server; for a pure-Lean server use `--template std-http` or `fetch`).
