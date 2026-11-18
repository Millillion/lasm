## Example apps

- **Tandem moves to `@lasm/cli` 0.9.0 and Stage 0's APIs** (examples/tandem):
  - SQLite through the generated bindings: `Lasm.JS.Node.Sqlite`
    (`DatabaseSync`, `StatementSync`) on Node and Deno, `Lasm.JS.Bun.Sqlite`
    (`Bun.Database`) on Bun, `Lasm.JS.Cloudflare.D1` on Workers (a typed
    `structure Env where DB : D1Database deriving FromJS` and `exportDefault`
    of its fetch handler). The hand-written `bun:sqlite` binding is gone; of
    `node:sqlite`'s, only `new DatabaseSync` remains (the generated
    `DatabaseSync` has no constructor yet).
  - WebSockets: the generated `Deno.upgradeWebSocket` and `Bun.serve`'s
    `websocket` handlers with `server.upgrade` (no more `server.reload`); on
    Node, Tandem's own server is the generated `Lasm.JS.Node.Http`
    (`http.createServer`, `onRequest`, `onUpgrade`) with the `ws` package,
    because Node has no WebSocket server and `Node.serve` has no upgrade hook
    yet (docs/api/decisions/0.4.md, 0.4-7).
  - The editor's effects are data (`Tandem.Ui.Effect`), performed with
    `Cmd.task` over the generated browser bindings (`fetch`, `localStorage`,
    `WebSocket` from `Lasm.JS.Web.Websockets`, `crypto.getRandomValues`), and
    played by the deterministic simulation in its world.
  - Per-spec `Lasm.JS.Web` imports everywhere.
