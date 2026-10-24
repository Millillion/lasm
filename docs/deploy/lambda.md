# AWS Lambda

Two ways: a **.zip package** for the managed `nodejs24.x` runtime (below; Phase 6
source, awaiting a candidate) or a **container image** behind the AWS Lambda Web
Adapter ([further down](#container-image)). For CloudFront, see
[Lambda@Edge](lambda-edge.md).

## Zip package (`nodejs24.x`, x86_64 and arm64)

```sh
npx lasm build Main.lean            # dist/: any server that listens on $HOST:$PORT
npx lasm package --target lambda    # lambda.zip
aws lambda create-function --function-name my-app --runtime nodejs24.x \
  --handler lasm-lambda.handler --zip-file fileb://lambda.zip \
  --memory-size 512 --timeout 10 --architectures arm64 --role ROLE_ARN
aws lambda create-function-url-config --function-name my-app --auth-type AWS_IAM
```

With `lasm init my-app --template hono --deploy lambda-zip` the project has
`npm run package:lambda` for the second step.

**How it works.** `lambda.zip` is `dist/` plus two small files: `lasm-server.mjs`
and the handler `lasm-lambda.mjs`. During Lambda's init phase the handler starts
the Lean program in the function's own Node process with `HOST=127.0.0.1` and
`PORT` set to a free loopback port, and waits until the port accepts
connections. Each invocation becomes one HTTP request to that server, and the
response goes back in the event's own shape. Supported events: API Gateway REST
API (payload 1.0), API Gateway HTTP API (payload 2.0), Lambda function URLs,
Application Load Balancer (single- and multi-value headers) and CloudFront
(Lambda@Edge). Bodies are base64 when they are not text. Lambda's Node runtime
starts Node with V8 flags (`--max-old-space-size=…` and others) that worker
threads refuse; the handler removes them from what the Lean runtime's threads
inherit. Any server works: Express,
Hono on `@hono/node-server` and pure-Lean `Std.Http` are tested.

- **Both architectures in one zip:** every build carries the Linux x64 and arm64
  native pieces; set `--architectures` to either.
- **Permissions:** the zip records Unix permissions itself (`main.mjs` and the
  process helpers 755, everything else 644), so a zip made on Windows works too.
- **Limits:** `lasm package` fails above Lambda's 250 MB unzipped limit and warns
  above 50 MB zipped (upload through S3 then). The templates are 1.4–2.0 MB
  zipped and 5.4–6.5 MB unpacked.
- **Memory:** at least 512 MB.
- **ALB:** a single-value target group can return only one `Set-Cookie`; enable
  multi-value headers on the target group for more.
- **Not supported:** response streaming and WebSockets; a program that does not
  listen on `$PORT` fails the init phase with a message saying so.

**Tested in CI** (`.github/workflows/serverless.yml`, Linux x64 and arm64 runners;
no AWS account): every server template's zip, extracted with Info-ZIP `unzip` and
mounted read-only at `/var/task` of `public.ecr.aws/lambda/nodejs:24`, invoked
through the image's Runtime Interface Emulator with AWS's documented sample
events for each type above (`scripts/serverless/events/`), with 512 MB and a
read-only root; AWS SAM CLI 1.170.0 `sam local invoke` (REST and HTTP API events)
and `sam local start-api` with the zip as `CodeUri`; the size limits; cold starts.

**Measured in CI** (run 40074644572, emulator on GitHub's `ubuntu-24.04` and
`ubuntu-24.04-arm`, 512 MB, three cold starts per template; the emulator's
INIT REPORT is the init phase, the first response also includes container start):

| Template | Zip / unpacked | Init phase x64 / arm64 | Warm invocation x64 / arm64 | Memory in use x64 / arm64 |
| --- | --- | --- | --- | --- |
| Hono | 1.8 / 5.7 MB | 470–482 / 410–427 ms | 2.1 / 2.6 ms | 206 / 135 MiB |
| Express | 2.0 / 6.5 MB | 503–518 / 476–480 ms | 2.1 / 2.7 ms | 212 / 142 MiB |
| Std.Http | 1.4 / 5.4 MB | 444–459 / 413–426 ms | 3.9 / 5.2 ms | 308 / 186 MiB |

**Why a handler, not the Web Adapter layer.** The same run measured the Lambda
Web Adapter 1.1.0 in its layer layout (adapter extension, `/opt/bootstrap`, a
`run.sh` handler) for the Hono template: init 423 ms (x64) and 390–394 ms
(arm64), warm 1.6 / 2.0 ms, so about 50–90 ms faster to start and 0.5 ms faster
per invocation. The handler was chosen anyway: it needs no layer, no
environment variables and no extension, so the same zip works on Lambda@Edge
(which allows none of them); it maps ALB and CloudFront events; and the zip is
self-contained, with no layer ARN per region and architecture to keep current.
The Web Adapter remains the container-image route.

## Container image

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

### From a `lasm init` project

`lasm init my-app --template hono --deploy lambda` (any server template) writes
this file as `Dockerfile.lambda` next to the ordinary `Dockerfile`; build it with
`docker build -f Dockerfile.lambda -t my-app .`. The first stage is the template's;
the second is the tested recipe's. The template CI builds it for every server
template on Linux x64 and arm64 and invokes it through the emulator.

```dockerfile
FROM node:24-trixie AS build
WORKDIR /app
COPY . .
RUN if [ -f package-lock.json ]; then npm ci; else npm install; fi
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

### Try it locally (no AWS account)

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

### Deploy

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

