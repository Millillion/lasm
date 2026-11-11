# fetch-deno

An HTTP handler on the web's Request and Response (Lasm.JS.Web) for Node, the edge, Bun and Deno, and on Fastly Compute, WASI and Spin through their own interfaces, compiled ahead of time to WebAssembly by
[Lasm](https://github.com/Millillion/lasm). It runs on Node.js, and also on Bun and Deno.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean <LEAN_VERSION> and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

```sh
npm install
```

```sh
npm run dev                 # lasm dev: Listening on http://0.0.0.0:3000; rebuilds and restarts on save
curl http://localhost:3000/hello/Ada
# {"message":"Hello, Ada, from Lean!"}
curl -X POST http://localhost:3000/echo -H 'content-type: application/json' -d '{"n":1}'
# {"n":1}
npm run build               # write dist/
PORT=8080 npm start         # run the build (node dist/main.mjs): only Node is needed
```

The server listens on `$HOST` (default `0.0.0.0`) and `$PORT` (default 3000) and
exits cleanly on SIGTERM or SIGINT. `npm run dev` (`lasm dev`) watches the Lean files, rebuilds
in about 2 s after an ordinary edit and restarts the server; a build error is shown with its
file and line while the last good server keeps running.

Files:

| File | What it is |
| --- | --- |
| `Main.lean` | The program: routes and Lean request handlers. |
| `App.lean` | Pure Lean logic used by `Main.lean`. |
| `lakefile.toml`, `lean-toolchain` | The Lake project, pinned to Lean <LEAN_VERSION>. |
| `package.json` | npm scripts, the npm packages Lean calls and Lasm (`@lasm/compiler`) as a dev dependency. |
| `Dockerfile` | Builds with Lasm, runs on `node:24-bookworm-slim`. |

`App.lean` is pure Lean: `lake build App` checks it natively. `Main.lean` imports
`Lasm.JS.Web`, which ships with Lasm, so it builds and runs only with Lasm. `npx lasm editor`
(also run by `npm run dev`) makes the Lean editor resolve it
([editor setup](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md#editor)).

## Bun and Deno

The same `Main.lean` also runs on Bun and Deno with Lasm's portable profile. Lean
runs single-threaded there, with no files, sockets or processes, and the handler is
served with `Bun.serve` or `Deno.serve`:

```sh
bun install && bun run dev:bun          # Lasm itself runs on Bun
bun run build:bun && bun run start:bun     # bun/main.mjs
deno install && deno task dev           # Lasm itself runs on Deno
deno task build:deno && deno task start:deno   # deno/main.mjs
```

See [Bun and Deno](https://github.com/Millillion/lasm/blob/main/docs/BUN_DENO.md).

## Deploy

`dist/` is the whole deployment, including the production `node_modules`: copy it to a machine
with Node 24+ (Linux x64 or arm64 from a build on any platform, or the build machine's
own OS and architecture) and run `node dist/main.mjs`.

With Docker:

```sh
docker build -t fetch-deno .
docker run --rm -p 8080:8080 fetch-deno
```

The image sets `PORT=8080`; platforms that assign a port override it.

Lasm builds for each platform; it does not install or start the platform's tools. Test and deploy
with your platform's own CLI (`vercel`, `netlify`, `func`, `gcloud`, `aws` or `sam`), installed as its docs say.

**Deno Deploy:** `npm run build:deno-deploy` writes `deno/` (the
entrypoint `deno/main.mjs`, the Lean program and its host); test with `deno task start:deno`
(PORT, default 8000). On Deno Deploy, set the build command to `npm run build:deno-deploy` and the
entrypoint to `deno/main.mjs`. See the [edge notes](https://github.com/Millillion/lasm/blob/main/docs/EDGE.md).

**Vercel Edge:** `vercel.json` makes Vercel run `npm run build:vercel-edge`,
which writes the edge function `api/lasm.mjs` (and `api/_lasm/`); deploy with `vercel deploy`.
Vercel recommends its Node runtime over the edge runtime; see the [edge notes](https://github.com/Millillion/lasm/blob/main/docs/EDGE.md).

The image runs on any container platform (Docker, Kubernetes, Cloud Run, Fly.io,
Railway, Render, Heroku); give it at least 512 MB of memory. Build on the
platform's architecture (`docker build --platform linux/amd64` for amd64-only
platforms). Platform recipes: [Lasm deployment guides](https://github.com/Millillion/lasm/blob/main/docs/deploy/README.md).
