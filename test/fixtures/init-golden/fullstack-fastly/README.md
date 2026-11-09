# todo-kv

A full-stack app written entirely in Lean and compiled to WebAssembly by
[Lasm](https://github.com/Millillion/lasm): the server, the browser app, and
the API between them, whose types and validation are written once.

| File | What it is |
| --- | --- |
| `Shared.lean` | The data (`Todo`), the API (`Lasm.RPC` endpoints) and its validation, with a theorem about it. Imported by both sides. |
| `View.lean` | The page (`Lasm.UI`): rendered to HTML by the server for the first visit, kept up to date by the browser. |
| `Server.lean` | The server (`Lasm.Fetch`): serves the API and the first page. Its `addTodo` handler can only store titles that passed the shared check: the type asks for the proof. |
| `Client.lean` | The browser app (`Lasm.UI`): hydrates the server's page and calls the API. A theorem shows it never sends an invalid title. |
| `public/style.css` | Copied next to the browser app. |
| `wrangler.toml` | Cloudflare Workers: the server as a Worker, the browser app as static assets. |

The server embeds `dist/public` (the browser app and `public/`) when it is
built (`embed_dir!`), so one build serves the whole app on every platform.
The todos are kept with `Lasm.KV`: Workers KV, Deno KV or a Fastly KV Store
where one is bound, otherwise memory.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean <LEAN_VERSION> and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

```sh
npm install
npm run dev        # one URL, http://127.0.0.1:3000: rebuilds what an edit affects, reloads the page
npm run build      # dist/public (the browser app), then dist/server (Node) with it embedded
npm start          # serves the release build on http://localhost:3000 (PORT, HOST)
```

The Lean editor resolves `import Lasm.*` once `npx lasm editor` (also run by `npm run dev`)
has linked Lasm's Lean for this directory; restart the Lean server in your editor afterwards
([editor setup](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md#editor)).

## Deploy

- **Node** (any host, container or VM): `npm run build`, then `npm start` with `dist/`.
- **Cloudflare Workers**: `npm run build:workers`, then `npx wrangler deploy`
  (`npx wrangler dev` runs it locally). Bind a KV namespace as `TODOS`
  (`wrangler.toml`) to keep the todos in Workers KV; otherwise each isolate
  keeps its own copy in memory.
- **Bun**: `npm run build:bun`, then `npm run start:bun` (memory).
- **Deno**: `npm run build:deno`, then `npm run start:deno` (Deno KV).
- Other platforms: `lasm init --deploy …` adds their files and a
  `build:<platform>` script (`vercel-edge`, `netlify-edge`, `deno-deploy`,
  `fastly` with a `TODOS` KV Store, `wasi-http`, `spin`).

Guides: [Lasm.RPC](https://github.com/Millillion/lasm/blob/main/docs/RPC.md),
[Lasm.UI](https://github.com/Millillion/lasm/blob/main/docs/UI.md),
[Lasm.Fetch](https://github.com/Millillion/lasm/blob/main/docs/FETCH.md).
