# Lambda@Edge (CloudFront)

Phase 6 source, awaiting a candidate. A Lasm server can answer CloudFront
requests as a Lambda@Edge function on an **origin-request** trigger: CloudFront
calls it on a cache miss, and the Lean server's response goes back to the viewer
(and into the cache, following its `Cache-Control`).

```sh
npx lasm build Main.lean                 # dist/: a server that listens on $HOST:$PORT
npx lasm package --target lambda-edge    # lambda-edge.zip
aws lambda create-function --region us-east-1 --function-name my-edge-app \
  --runtime nodejs24.x --handler lasm-lambda.handler --architectures x86_64 \
  --zip-file fileb://lambda-edge.zip --memory-size 512 --timeout 30 --role ROLE_ARN
aws lambda publish-version --region us-east-1 --function-name my-edge-app
# Attach the version's ARN to the distribution's cache behavior as an
# origin-request trigger, with "Include body" if the server reads request bodies.
```

`lasm init my-app --template hono --deploy lambda-edge` adds
`npm run package:lambda-edge`. The zip is the same as the [Lambda zip](lambda.md#zip-package-nodejs24x-x86_64-and-arm64)
(the same handler maps CloudFront events), checked against Lambda@Edge's limits.

Lambda@Edge restrictions ([AWS](https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/lambda-at-edge-function-restrictions.html))
and what they mean here:

| Restriction | Effect |
| --- | --- |
| x86_64 only, created in us-east-1 | Use `--architectures x86_64`; the zip carries the x64 native pieces. |
| 50 MB zipped for origin triggers; 1 MB for viewer triggers | `lasm package` fails above 50 MB. The templates are 1.4–2.0 MB zipped, so **viewer-request and viewer-response triggers are too small**: use origin request. |
| No environment variables, layers or container images | The handler needs none: it sets `HOST` and `PORT` itself inside the function. |
| 30 s timeout (origin), memory as for Lambda | Give it 512 MB or more; the init phase includes the Lean server's start (0.45–0.52 s in the emulator on x64). |
| Request bodies only with "Include body"; generated responses up to 1 MB | Without "Include body" the server sees no body. Larger responses fail at CloudFront. |
| Read-only and disallowed response headers | The handler drops `Content-Length`, `Transfer-Encoding`, `Connection`, `Via`, `X-Cache`, `X-Amz-Cf-*`, `X-Edge-*` and similar headers from the server's response. |

**Tested in CI** (`.github/workflows/serverless.yml`, no AWS account): every
server template's `lambda-edge.zip` in `public.ecr.aws/lambda/nodejs:24` through
the Runtime Interface Emulator, invoked with AWS's documented CloudFront
origin-request event (`scripts/serverless/events/cloudfront-origin-request.json`)
carrying GET and POST (base64 body) requests, with 512 MB and a read-only root,
on x86_64 (and also arm64 runners, which Lambda@Edge itself does not offer).
CloudFront itself (header rewriting, caching, body inclusion) is not emulated.
