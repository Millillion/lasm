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
  `docker build --platform linux/amd64 -t my-app .` (slower, emulated).
- **No Alpine/musl** images: use Debian- or Ubuntu-based Node images.

| Platform | Recipe | Notes |
| --- | --- | --- |
| Docker, Kubernetes | [docker-kubernetes.md](docker-kubernetes.md) | The reference: what CI runs. |
| Google Cloud Run | [cloud-run.md](cloud-run.md) | amd64 only; use the second-generation execution environment. |
| Fly.io | [fly.md](fly.md) | Set the VM memory to 512 MB or more. |
| Railway | [railway.md](railway.md) | Builds the Dockerfile; sets `PORT`. |
| Render | [render.md](render.md) | Docker runtime; a plan with at least 512 MB. |
| Heroku | [heroku.md](heroku.md) | Container stack (`heroku.yml`). |
| AWS Lambda | [lambda.md](lambda.md) | Container image behind the AWS Lambda Web Adapter. |

**What is tested.** Lasm's CI builds and runs every template's Dockerfile on
Linux x64 and ARM64 with a 512 MB memory limit and a read-only root filesystem,
sends HTTP requests, and checks that `docker stop` ends the container with exit
code 0 ([`scripts/templates/run-templates.mjs`](../../scripts/templates/run-templates.mjs)).
Node versions, Linux distributions and the Lambda image are covered by the
portability tests in [DEPLOYMENT.md](../DEPLOYMENT.md). The platform recipes
below use each platform's documented container workflow. **They are not deployed
by Lasm's CI**: by project policy, CI uses no real cloud accounts, so each page
relies on the container tests above.
