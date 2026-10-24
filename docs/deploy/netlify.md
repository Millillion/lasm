# Netlify Functions (Node.js)

A Lasm server runs as one Netlify Function
(v2, `export default` handler) that answers every path not served by a static
file.

`lasm init my-app --template hono --deploy netlify` writes:

```toml
# netlify.toml
[build]
  command = "npm run build:netlify"
  publish = "public"

[functions]
  directory = "netlify/functions"
  # The function loads program.wasm, host/** and native pieces at run time.
  included_files = ["netlify/functions/lasm/**"]
```

and an empty `public/`. Deploy with `npx netlify deploy --build` (or connect the
repository): Netlify runs Lasm on its Linux x64 build image (the first build
downloads Lean and Lasm's tools), `lasm build --target netlify` writes the
function to `netlify/functions/lasm/` (`lasm.mjs` with `config.path = "/*"`,
plus `dist/`), and Netlify bundles it with `included_files`, keeping the helpers
executable.

- **Limits:** Netlify stops synchronous functions after **60 seconds**; a Lean
  cold start takes about a second. The templates' deploy zip is 1.9–2.4 MB
  (6.4–7.6 MB unpacked), far below Netlify's limits. In the Lambda image the
  first response after a cold start took 0.76–0.97 s (run 40078265584). Request and response
  payloads up to 6 MB buffered. Give the function 1024 MB (Netlify's default).
- **Not supported:** Netlify Edge Functions (Deno isolates; Phase 8), background
  and scheduled functions (untested).

**Tested in CI** (`.github/workflows/serverless.yml`, Linux x64; no Netlify
account): for every server template, Netlify CLI 27.14.2 `netlify build
--offline` runs the build command and bundles the function exactly as for a
deploy (`.netlify/functions/lasm.zip`, checked for the Wasm program, host,
native pieces, permissions and size); `netlify dev --offline` serves the
templates' HTTP checks on every path; and that deploy zip runs in AWS's
`public.ecr.aws/lambda/nodejs:24` image through the Runtime Interface Emulator
with Netlify's own bundled bootstrap (`___netlify-entry-point.handler`, a
response-streaming handler), invoked with the request fields that bootstrap
reads. Netlify's production event format is internal to Netlify; it is taken
from the bundled bootstrap, not from documentation.
