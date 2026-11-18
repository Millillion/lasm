## Examples

- Conduit (examples/conduit) is on @lasm/cli 0.9.0 and the final Stage 0 APIs (no Lasm.Fetch,
  Lasm.KV or Lasm.RPC; per-spec `Lasm.JS.Web.*` imports). One entry file per serving model:
  `ServerNode.lean` (`Node.serve`), `ServerDeno.lean` (`Deno.serve`), `ServerBun.lean`
  (`Bun.serve`), `ServerFunction.lean` (`exportDefault`, built with `lasm build --target
  lambda|vercel|netlify` and packaged for Azure and Google; the Lambda container image is the
  .zip's files on Lambda's base image), `ServerWorkers.lean` (typed `Env` with D1),
  `ServerDenoDeploy.lean` (Deno KV through Lasm.JS.Deno.Kv), `ServerVercelEdge.lean`,
  `ServerNetlifyEdge.lean`, `ServerSupabase.lean`, `ServerFastly.lean` (Fastly KV through
  Lasm.Fastly.KvStore), `ServerWasiHttp.lean`. SQLite and Web Crypto go through the generated
  Lasm.JS.Node.Sqlite, Lasm.JS.Bun.Sqlite, Lasm.JS.Cloudflare.D1 and Lasm.JS.Web.Webcrypto; the
  browser app's commands are data (`Frontend/Cmd.lean`) performed with `Cmd.task`, `fetch` and
  `localStorage`. All 52 propositions (307 theorems) still hold.
