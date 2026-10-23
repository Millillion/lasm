# Google Cloud Run

**How this is tested:** Lasm's CI never deploys to Google Cloud Run (no cloud accounts, by
project policy). This recipe relies on the container tests: the same `Dockerfile`
built and run on Linux x64 and arm64, read-only with a 512 MB limit
([template CI](README.md), [platform matrix](../DEPLOYMENT.md)). Google Cloud Run's own build
service, routing and runtime environment are untested.

Cloud Run runs `linux/amd64` containers, sets `PORT` (8080 by default) and sends
SIGTERM before it stops an instance, which the templates handle.

With the [gcloud CLI](https://cloud.google.com/sdk/docs/install), from the
project directory (Cloud Build builds the `Dockerfile` remotely, on amd64):

```sh
gcloud run deploy my-app --source . --region us-central1 \
  --memory 512Mi --execution-environment gen2 --allow-unauthenticated
```

Or build locally and push to Artifact Registry:

```sh
docker build --platform linux/amd64 -t us-central1-docker.pkg.dev/PROJECT/REPO/my-app:1 .
docker push us-central1-docker.pkg.dev/PROJECT/REPO/my-app:1
gcloud run deploy my-app --image us-central1-docker.pkg.dev/PROJECT/REPO/my-app:1 \
  --region us-central1 --memory 512Mi --execution-environment gen2 --allow-unauthenticated
```

- **Execution environment:** use `gen2` (full Linux). The first-generation
  environment runs under gVisor, which Lasm has not tested.
- **Memory:** 512 MiB or more.
- **Health:** a startup probe on `GET /health` is optional; Cloud Run's default
  TCP probe already waits for the port.
