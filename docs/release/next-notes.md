# Lasm (next release)

## Breaking: `Lasm.Web` is replaced by the generated `Lasm.JS.Web.Browser`

`import Lasm.JS.Web.Browser` gives the web platform's own APIs in a browser,
generated from the WebIDL of the DOM, HTML, CSSOM, UI Events, Pointer Events and
WebSockets specifications (with tier 1's `fetch`, timers, `URL`, `crypto`,
`console`, …): `Document`, `Element`, the HTML elements (`HTMLInputElement`,
`HTMLSelectElement`, `HTMLFormElement`, `HTMLCanvasElement`, …), `Window`,
`Location`, `History`, `Storage`, the UI events (`MouseEvent`, `KeyboardEvent`,
`PointerEvent`, …), `MutationObserver`, canvas 2D and `WebSocket`. Names and
arguments are the standards' own, so MDN documents them. Guide and mapping:
docs/JS_BINDINGS.md, "The browser tier".

The hand-written `Lasm.Web` and its JavaScript module `lasm:web` are removed.
`Lasm.Web.App` (the loader's mount glue) moved unchanged to `Lasm.UI.Mount`;
`Lasm.UI` keeps its API. Two behaviours of `Lasm.Web` have no generated
counterpart:

- **Unmount cleanup.** `Lasm.Web` removed an app's listeners, timers, animation
  frames and sockets when it was unmounted. The generated bindings act on the
  page directly: remove what the app added in `Lasm.UI.Mount.onUnmount`
  (`removeEventListener`, `clearTimeout`, `cancelAnimationFrame`, `close`).
  `Lasm.UI` apps are unaffected (their listeners belong to `lasm:ui-dom`).
- **Batching.** `Context2D.draw` ran a list of drawing commands in one call into
  JavaScript, and `Event.info` read the usual event fields in one call; with the
  generated bindings each method or attribute is one call.

### Old call → new call

With `import Lasm.JS.Web.Browser` and `open Lasm.JS Lasm.JS.Web`. `doc` is
`← document`. A handle of a more specific interface is made from the same object:
`({ val := e.val } : HTMLInputElement)` (unchecked, like a TypeScript cast). A
`String` coerces to the Trusted Types unions (`setAttribute "title" "x"`), an
interface to its parent (an `Element` where a `Node` is expected), and an
argument union's other member types likewise.

**Document and nodes (`Lasm.Web.Dom`)**

| `Lasm.Web` | `Lasm.JS.Web.Browser` |
| --- | --- |
| `window`, `document` | `window`, `document` |
| `createElement tag` | `doc.createElement tag` |
| `createElementNS ns tag`, `svgNamespace` | `doc.createElementNS (some "http://www.w3.org/2000/svg") tag` |
| `createTextNode s` | `doc.createTextNode s` |
| `createFragment` | `doc.createDocumentFragment` |
| `getElementById id` | `doc.getElementById id` |
| `querySelector s`, `querySelectorAll s` | `doc.querySelector s`, `doc.querySelectorAll s` (a `NodeList`: `length`, `item i`, `values`) |
| `node.querySelector s`, `node.querySelectorAll s` | `element.querySelector s`, `element.querySelectorAll s` |
| `parent.appendChild child` | `discard <| parent.appendChild child` (returns the node) |
| `parent.append #[a, b]` | `parent.append #[(a : Node), (b : Node)]` |
| `parent.insertBefore child ref` | `discard <| parent.insertBefore child ref` |
| `parent.removeChild child` | `discard <| parent.removeChild child` |
| `node.remove` | `element.remove` (on `Element`, `CharacterData`, `DocumentType`) |
| `node.replaceWith other` | `element.replaceWith #[(other : Node)]` |
| `parent.replaceChildren #[…]` | `parent.replaceChildren #[…]` |
| `node.textContent`, `node.setTextContent s` | `node.textContent : IO (Option String)`, `node.setTextContent (some s)` |
| `parentNode`, `parentElement`, `firstChild`, `lastChild`, `nextSibling`, `previousSibling` | the same names |
| `node.childNodes : IO (Array Node)` | `(← node.childNodes).values` |
| `node.contains other`, `node.cloneNode deep` | `node.contains (some other)`, `node.cloneNode (some deep)` |
| `isConnected`, `nodeName`, `tagName` | the same names |
| `element.children : IO (Array Element)` | `element.children` (an `HTMLCollection`: `length`, `item i`) |
| `getAttribute`, `setAttribute`, `removeAttribute`, `hasAttribute`, `toggleAttribute e n force` | the same names (`toggleAttribute n force`) |
| `setAttributes #[(k, v), …]` | one `setAttribute k v` each |
| `id`, `setId` | `id`, `setId` |
| `data key`, `setData key v` | `getAttribute ("data-" ++ key)`, `setAttribute ("data-" ++ key) v` |
| `addClass #[…]`, `removeClass #[…]`, `toggleClass n force`, `hasClass n` | `(← e.classList).add #[…]`, `.remove #[…]`, `.toggle n force`, `.contains n` |
| `setClassName s` | `setClassName s` |
| `setStyle p v`, `setStyles #[…]`, `removeStyle p`, `style p` | on an `HTMLElement`: `(← e.style).setProperty p v`, `.removeProperty p`, `.getPropertyValue p` |
| `innerHTML`, `setInnerHTML s` | `innerHTML` (a `TrustedHTMLOrDOMString`: `.domString s`), `setInnerHTML s` |
| `value`, `setValue`, `checked`, `setChecked` | on `HTMLInputElement`, `HTMLTextAreaElement`, `HTMLSelectElement`: `value`, `setValue`, `checked`, `setChecked` |
| `focus`, `blur`, `click` | on an `HTMLElement`: `focus`, `blur`, `click` |
| `scrollIntoView smooth` | `scrollIntoView (some (.scrollIntoViewOptions { behavior := some .smooth }))` |
| `rect : IO Rect` | `getBoundingClientRect` (a `DOMRect`: `x`, `y`, `width`, `height`, `top`, `right`, `bottom`, `left`) |
| `prop name`, `setProp name v` | the interface's own attribute (`HTMLInputElement.disabled`, `HTMLSelectElement.selectedIndex`, `HTMLImageElement.naturalWidth`, …), or `e.val.get name` / `e.val.set name v` (`Lasm.JS`) |
| `doc.body`, `doc.head` | `doc.body`, `doc.head` (`Option HTMLElement`, `Option HTMLHeadElement` as `Data`) |
| `doc.title`, `doc.setTitle`, `doc.activeElement` | the same names |

**Events (`Lasm.Web.Events`)**

| `Lasm.Web` | `Lasm.JS.Web.Browser` |
| --- | --- |
| `target.on type f options`, `addEventListener` | `let l ← EventListener.ofSyncFn f; target.addEventListener type (some l) options` (options `some (.addEventListenerOptions { once := some true })`) |
| `Listener.remove` | `target.removeEventListener type (some l)` |
| `dispatchEvent` | `dispatchEvent` |
| `Event.create type bubbles cancelable` | `Event.new type (some { bubbles := some b, cancelable := some c })` |
| `Event.custom type detail` | `CustomEvent.new type (some { detail, bubbles := …, cancelable := … })` |
| `e.info` | the fields of the event's interface: `({ val := e.val } : KeyboardEvent).key`, `.code`, `.repeat`, `.shiftKey`, …; `MouseEvent` `clientX`, `offsetX`, `button`, …; `WheelEvent` `deltaX`, `deltaY` |
| `e.type`, `e.key` | `e.type`, `({ val := e.val } : KeyboardEvent).key` |
| `e.targetValue`, `e.targetChecked`, `e.targetElement` | `e.target`, made the input's handle: `({ val := t.val } : HTMLInputElement).value` |
| `target`, `currentTarget`, `preventDefault`, `stopPropagation`, `stopImmediatePropagation`, `defaultPrevented` | the same names |
| `e.detail` | `({ val := e.val } : CustomEvent).detail` |
| `e.prop name` | the interface's attribute, or `e.val.get name` |
| `ListenerOptions` | `AddEventListenerOptions` |

**Timers (`Lasm.Web.Timers`)**

| `Lasm.Web` | `Lasm.JS.Web` |
| --- | --- |
| `setTimeout ms f`, `setInterval ms f` | `setTimeout (← JSFunction.ofSyncFn fun _ => do f; pure .undefined) (some ms)` (an `Int` id), likewise `setInterval` |
| `clearTimeout t`, `clearInterval t` | `clearTimeout (some t)`, `clearInterval (some t)` |
| `requestAnimationFrame f`, `cancelAnimationFrame` | `requestAnimationFrame (← FrameRequestCallback.ofSyncFn f)`, `cancelAnimationFrame` |
| `queueMicrotask f` | `queueMicrotask (← VoidFunction.ofSyncFn f)` |
| `nextFrame : Async Float` | an `IO.Promise` resolved by a `requestAnimationFrame` callback, then `Std.Async.await` |
| `now` | `(← performance).now` |

**fetch, URLs and forms (`Lasm.Web.Fetch`, `Lasm.Web.Url`)**: tier 1's `fetch`,
`Request`, `Response`, `Headers`, `FormData`, `URL`, `URLSearchParams`, `AbortController`.

| `Lasm.Web` | `Lasm.JS.Web` |
| --- | --- |
| `fetch url { method, headers, body := .text s / .bytes b / .form f / .params p, signal }` | `fetch url (some { method := some "POST", headers := some (.record ⟨#[…]⟩), body := some s, signal := some sig })` (`body` takes a `String`, `ByteArray`, `FormData`, `URLSearchParams`, `Blob` or stream) |
| `body := .json d` | `body := some (← jsonString d)` with `JSON.stringify` (an `@[js "globalThis" "JSON.stringify"]` binding) and a `content-type` header |
| `Response.info`, `status`, `ok`, `header n` | `status`, `ok`, `statusText`, `url`, `redirected`, `type`, `(← r.headers).get n`, `(← r.headers).entries` |
| `Response.text`, `json`, `bytes` | `text`, `json`, `bytes` |
| `fetchText`, `fetchJson` | `fetch`, check `ok`, then `text` or `json` |
| `AbortController.create`, `signal`, `abort` | `AbortController.new`, `signal`, `abort` |
| `AbortSignal.timeout ms` | `AbortSignal.timeout ms` |
| `Url.parse url base` (a record of fields) | `URL.parse url base` (a `URL`: `href`, `origin`, `protocol`, …, `searchParams`) |
| `SearchParams.create pairs`, `parse s` | `URLSearchParams.new (some (.sequence …))`, `URLSearchParams.new (some s)` |
| `SearchParams.get`, `getAll`, `has`, `set`, `append`, `delete`, `entries`, `toString` | the same names |
| `encodeURIComponent`, `decodeURIComponent` | ECMAScript, not WebIDL: `(← global).callMethod "encodeURIComponent" #[.string s] String` |
| `FormData.create`, `ofForm form` | `FormData.new`, `FormData.new (some form.val)` |
| `FormData.append`, `appendBytes n b file type`, `get`, `entries` | `append`, `appendWithBlobValue n (← Blob.new (some #[b]) (some { type := some type })) (some file)`, `get`, `entries` (a `FormDataEntryValue`: `.usvString` or `.file`) |
| `FormValue.bytes` | `File.bytes` |

**Storage, location and history (`Lasm.Web.Storage`, `Lasm.Web.History`)**

| `Lasm.Web` | `Lasm.JS.Web.Browser` |
| --- | --- |
| `localStorage`, `sessionStorage` | `localStorage`, `sessionStorage` |
| `Storage.get`, `set`, `remove`, `clear`, `length`, `key` | `getItem`, `setItem`, `removeItem`, `clear`, `length`, `key` |
| `Storage.keys` | `key i` for `i < length` |
| `location : IO Location` (a record) | `location : IO Location` (an object: `href`, `pathname`, `search`, `hash`, …, read when called) |
| `Location.assign`, `replace`, `reload`, `setHash` | `(← location).assign`, `.replace`, `.reload`, `.setHash` |
| `History.pushState url state`, `replaceState url state` | `(← history).pushState state "" (some url)`, `.replaceState state "" (some url)` |
| `History.back`, `forward`, `go`, `state`, `length` | `(← history).back`, `.forward`, `.go (some n)`, `.state`, `.length` |
| `onPopState f`, `onHashChange f` | `(← window).addEventListener "popstate" …` (a `PopStateEvent`: `state`), `"hashchange"` (a `HashChangeEvent`: `newURL`) |

**WebSocket (`Lasm.Web.WebSocket`)**

| `Lasm.Web` | `Lasm.JS.Web.WebSocket` |
| --- | --- |
| `WebSocket.connect url protocols` | `WebSocket.new url (some (.sequence protocols))`, then `setBinaryType .arraybuffer` for bytes |
| `send text`, `sendBytes b` | `send text`, `send b` |
| `close code reason` | `close (some code) (some reason)` |
| `readyState` (an inductive) | `readyState` (a `Nat`: `WebSocket.CONNECTING`, `OPEN`, `CLOSING`, `CLOSED`) |
| `bufferedAmount`, `protocol` | the same names |
| `onOpen`, `onError` | `addEventListener "open"`, `"error"` |
| `onMessage f` (a `Message`) | `addEventListener "message"`; `({ val := e.val } : MessageEvent).data` is a `.string`, or with `binaryType` `arraybuffer` an `ArrayBuffer` (`.ref b _`: `Support.arrayBufferBytes b`) |
| `onClose f` (a `CloseInfo`) | `addEventListener "close"`; `({ val := e.val } : CloseEvent).code`, `.reason`, `.wasClean` |

**Crypto and console (`Lasm.Web.Crypto`, `Lasm.Web.Console`)**: tier 1.

| `Lasm.Web` | `Lasm.JS.Web` |
| --- | --- |
| `Crypto.randomBytes n` | `(← crypto).getRandomValues (ByteArray.mk (Array.replicate n 0))` (at most 65,536 bytes a call), or `IO.getRandomBytes n` |
| `Crypto.randomUUID` | `(← crypto).randomUUID` |
| `Crypto.digest alg data`, `sha256` | `(← (← crypto).subtle).digest alg data` (`Async ByteArray`) |
| `Crypto.hex` | not a web API: write it (four lines) |
| `Console.log`, `info`, `warn`, `error`, `debug`, `logText` | `console.log #[…]`, `console.info`, `console.warn`, `console.error`, `console.debug` |

**Canvas (`Lasm.Web.Canvas`)**

| `Lasm.Web` | `Lasm.JS.Web.Canvas` |
| --- | --- |
| `canvas.context2d alpha` | `({ val := e.val } : HTMLCanvasElement).getContext "2d"` (a `Value`: `{ val := v : CanvasRenderingContext2D }`); options as `Data` |
| `ctx.draw #[.fillStyle s, .fillRect x y w h, …]` | one call each: `ctx.setFillStyle s`, `ctx.fillRect x y w h`, `setStrokeStyle`, `setLineWidth`, `setFont`, `setTextAlign`, `setTextBaseline`, `setGlobalAlpha`, `setLineCap`, `setLineJoin`, `strokeRect`, `clearRect`, `beginPath`, `closePath`, `moveTo`, `lineTo`, `rect`, `arc`, `quadraticCurveTo`, `bezierCurveTo`, `fill`, `stroke`, `fillText`, `strokeText`, `save`, `restore`, `translate`, `rotate`, `scale`, `setTransform`, `resetTransform`, `drawImage` |
| `measureText` (width, ascent, descent) | `measureText` (a `TextMetrics`: `width`, `actualBoundingBoxAscent`, `actualBoundingBoxDescent`, …) |
| `imageData x y w h` | `(← ctx.getImageData x y w h).data` |
| `putImageData bytes x y w h` | `ctx.putImageData (← ImageData.newWithData bytes w (some h)) x y` |

**The app (`Lasm.Web.App`)**: moved unchanged to `Lasm.UI.Mount`
(`import Lasm.UI.Mount`): `Lasm.Web.App.root` → `Lasm.UI.Mount.root Element`
(the element as any handle type), and `flags`, `hydrating`, `target`, `port`,
`Port.send`, `Port.subscribe`, `Port.subscribeAsync`, `onMessage`,
`onMessageAsync`, `onUnmount`, `hotState`, `onHotSave` under `Lasm.UI.Mount`.

**Helpers**: `Lasm.Web.background w` (start `Async` work from a handler) →
`discard (w.asTask)` or `Std.Async.background` inside `Async`; `Lasm.Web.callback`
→ the callback interface's `ofSyncFn` (`EventListener.ofSyncFn`, …) or
`Lasm.JS.Function.ofSyncFn`.
