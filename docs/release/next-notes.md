# Next release (unreleased)

Changes since 0.8.0, collected until the release's version bump turns this
file into `<version>-notes.md`.

## Lasm.RPC

- **`Lasm.RPC.dispatch` and `Lasm.RPC.webHandler` serve endpoints without
  Lasm.Fetch** (A37, docs/API_DECISIONS.md). `dispatch routes method path body`
  answers `/rpc/<name>` on any server and returns `none` for other paths;
  `webHandler routes request` (new module `Lasm.RPC.Web`) does it for a
  Lasm.JS.Web `Request`, returning a `Response`. Migration: replace
  `serve <| handler routes fallback` with a fetch handler that tries
  `webHandler routes request` first (docs/RPC.md, "Server"). `handler` still
  works until Lasm.Fetch is removed.
