# express-app

Express 5 with Lean request handlers (Lasm.JS), compiled ahead of time to WebAssembly by
[Lasm](https://github.com/Millillion/lasm) and run by Node.js.

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
# {"echo":{"n":1}}
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
`Lasm.JS`, which ships with Lasm, so it builds and runs only with Lasm. `npx lasm editor`
(also run by `npm run dev`) makes the Lean editor resolve it
([editor setup](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md#editor)).

## Deploy

`dist/` is the whole deployment, including the production `node_modules`: copy it to a machine
with Node 24+ (Linux x64 or arm64 from a build on any platform, or the build machine's
own OS and architecture) and run `node dist/main.mjs`.

With Docker:

```sh
docker build -t express-app .
docker run --rm -p 8080:8080 express-app
```

The image sets `PORT=8080`; platforms that assign a port override it.

The image runs on any container platform (Docker, Kubernetes, Cloud Run, Fly.io,
Railway, Render, Heroku); give it at least 512 MB of memory. Build on the
platform's architecture (`docker build --platform linux/amd64` for amd64-only
platforms). Platform recipes: [Lasm deployment guides](https://github.com/Millillion/lasm/blob/main/docs/deploy/README.md).
