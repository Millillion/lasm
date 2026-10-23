# Railway

**How this is tested:** Lasm's CI never deploys to Railway (no cloud accounts, by
project policy). This recipe relies on the container tests: the same `Dockerfile`
built and run on Linux x64 and arm64, read-only with a 512 MB limit
([template CI](README.md), [platform matrix](../DEPLOYMENT.md)). Railway's own build
service, routing and runtime environment are untested.

Railway builds a `Dockerfile` at the project root automatically and sets `PORT`.
With the [Railway CLI](https://docs.railway.com/guides/cli), from the project
directory:

```sh
railway init          # create a project
railway up            # upload, build the Dockerfile, deploy
railway domain        # create a public URL
```

Or connect the Git repository in the Railway dashboard; every push deploys.

Optional `railway.json` for a health check during deploys:

```json
{
  "$schema": "https://railway.com/railway.schema.json",
  "build": { "builder": "DOCKERFILE", "dockerfilePath": "Dockerfile" },
  "deploy": { "healthcheckPath": "/health", "healthcheckTimeout": 60 }
}
```

Give the service at least 512 MB of memory (plan dependent). Railway's builders
are amd64.
