## Lasm.Fetch removed (breaking)

- **`Lasm.Fetch` is deleted** (`Lasm.Fetch`, `Lasm.Fetch.Assets`, `Lasm.Fetch.Embed`; API decisions
  A44–A46, 0.2-1, 0.2-2, 0.2-9; PR_DELETE_FETCH). Programs serve HTTP with each platform's own
  interface: a handler on the web's own `Request` and `Response` (`Lasm.JS.Web`) with `Node.serve` on
  Node and `exportDefault` elsewhere, `Lasm.Fastly` on Fastly Compute and `Lasm.WASI.Http` on
  wasi-http. `lasm init --template fetch` writes all of these (`Main.lean`, `Export.lean`,
  `Fastly.lean`, `WasiHttp.lean`). 0.9.0 still has `Lasm.Fetch`; an app pinned to it keeps building
  until it upgrades. Migration, part by part:

  | `Lasm.Fetch` | Replacement |
  | --- | --- |
  | `serve` on Node | `Node.serve { fetch := handle }` (`import Lasm.JS.Node.Serve`), with `handle : Request → Async Response` on `Lasm.JS.Web`'s types: `templates/fetch/Main.lean` |
  | `serve` on the edge, Bun and Deno | `exportDefault handle` (`import Lasm.JS`): `templates/fetch/Export.lean` |
  | `serve` on the function platforms (Lambda, Vercel, Netlify, Azure, Cloud Functions) | `exportDefault handle`, which the generated platform file calls directly |
  | `serve` on Fastly Compute | `Lasm.Fastly` (`HttpReq.bodyDownstreamGet`, `HttpResp.sendDownstream`, …): `templates/fetch/Fastly.lean` |
  | `serve` on wasi-http (wasmtime serve, Spin) | `Lasm.WASI.Http`: `IncomingHandler.serve fun request out => …` and `respond out status headers body`: `templates/fetch/WasiHttp.lean` |
  | `serve` as a CGI program (`--target wasi`, Spin's wagi executor) | Removed: `--target wasi` is for command-line and batch programs. Serve HTTP with `--target wasi-http` |
  | `fetch`, `get`, `post` | `Lasm.JS.Web.fetch` on JavaScript hosts, `HttpReq.send` (and `sendAsync`) on Fastly, `OutgoingHandler.handle` on wasi-http |
  | `Request`, `Response`, `Handler` and their helpers (`path`, `segments`, `queryParam?`, `header?`, `Response.json`, `.text`, `.redirect`, …) | The web's own `Request`/`Response` (`URL.new (← request.url)`, `url.pathname`, `url.searchParams`, `(← request.headers).get`, `Response.new`), or an app-local copy of the few helpers an app uses, as the templates' `Handler.lean`, `Fastly.lean` and `WasiHttp.lean` do |
  | `Response.streaming`, `ServeOptions.streamRequestBody` | The platform's streams: a `ReadableStream` body on JavaScript hosts, `HttpBody.write` with a streamed response on Fastly, `OutgoingBody.write` on wasi-http |
  | `embed_dir!`, `Assets` | An app-local copy: `templates/fullstack/Embed.lean` (`embed_dir!`) and `Http.lean` (`Assets.serve`) |

- **The WASI CGI server mode is removed** (A44): `src/wasi/lasm_fetch_wasi.c` is deleted, and so is
  `--target fastly`'s host for Lasm.Fetch (its request, response and dynamic backends). Programs on
  `Lasm.Fastly` and `Lasm.WASI.Http` link as before.
- **Its proved request model moves to the test suite** (A45): the path resolution, percent decoding
  and query helpers, and the theorem `segments_no_dot_segments`, are now
  `verification/cli/Lasm/RequestPath` (`Lasm.RequestPath`), a specification checked by
  `scripts/library-proofs.mjs`; its two candidates are evaluated on generated URLs by
  `test/library-proofs/RequestPath.lean`.
- **Removed with it:** `examples/fetch` (its routes are `examples/fastly`'s and
  `examples/wasi-http`'s), `docs/FETCH.md`, the `fetch-example` target-equivalence app, and the
  native libFuzzer targets `lean-fetch-request`, `wasi-cgi` and `fastly-host`. The native fuzz
  harness stays, with a new target: `lean-js-wire` fuzzes the Lasm.JS value codec's Lean half
  natively, checking the proved round trip (`Lasm.JS.Spec.decode_encode`) on every value it reads.
