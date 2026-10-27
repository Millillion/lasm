# hello: the smallest Lasm program

One file, no project. The README's first program, and the fixture the installed
acceptance test compiles.

```sh
cd examples/hello
npx @lasm/cli Main.lean            # Hello from Lean! 2 + 3 = 5
npx @lasm/cli build Main.lean      # dist/: run it with node dist/main.mjs
npx @lasm/cli build Main.lean --target wasi   # wasi/main.wasm, for wasmtime or wasmer
```

Needs only Node 24+; the first build downloads Lean and the build tools once.
