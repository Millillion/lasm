# Render

**How this is tested:** Lasm's CI never deploys to Render (no cloud accounts, by
project policy). This recipe relies on the container tests: the same `Dockerfile`
built and run on Linux x64 and arm64, read-only with a 512 MB limit
([template CI](README.md), [platform matrix](../DEPLOYMENT.md)). Render's own build
service, routing and runtime environment are untested.

Create a **Web Service** with the **Docker** runtime from the project's Git
repository. Render builds the `Dockerfile`, sets `PORT` (10000 by default) and
routes traffic to it. As a blueprint, `render.yaml` at the repository root:

```yaml
services:
  - type: web
    name: my-app
    runtime: docker
    dockerfilePath: ./Dockerfile
    plan: starter          # 512 MB (the free instance also has 512 MB; untested)
    healthCheckPath: /health
```

Commit it, then choose **New → Blueprint** in the Render dashboard and select the
repository. Render sends SIGTERM before replacing an instance; the templates
finish open requests and exit.

Render's native Node runtime (without Docker) would need Lasm and its toolchain
download in every build; use the Docker runtime.
