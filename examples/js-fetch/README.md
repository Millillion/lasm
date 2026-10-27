# js-fetch: call JavaScript from Lean

Outbound HTTP with Node's global `fetch`, declared in one line:

```lean
@[js "globalThis" "fetch"] opaque fetch : String → Data → Async Value
```

It shows a `Lasm.JS` binding, awaiting a promise in `Async` (no Lean thread is held
while it waits), reading a `Response` object, and JSON with `Lean.Json`.

```sh
cd examples/js-fetch
npx @lasm/cli Main.lean -- https://example.com    # 200 text/html; charset=utf-8 577 characters
```

No npm packages are needed (`fetch` is a Node global). For npm packages, see
[js-crud](../js-crud) and the [binding guide](../../docs/JS_BINDINGS.md).
