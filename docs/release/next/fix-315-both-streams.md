## Errors

- **A failed build step reports both of its output streams** (#315). When Lake
  wrote anything to stderr during a failing step, such as the
  `info: <package>: remote URL changed` notice that a Git `insteadOf` URL
  rewrite causes on every run, `lasm build` printed only that and hid the
  entry module's Lean error, which `lake lean` writes to stdout. The CLI now
  prints the step's stderr, then its stdout, and shows text that appears on
  both streams once. `lasm dev`, `lasm dev --target browser`, the Vite plugin,
  `lasm editor`, the Lasm.JS binding reader, Lake workspace loading and
  package C-code diagnostics use the same rule. Thanks to @paulbutcher for
  the report and the reproduction.
