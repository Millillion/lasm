# Fly.io

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
