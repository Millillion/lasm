## Function platforms

- **Fixed: a program on a function platform no longer fails at start-up**
  with "The Lean program ended (exit code 0) without publishing a fetch
  handler". The platform file took the exit code that Emscripten sets while
  the runtime starts for the end of the program. It now waits for the
  runtime's own end (`Module.onExit`) or a nonzero exit code, so `main` can
  publish its handler with `exportDefault` (found by the serverless platform
  check after the direct handler calls landed).
