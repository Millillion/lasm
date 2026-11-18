# Conduit on AWS Lambda as a container image: AWS's Node 24 base image with the
# files of the .zip package (npm run build:lambda: ServerFunction.lean built with
# lasm build --target lambda, unpacked to dist/lambda-image). Lambda's runtime
# interface client calls lasm-lambda.handler for each invocation, which calls the
# handler the program publishes (exportDefault) in-process: no HTTP server runs.
#   npm run build:lambda-image    (npm run build:lambda, unzip, then: docker build -f deploy/lambda-image/Dockerfile -t conduit-lambda:local .)
# The database is /tmp/conduit.db: it lasts as long as the function instance
# (see the README). Tested in CI with AWS SAM CLI's sam local start-api.
ARG LAMBDA_IMAGE=public.ecr.aws/lambda/nodejs:24
FROM ${LAMBDA_IMAGE}
COPY dist/lambda-image/ ${LAMBDA_TASK_ROOT}/
ENV DATABASE_PATH=/tmp/conduit.db
CMD ["lasm-lambda.handler"]
