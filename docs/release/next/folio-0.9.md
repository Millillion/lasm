## Examples

- Folio (examples/folio) is on @lasm/cli 0.9.0 and the final Stage 0 APIs (no Lasm.Fetch, Lasm.KV
  or Lasm.RPC; per-spec `Lasm.JS.Web.*` imports). One entry file per serving model, with no
  runtime detection: the live preview's server is `PreviewServer.lean` (`Node.serve`),
  `PreviewServerBun.lean` (`Bun.serve`) and `PreviewServerDeno.lean` (`Deno.serve`); the site
  server (`Server/Edge.lean`) is `ServerWorkers.lean` (the default export, with a typed `Env` whose
  KV namespace `folio` is Lasm.JS.Cloudflare's `KVNamespace`), `ServerDenoDeploy.lean` (the default
  export on Deno KV through Lasm.JS.Deno.Kv) and `ServerFastly.lean` (Fastly's KV Store through
  Lasm.Fastly). Each reads its platform's store through the generated binding, and a missing store
  is an error naming it instead of a store in memory. On Fastly, the pathological input unclosed
  `<!--` is no longer skipped: with Lasm's mimalloc build it fits Compute's 128 MB heap (#246).
  The `folio` command and the batch renderer keep their Node, WASI and browser builds. Every
  proposition still holds.
