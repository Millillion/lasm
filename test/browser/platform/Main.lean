/-
The browser platform suite (docs/BROWSER.md): one app that exercises the web
platform from Lean in a real browser, through the generated bindings
(`Lasm.JS.Web.Browser`, docs/JS_BINDINGS.md) and the mount glue
(`Lasm.UI.Mount`), run by .github/workflows/browser.yml through
scripts/browser/browser-ci.mjs on Chromium, Firefox and WebKit. Automatic checks
run at startup and report to `#results` (JSON) and the `results` port;
interactive checks (clicks, typing, keys, history) are driven by the runner,
which reads what the handlers wrote into the page. Bindings.lean holds the
property checks of the browser tier.
-/
import Std.Data.HashMap
import Std.Async
import Lasm.JS
import Lasm.JS.Web.Browser
import Lasm.UI.Mount
import Bindings
open Lasm.JS Lasm.JS.Web
open Lasm.UI

/-- One check's outcome. -/
structure Check where
  name : String
  ok : Bool
  detail : String
  deriving ToJS

abbrev Checks := IO.Ref (Array Check)

def record (checks : Checks) (name : String) (ok : Bool) (detail : String := "") : IO Unit :=
  checks.modify (·.push { name, ok, detail })

/-- Runs one check; an error is a failure with its message. -/
def check (checks : Checks) (name : String) (body : IO (Bool × String)) : IO Unit := do
  match ← body.toBaseIO with
  | .ok (ok, detail) => record checks name ok detail
  | .error e => record checks name false s!"error: {e}"

def checkAsync (checks : Checks) (name : String) (body : Async (Bool × String)) : Async Unit := do
  try
    let (ok, detail) ← body
    record checks name ok detail
  catch e => record checks name false s!"error: {e}"

def expectEq [BEq α] [ToString α] (actual expected : α) : Bool × String :=
  (actual == expected, s!"expected {expected}, got {actual}")

/-! Helpers on the generated bindings -/

def make (tag : String) : IO Element := do (← document).createElement tag
def textOf (n : Node) : IO String := return (← n.textContent).getD ""
def setText (n : Node) (s : String) : IO Unit := n.setTextContent (some s)
/-- `target.addEventListener(type, f)` with a synchronous listener (so `preventDefault` works); the listener, for removal. -/
def on (target : EventTarget) (type : String) (f : Event → IO Unit) (options : Option AddEventListenerOptionsOrBoolean := none) : IO EventListener := do
  let l ← EventListener.ofSyncFn f
  target.addEventListener type (some l) options
  return l
/-- Starts `Async` work from synchronous code without waiting for it; a failure goes to the console. -/
def background (work : Async Unit) : IO Unit := do
  let task ← (work.toEIO : IO (Std.Async.AsyncTask Unit))
  discard <| IO.mapTask (t := task) fun
    | .ok _ => pure ()
    | .error e => console.error #[.string s!"background: {e}"]
/-- `performance.now()`. -/
def now : IO Float := do (← performance).now
/-- Waits for the next animation frame; its timestamp. -/
def nextFrame : Async Float := do
  let frame : IO.Promise Float ← IO.Promise.new
  discard <| requestAnimationFrame (← FrameRequestCallback.ofSyncFn fun t => frame.resolve t)
  Std.Async.await frame
/-- A JavaScript function running `f` (a timer's or a microtask's callback). -/
def jsFn (f : IO Unit) : IO JSFunction := JSFunction.ofSyncFn fun _ => do f; pure .undefined
@[js "globalThis" "JSON.stringify"] opaque jsonStringify : Data → IO String
def hex (bytes : ByteArray) : String :=
  let digit (n : UInt8) : Char := if n < 10 then Char.ofNat (48 + n.toNat) else Char.ofNat (87 + n.toNat)
  bytes.foldl (init := "") fun s b => (s.push (digit (b / 16))).push (digit (b % 16))
/-- The body of a successful response as text. -/
def fetchText (url : String) : Async String := do
  let r ← fetch url
  unless ← r.ok do throw (IO.userError s!"fetch {url}: HTTP {← r.status}")
  r.text

/-! DOM -/

def domChecks (checks : Checks) (root : Element) : IO Unit := do
  let doc ← document
  check checks "dom.create-append" do
    let list ← make "ul"
    for i in [0:3] do
      let item ← make "li"
      setText item s!"item {i}"
      discard <| list.appendChild item
    discard <| root.appendChild list
    return expectEq (← (← list.children).length) 3
  check checks "dom.insert-remove-replace" do
    let box ← make "div"
    let a ← doc.createTextNode "a"
    let c ← doc.createTextNode "c"
    box.append #[(a : Node), (c : Node)]
    discard <| box.insertBefore (← doc.createTextNode "b") (some c)
    let before ← textOf box
    c.remove
    let d ← make "span"
    setText d "d"
    a.replaceWith #[(d : Node)]
    return (before == "abc" && (← textOf box) == "db", s!"{before} then {← textOf box}")
  check checks "dom.attributes" do
    let e ← make "div"
    e.setAttribute "title" "hello"
    for (k, v) in [("data-x", "1"), ("aria-label", "box")] do e.setAttribute k v
    let title ← e.getAttribute "title"
    let x ← e.getAttribute "data-x"
    e.removeAttribute "title"
    let gone := (← e.getAttribute "title").isNone
    let toggled ← e.toggleAttribute "hidden"
    return (title == some "hello" && x == some "1" && gone && toggled && (← e.hasAttribute "hidden"), s!"{title} {x} {gone} {toggled}")
  check checks "dom.classes" do
    let e ← make "div"
    let classes ← e.classList
    classes.add #["a", "b"]
    classes.remove #["a"]
    let on ← classes.toggle "c"
    let forced ← classes.toggle "b" (some true)
    return (on && forced && (← classes.contains "b") && !(← classes.contains "a") && (← e.getAttribute "class") == some "b c", s!"{← e.getAttribute "class"}")
  check checks "dom.styles" do
    let e : HTMLElement := { val := (← make "div").val }
    discard <| root.appendChild e
    let style ← e.style
    for (k, v) in [("width", "40px"), ("height", "10px"), ("--lasm", "7")] do style.setProperty k v
    let width ← style.getPropertyValue "width"
    let r ← e.getBoundingClientRect
    discard <| style.removeProperty "height"
    return (width == "40px" && (← r.width) == 40 && (← r.height) == 10 && (← style.getPropertyValue "height") == "", s!"{width} {← r.width}x{← r.height}")
  check checks "dom.properties" do
    let input : HTMLInputElement := { val := (← make "input").val }
    input.setType "checkbox"
    input.setChecked true
    let field : HTMLInputElement := { val := (← make "input").val }
    field.setValue "typed"
    field.setDisabled true
    return (← input.checked) && (← field.value) == "typed" && (← field.disabled) |> fun ok => (ok, "checked, value, disabled")
  check checks "dom.query" do
    let found ← doc.querySelector "#fixture-form"
    let all ← doc.querySelectorAll "#fixture-form input"
    let byId ← doc.getElementById "fixture-form"
    let inside ← root.querySelector "ul li"
    return (found.isSome && byId.isSome && (← all.length) == 2 && inside.isSome, s!"{← all.length} inputs")
  check checks "dom.innerhtml-text" do
    let e ← make "p"
    e.setInnerHTML "<b>bold</b> text"
    let html := match ← e.innerHTML with | .domString h => h | .trustedHTML _ => "(TrustedHTML)"
    let text ← textOf e
    return (html == "<b>bold</b> text" && text == "bold text", html)
  check checks "dom.svg" do
    let svgNamespace := some "http://www.w3.org/2000/svg"
    let svg ← doc.createElementNS svgNamespace "svg"
    let circle ← doc.createElementNS svgNamespace "circle"
    circle.setAttribute "r" "5"
    discard <| svg.appendChild circle
    discard <| root.appendChild svg
    return expectEq (← circle.tagName) "circle"
  check checks "dom.document" do
    doc.setTitle "Lasm platform suite"
    let some body ← doc.body | return (false, "no body")
    return ((← doc.title) == "Lasm platform suite" && (← body.tagName) == "BODY", ← doc.title)

/-! Events: handlers the runner triggers -/

/-- The element an event was dispatched to, as `α` (an unchecked cast). -/
def targetAs (α : Type) [FromJS α] (e : Event) : IO α := do
  match ← e.target with
  | some t => decodeAs α "event target" (.ref t.val "")
  | none => throw (IO.userError "the event has no target")

def eventFixtures (root : Element) : IO Unit := do
  let doc ← document
  -- A button counting clicks.
  let clicks ← IO.mkRef (0 : Nat)
  let button ← make "button"
  button.setId "click-me"
  setText button "click"
  let count ← make "output"
  count.setId "click-count"
  setText count "0"
  discard <| on button "click" fun _ => do
    clicks.modify (· + 1)
    setText count (toString (← clicks.get))
  -- A once listener.
  let onceCount ← IO.mkRef (0 : Nat)
  let onceOut ← make "output"
  onceOut.setId "once-count"
  discard <| on button "click" (fun _ => do onceCount.modify (· + 1); setText onceOut (toString (← onceCount.get)))
    (some (.addEventListenerOptions { once := some true }))
  -- An input mirrored as typed.
  let input ← make "input"
  input.setId "type-here"
  let mirror ← make "output"
  mirror.setId "typed"
  discard <| on input "input" fun e => do setText mirror (← (← targetAs HTMLInputElement e).value)
  -- Keys, with their modifiers.
  let keys ← make "output"
  keys.setId "keys"
  discard <| on input "keydown" fun e => do
    let k : KeyboardEvent := { val := e.val }
    setText keys s!"{← k.key}/{← k.code}/{← k.shiftKey}"
    if (← k.key) == "Enter" then e.preventDefault
  -- A link whose navigation is prevented.
  let link ← make "a"
  link.setId "prevented-link"
  link.setAttribute "href" "#navigated"
  setText link "link"
  let prevented ← make "output"
  prevented.setId "prevented"
  discard <| on link "click" fun e => do
    e.preventDefault
    setText prevented s!"{← e.defaultPrevented}"
  -- A removable listener.
  let removable ← make "button"
  removable.setId "remove-me"
  let removedCount ← IO.mkRef (0 : Nat)
  let removedOut ← make "output"
  removedOut.setId "removed-count"
  let listener ← on removable "click" fun _ => do removedCount.modify (· + 1); setText removedOut (toString (← removedCount.get))
  discard <| on removable "click" fun _ => removable.removeEventListener "click" (some listener)
  -- Pointer coordinates.
  let pad : HTMLElement := { val := (← make "div").val }
  pad.setId "pad"
  let padStyle ← pad.style
  for (k, v) in [("width", "100px"), ("height", "100px"), ("background", "#ddd")] do padStyle.setProperty k v
  let where_ ← make "output"
  where_.setId "pointer"
  discard <| on pad "mousedown" fun e => do
    let m : MouseEvent := { val := e.val }
    setText where_ s!"{(← m.offsetX).round.toUInt64},{(← m.offsetY).round.toUInt64},{(← m.button).toNat}"
  -- A form submit, read with FormData and prevented.
  match ← doc.getElementById "fixture-form" with
  | some form =>
    let submitted ← make "output"
    submitted.setId "submitted"
    discard <| on form "submit" fun e => do
      e.preventDefault
      let entries ← (← FormData.new (some form.val)).entries
      let text ← entries.toList.mapM fun (k, v) => do
        match v with
        | .usvString t => pure s!"{k}={t}"
        | .file f => pure s!"{k}=file:{← f.name}"
      setText submitted (", ".intercalate text)
    discard <| root.appendChild submitted
  | none => pure ()
  -- A blocking wait in a handler: without JSPI the instance stops with a message.
  let block ← make "button"
  block.setId "block"
  -- (In Async work, not the handler itself: a synchronous callback can never suspend.)
  let slept ← make "output"
  slept.setId "slept"
  discard <| on block "click" fun _ => background do
    Std.Async.sleep 1  -- continue in a Lean task, outside the callback
    (IO.sleep 5 : IO Unit)
    setText slept "slept"
  root.append #[(button : Node), (count : Node), (onceOut : Node), (input : Node), (mirror : Node), (keys : Node), (link : Node),
    (prevented : Node), (removable : Node), (removedOut : Node), (pad : Node), (where_ : Node), (block : Node), (slept : Node)]

def customEventChecks (checks : Checks) (root : Element) : IO Unit := do
  check checks "events.custom-dispatch" do
    let got ← IO.mkRef ""
    let target ← make "div"
    discard <| root.appendChild target
    discard <| on target "lasm-test" fun e => do
      match ← ({ val := e.val } : CustomEvent).detail with
      | .string s => got.set s
      | _ => pure ()
    let event ← CustomEvent.new "lasm-test" (some { detail := .string "payload", bubbles := some true, cancelable := some true })
    let notCancelled ← target.dispatchEvent event
    return (notCancelled && (← got.get) == "payload", ← got.get)
  check checks "events.bubbling-stop" do
    let outer ← make "div"
    let inner ← make "div"
    discard <| outer.appendChild inner
    discard <| root.appendChild outer
    let seen ← IO.mkRef (#[] : Array String)
    discard <| on outer "ping" fun _ => seen.modify (·.push "outer")
    discard <| on inner "ping" fun e => do seen.modify (·.push "inner"); e.stopPropagation
    discard <| inner.dispatchEvent (← Event.new "ping" (some { bubbles := some true, cancelable := some true }))
    return expectEq (← seen.get).toList ["inner"]

/-! Timers -/

def timerChecks (checks : Checks) : Async Unit := do
  checkAsync checks "timers.timeout" do
    let fired : IO.Promise Unit ← IO.Promise.new
    let start ← now
    discard <| setTimeout (← jsFn (fired.resolve ())) (some 20)
    Std.Async.await fired
    let elapsed := (← now) - start
    return (elapsed ≥ 15, s!"{elapsed} ms")
  checkAsync checks "timers.interval-clear" do
    let ticks ← IO.mkRef (0 : Nat)
    let done : IO.Promise Unit ← IO.Promise.new
    let timer ← IO.mkRef (none : Option Int)
    let t ← setInterval (← jsFn do
      ticks.modify (· + 1)
      if (← ticks.get) == 3 then
        if let some id ← timer.get then clearInterval (some id)
        done.resolve ()) (some 5)
    timer.set (some t)
    Std.Async.await done
    Std.Async.sleep 30
    return expectEq (← ticks.get) 3
  checkAsync checks "timers.clear-timeout" do
    let fired ← IO.mkRef false
    let t ← setTimeout (← jsFn (fired.set true)) (some 10)
    clearTimeout (some t)
    Std.Async.sleep 30
    return (!(← fired.get), "cancelled")
  checkAsync checks "timers.animation-frame" do
    let frame : IO.Promise Float ← IO.Promise.new
    discard <| requestAnimationFrame (← FrameRequestCallback.ofSyncFn fun time => frame.resolve time)
    let time ← Std.Async.await frame
    let next ← nextFrame
    return (time > 0 && next ≥ time, s!"{time} then {next}")
  checkAsync checks "timers.microtask" do
    let order ← IO.mkRef (#[] : Array String)
    let done : IO.Promise Unit ← IO.Promise.new
    queueMicrotask (← VoidFunction.ofSyncFn do order.modify (·.push "microtask"); done.resolve ())
    order.modify (·.push "sync")
    Std.Async.await done
    return expectEq (← order.get).toList ["sync", "microtask"]
  checkAsync checks "timers.async-sleep" do
    let start ← now
    Std.Async.sleep 25
    return ((← now) - start ≥ 20, "Std.Async.sleep")

/-! fetch (to the test server: scripts/browser/serve.mjs routes) -/

def fetchChecks (checks : Checks) : Async Unit := do
  checkAsync checks "fetch.text" do
    let text ← fetchText "/api/text"
    return expectEq text "hello from the server"
  checkAsync checks "fetch.json" do
    let r ← fetch "/api/json"
    let data ← r.json
    return expectEq (Data.describe (data.field "items")) "array of length 3"
  checkAsync checks "fetch.post-json" do
    let body ← jsonStringify (obj [("n", toJS (41 : Nat))])
    let r ← fetch "/api/echo" (some {
      method := some "POST", body := some body, headers := some (.record ⟨#[("content-type", "application/json")]⟩) })
    let status ← r.status
    let echoed ← r.json
    let ct ← (← r.headers).get "x-request-content-type"
    let n := match echoed.field "n" with | .number n => n | _ => 0
    return (status == 200 && n == 41 && ct == some "application/json", s!"{status} {ct} {n}")
  checkAsync checks "fetch.bytes-headers" do
    let r ← fetch "/api/bytes" (some { headers := some (.record ⟨#[("x-lasm", "yes")]⟩) })
    let bytes ← r.bytes
    let header ← (← r.headers).get "x-echo-lasm"
    return (bytes.toList == [0, 1, 2, 254, 255] && header == some "yes", s!"{bytes.toList} {header}")
  checkAsync checks "fetch.status" do
    let r ← fetch "/api/missing"
    return ((← r.status) == 404 && !(← r.ok), s!"{← r.status}")
  checkAsync checks "fetch.form-body" do
    let form ← FormData.new
    form.append "a" "1"
    form.appendWithBlobValue "file" (← Blob.new (some #["abc".toUTF8]) (some { type := some "text/plain" })) (some "x.txt")
    let echoed ← (← fetch "/api/form" (some { method := some "POST", body := some form })).text
    return (echoed.startsWith "multipart/form-data", echoed.take 40 |>.toString)
  checkAsync checks "fetch.abort-timeout" do
    let signal ← AbortSignal.timeout 30
    try
      discard <| fetch "/api/slow" (some { signal := some signal })
      return (false, "the slow request was not aborted")
    catch e => return (true, s!"{e}".take 60 |>.toString)
  checkAsync checks "fetch.abort-controller" do
    let c ← AbortController.new
    let signal ← c.signal
    let pending := fetch "/api/slow" (some { signal := some signal })
    c.abort
    try
      discard <| pending
      return (false, "not aborted")
    catch _ => return (true, "aborted")

/-! Storage, URL, history, crypto, console -/

def platformChecks (checks : Checks) : IO Unit := do
  check checks "storage.local" do
    let s ← localStorage
    s.clear
    s.setItem "a" "1"; s.setItem "b" "2"
    let a ← s.getItem "a"
    s.removeItem "b"
    let mut keys : Array String := #[]
    for i in [0:← s.length] do
      if let some k ← s.key i then keys := keys.push k
    return (a == some "1" && keys == #["a"] && (← s.length) == 1, s!"{keys}")
  check checks "storage.session" do
    let s ← sessionStorage
    s.setItem "k" "v"
    return expectEq (← s.getItem "k") (some "v")
  check checks "url.parse" do
    let some u ← URL.parse "../b/c?x=1&y=two%20words#frag" (some "https://example.com/a/z/") | return (false, "not parsed")
    let bad ← URL.parse "::"
    let params ← (← u.searchParams).entries
    return ((← u.href) == "https://example.com/a/b/c?x=1&y=two%20words#frag" && params == #[("x", "1"), ("y", "two words")]
      && (← u.hash) == "#frag" && bad.isNone, ← u.href)
  check checks "url.search-params" do
    let p ← URLSearchParams.new (some "?a=1&a=2&b=x y")
    p.append "c" "&"
    p.delete "b"
    return ((← p.getAll "a") == #["1", "2"] && (← p.toString) == "a=1&a=2&c=%26", ← p.toString)
  -- encodeURIComponent is ECMAScript, not WebIDL: called through Lasm.JS.
  check checks "url.encode" do
    let g ← global
    let e ← g.callMethod "encodeURIComponent" #[.string "a b/ü"] String
    return (e == "a%20b%2F%C3%BC" && (← g.callMethod "decodeURIComponent" #[.string e] String) == "a b/ü", e)
  check checks "history.push-replace" do
    let loc ← location
    let h ← history
    let beforePath ← loc.pathname
    h.pushState (obj [("step", toJS (1 : Nat))]) "" (some "/pushed?x=1")
    let afterPath ← loc.pathname
    let afterSearch ← loc.search
    let href ← loc.href
    let state ← h.state
    h.replaceState .null "" (some beforePath)
    let step := match state.field "step" with | .number n => n | _ => 0
    return (afterPath == "/pushed" && afterSearch == "?x=1" && step == 1 && (← loc.pathname) == beforePath, href)
  check checks "crypto.random" do
    let c ← crypto
    let bytes ← c.getRandomValues (ByteArray.mk (Array.replicate 32 0))
    let uuid ← c.randomUUID
    return (bytes.size == 32 && uuid.length == 36 && uuid.toList[14]? == some '4', uuid)
  check checks "crypto.io-random" do
    let bytes ← IO.getRandomBytes 16
    return (bytes.size == 16, "IO.getRandomBytes")
  check checks "console.log" do
    console.log #[.string "lasm-console-check", toJS (42 : Nat), obj [("k", .bool true)]]
    IO.println "lasm-println-check"
    return (true, "the runner checks the page's console")

def cryptoAsync (checks : Checks) : Async Unit := do
  checkAsync checks "crypto.sha256" do
    let digest ← (← (← crypto).subtle).digest "SHA-256" "abc".toUTF8
    return expectEq (hex digest) "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"

/-! WebSocket (the test server echoes) -/

def socketChecks (checks : Checks) : Async Unit := do
  checkAsync checks "websocket.echo" do
    let loc ← location
    let scheme := if (← loc.protocol) == "https:" then "wss" else "ws"
    let ws ← WebSocket.new s!"{scheme}://{← loc.host}/ws"
    ws.setBinaryType .arraybuffer
    let opened : IO.Promise Unit ← IO.Promise.new
    let messages ← IO.mkRef (#[] : Array String)
    let got : IO.Promise Unit ← IO.Promise.new
    let closed : IO.Promise Nat ← IO.Promise.new
    discard <| on ws "open" fun _ => opened.resolve ()
    discard <| on ws "message" fun e => do
      let text ← match ← ({ val := e.val } : MessageEvent).data with
        | .string t => pure s!"text:{t}"
        | .ref buffer _ => do let b ← Support.arrayBufferBytes buffer; pure s!"bytes:{b.toList}"
        | d => pure s!"other:{d.describe}"
      messages.modify (·.push text)
      if (← messages.get).size == 2 then got.resolve ()
    discard <| on ws "close" fun e => do closed.resolve (← ({ val := e.val } : CloseEvent).code)
    Std.Async.await opened
    ws.send "hello"
    ws.send (ByteArray.mk #[1, 2, 3])
    Std.Async.await got
    let state ← ws.readyState
    ws.close (some 1000) (some "done")
    let code ← Std.Async.await closed
    return ((← messages.get) == #["text:hello", "bytes:[1, 2, 3]"] && state == WebSocket.OPEN && code == 1000, s!"{← messages.get} {code}")

/-! Canvas -/

def canvasChecks (checks : Checks) (root : Element) : IO Unit := do
  check checks "canvas.draw-read" do
    let canvas : HTMLCanvasElement := { val := (← make "canvas").val }
    canvas.setWidth 20
    canvas.setHeight 20
    discard <| root.appendChild canvas
    let some c ← canvas.getContext "2d" | return (false, "no 2d context")
    let ctx : CanvasRenderingContext2D := { val := c }
    ctx.setFillStyle "rgb(255, 0, 0)"
    ctx.fillRect 0 0 10 10
    ctx.setFillStyle "rgb(0, 0, 255)"
    ctx.beginPath
    ctx.arc 15 15 3 0 6.3
    ctx.fill
    ctx.setFont "10px sans-serif"
    let pixel ← (← ctx.getImageData 5 5 1 1).data
    let width ← (← ctx.measureText "Lean").width
    return (pixel.toList == [255, 0, 0, 255] && width > 0, s!"{pixel.toList} {width}")

/-! Lean itself in the browser -/

/-- Not tail recursive: one engine stack frame per element (issue #66). -/
def sumTo : List Nat → Nat
  | [] => 0
  | x :: xs => x + sumTo xs

def leanChecks (checks : Checks) : IO Unit := do
  -- The browser's own Wasm stack bounds recursion: about 9,000 frames of sumTo
  -- (FUNDAMENTAL_LIMITATIONS.md#recursion-depth).
  check checks "lean.recursion-depth" do
    return expectEq (sumTo (List.range 5000)) 12497500
  check checks "lean.hashmap-bignum" do
    let m : Std.HashMap String Nat := (List.range 1000).foldl (fun m i => m.insert s!"k{i}" (i * i)) {}
    let big := (2 : Nat) ^ 200
    return (m.size == 1000 && m["k999"]? == some 998001 && (toString big).length == 61, s!"{m.size} {(toString big).length}")
  check checks "lean.tasks" do
    let t := Task.spawn fun _ => (List.range 100).foldl (· + ·) 0
    return expectEq t.get 4950
  check checks "lean.js-error" do
    let e ← make "div"
    try
      discard <| e.val.callMethod "noSuchMethod" #[] (α := Unit)
      return (false, "no error")
    catch err => return ((toString err).contains "noSuchMethod", toString err)
  -- Property keys of any kind: a Symbol, a number, an array (its string).
  check checks "lean.js-keys" do
    let symbolClass ← (← global).get "Symbol"
    let tag ← symbolClass.callMethod "for" #[toJS "lasm.tag"]
    let box ← (← global).get "Object" >>= (·.new)
    box.set tag "tagged"
    box.set (2 : Nat) "two"
    box.set #["a", "b"] "joined"
    let items ← (← global).get "Array" >>= (·.callMethod "of" #[toJS 7])
    let iterator ← (← items.get (← symbolClass.get "iterator")).call (this := toJS items)
    let first := ((← iterator.callMethod "next" #[] Data).field "value").describe
    let got := s!"{← box.get tag String} {← box.get "2" String} {← box.get "a,b" String} {first}"
    return expectEq got "tagged two joined number 7"

/-! Async loops of steps that complete at once (#90): each step's bind used to
nest on the engine's stack, which overflowed after about 2,000 steps. -/

/-- `n` steps of `step` one after another in `Async`, summed. -/
def asyncLoop (step : Async Nat) : Nat → Nat → Async Nat
  | 0, acc => pure acc
  | n + 1, acc => do asyncLoop step n (acc + (← step))

def argumentNat (args : Array Data) : IO Nat :=
  match (args[0]? : Option Data) with
  | some (Data.number x) => pure x.toUInt64.toNat
  | _ => throw (IO.userError "expected a number")

def asyncDepthChecks (checks : Checks) : Async Unit := do
  let math ← (global : IO Value) >>= (·.get "Math")
  let steps : List (String × Async Nat) := [("pure", pure 1),
    ("io", monadLift (do let _ ← IO.monoNanosNow; pure 1 : IO Nat)),
    ("sync-js", monadLift (math.callMethod "abs" #[.number (-1)] Nat : IO Nat))]
  for (name, step) in steps do
    checkAsync checks s!"lean.async-depth-{name}" do
      let n := if name == "sync-js" then 100000 else 1000000
      return expectEq (← asyncLoop step n 0) n
  -- Inside a synchronous callback, waiting for Lean work that needs no
  -- JavaScript event works on the single-threaded runtime: the wait runs it.
  checkAsync checks "lean.sync-callback-async-wait" do
    let f ← Function.ofSyncFn fun args => do
      let n ← argumentNat args
      return toJS (← (asyncLoop (monadLift (math.callMethod "abs" #[.number (-1)] Nat : IO Nat)) n 0).block)
    let items ← (← global).get "Array" >>= (·.callMethod "of" #[toJS (3 : Nat), toJS (200000 : Nat)])
    let out ← items.callMethod "map" #[toJS f] (Array Nat)
    return (out == #[3, 200000], s!"{out}")


/-! The app: flags, ports, messages, unmount -/

def appChecks (checks : Checks) : IO Unit := do
  check checks "app.flags" do
    let label ← Mount.flags String
    return expectEq label "platform"
  check checks "app.target" do
    return expectEq (← Mount.target) "browser"
  -- The page sends on port "in"; Lean answers on port "out" with the value doubled.
  let incoming ← Mount.port "in"
  let outgoing ← Mount.port "out"
  incoming.subscribe fun d => match d with
    | .number n => outgoing.send (n * 2)
    | _ => outgoing.send "not a number"
  Mount.onMessage fun d => do
    match ← (← document).getElementById "message" with
    | some e => setText e (match d with | .string s => s | _ => d.describe)
    | none => pure ()
  Mount.onUnmount do
    (← (← global).get "window").set "lasmUnmounted" true

def main : IO Unit := do
  let root ← Mount.root Element
  let checks : Checks ← IO.mkRef #[]
  let message ← make "output"
  message.setId "message"
  discard <| root.appendChild message
  domChecks checks root
  customEventChecks checks root
  eventFixtures root
  platformChecks checks
  canvasChecks checks root
  leanChecks checks
  appChecks checks
  -- The browser tier's property checks (Bindings.lean).
  Bindings.run (fun name ok detail => record checks name ok detail) root.val
  let results ← Mount.port "results"
  background do
    timerChecks checks
    fetchChecks checks
    cryptoAsync checks
    socketChecks checks
    asyncDepthChecks checks
    Bindings.runAsync (fun name ok detail => record checks name ok detail)
    let all ← checks.get
    let pre ← make "pre"
    pre.setId "results"
    setText pre (← jsonStringify (toJS all))
    results.send all
    let summary ← make "output"
    summary.setId "done"
    setText summary s!"{(all.filter (·.ok)).size}/{all.size}"
    root.append #[(pre : Node), (summary : Node)]
