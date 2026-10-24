# DigitalOcean App Platform

DigitalOcean App Platform runs containers (AMD64 only) inside gVisor, a
user-space kernel that implements Linux system calls itself. Use the
`lasm init` Dockerfile (or [`deploy/Dockerfile`](../../deploy/Dockerfile)
around a built `dist/`):

1. Push the project (with its `Dockerfile`) to a Git repository, or push an
   image built with `docker build --platform linux/amd64 -t my-app .` to a
   registry DigitalOcean can read.
2. Create an app from it; App Platform builds the Dockerfile. Set the HTTP port
   to 8080 (the image's `PORT`) and the health check path to `/health`.
3. Choose an instance size with at least 512 MB of memory (1 GB for real
   traffic).

**Tested in CI** (Phase 6 source, `.github/workflows/serverless.yml`, Linux
x64): every server template's `dist/` and the probe program (a subprocess,
files, the environment and signal set-up, through Lasm's native helpers and
koffi) run in `node:24-bookworm-slim` under Docker with gVisor's `runsc`
runtime (release 20261019.0), read-only with 512 MB; the servers answer the
templates' HTTP checks and stop cleanly on `docker stop`. App Platform itself
(its gVisor configuration, build system and routing) is not exercised.
