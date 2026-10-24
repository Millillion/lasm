# Vercel Functions (Node.js runtime)

Phase 6 source, awaiting a candidate. A Lasm server runs as one Vercel Function
on the Node.js 24 runtime that answers every path.

```sh
npx lasm build Main.lean               # dist/: a server that listens on $HOST:$PORT
npx lasm package --target vercel       # .vercel/output (Build Output API v3)
npx vercel deploy --prebuilt           # upload exactly that output
```

`lasm package --target vercel` writes `.vercel/output/functions/index.func/`
(the whole `dist/` plus a handler, `lasm-vercel.mjs`, runtime `nodejs24.x`) and a
`config.json` that routes every path to it after static files. Every file the
Lean program loads at run time (`program.wasm`, `host/**`, the native pieces) is
listed explicitly, so no file tracing or `includeFiles` is involved, and Unix
permissions are kept.

**Building on Vercel instead** (Git deployments): `lasm init my-app --template
hono --deploy vercel` writes this `vercel.json`:

```json
{
  "framework": null,
  "installCommand": "npm install",
  "buildCommand": "npm run build && npm run package:vercel",
  "routes": [{ "src": "/(.*)", "dest": "/index" }]
}
```

Vercel then runs Lasm on its Linux x64 build machine (the first build downloads
Lean and Lasm's tools, a few hundred MB, and takes a few minutes) and deploys the
`.vercel/output` that `lasm package` wrote. `vercel build` adds its own
zero-config routes to `config.json`; the `routes` entry keeps the function first
for every path.

- **Handler:** Node's `(req, res)`; the Lean server starts on the first request
  (Vercel's launcher intercepts `http.Server#listen` while it imports the
  function, so it cannot start earlier). Each request is piped to the server
  over loopback; Vercel's request helpers may be on or off.
- **Limits:** the function is 5.3–6.5 MB for the templates; `lasm package` fails
  above Vercel's 250 MB uncompressed limit. Request and response bodies up to
  4.5 MB (Vercel's limit). Set the memory to at least 512 MB (Hobby: 2 GB
  default) and the maximum duration as needed.
- **Architecture:** x86_64 (Vercel's default).
- **Not supported:** the Edge runtime (no threads or native add-ons; Phase 8).

**Tested in CI** (`.github/workflows/serverless.yml`, Linux x64; no Vercel
account): for every server template, the `lasm package` output is checked
(config, every file, permissions, size); Vercel CLI 65.2.0 `vercel build` runs
offline in the `lasm init --deploy vercel` project, with a local
`.vercel/project.json` in place of `vercel link`; the built function then runs
under **Vercel's own Node launcher** (the dev server of `@vercel/node`, which
`vercel dev` uses) inside AWS's `public.ecr.aws/lambda/nodejs:24` image (Vercel
Functions run on AWS Lambda), read-only with 512 MB, with request helpers on and
off, answering the templates' HTTP checks (first response 1.1–1.5 s after the
container starts, run 40076471450). **`vercel dev` itself needs a Vercel
login** (verified in each run: it starts a device login and serves nothing), so
it is not used. Vercel's production router is not emulated: the routing of the
deployed output is untested.
