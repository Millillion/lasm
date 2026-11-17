## Lasm.JS.Web (breaking)

- **`Lasm.JS.Web` is the whole web platform, one module per spec, and `Lasm.JS.Web.Browser` is gone** (decisions 0.3-1, 0.3-2, 0.3-18). Every spec of w3c/webref is generated as it is, and each spec is the module `Lasm.JS.Web.<Spec>`. There is no umbrella module. Migration: names do not change; imports do:

  | Before | Now |
  | --- | --- |
  | `import Lasm.JS.Web` (the WinterTC subset) | the modules you use: `import Lasm.JS.Web.Fetch`, `Lasm.JS.Web.Url`, `Lasm.JS.Web.Dom` (events, `AbortController`), `Lasm.JS.Web.Webcrypto` (`crypto`), `Lasm.JS.Web.Html` (timers, `atob`, `structuredClone`, `navigator`, `MessageChannel`), `Lasm.JS.Web.Streams`, `Lasm.JS.Web.Encoding`, `Lasm.JS.Web.FileAPI` (`Blob`), `Lasm.JS.Web.Xhr` (`FormData`), `Lasm.JS.Web.Webidl` (`DOMException`) |
  | `import Lasm.JS.Web.Browser` | `import Lasm.JS.Web.Dom` and `Lasm.JS.Web.Html` (the tree, the elements, the window, canvas 2D), `Lasm.JS.Web.Uievents`, `Lasm.JS.Web.Cssom`, `Lasm.JS.Web.Geometry`, `Lasm.JS.Web.Websockets`, … |
  | `import Lasm.JS.Web.Messaging`, `.Timers`, `.Global` | `import Lasm.JS.Web.Html` |
  | `import Lasm.JS.Web.File`, `.Crypto`, `.Performance`, `.Wasm`, `.WebSocket` | `.FileAPI`, `.Webcrypto`, `.HrTime`, `.WasmJsApi`, `.Websockets` |

  The members the browser tier had left out, or that are in other specs, are now there too (`CanvasRenderingContext2D.filter`, `Element.animate`, `Navigator.clipboard`).
- **`lasm build --target X` refuses a web API that X does not provide** (decision 0.3-10), with an error that names the API, the target and where it is available, from `@mdn/browser-compat-data` (browsers, Node, Deno) and runtime-compat data (Bun, Workers, Vercel Edge, Netlify Edge). A program that used, say, `document` in a server build now fails to build instead of failing when it runs.
- **Web enums are strings with named values** (decision 0.3-17). `RequestMode`, `KeyUsage` and every other WebIDL enum is `structure E where unsafeOfString :: val : String`, with one match pattern per value (`.noCors`). Equality and construction are unchanged (`(← res.type) == .basic`). Migration: a `match` on an enum needs a final `| _ => …`, because a runtime may return a value newer than the pinned IDL, which now reads as it is instead of failing.
- **`Lasm.JS.Web.Support`'s helpers moved to `Lasm.JS.Web.Internal`** (decision 0.3-3). They are internal to the generated bindings: use `Lasm.JS` directly. `Lasm.JS.Web.Record` is unchanged.
- **Errors from generated bindings name the binding**, for example `Lasm.JS.Web.URL.new: …` (0.3-12).
- **An overload that differs only in its argument types is named after them** (A9.2): `RTCDataChannel.sendWithBlob`, `sendWithArrayBuffer`.

## Lasm.JS.Web (new)

- **The whole web platform from Lean**: IndexedDB, WebGL 1 and 2, WebGPU, Web Audio, WebRTC, Media Capture, WebCodecs, SVG, Web Animations, the observers, Service Workers, and every other spec, as `Lasm.JS.Web.<Spec>` ([docs/JS_BINDINGS.md](../../JS_BINDINGS.md#standard-bindings-lasmjsweb)). Modules outside the small prebuilt core compile on first import (0.3-6).

## Lasm.UI

- **`Lasm.UI.Mount.signal`**: an `AbortSignal` that aborts when the app is unmounted, for the platform's own cleanup (`addEventListener`'s `signal`, `fetch`'s) (A14.1).
