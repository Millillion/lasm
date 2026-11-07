# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Testing (no change to how programs build or run)

- **Conduit's RealWorld traffic is compared across every target.** `node test/api.mjs --equivalence` records the official API suite's requests and responses through a proxy; each of Conduit's 19 CI targets (Node 24 and 26, Workers, Bun, Deno, Docker, Lambda .zip and image, Vercel, Netlify, Azure, Google Cloud Functions, Deno Deploy, Vercel Edge, Netlify Edge, Fastly, wasi-http, Spin, Supabase Edge) must give Node's statuses, headers and body bytes, with tokens, timestamps, generated ids and documented platform headers normalized (`examples/conduit/test/equivalence.mjs`, docs/TESTING.md#conduits-realworld-traffic).

- **The example apps build with 0.5.0.** Ledger, Porter, Tandem, Conduit and Folio pin `@lasm/cli` 0.5.0. Their edge, Bun, Deno and WASI build scripts no longer pass `--output dist/server` (or `dist/edge`, `dist/wasm`, `dist/wasi`, `dist/verify`), since each platform writes its own directory and no longer writes a Node build to `dist/`. Conduit's view proofs no longer name `Attr.onWith`. None of the apps relied on Lasm handlers running before JavaScript listeners, so the bubble-phase change needed no code change.
