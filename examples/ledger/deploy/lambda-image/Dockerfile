# Ledger on AWS Lambda as a container image: AWS's Node 24 base image with the
# files of the .zip package (lambda.zip, unpacked into dist/lambda): the image's
# runtime interface client calls lasm-lambda.handler, which calls the handler
# ServerFunction.lean publishes with exportDefault. No HTTP server runs inside
# the function.
#   npm run build:lambda-image    (npm run build:lambda, unzip, then: docker build -f deploy/lambda-image/Dockerfile -t ledger-lambda:local .)
# The database is /tmp/ledger.db: it lasts as long as the function instance
# (see the README). Tested in CI with AWS SAM CLI's sam local start-api.
ARG LAMBDA_IMAGE=public.ecr.aws/lambda/nodejs:24
FROM ${LAMBDA_IMAGE}
COPY dist/lambda/ ${LAMBDA_TASK_ROOT}/
ENV DATABASE_PATH=/tmp/ledger.db
CMD ["lasm-lambda.handler"]
