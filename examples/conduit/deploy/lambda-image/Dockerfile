# Conduit on AWS Lambda as a container image: AWS's Node 24 base image with
# the same handler as the .zip package (lasm-lambda.mjs, from @lasm/cli),
# which starts the Node server in the function's process and turns each
# invocation into a request to it.
#   npm run build:lambda-image    (npm run build, then: docker build -f deploy/lambda-image/Dockerfile -t conduit-lambda:local .)
# The database is /tmp/conduit.db: it lasts as long as the function instance
# (see the README). Tested in CI with AWS SAM CLI's sam local start-api.
# (The AWS Lambda Web Adapter route, docs/deploy/lambda.md, also runs
# Conduit's API; under sam local start-api its pages stall, because the
# adapter passes on the Node server's Connection and Keep-Alive headers.)
ARG LAMBDA_IMAGE=public.ecr.aws/lambda/nodejs:24
FROM ${LAMBDA_IMAGE}
COPY dist/server/ ${LAMBDA_TASK_ROOT}/
COPY node_modules/@lasm/cli/src/serverless/lasm-lambda.mjs node_modules/@lasm/cli/src/serverless/lasm-server.mjs ${LAMBDA_TASK_ROOT}/
ENV DATABASE_PATH=/tmp/conduit.db
CMD ["lasm-lambda.handler"]
