## Breaking: templates serve with one entry module per platform kind

- **`lasm init --template fetch`** writes `Handler.lean` (the handler),
  `Main.lean` (Node: `Node.serve { fetch := Handler.handle }`) and
  `Export.lean` (`exportDefault Handler.handle`, built by `build:bun`,
  `build:deno` and every edge and function-platform `build:<target>`). It no
  longer imports `Lasm.Fetch`, and no program branches on `Lasm.JS.onEdge`.
- **`lasm init --template hono`** writes `Routes.lean` (the Hono app),
  `Main.lean` (Node, `@hono/node-server`) and `Export.lean`
  (`exportDefault (← Routes.app)`).
- **The function platforms** (`--deploy lambda`, `lambda-container`, `lambda-edge`,
  `vercel`, `netlify`, `azure`, `gcf`) take the fetch and hono templates.
  express, fastify and std-http bring their own server, so they have no
  `--deploy` target: they run wherever their `Dockerfile` runs.
- **`--deploy lambda-container`'s `Dockerfile.lambda`** is Lambda's own Node 24 image with
  the .zip package's files and `CMD ["lasm-lambda.handler"]`: the runtime calls
  the handler `Export.lean` publishes. The AWS Lambda Web Adapter (which ran a
  server inside the function) is gone, with `deploy/lambda/Dockerfile`.
- **`--deploy wasi`** is for the plain template (command-line programs). The
  fetch template's `Cgi.lean` is gone: HTTP on WASI is wasi-http
  (`--deploy wasi-http`, `spin`).

Migrating a project made by 0.8.0's fetch template:

| Before | Now |
| --- | --- |
| `Main.lean`: `handle`, then `if ← onEdge then exportDefault … else serveNode` | `Handler.lean`: `handle`; `Main.lean`: `def main := Node.serve { fetch := Handler.handle }`; `Export.lean`: `def main := exportDefault Handler.handle` |
| `"build:workers": "lasm build Main.lean --target workers"` (and the other edge, Bun, Deno and function targets) | `lasm build Export.lean --target …` |
| `Cgi.lean`, `"build:wasi"` | `WasiHttp.lean`, `"build:wasi-http"` |
