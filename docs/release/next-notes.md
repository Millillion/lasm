# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes and migration

- **Generated bindings follow one set of rules** ([docs/BINDING_RULES.md](../BINDING_RULES.md), API decisions A9–A12):
  - `FormData.appendWithBlobValue` is now `FormData.appendBlob`, and `FormData.setWithBlobValue` is now `FormData.setBlob` (A9.1). Rename the calls.
  - In `Lasm.JS.Node`, a documented `{number}` that is an integer is now `Nat` (or `Int` for `pid`) instead of `Float` (A11.1):
    - `crypto.randomBytes`, `crypto.pbkdf2`, `crypto.hkdf` and `crypto.scrypt` (sizes, key lengths, iterations, and `ScryptOptions`);
    - `process.kill`'s `pid` (`Int`);
    - `FileHandle.fd`;
    - the `uid`, `gid`, `timeout` and `maxBuffer` options of `child_process`;
    - `highWaterMark` in the stream options.

    Pass whole numbers (`crypto.randomBytes 32`, not `32.0`).
- **`Lasm.JS.Web.Browser` has only what Chromium 153, Firefox 155 and Safari 26.6 all ship** (decision 0.3-2). Removed: members not shipped by one of them, deprecated members, and members the compatibility data does not list. Examples: `CanvasRenderingContext2D.filter`, `fontKerning`, `isContextLost`, `Document.execCommand`, `Document.write`, `Element.setHTML`, `getBoxQuads`, `moveBefore`, `MediaQueryList.addListener` (use `addEventListener "change"`), and `HTMLAnchorElement.coords`. To call one anyway, use `Lasm.JS` directly (`el.val.callMethod "setHTML" #[toJS html]`).
- **An overload that differs only in its argument types is named after them** (A9.2): `RTCDataChannel.sendWithBlob`, `sendWithArrayBuffer`.

## New

- **The rest of the browser platform: `import Lasm.JS.Web.Platform`** (decision 0.3-2), or one spec's module (`import Lasm.JS.Web.Platform.IndexedDB`). It has 474 more interfaces, every one Chromium 153, Firefox 155 and Safari 26.6 all ship: IndexedDB, WebGL 1 and 2, Web Audio, WebRTC, Media Capture, WebCodecs, SVG, Web Animations, the observers, and more ([docs/JS_BINDINGS.md](../JS_BINDINGS.md#the-rest-of-the-browser-platform-lasmjswebplatform)).
- **`Lasm.UI.Mount.signal`**: an `AbortSignal` that aborts when the app is unmounted, for the platform's own cleanup (`addEventListener`'s `signal`, `fetch`'s) (A14.1).

- **Checked downcasts:** `I.cast? (v : Value) : IO (Option I)` (`instanceof`) for every generated interface JavaScript can name (A12), for example `if let some input ← HTMLInputElement.cast? e.val then …`. The unchecked `{ val := v }` stays.
