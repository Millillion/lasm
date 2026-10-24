# Google Cloud Functions (Cloud Run functions, gen2)

A Lasm server runs as an HTTP function on
the `nodejs24` runtime with the Functions Framework. (A container on
[Cloud Run](cloud-run.md) needs no adapter and remains the simpler choice.)

```sh
npx lasm init my-app --template hono --deploy gcf   # adds @google-cloud/functions-framework
cd my-app && npm install
npm run build:gcf                                   # lasm build --target gcf: dist/ and gcf/
gcloud functions deploy my-app --gen2 --runtime nodejs24 --region REGION \
  --trigger-http --entry-point lasm --source gcf --memory 1Gi
```

`lasm build --target gcf` (or `lasm package --target gcf` for an existing build) writes a source directory: `dist/` with its
production `node_modules` (which must include
`@google-cloud/functions-framework`), the handler `lasm-gcf.mjs` (HTTP function
`lasm`), and a `package.json` whose `main` is the handler and whose
`dependencies` pin every deployed npm package, so the platform's `npm ci`
reinstalls exactly them. The handler starts the Lean server while the instance
loads and pipes each request to it.

- **Memory:** at least 512 MiB; 1 GiB recommended.
- **Architecture:** x86_64 (the platform's only one); every build carries the
  Linux x64 native pieces.
- **gen1:** untested (gen1 runs in gVisor, which is tested for containers; see
  [DigitalOcean](digitalocean.md)).

Locally: `node node_modules/@google-cloud/functions-framework/build/src/main.js
--target=lasm` in `gcf/`.

**Tested in CI** (`.github/workflows/serverless.yml`, Linux x64; no Google
account): for every server template, the Functions Framework 5.0.5 serves the
packaged directory on the runner (Ubuntu 24.04, the `nodejs24` runtime's OS);
and Google Cloud's buildpacks build it as Cloud Run functions do (pack 0.38.2,
`gcr.io/buildpacks/builder:google-24`, Node 24, `npm ci`, the Functions
Framework launcher), and the resulting image answers the templates' HTTP
checks with 512 MB. The deployment itself is not exercised.
