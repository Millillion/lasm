# Lasm.UI: frontends in Lean

`Lasm.UI` is Lasm's frontend framework. A whole browser app, DOM included, is
written in Lean and compiled to WebAssembly with `lasm build --target browser`
([BROWSER.md](BROWSER.md)). It follows the Elm architecture:

- a model, and `init`;
- a **pure** `update : Msg → Model → Model × Cmd Msg`;
- a **pure** `view : Model → Html Msg`;
- `subscriptions : Model → Subs Msg`.

Diffing runs in Lean, and it is **proved correct**: applying the patch that
`diff` computes to the DOM of the old view gives the DOM of the new view, keyed
moves included (`Lasm.UI.Proofs.diff_correct`; [What is proved](#what-is-proved)).
Because `update` and `view` are ordinary pure Lean functions, you can prove
theorems about your own app too: [TodoMVC](../examples/ui/todomvc/Todo.lean) proves
that every model it can reach is valid.

Contents: [A first app](#a-first-app) · [Views](#views-html-msg) ·
[`html!`](#html-syntax) · [Events](#events-and-decoders) · [Apps](#apps) ·
[Commands](#commands-cmd) · [Subscriptions](#subscriptions-subs) ·
[Routing](#urls-and-routing) · [JavaScript](#javascript-ports-and-messages) ·
[SSR and hydration](#server-side-rendering-and-hydration) ·
[Testing and proofs](#testing-and-proving-your-app) · [What is proved](#what-is-proved) ·
[How it works](#how-it-works) · [Performance](#performance) · [API reference](#api-reference)

## A first app

`Main.lean`:

```lean
import Lasm.UI
open Lasm.UI

inductive Msg where
  | increment
  | decrement

def update : Msg → Int → Int
  | .increment, n => n + 1
  | .decrement, n => n - 1

def view (n : Int) : Html Msg :=
  html! <main>
          <button onClick={Msg.decrement}>-</button>
          <output>{n}</output>
          <button onClick={Msg.increment}>+</button>
        </main>

def main : IO Unit := (App.sandbox 0 update view).run
```

Build and serve it:

```sh
lasm build Main.lean --target browser     # writes dist/: index.html, app.<hash>.js, app.<hash>.wasm
npx serve dist                            # or any static file server
```

`dist/index.html` mounts the app on `<div data-lasm-app>`. To mount it yourself
(several apps per page, inside a React or Vue page, with flags):

```js
import { mount } from './app.3f2a9c1d0b7e.js';
const app = await mount(document.getElementById('counter'), { flags: { start: 5 } });
app.unmount();
```

`App.run` is the program's `main`: it renders the first view synchronously, so
the app is on screen when `mount` resolves.

## Views: `Html Msg`

A view is a value of `Html Msg`: a tree of elements and text whose event
handlers produce messages of type `Msg`.

```lean
inductive Html (Msg : Type) where
  | text (s : String)
  | elem (ns : Ns) (tag : String) (key : Option String) (attrs : List (Attr Msg)) (children : List (Html Msg))
```

Write views with [`html!`](#html-syntax) or with the function DSL; both give
the same terms and can be mixed.

```lean
-- function DSL
def item (t : Todo) : Html Msg :=
  li [class_ (if t.done then "done" else ""), onClick (.toggle t.id)] [text t.title]

-- html!
def item' (t : Todo) : Html Msg :=
  html! <li class={if t.done then "done" else ""} onClick={Msg.toggle t.id}>{t.title}</li>
```

Attributes (`Attr Msg`) are of four kinds; a later attribute for the same slot wins:

| Kind | Constructor | DOM effect |
| --- | --- | --- |
| attribute | `.attr "href" "/x"`, `class_`, `id_`, `href`, … | `setAttribute` |
| property | `.prop "value" (.str s)`, `value`, `checked`, `disabled`, … | `el.value = s` |
| style | `.style "color" "red"`, `style "color" "red"` | `el.style.setProperty` |
| handler | `.on listener handle`, `onClick`, `onInput`, `on "event" decoder`, … | a delegated listener |

Use properties for state the user can change (`value`, `checked`, `selected`):
they update what is shown even after the user typed.

**Keys.** `keyed "k" node` (or `key={k}` in `html!`) gives an element an
identity among its siblings, so it keeps its DOM node (focus, selection,
scroll position, CSS transitions) when siblings are inserted, removed or
reordered. Key list items that can move.

**SVG** elements live in `Lasm.UI.Svg` (`Svg.circle [Svg.cx "5", …] []`); in
`html!`, everything inside `<svg>` is created in the SVG namespace.

`Html.map f view` embeds a component whose messages are another type.

## `html!` syntax

```lean
def view (m : Model) : Html Msg :=
  html! <section class="todoapp">
          <input class="new-todo" placeholder="What needs to be done?" value={m.field}
            onInput={Msg.updateField} onEnter={Msg.add} />
          <ul class="todo-list">{m.todos.map viewTodo}</ul>
          {if m.todos.isEmpty then [] else [footer m]}
        </section>
```

- **Elements**: `<tag attr…>children</tag>` or `<tag attr… />`.
- **Attributes**: `name="text"`, `name={term}`, or a bare `name` (a boolean
  property set to true, or an empty attribute). Names may contain `-`
  (`aria-label`, `data-id`, `stroke-width`).
  - `value`, `innerHTML` and `textContent` are string properties.
  - `checked`, `selected`, `disabled`, `hidden`, `readonly`, `required`,
    `multiple`, `autofocus`, `open`, `muted`, `controls`, `autoplay`, `loop`
    are boolean properties: `disabled={n == 0}`.
  - `key={k}` keys the element.
  - `style={[("color", c), ("margin-left", "4px")]}` sets inline styles.
  - `onClick={msg}`, `onDoubleClick`, `onMouseDown`, `onMouseUp`,
    `onMouseEnter`, `onMouseLeave`, `onMouseOver`, `onMouseOut`, `onFocus`,
    `onBlur`, `onSubmit` take a message; `onInput={f}`, `onChange={f}` take
    `String → Msg`, `onCheck={f}` takes `Bool → Msg`, `onKeyDown`/`onKeyUp`
    take `String → Msg` (the key); `onEnter={msg}`, `onEscape={msg}`.
    Any other `onEventName={decoder}` listens for `eventname` with a
    `Decoder Msg`.
  - `{attrs}` splices an `Attr Msg`, a list or an `Option` of them.
- **Children**: text, elements, and `{term}` where the term is an `Html Msg`,
  a `List`/`Array`/`Option` of them, a `String` (a text node) or a number.
  Text follows JSX's whitespace rules (lines are trimmed, inner runs of spaces
  collapse) and decodes `&amp;`, `&lt;`, `&gt;`, `&quot;`, `&nbsp;`, `&#N;`, ….
  Write `{"{"}` for a brace.

**Checked while Lean elaborates** (errors point at the offending name):
unknown HTML elements (custom elements need a `-`), unknown SVG elements
inside `<svg>`, children of void elements (`<input>…</input>`), mismatched
closing tags, event attributes in lower case (`onclick`), boolean properties
given strings (`checked="yes"`), events without a Lean value, and children
of the wrong type.

## Events and decoders

Handlers do not receive the event object. A **decoder** declares which event
fields it reads, as property paths, and turns their values into a message (or
`none` to ignore the event). The browser encodes only those fields and sends
them to Lean in one call.

```lean
-- Enter in an input, with its value:
def onSubmitValue (f : String → Msg) : Attr Msg :=
  on "keydown" (Decoder.map2 (fun k v => (k, v)) Decoder.key Decoder.targetValue
    |>.filterMap fun (k, v) => if k == "Enter" then some (f v) else none)

-- Clicks with coordinates, and modifier keys:
def onCanvasClick : Attr Msg :=
  on "click" (Decoder.map2 Msg.clicked Decoder.offsetX Decoder.offsetY)
```

`Decoder` is an `Applicative`: `Decoder.field path convert`, `string`, `bool`,
`float`, `int`, `value` read a path; `targetValue`, `targetChecked`, `key`,
`ctrlKey`, `shiftKey`, `altKey`, `metaKey`, `clientX`, `clientY`, `offsetX`,
`offsetY`, `button`, `deltaY`, `timeStamp`, `dataset name` are ready-made;
`map`, `map2`, `filter`, `filterMap`, `succeed`, `fail` combine them. A path
that starts with `currentTarget` reads the element whose handler runs.

`preventDefaultOn` and `stopPropagationOn` (or `Attr.onWith … (preventDefault
:= true)`) set the options; the browser applies them before Lean runs, since a
decision made in Lean would come too late. `onSubmit` always prevents the
page load.

Several handlers for the same event on one element all run, in order, when
they read the same fields (as `onEnter` and `onEscape` on one input do);
otherwise the last one's fields are read. Events bubble as in the DOM: a click on a `<b>` inside a `<li onClick>` runs
the `<li>`'s handler. Non-bubbling events (`focus`, `blur`, `mouseenter`, …)
reach only their target.

## Apps

```lean
structure App (Flags Model Msg : Type) where
  init : Flags → Url → Model × Cmd Msg
  update : Msg → Model → Model × Cmd Msg
  view : Model → Html Msg
  subscriptions : Model → Subs Msg := fun _ => .none
  onUrlChange : Option (Url → Msg) := none     -- single-page navigation
  receive : Option (Lasm.JS.Data → Option Msg) := none   -- app.send(value)
```

- `App.sandbox init update view`: no effects (`update : Msg → Model → Model`).
- `App.element init update view subscriptions`: effects, no routing.
- The full structure: flags (decoded with `FromJS` from `mount(el, { flags })`
  or `data-lasm-flags`), the page URL, routing and messages from JavaScript.

`App.run app` is `main`. Updates are synchronous: an event's message runs
`update` at once; the view is rendered and diffed on the next animation
frame, however many messages arrived, and the patch is applied in one call.

## Commands: `Cmd`

An `update` returns the effects it wants as a `Cmd Msg`. A `Cmd` is data (a
list of `Effect`s), so tests can check what `update` asked for.

| Command | Effect |
| --- | --- |
| `Cmd.none`, `Cmd.batch [a, b]`, `a ++ b`, `Cmd.map f c` | combine |
| `Cmd.send msg` | deliver `msg` after this update |
| `Cmd.delay ms msg` | deliver `msg` after `ms` milliseconds |
| `Http.get url handle`, `Http.post url body handle`, `Http.request req handle` | `fetch`; `handle` gets `Except Http.Error String` (or the full `Http.Response`) |
| `Cmd.randomBytes n handle`, `Cmd.randomNat lo hi handle` | cryptographic randomness |
| `Cmd.now handle` | `Date.now()` |
| `Cmd.pushUrl url`, `Cmd.replaceUrl url`, `Cmd.back n`, `Cmd.forward n`, `Cmd.load url` | navigation |
| `Cmd.storageSet key value`, `Cmd.storageGet key handle`, `Cmd.storageRemove key` | `localStorage` (or `(storage := .session)`) |
| `Cmd.focus id`, `Cmd.blur id` | focus an element by its `id` attribute after the next frame |
| `Cmd.title t` | `document.title` |
| `Cmd.port name value` | send to JavaScript (`app.ports[name].subscribe`) |
| `Cmd.io run` | any `IO` action; `run` gets a function that delivers messages |

```lean
inductive Msg where
  | load
  | loaded (r : Except Http.Error String)

def update : Msg → Model → Model × Cmd Msg
  | .load, m => ({ m with loading := true }, Http.get "/api/items" .loaded)
  | .loaded (.ok body), m => ({ m with loading := false, body }, .none)
  | .loaded (.error e), m => ({ m with loading := false, error := toString e }, .none)
```

## Subscriptions: `Subs`

`subscriptions model` is evaluated after every update. The runtime starts the
listeners for new subscriptions, stops those no longer returned, and always
calls the latest handlers.

| Subscription | Source |
| --- | --- |
| `Subs.every ms f` | a timer; `f` gets `Date.now()` |
| `Subs.onAnimationFrame f` | every frame, with its timestamp |
| `Subs.onWindow event decoder`, `Subs.onDocument event decoder` | any window or document event |
| `Subs.onKeyDown d`, `onKeyUp`, `onMouseMove`, `onMouseUp`, `onClick` | document events |
| `Subs.onResize f` | window size (`innerWidth`, `innerHeight`) |
| `Subs.onVisibilityChange f` | `document.visibilityState` |
| `Subs.port name f` | values from JavaScript (`app.ports[name].send(v)`) |
| `Subs.none`, `Subs.batch`, `++`, `Subs.map` | combine |

```lean
def subscriptions (m : Model) : Subs Msg :=
  Subs.batch [
    if m.running then Subs.every 1000 .tick else .none,
    Subs.onKeyDown (Decoder.key.map .key) ]
```

## URLs and routing

Set `onUrlChange` to make a single-page app. Then clicks on same-origin links
inside the app (without modifier keys, `target` or `download`),
`Cmd.pushUrl`/`replaceUrl`, and the back and forward buttons change the URL
without loading a page and deliver `onUrlChange url`. `init` gets the initial
URL. Routes are ordinary pattern matches:

```lean
inductive Route where
  | home
  | post (id : Nat)
  | notFound

def route (u : Url) : Route :=
  match u.segments with
  | [] => .home
  | ["posts", id] => match id.toNat? with | some n => .post n | none => .notFound
  | _ => .notFound
```

`Url` has `protocol`, `host`, `port`, `path`, `query`, `fragment`;
`Url.parse`, `segments` (decoded), `params`, `param? name`,
`Url.build ["posts", "12"] [("tab", "comments")]` (`/posts/12?tab=comments`),
`percentEncode`, `percentDecode`. Hash routing works too: match on
`u.fragment` ([TodoMVC](../examples/ui/todomvc/Main.lean) does).

A static server answers only the paths that exist; for deep links, configure
the host to serve `index.html` for unknown paths.

## JavaScript: ports and messages

The app handle that `mount` returns has `ports` and `send`:

```js
const app = await mount(element);
app.ports.saved.subscribe(value => console.log('Lean saved', value));   // Cmd.port "saved" v
await app.ports.query.send({ text: 'lean' });                           // Subs.port "query" f
await app.send('refresh');                                              // App.receive
```

Values cross as `Lasm.JS.Data` (plain JSON-like data). For anything else,
`Cmd.io` and `Lasm.Web` give typed access to the web platform from Lean.

## Server-side rendering and hydration

`render : Html Msg → String` is pure Lean, so the same view runs on a server
(Node, Bun, Deno, Workers, any `lasm` target), natively, or in the browser.
`renderPage title body` writes a whole document with `<div id="app">`.

```lean
-- on the server (for example in a Hono handler, see the hono template)
let html := renderPage "Todos" (view (initialModel todos))
```

In the browser, mount with `hydrate: true` (or the `data-lasm-hydrate`
attribute): the first frame adopts the existing nodes instead of creating
them, attaching handlers and properties; nodes that do not match are replaced.
The client's first view must be the server's (pass the same data as flags).
Adjacent text nodes are separated by `<!---->` in the server's HTML so that
each adopts its own node.

## Testing and proving your app

`update` and `view` are pure, so test them as ordinary Lean:

```lean
#guard (update .increment 1) == 2
example : (Todo.step .clearCompleted m).todos.all (!·.completed) := by …
```

[examples/ui/todomvc/Todo.lean](../examples/ui/todomvc/Todo.lean) proves an
invariant of TodoMVC's model (distinct ids, all below `nextId`, non-empty
titles, the edited todo exists) for every reachable model, and what each action
does:

```lean
theorem reachable_inv (save : List Item → String) (msgs : List Msg) :
    Inv (msgs.foldl (fun m msg => (update save msg m).1) {})
theorem toggleAll_sets (b : Bool) (m : Model) : ∀ t ∈ (step (.toggleAll b) m).todos, t.completed = b
theorem clearCompleted_clears (m : Model) : ∀ t ∈ (step .clearCompleted m).todos, t.completed = false
theorem add_appends (m : Model) (h : clean m.field ≠ "") :
    (step .add m).todos = m.todos ++ [{ id := m.nextId, title := clean m.field, completed := false }]
```

`Lasm.UI.render` lets you check a view's HTML in a test, and the DOM model
(`Lasm.UI.Model`) lets you state facts about what the browser shows.

## What is proved

[library/Lasm/UI/Proofs.lean](../library/Lasm/UI/Proofs.lean) and
[Proofs/](../library/Lasm/UI/Proofs) (about 1,260 lines, checked by CI on
every change with `node scripts/ui/lean-tests.mjs`; they are not part of the
compiled library in the npm package, since apps do not import them):

```lean
theorem diff_correct (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat) (h : WF old next) :
    let r := diff old new next
    applyOps r.ops.toList (old.map toDom) = r.live.map toDom ∧ r.live.map Live.erase = new ∧
      WF r.live r.next ∧ next ≤ r.next
theorem mount_correct (new : List (Html Msg)) (next : Nat) : …
theorem session_correct (views : List (List (Html Msg))) :
    let s := views.foldl Session.step Session.empty
    s.dom = s.live.map toDom ∧ WF s.live s.next ∧ ∀ v, views.getLast? = some v → s.live.map Live.erase = v
theorem diffAttrs_correct (old new : List (Attr Msg)) : applyAttrOps (diffAttrs old new) (attrsOf old) = attrsOf new
```

- **Covered**: the executable `diff` itself (not a separate specification),
  every branch: the common-prefix pass, the two-ended keyed matching (all four
  end cases and the key-map fallback, which is correct whatever the map holds
  because each candidate is checked), inserts, removals, `clear`,
  replacement of nodes whose tag or namespace changed, text changes,
  attributes, properties, styles and listeners, and nested patches. Any
  sequence of frames keeps the DOM equal to the DOM of the live tree, which
  shows the latest view. No `sorry`; `#print axioms` shows only `propext`,
  `Classical.choice` and `Quot.sound` (checked in CI).
- **The model** ([Model.lean](../library/Lasm/UI/Model.lean)): DOM nodes with
  ids; attribute slots as functions, so their order is unobservable as in the
  DOM; `insertBefore`, `remove`, `textContent = ""` and setting/removing
  attributes, properties, styles and listeners.
- **Not proved, tested instead**: that the binary encoding
  ([Encode.lean](../library/Lasm/UI/Encode.lean)) and the JavaScript applier
  ([ui-dom.mjs](../src/lasm-modules/ui-dom.mjs)) implement the model's
  operations, and that browsers implement the DOM. `test/ui-dom.test.mjs` applies
  480 frames that Lean's diff and encoder wrote for random views to a DOM
  implementation and compares each result with the view; the browser suite
  runs the examples in Chromium, Firefox and WebKit. One deliberate difference:
  removing a property sets it to its empty value (`""`, `false` or `0`), which
  the model treats as unset.

## How it works

```
 event ─▶ lasm:ui-dom: delegated listener on the mount root
          encodes the decoder's fields ──one call──▶ Lean: update (pure), commands
 next animation frame ──one call──▶ Lean: view (pure), diff (proved), encode
          ◀── one binary patch ── applier: id → node table, DOM operations
```

- Lean keeps the live tree (the last view with node ids). `diff` compares it
  with the new view: a common-prefix pass (no allocation; most frames end
  there), then a two-ended pass with a key map for moved keyed children (as in
  snabbdom): swapping two of 1,000 rows is 2 moves.
- The patch is one `ByteArray`: LEB128 integers, UTF-8 strings, interned
  names, decoder shapes defined once ([BROWSER.md](BROWSER.md#patch-protocol-lasmui-dom)).
- Every JavaScript call costs a copy of its data across the boundary, so a
  frame crosses once each way, and an event once.

## Performance

The js-framework-benchmark operations (keyed), timed in the page from the click
to the next painted frame, against hand-written vanilla JavaScript with the
same markup ([bench/ui/vanilla](../bench/ui/vanilla),
[examples/ui/bench](../examples/ui/bench/Main.lean)); measured by the browser
suite in CI (headless Chromium, Firefox and WebKit on free GitHub runners).
Results are in the `browser-results-*` artifacts and in
[BROWSER.md](BROWSER.md#lasmui-measurements). The budget is within 2× of
vanilla for creating 1,000 rows, updating every 10th row, swapping rows and
clearing.

## API reference

Modules (all in `import Lasm.UI` except the DOM model, `import Lasm.UI.Model`, and the proofs):

| Module | Contents |
| --- | --- |
| `Lasm.UI.Html` | `Html`, `Attr`, `AttrKey`, `AttrVal`, `Listener`, `Decoder`, `EvVal`, `PropVal`, `Ns`, `Html.keyed`, `Html.map` |
| `Lasm.UI.Elements` | the function DSL: `text`, `node`, `nodeNS`, `keyed`, `empty`, every HTML element (`div`, `span`, `a`, `button`, `input`, `ul`, `li`, `table`, … ; `main_`, `section_`, `map_`, `var_`, `template_`, `slot_`, `object_`, `sub_`), attributes (`attr`, `prop`, `boolProp`, `stringProp`, `style`, `data`, `aria`, `class_`, `classList`, `id_`, `type_`, `for_`, `max_`, `min_`, `value`, `checked`, `selected`, `disabled`, `hidden`, `readonly`, `required`, `multiple`, `autofocus`, `tabindex`, `colspan`, `rowspan`, `width`, `height`, `title`, `placeholder`, `href`, `src`, `alt`, `name`, `target`, `rel`, …), events (`on`, `preventDefaultOn`, `stopPropagationOn`, `onClick`, `onDoubleClick`, `onMouseDown`, `onMouseUp`, `onMouseEnter`, `onMouseLeave`, `onMouseOver`, `onMouseOut`, `onFocus`, `onBlur`, `onInput`, `onChange`, `onCheck`, `onSubmit`, `onKeyDown`, `onKeyUp`, `onEnter`, `onEscape`), `Svg.*` (elements and `viewBox`, `d`, `fill`, `stroke`, `strokeWidth`, `cx`, `cy`, `r`, `x`, `y`, `points`, `transform`, …), `htmlTags`, `voidTags`, `Svg.tags` |
| `Lasm.UI.Syntax` | `html!` |
| `Lasm.UI.App` | `App`, `App.sandbox`, `App.element`, `App.run` |
| `Lasm.UI.Cmd` | `Cmd`, `Effect`, `Http.Request`, `Http.Response`, `Http.Error`, `Http.get`, `Http.post`, `Http.request`, `Storage` |
| `Lasm.UI.Subs` | `Subs`, `SubSpec`, `SubItem` |
| `Lasm.UI.Url` | `Url`, `Url.parse`, `parseRelative`, `segments`, `params`, `param?`, `origin`, `pathAndQuery`, `Url.build`, `percentEncode`, `percentDecode` |
| `Lasm.UI.Render` | `render`, `renderPage` |
| `Lasm.UI.Diff` | `Live`, `Op`, `AttrOp`, `create`, `diff`, `diffNode`, `diffChildren`, `diffAttrs`, `mountOps` |
| `Lasm.UI.Encode` | `Encode.frame`, `Encode.Tables` (the patch stream) |
| `Lasm.UI.Model` | `Dom`, `toDom`, `attrsOf`, `applyOps`, `applyAttrOps` (the DOM model) |
| `Lasm.UI.Proofs` (source only) | `WF`, `diff_correct`, `mount_correct`, `session_correct`, `diffAttrs_correct` |

Examples: [counter](../examples/ui/counter/Main.lean),
[TodoMVC](../examples/ui/todomvc) (with proofs),
[demo](../examples/ui/demo/Main.lean) (routing, HTTP, timers, keys, focus, SVG,
keyed lists, ports, SSR and hydration), [benchmark](../examples/ui/bench/Main.lean).
