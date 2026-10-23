# A Lasm application on AWS Lambda as a container image, behind the AWS Lambda
# Web Adapter (https://github.com/aws/aws-lambda-web-adapter). Lambda's managed
# Node 24 image starts the adapter as an extension; the runtime's exec wrapper
# starts the application's HTTP server instead of a JavaScript handler.
#   docker build --platform linux/arm64 -f lambda/Dockerfile -t my-app path/to/context-with-dist
# Tested in CI with the image's Runtime Interface Emulator (x86_64 and arm64);
# see docs/DEPLOYMENT.md. Give the function at least 512 MB of memory.
ARG LAMBDA_IMAGE=public.ecr.aws/lambda/nodejs:24
ARG ADAPTER_IMAGE=public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0
FROM ${ADAPTER_IMAGE} AS adapter
FROM ${LAMBDA_IMAGE}
COPY --from=adapter /lambda-adapter /opt/extensions/lambda-adapter
# The output of `lasm build Main.lean --output dist`.
COPY dist/ ${LAMBDA_TASK_ROOT}/
RUN printf '#!/bin/sh\nexec node "$LAMBDA_TASK_ROOT/main.mjs"\n' > /opt/lasm-start && chmod 755 /opt/lasm-start
# The application listens on PORT; the adapter forwards each invocation there
# once GET /health answers (any status below 500 counts as ready).
ENV AWS_LAMBDA_EXEC_WRAPPER=/opt/lasm-start \
    PORT=3000 \
    AWS_LWA_PORT=3000 \
    AWS_LWA_READINESS_CHECK_PATH=/health
# The managed image's entry point requires a handler name; the wrapper ignores it.
CMD ["main.mjs"]
