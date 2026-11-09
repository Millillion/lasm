# plain_wasi

A Lean program (IO only), compiled ahead of time to WebAssembly by
[Lasm](https://github.com/Millillion/lasm). It runs on Node.js, and also on Bun and Deno.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean <LEAN_VERSION> and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

```sh
npm install
```

```sh
npm run dev -- Ada          # build and run: Hello, Ada, from Lean!
npm run build               # write dist/
node dist/main.mjs Ada      # run the build: only Node is needed
```

Files:

| File | What it is |
| --- | --- |
| `Main.lean` | The program. |
| `App.lean` | Pure Lean logic used by `Main.lean`. |
| `lakefile.toml`, `lean-toolchain` | The Lake project, pinned to Lean <LEAN_VERSION>. |
| `package.json` | npm scripts and Lasm (`@lasm/compiler`) as a dev dependency. |
| `Dockerfile` | Builds with Lasm, runs on `node:24-bookworm-slim`. |

This is an ordinary Lake project: `lake build` also builds it natively.

## Bun and Deno

The same `Main.lean` also runs on Bun and Deno with Lasm's portable profile. Lean
runs single-threaded there, with no files, sockets or processes:

```sh
bun install && bun run dev:bun Ada       # Lasm itself runs on Bun
bun run build:bun && bun run start:bun     # bun/main.mjs
deno install && deno task dev Ada        # Lasm itself runs on Deno
deno task build:deno && deno task start:deno   # deno/main.mjs
```

See [Bun and Deno](https://github.com/Millillion/lasm/blob/main/docs/BUN_DENO.md).

## Deploy

`dist/` is the whole deployment: copy it to a machine
with Node 24+ (Linux x64 or arm64 from a build on any platform, or the build machine's
own OS and architecture) and run `node dist/main.mjs`.

With Docker:

```sh
docker build -t plain_wasi .
docker run --rm plain_wasi
```

Lasm builds for each platform; it does not install or start the platform's tools. Test and deploy
with your platform's own CLI (`vercel`, `netlify`, `func`, `gcloud`, `aws` or `sam`), installed as its docs say.

**WASI:** `npm run build:wasi` writes `wasi/main.wasm`, a standard WASI (preview 1)
module with no JavaScript: `wasmtime run --dir . wasi/main.wasm`, `wasmer run`, or Node's `node:wasi`.
A Lasm.Fetch handler answers one CGI request per run. See [WASI](https://github.com/Millillion/lasm/blob/main/docs/WASI.md).

The image runs on any container platform (Docker, Kubernetes, Cloud Run, Fly.io,
Railway, Render, Heroku); give it at least 512 MB of memory. Build on the
platform's architecture (`docker build --platform linux/amd64` for amd64-only
platforms). Platform recipes: [Lasm deployment guides](https://github.com/Millillion/lasm/blob/main/docs/deploy/README.md).
