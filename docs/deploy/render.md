# Render

Create a **Web Service** with the **Docker** runtime from the project's Git
repository. Render builds the `Dockerfile`, sets `PORT` (10000 by default) and
routes traffic to it. As a blueprint, `render.yaml` at the repository root:

```yaml
services:
  - type: web
    name: my-app
    runtime: docker
    dockerfilePath: ./Dockerfile
    plan: starter          # 512 MB; the free 512 MB instance also works for trials
    healthCheckPath: /health
```

Commit it, then choose **New → Blueprint** in the Render dashboard and select the
repository. Render sends SIGTERM before replacing an instance; the templates
finish open requests and exit.

Render's native Node runtime (without Docker) would need Lasm and its toolchain
download in every build; use the Docker runtime.
