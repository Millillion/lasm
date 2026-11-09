# func-app.v2

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
docker build -t func-app.v2 .
docker run --rm -p 8080:8080 func-app.v2
```

The image sets `PORT=8080`; platforms that assign a port override it.

Lasm builds for each platform; it does not install or start the platform's tools. Test and deploy
with your platform's own CLI (`vercel`, `netlify`, `func`, `gcloud`, `aws` or `sam`), installed as its docs say.

**AWS Lambda (.zip):** `npm run build:lambda` writes `lambda.zip` for the
`nodejs24.x` runtime with handler `lasm-lambda.handler` (x86_64 or arm64, 512 MB or more); see the
[Lambda guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/lambda.md).

**Lambda@Edge:** `npm run build:lambda-edge` writes `lambda-edge.zip` (x86_64,
handler `lasm-lambda.handler`) for a CloudFront origin-request trigger; see the
[Lambda@Edge guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/lambda-edge.md).

**Vercel:** `vercel.json` makes Vercel run `npm run build:vercel`, which writes
the function to `.vercel/output`; deploy with `vercel deploy` (or push to a connected Git
repository). See the [Vercel guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/vercel.md).

**Netlify:** `netlify.toml` makes Netlify run `npm run build:netlify`, which
writes the function to `netlify/functions/lasm`; deploy with `netlify deploy --build`.
See the [Netlify guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/netlify.md).

**Azure Functions:** `npm run build:azure` writes the function app to
`azure-functions/`; test it with `func start` there and publish with
`func azure functionapp publish APP_NAME`. See the [Azure guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/azure-functions.md).

**Google Cloud Functions:** `npm run build:gcf` writes `gcf/`; deploy with
`gcloud functions deploy my-app --gen2 --runtime nodejs24 --trigger-http --entry-point lasm --source gcf`.
See the [Cloud Functions guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/cloud-functions.md).

`Dockerfile.lambda` builds an AWS Lambda container image (Lambda's Node 24 image behind the
AWS Lambda Web Adapter): `docker build -f Dockerfile.lambda -t func-app.v2-lambda .`; see the
[Lambda guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/lambda.md).

The image runs on any container platform (Docker, Kubernetes, Cloud Run, Fly.io,
Railway, Render, Heroku); give it at least 512 MB of memory. Build on the
platform's architecture (`docker build --platform linux/amd64` for amd64-only
platforms). Platform recipes: [Lasm deployment guides](https://github.com/Millillion/lasm/blob/main/docs/deploy/README.md).
