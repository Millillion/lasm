# @lasm/vite

Lean apps in [Vite](https://vite.dev) projects, compiled to WebAssembly by
[Lasm](https://github.com/Millillion/lasm).

```sh
npm install --save-dev vite @lasm/vite @lasm/cli
```

```js
// vite.config.js
import lasm from '@lasm/vite';
export default { plugins: [lasm()] };
```

```js
// main.js
import app from './Main.lean?lasm';
const counter = await app.mount(document.getElementById('app'), { flags: { start: 0 } });
counter.ports.saved.subscribe(value => console.log('Lean saved', value));
```

- `vite` (development): `Main.lean` is built with `lasm build --target browser
  --dev`. Saving any `.lean` file in its directory rebuilds it and remounts the
  app in place. State the app saves with `Lasm.Web.App.onHotSave` comes back
  through `Lasm.Web.App.hotState` when its type still converts.
- `vite build`: a release build. Vite bundles the loader with your code, emits
  the `.wasm` as a hashed asset, and resolves the npm modules your Lean bindings
  name (`@[js "date-fns" "format"]`).
- `mount(element, { flags, hydrate, jspi, onError })` resolves to
  `{ element, send(message), ports, unmount(), stopped }`; see the
  [browser guide](https://github.com/Millillion/lasm/blob/main/docs/BROWSER.md).
- Options: `lasm({ suspend: 'jspi' })` lets blocking Lean waits suspend in
  browsers with JSPI; `cli` names the Lasm CLI (default: `@lasm/cli` in the
  project); `release: true` uses release builds in development too.
- TypeScript: add `"@lasm/vite/client"` to `compilerOptions.types`.

Lasm builds need Node 24 or newer; the first build downloads Lean and the build
tools (cached). MIT licence, copyright Jordan Last.
