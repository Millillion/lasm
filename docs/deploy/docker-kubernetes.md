# Docker and Kubernetes

From a project created by `lasm init` (any server template):

```sh
docker build -t my-app .
docker run --rm -p 8080:8080 --memory=512m --read-only --tmpfs /tmp my-app
curl http://localhost:8080/health   # {"ok":true}
docker stop <container>             # SIGTERM: open requests finish, exit code 0
```

The read-only root filesystem and the memory limit are how CI runs it; neither
is required. Push the image to any registry (`docker tag my-app REGISTRY/my-app:1`,
`docker push REGISTRY/my-app:1`). Build multi-architecture images with
`docker buildx build --platform linux/amd64,linux/arm64 -t REGISTRY/my-app:1 --push .`;
each architecture runs its own Lasm build inside its build stage.

## Kubernetes

A complete Deployment and Service (`kubectl apply -f app.yaml`):

```yaml
apiVersion: apps/v1
kind: Deployment
metadata:
  name: my-app
spec:
  replicas: 2
  selector:
    matchLabels: { app: my-app }
  template:
    metadata:
      labels: { app: my-app }
    spec:
      terminationGracePeriodSeconds: 30
      containers:
        - name: my-app
          image: REGISTRY/my-app:1
          ports:
            - containerPort: 8080
          env:
            - { name: PORT, value: "8080" }
          resources:
            requests: { memory: 512Mi, cpu: 250m }
            limits: { memory: 1Gi }
          readinessProbe:
            httpGet: { path: /health, port: 8080 }
            periodSeconds: 5
          livenessProbe:
            httpGet: { path: /health, port: 8080 }
            initialDelaySeconds: 10
            periodSeconds: 10
          securityContext:
            readOnlyRootFilesystem: true
            runAsNonRoot: true
            runAsUser: 1000      # the image's `node` user
          volumeMounts:
            - { name: tmp, mountPath: /tmp }
      volumes:
        - name: tmp
          emptyDir: {}
---
apiVersion: v1
kind: Service
metadata:
  name: my-app
spec:
  selector: { app: my-app }
  ports:
    - port: 80
      targetPort: 8080
```

The image's `USER node` is a name, so Kubernetes needs `runAsUser: 1000` to
verify `runAsNonRoot`. The readiness probe gates traffic until the server listens.
