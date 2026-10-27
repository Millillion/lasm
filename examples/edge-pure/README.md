# edge-pure: a pure-Lean edge function

A Cloudflare Worker whose routing and work are all Lean, with no npm package.
`Lasm.JS` reads the `Request` and makes the `Response`. It also exercises what
the single-threaded edge runtime supports: big numbers, `Std.Async`, sleeps,
cooperative tasks, `Std.Mutex`, clocks, randomness, environment variables and deep
recursion.

```sh
cd examples/edge-pure
npx @lasm/cli build Main.lean --target workers   # workers/ with worker.mjs and wrangler.toml
cd workers && npx wrangler dev                   # http://localhost:8787/fib/20
```

The same file builds for `vercel-edge`, `netlify-edge`, `deno-deploy`,
`supabase-edge`, `bun` and `deno`. CI serves it with `wrangler dev` and checks every
route ([workers.yml](../../.github/workflows/workers.yml)). Guide:
[docs/EDGE.md](../../docs/EDGE.md).
