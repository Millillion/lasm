# Conduit on AWS Lambda as a container image, behind the AWS Lambda Web
# Adapter: Lambda's Node 24 image starts the adapter as an extension, and the
# runtime's exec wrapper starts the Node server, which the adapter forwards
# every invocation to.
#   npm run build:lambda-image    (npm run build, then this file: docker build -t conduit-lambda:local)
# The database is /tmp/conduit.db: it lasts as long as the function instance
# (see the README). Tested in CI with AWS SAM CLI's sam local start-api.
ARG LAMBDA_IMAGE=public.ecr.aws/lambda/nodejs:24
ARG ADAPTER_IMAGE=public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0
FROM ${ADAPTER_IMAGE} AS adapter
FROM ${LAMBDA_IMAGE}
COPY --from=adapter /lambda-adapter /opt/extensions/lambda-adapter
COPY dist/server/ ${LAMBDA_TASK_ROOT}/
RUN printf '#!/bin/sh\nexec node "$LAMBDA_TASK_ROOT/main.mjs"\n' > /opt/lasm-start && chmod 755 /opt/lasm-start
# The server listens on PORT (not 8080: the emulator uses it); the adapter
# forwards requests once GET /api/tags answers.
ENV AWS_LAMBDA_EXEC_WRAPPER=/opt/lasm-start \
    PORT=3000 \
    AWS_LWA_PORT=3000 \
    AWS_LWA_READINESS_CHECK_PATH=/api/tags \
    DATABASE_PATH=/tmp/conduit.db
# The image's entry point needs a handler name; the wrapper ignores it.
CMD ["main.mjs"]
