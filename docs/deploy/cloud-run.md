# Google Cloud Run

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
