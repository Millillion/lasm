# Fly.io

**How this is tested:** Lasm's CI never deploys to Fly.io (no cloud accounts, by
project policy). This recipe relies on the container tests: the same `Dockerfile`
built and run on Linux x64 and arm64, read-only with a 512 MB limit
([template CI](README.md), [platform matrix](../DEPLOYMENT.md)). Fly.io's own build
service, routing and runtime environment are untested.

Fly builds the `Dockerfile` (on its remote amd64 builders by default) and runs it
as a Firecracker VM. Add this `fly.toml` to the project (replace `my-app` with a
unique name):

```toml
app = "my-app"
primary_region = "iad"

[build]
  dockerfile = "Dockerfile"

[env]
  PORT = "8080"

[http_service]
  internal_port = 8080
  force_https = true
  auto_stop_machines = "stop"
  auto_start_machines = true
  min_machines_running = 0

[[http_service.checks]]
  method = "GET"
  path = "/health"
  interval = "15s"
  timeout = "2s"
  grace_period = "10s"

[[vm]]
  memory = "512mb"
  cpu_kind = "shared"
  cpus = 1
```

Then, with [flyctl](https://fly.io/docs/flyctl/install/):

```sh
fly apps create my-app
fly deploy
```

The default 256 MB VM is too small; keep `memory = "512mb"` or more. Fly sends
SIGINT on stop by default; the templates handle both SIGINT and SIGTERM.
