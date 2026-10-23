# AWS Lambda (container image)

A Lasm server runs on AWS Lambda as a **container image** built on Lambda's
managed Node 24 image, behind the
[AWS Lambda Web Adapter](https://github.com/aws/aws-lambda-web-adapter) (LWA).
Lambda starts the adapter as an extension; the runtime's exec wrapper starts your
server instead of a JavaScript handler; the adapter waits until `GET /health`
answers and then forwards every invocation (API Gateway, function URL or ALB
events) to the server as an ordinary HTTP request.

**Tested in CI with** `public.ecr.aws/lambda/nodejs:24` and
`public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0`, on x86_64 and arm64, invoked
through the image's built-in Runtime Interface Emulator with API Gateway HTTP API
(payload 2.0) events, read-only with `/tmp` writable and a 512 MB memory limit
([`run-lambda.mjs`](../../scripts/platform/run-lambda.mjs), part of
[DEPLOYMENT.md](../DEPLOYMENT.md)). It has not been deployed to AWS by Lasm's CI.

## From a `lasm init` project

Replace the template's `Dockerfile` with this one. The first stage is the
template's (tested by the template CI); the second is the tested recipe's.

```dockerfile
FROM node:24-trixie AS build
WORKDIR /app
COPY package.json package-lock.json* ./
RUN if [ -f package-lock.json ]; then npm ci; else npm install; fi
COPY . .
RUN --mount=type=cache,target=/root/.cache/lasm npx lasm build Main.lean --output dist

FROM public.ecr.aws/lambda/nodejs:24
COPY --from=public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0 /lambda-adapter /opt/extensions/lambda-adapter
COPY --from=build /app/dist ${LAMBDA_TASK_ROOT}/
RUN printf '#!/bin/sh\nexec node "$LAMBDA_TASK_ROOT/main.mjs"\n' > /opt/lasm-start && chmod 755 /opt/lasm-start
ENV AWS_LAMBDA_EXEC_WRAPPER=/opt/lasm-start PORT=3000 AWS_LWA_PORT=3000 AWS_LWA_READINESS_CHECK_PATH=/health
CMD ["main.mjs"]
```

From an existing `dist/` (built anywhere, including a Mac: every build carries the
Linux x64 and arm64 native pieces), use [`deploy/lambda/Dockerfile`](../../deploy/lambda/Dockerfile)
in a directory that contains `dist/`.

- **Port:** the server listens on `PORT=3000`. Do not use 8080 inside the image:
  the local emulator listens there.
- **Readiness:** `AWS_LWA_READINESS_CHECK_PATH=/health`; any status below 500
  counts as ready. Point it at a route your server answers.
- **Memory:** at least **512 MB**. The 128 MB default is too small.
- **Architecture:** build the image for the function's architecture
  (`docker build --platform linux/arm64` or `linux/amd64`) and set the function's
  architecture to match.
- **Timeout:** the first request after a cold start includes server start-up
  (under a second for the examples in CI); a 10 s timeout leaves headroom.

## Try it locally (no AWS account)

```sh
docker build --platform linux/amd64 -t my-app .
docker run --rm -p 9000:8080 --read-only --tmpfs /tmp --memory=512m my-app
curl -s -X POST http://localhost:9000/2015-03-31/functions/function/invocations -d '{
  "version": "2.0", "routeKey": "$default", "rawPath": "/health", "rawQueryString": "",
  "headers": { "host": "localhost" },
  "requestContext": { "http": { "method": "GET", "path": "/health", "protocol": "HTTP/1.1",
    "sourceIp": "127.0.0.1", "userAgent": "curl" }, "requestId": "1", "routeKey": "$default",
    "stage": "$default", "timeEpoch": 0 },
  "isBase64Encoded": false }'
# {"statusCode":200,...,"body":"{\"ok\":true}",...}
```

## Deploy

Push the image to Amazon ECR and create the function from it, for example:

```sh
aws ecr create-repository --repository-name my-app
docker tag my-app ACCOUNT.dkr.ecr.REGION.amazonaws.com/my-app:1
docker push ACCOUNT.dkr.ecr.REGION.amazonaws.com/my-app:1
aws lambda create-function --function-name my-app --package-type Image \
  --code ImageUri=ACCOUNT.dkr.ecr.REGION.amazonaws.com/my-app:1 \
  --role arn:aws:iam::ACCOUNT:role/my-app-lambda --memory-size 512 --timeout 10 \
  --architectures x86_64
aws lambda create-function-url-config --function-name my-app --auth-type AWS_IAM
```

Lambda zip packages on `nodejs24.x` with the adapter layer are planned (Phase 6).
