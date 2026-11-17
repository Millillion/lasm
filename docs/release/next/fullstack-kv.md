## Templates

- **Fixed: the fullstack template keeps its todos in Workers KV again.**
  0.9.0's REST template (#331) opened its store through `Lasm.KV`, whose
  Workers lookup no longer found the Worker's `env`, so on Cloudflare Workers
  the todos silently lived in each isolate's memory. The template now has a
  program per store, each through the platform's own API, and no `Lasm.KV`:
  `Workers.lean` takes the Worker's bindings as a typed `Env` (`TODOS :
  KVNamespace`; `wrangler.toml` declares the binding), `Deno.lean` uses Deno KV,
  `Fastly.lean` the Fastly KV Store `TODOS`; Node, Bun, Vercel Edge, Netlify Edge
  and wasi-http keep them in memory. A declared store that is missing is now an
  error naming it, never a silent fallback to memory. `build:workers` builds
  `Workers.lean`, and `build:deno` and `build:deno-deploy` build `Deno.lean`.
