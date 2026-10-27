# ui: browser apps in Lean (Lasm.UI)

| App | What it shows | Build |
| --- | --- | --- |
| [counter](counter) | The Elm architecture in 30 lines: `Msg`, a pure `update`, an `html!` view | `npx @lasm/cli dev Main.lean --target browser` |
| [todomvc](todomvc) | TodoMVC with storage and routing; `Todo.lean` **proves every reachable model is valid** | `npx @lasm/cli build Main.lean --target browser` |
| [demo](demo) | Routing and the back button, HTTP, timers, key events, focus, SVG, keyed lists, ports, server-side rendering and hydration | `npx @lasm/cli build Main.lean --target browser` |
| [bench](bench) | The js-framework-benchmark app (create, update, swap, remove 1,000–10,000 rows) | `npx @lasm/cli build Main.lean --target browser` |

```sh
cd examples/ui/counter
npx @lasm/cli dev Main.lean --target browser    # http://127.0.0.1:5173 with live reload
npx @lasm/cli build Main.lean --target browser  # dist/: a static site (index.html, app.<hash>.js/.wasm)
```

CI runs every app headless in Chromium, Firefox and WebKit, and checks TodoMVC's
proofs ([ui.yml](../../.github/workflows/ui.yml), [browser.yml](../../.github/workflows/browser.yml)).
Guides: [docs/UI.md](../../docs/UI.md) and [docs/BROWSER.md](../../docs/BROWSER.md).
Start your own with `npm create @lasm@latest my-web -- --template web`.
