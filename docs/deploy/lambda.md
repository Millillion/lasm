# AWS Lambda (container image)

**Status: in progress (Phase 5.1).** Lasm servers run on Lambda as a container
image behind the [AWS Lambda Web Adapter](https://github.com/aws/aws-lambda-web-adapter),
which forwards each invocation to the server's HTTP port. The recipe and its tests
with the Lambda image's Runtime Interface Emulator (x86_64 and arm64) are being
added in Phase 5.1; this page will then give the `lasm init` version of it.
Lambda needs at least 512 MB of function memory.
