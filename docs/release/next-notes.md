# Unreleased

## Templates

- **`lasm init --template fetch` and `--template fullstack` no longer use
  `Lasm.Fetch` except on Node.** *(breaking for projects that copy the old
  layout; existing projects keep building, since `Lasm.Fetch` still ships)*
  - `fetch`: `Main.lean` is a handler on the web's `Request` and `Response`
    (`Lasm.JS.Web`), served as the program's default export on Bun, Deno,
    Cloudflare Workers and the other edge targets. Fastly, wasi:http and WASI
    each get their own program with the same routes on that platform's own
    interface: `--deploy fastly` adds `Fastly.lean` (`Lasm.Fastly`),
    `--deploy wasi-http` and `--deploy spin` add `WasiHttp.lean`
    (`Lasm.WASI.Http`), `--deploy wasi` adds `Cgi.lean` (a CGI program in
    Lean's `IO`); their `build:<target>` scripts build them.
  - `fullstack`: the site (API, first page, the browser app's files) is
    `Site.lean`, written against plain `Http.Request`/`Http.Response`
    (`Http.lean`), with its own `embed_dir!` (`Embed.lean`). `Server.lean`
    serves it on the JavaScript runtimes; `--deploy fastly` adds
    `ServerFastly.lean` and `--deploy wasi-http`/`spin` `ServerWasiHttp.lean`.
  - Node still runs both through `Lasm.Fetch`'s Node server, until how Lean
    servers run on Node is decided (docs/REVIEW.md).
- **`Lasm.RPC.dispatch` replaces `Lasm.RPC.handler`.** *(breaking)*
  `dispatch routes method segments body : Option (Async Answer)` answers a
  request for `/rpc/<name>` from any server (`none` for other paths); the
  four propositions about it are `dispatch_other`, `dispatch_route`,
  `dispatch_unknown` and `dispatch_method` (library/PROOFS.md).
  `Lasm.RPC.Server` no longer imports `Lasm.Fetch`.
- **`Lasm.KV` no longer imports `Lasm.Fetch`.** On Cloudflare Workers the
  fetch handler passes its `env` to `Lasm.KV.setWorkersEnv env` (formerly read
  from `Lasm.Fetch`'s server), so `Lasm.KV.open` finds a KV namespace bound as
  the store's name. A program on `Lasm.Fetch.serve` must now make that call
  too, or its store stays in memory on Workers.
