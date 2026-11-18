# stack..app-ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss

A full-stack app written entirely in Lean and compiled to WebAssembly by
[Lasm](https://github.com/Millillion/lasm): the server, the browser app, and
the API between them, whose types and validation are written once.

| File | What it is |
| --- | --- |
| `Shared.lean` | The data (`Todo`), the REST API's routes and bodies, and the validation, with a theorem about it. Imported by both sides. |
| `View.lean` | The page (`Lasm.UI`): rendered to HTML by the server for the first visit, kept up to date by the browser. |
| `Site.lean` | The server's routes (`GET`, `POST`, `PATCH`, `DELETE` on `/api/todos`), the first page and the embedded files. It can only store titles that passed the shared check: the store takes a `ValidTitle`, a title with its proof. |
| `Http.lean`, `Embed.lean` | HTTP as plain Lean data, and `embed_dir!`, which embeds the browser app's files. |
| `Server.lean`, `JsSite.lean` | The server on Node (`Node.serve`), on the web's `Request` and `Response`. |
| `Workers.lean` | The server on Cloudflare Workers: the fetch handler, with the Worker's bindings typed (`Env`, the `TODOS` KV namespace). |
| `Deno.lean` | The server on Deno and Deno Deploy, keeping the todos in Deno KV. |
| `Export.lean` | The server as the program's default export: Bun, Vercel Edge and Netlify Edge (todos in memory). |
| `Client.lean` | The browser app (`Lasm.UI`): hydrates the server's page and calls the API with `fetch` (`Cmd.task`). A theorem shows it never sends an invalid title. |
| `public/style.css` | Copied next to the browser app. |
| `wrangler.toml` | Cloudflare Workers: the server as a Worker, the browser app as static assets. |

The server embeds `dist/public` (the browser app and `public/`) when it is
built (`embed_dir!`), so one build serves the whole app on every platform.
The todos are kept in each platform's own store: Workers KV (the `TODOS`
binding), Deno KV, or the Fastly KV Store `TODOS`; on Node, Bun, the other
edge targets and wasi-http, in memory. A store that is declared but missing
fails with an error naming it; the todos never fall back to memory silently.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean <LEAN_VERSION> and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

```sh
npm install
npm run dev        # one URL, http://127.0.0.1:3000: rebuilds what an edit affects, reloads the page
npm run build      # dist/public (the browser app), then dist/server (Node) with it embedded
npm start          # serves the release build on http://localhost:3000 (PORT)
```

The Lean editor resolves `import Lasm.*` once `npx lasm editor` (also run by `npm run dev`)
has linked Lasm's Lean for this directory; restart the Lean server in your editor afterwards
([editor setup](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md#editor)).
`lakefile.toml` requires Lasm's library as a Lake package at `.lake/lasm-library`, a link every lasm
command makes: on a fresh clone, run any lasm command once (`npm run dev`, `npx lasm editor`); a plain
`lake build` needs it.

## Deploy

- **Node** (any host, container or VM): `npm run build`, then `npm start` with `dist/`.
- **Cloudflare Workers**: `npm run build:workers`, then `npx wrangler deploy`
  (`npx wrangler dev` runs it locally, with a local copy of the `TODOS` KV
  namespace). Before deploying, create the namespace (`npx wrangler kv namespace
  create TODOS`) and put its id in `wrangler.toml`.
- **Bun**: `npm run build:bun`, then `npm run start:bun` (memory).
- **Deno**: `npm run build:deno`, then `npm run start:deno` (Deno KV).
- Other platforms: `lasm init --deploy …` adds their files and a
  `build:<platform>` script (`vercel-edge`, `netlify-edge`, `deno-deploy`,
  `fastly` with a `TODOS` KV Store, `wasi-http`, `spin`).

Guides: [Lasm.UI](https://github.com/Millillion/lasm/blob/main/docs/UI.md),
[serving HTTP](https://github.com/Millillion/lasm/blob/main/docs/JS_BINDINGS.md#serving-http-on-node-nodeserve).
