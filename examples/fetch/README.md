# fetch: one pure-Lean HTTP handler on every server target

`Lasm.Fetch.serve handle`, with `handle : Request → Async Response`, serves the same
`Main.lean` on Node, Cloudflare Workers and the other edge platforms, Bun, Deno,
Fastly Compute, wasi-http (`wasmtime serve`, Spin) and WASI as CGI. No npm package
is involved. The routes cover JSON, big numbers, query strings, echo, headers,
redirects, sleeps and tasks, environment variables, Fastly stores and streaming.

```sh
cd examples/fetch
npx @lasm/cli build Main.lean && PORT=3000 node dist/main.mjs   # Node
curl localhost:3000/hello/Ada                                    # {"message":"Hello, Ada, from Lean!"}
curl localhost:3000/fib/20                                       # {"fib":6765}

npx @lasm/cli build Main.lean --target fastly      # bin/main.wasm, pkg/*.tar.gz (fastly compute serve)
npx @lasm/cli build Main.lean --target wasi-http   # wasi-http/main.wasm (wasmtime serve, Spin)
npx @lasm/cli build Main.lean --target workers     # workers/ (npx wrangler dev)
```

CI checks every route on each host ([wasi.yml](../../.github/workflows/wasi.yml)).
Start your own with `npm create @lasm@latest my-svc -- --template fetch`. Guide:
[docs/FETCH.md](../../docs/FETCH.md).
