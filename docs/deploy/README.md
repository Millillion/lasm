# Deploying a Lasm server

A Lasm server is an ordinary Node.js process: `node dist/main.mjs`. Every platform
that runs a Node 24+ container or VM on Linux (glibc) runs it. The `Dockerfile`
that `lasm init` generates is the recommended starting point on all of them:

- it builds with Lasm in a first stage (`node:24-trixie`), so the platform needs
  no Lean or Lasm;
- the deployed image is `node:24-bookworm-slim` plus `dist/`, running as the
  unprivileged `node` user;
- the server listens on `0.0.0.0` and `$PORT` (8080 unless the platform sets it),
  answers `GET /health`, and exits cleanly on SIGTERM.

Requirements on every platform:

- **Memory: at least 512 MB** (1 GB for real traffic). A small server uses about
  140–200 MB resident; the Wasm runtime reserves more address space, which is not
  memory use.
- **Architecture:** build the image for the platform's CPU. Several platforms
  run only `linux/amd64`; on an Apple Silicon Mac, build with
  `docker build --platform linux/amd64 -t my-app .` (slower, emulated). A
  `dist/` built on the Mac itself also runs on Linux x64 and arm64 (every build
  carries the Linux native pieces): copy it into an image with
  [`deploy/Dockerfile`](../../deploy/Dockerfile), with no emulated Lean build.
- **Node:** 24 or newer. Node 26's official binary needs `libatomic1`, which the
  official `node:26-*` images include; install it on minimal images that add the
  Node 26 tarball themselves.
- **Alpine/musl:** Debian, Ubuntu and Alpine (`node:24-alpine`) Node images all
  work ([Alpine](docker-kubernetes.md#alpine-musl)).

**Function platforms:** `lasm build Main.lean --target <lambda|lambda-edge|vercel|netlify|azure|gcf>`
builds `dist/` and the platform's package. Lasm builds for a platform; it never
installs or starts the platform's environment. Run your platform's own CLI
(`vercel dev`, `netlify dev`, `func start`, `sam local`, `gcloud`, …) yourself to
test and deploy.

| Platform | Recipe | Notes |
| --- | --- | --- |
| Docker, Kubernetes | [docker-kubernetes.md](docker-kubernetes.md) | The reference: what CI runs. |
| Cloudflare Workers (experimental, planned for 0.2.0) | [workers.md](workers.md) | An edge isolate, not a Node process: `lasm build --target workers`, tested with `wrangler dev`. |
| Vercel Edge Functions (experimental, planned for 0.2.0) | [vercel-edge.md](vercel-edge.md) | `lasm build --target vercel-edge`, tested with `vercel build` offline and Vercel's `edge-runtime` package. |
| Netlify Edge Functions (experimental, planned for 0.2.0) | [netlify-edge.md](netlify-edge.md) | `lasm build --target netlify-edge`, tested with `netlify build --offline` and `netlify dev --offline`. |
| Deno Deploy (experimental, planned for 0.2.0) | [deno-deploy.md](deno-deploy.md) | `lasm build --target deno-deploy`, tested with the Deno CLI. Supabase Edge Functions are not supported (no JSPI). |
| Google Cloud Run | [cloud-run.md](cloud-run.md) | amd64 only; use the second-generation execution environment. |
| Fly.io | [fly.md](fly.md) | Set the VM memory to 512 MB or more. |
| Railway | [railway.md](railway.md) | Builds the Dockerfile; sets `PORT`. |
| Render | [render.md](render.md) | Docker runtime; a plan with at least 512 MB. |
| Heroku | [heroku.md](heroku.md) | Container stack (`heroku.yml`). |
| AWS Lambda | [lambda.md](lambda.md) | `.zip` for `nodejs24.x` (`lasm build --target lambda`) or a container image behind the AWS Lambda Web Adapter; x86_64 and arm64. |
| Lambda@Edge | [lambda-edge.md](lambda-edge.md) | CloudFront origin-request trigger, x86_64, `lasm build --target lambda-edge`. |
| Vercel Functions | [vercel.md](vercel.md) | `lasm build --target vercel` (Build Output API) or `lasm init --deploy vercel`. |
| Netlify Functions | [netlify.md](netlify.md) | `lasm init --deploy netlify` (`netlify.toml` with `included_files`); 60 s synchronous limit. |
| Azure Functions | [azure-functions.md](azure-functions.md) | `lasm init --deploy azure`; Node.js v4 model, Linux. |
| Google Cloud Functions (gen2) | [cloud-functions.md](cloud-functions.md) | `lasm init --deploy gcf`; Functions Framework. |
| DigitalOcean App Platform | [digitalocean.md](digitalocean.md) | Container recipe; AMD64; runs in gVisor (tested with `runsc`, Phase 6). |

**What is tested.** Lasm's CI builds and runs every template's Dockerfile on
Linux x64 and ARM64 with a 512 MB memory limit and a read-only root filesystem,
sends HTTP requests, and checks that `docker stop` ends the container with exit
code 0 ([`scripts/templates/run-templates.mjs`](../../scripts/templates/run-templates.mjs)).
Node versions (24.0.0, 24.x, 26.x), Linux distributions (Debian 11/12, Ubuntu
22.04/24.04, Amazon Linux 2023), cross-built deployments and the Lambda image
are covered by the platform tests in [DEPLOYMENT.md](../DEPLOYMENT.md). The platform recipes
below use each platform's documented container workflow. **They are not deployed
by Lasm's CI**: by project policy, CI uses no real cloud accounts, so each page
relies on the container tests above.
