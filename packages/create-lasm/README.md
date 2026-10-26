# @lasm/create

Create a Lean project with [Lasm](https://github.com/Millillion/lasm), the Lean 4 →
WebAssembly compiler for Node, Bun, Deno, edge functions, WASI and the browser:

```sh
npm create @lasm@latest my-app -- --template hono
cd my-app
npm install
npm run dev
```

With Bun: `bun create @lasm my-app --template hono`. With Deno:
`deno run -A npm:@lasm/create my-app --template hono`.

This runs `lasm init` from the `@lasm/cli` version it depends on, with your
arguments unchanged (the same as `npx @lasm/cli init my-app --template hono`).
Without a directory it asks for one, and for a template, on an interactive
terminal. You need Node 24 or newer (or Bun or Deno); Lasm brings Lean and its
build tools.

| `--template` | What you get | Since |
| --- | --- | --- |
| `plain` (default) | A Lean command-line program | 0.1.0 |
| `express` | Express 5 with Lean request handlers | 0.1.0 |
| `hono` | Hono with Lean request handlers; also runs on the edge, Bun and Deno | 0.1.0 |
| `std-http` | An HTTP server in pure Lean (`Std.Http`) | 0.1.0 |
| `fastify` | Fastify 5 with Lean route handlers | 0.3.0 |
| `fetch` | One pure-Lean HTTP handler (`Lasm.Fetch`) for Node, the edge, Bun, Deno, Fastly, WASI and Spin | 0.3.0 |
| `web` | A browser app in Lean (`Lasm.UI`) | 0.3.0 |
| `fullstack` | Server, browser app and a typed API, validation proved once for both sides | 0.3.0 |

`--deploy <target>` (repeatable) adds a platform's files and an
`npm run build:<target>` script:

- **Serverless** (server templates): `lambda` (container image), `lambda-zip`,
  `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf`.
- **Edge** (0.2.0): `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`
  (templates `hono`, `fetch`, `fullstack`), `supabase-edge` (`hono`).
- **WebAssembly hosts** (0.3.0): `fastly`, `wasi-http`, `spin` (`fetch`,
  `fullstack`), `wasi` (`fetch`, `plain`).

`npx @lasm/cli init --help` lists the templates and targets of the installed
version. Documentation: [README](https://github.com/Millillion/lasm#readme),
[Getting started](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md).

MIT licence, copyright Jordan Last.
