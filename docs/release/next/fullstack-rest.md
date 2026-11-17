## Templates

- **Breaking: `lasm init --template fullstack` speaks plain REST.** The
  server answers `GET`/`POST /api/todos`, `PATCH`/`DELETE /api/todos/ID`
  (JSON in and out, `{"error"}` on 4xx) instead of `POST /rpc/<name>`, and the
  browser app calls it with the web's `fetch` through `Cmd.task`. The template
  no longer imports `Lasm.RPC` or `Lasm.Fetch`: `Server.lean` serves Node with
  `Node.serve`, `Export.lean` publishes the default export for the edge, Bun
  and Deno, `Fastly.lean` and `WasiHttp.lean` serve their platforms, and
  `Http.lean`, `Embed.lean` and `Site.lean` are the template's own code. The
  store still takes only validated titles: `ValidTitle`, a title with its
  proof.

  Migrating a project made by 0.8.0: replace the `Endpoint` definitions with
  routes in a `match` on method and path segments, and each `e.call` with a
  `Cmd.task` that calls `Lasm.JS.Web.fetch`, as the new template does.
