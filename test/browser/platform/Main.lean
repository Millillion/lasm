/-
The Lasm.Web platform suite (docs/BROWSER.md): one app that exercises every
Lasm.Web area in a real browser, run by .github/workflows/browser.yml through
scripts/browser/browser-ci.mjs on Chromium, Firefox and WebKit. Automatic checks
run at startup and report to `#results` (JSON) and the `results` port;
interactive checks (clicks, typing, keys, history) are driven by the runner,
which reads what the handlers wrote into the page.
-/
import Std.Data.HashMap
import Std.Async
import Lasm.Web
open Lasm.JS Lasm.Web

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

def textOf (e : Element) : IO String := e.textContent

/-! DOM -/

def domChecks (checks : Checks) (root : Element) : IO Unit := do
  check checks "dom.create-append" do
    let list ← createElement "ul"
    for i in [0:3] do
      let item ← createElement "li"
      item.setTextContent s!"item {i}"
      list.appendChild item
    root.appendChild list
    let items ← list.children
    return expectEq items.size 3
  check checks "dom.insert-remove-replace" do
    let box ← createElement "div"
    let a ← createTextNode "a"
    let c ← createTextNode "c"
    box.append #[a, c]
    box.insertBefore (← createTextNode "b") (some c)
    let before ← box.textContent
    c.remove
    let d ← createElement "span"
    d.setTextContent "d"
    a.replaceWith d
    return (before == "abc" && (← box.textContent) == "db", s!"{before} then {← box.textContent}")
  check checks "dom.attributes" do
    let e ← createElement "div"
    e.setAttribute "title" "hello"
    e.setAttributes #[("data-x", "1"), ("aria-label", "box")]
    let title ← e.getAttribute "title"
    let x ← e.data "x"
    e.removeAttribute "title"
    let gone := (← e.getAttribute "title").isNone
    let toggled ← e.toggleAttribute "hidden"
    return (title == some "hello" && x == some "1" && gone && toggled && (← e.hasAttribute "hidden"), s!"{title} {x} {gone} {toggled}")
  check checks "dom.classes" do
    let e ← createElement "div"
    e.addClass #["a", "b"]
    e.removeClass #["a"]
    let on ← e.toggleClass "c"
    let forced ← e.toggleClass "b" (some true)
    return (on && forced && (← e.hasClass "b") && !(← e.hasClass "a") && (← e.getAttribute "class") == some "b c", s!"{← e.getAttribute "class"}")
  check checks "dom.styles" do
    let e ← createElement "div"
    root.appendChild e
    e.setStyles #[("width", "40px"), ("height", "10px"), ("--lasm", "7")]
    let width ← e.style "width"
    let r ← e.rect
    e.removeStyle "height"
    return (width == "40px" && r.width == 40 && r.height == 10 && (← e.style "height") == "", s!"{width} {r.width}x{r.height}")
  check checks "dom.properties" do
    let input ← createElement "input"
    input.setAttribute "type" "checkbox"
    input.setChecked true
    let field ← createElement "input"
    field.setValue "typed"
    field.setProp "disabled" true
    let disabled ← field.prop "disabled" Bool
    return (← input.checked) && (← field.value) == "typed" && disabled |> fun ok => (ok, "checked, value, disabled")
  check checks "dom.query" do
    let found ← querySelector "#fixture-form"
    let all ← querySelectorAll "#fixture-form input"
    let byId ← getElementById "fixture-form"
    let inside ← root.querySelector "ul li"
    return (found.isSome && byId.isSome && all.size == 2 && inside.isSome, s!"{all.size} inputs")
  check checks "dom.innerhtml-text" do
    let e ← createElement "p"
    e.setInnerHTML "<b>bold</b> text"
    let html ← e.innerHTML
    let text ← e.textContent
    return (html == "<b>bold</b> text" && text == "bold text", html)
  check checks "dom.svg" do
    let svg ← createElementNS svgNamespace "svg"
    let circle ← createElementNS svgNamespace "circle"
    circle.setAttribute "r" "5"
    svg.appendChild circle
    root.appendChild svg
    return expectEq (← circle.tagName) "circle"
  check checks "dom.document" do
    let doc ← document
    doc.setTitle "Lasm platform suite"
    let body ← doc.body
    return ((← doc.title) == "Lasm platform suite" && (← body.tagName) == "BODY", ← doc.title)

/-! Events: handlers the runner triggers -/

def eventFixtures (root : Element) : IO Unit := do
  -- A button counting clicks.
  let clicks ← IO.mkRef (0 : Nat)
  let button ← createElement "button"
  button.setId "click-me"
  button.setTextContent "click"
  let count ← createElement "output"
  count.setId "click-count"
  count.setTextContent "0"
  discard <| button.on "click" fun _ => do
    clicks.modify (· + 1)
    count.setTextContent (toString (← clicks.get))
  -- A once listener.
  let onceCount ← IO.mkRef (0 : Nat)
  let onceOut ← createElement "output"
  onceOut.setId "once-count"
  discard <| button.on "click" (fun _ => do onceCount.modify (· + 1); onceOut.setTextContent (toString (← onceCount.get))) { once := true }
  -- An input mirrored as typed.
  let input ← createElement "input"
  input.setId "type-here"
  let mirror ← createElement "output"
  mirror.setId "typed"
  discard <| input.on "input" fun e => do mirror.setTextContent (← e.targetValue)
  -- Keys, with their modifiers.
  let keys ← createElement "output"
  keys.setId "keys"
  discard <| input.on "keydown" fun e => do
    let i ← e.info
    keys.setTextContent s!"{i.key}/{i.code}/{i.shiftKey}"
    if i.key == "Enter" then e.preventDefault
  -- A link whose navigation is prevented.
  let link ← createElement "a"
  link.setId "prevented-link"
  link.setAttribute "href" "#navigated"
  link.setTextContent "link"
  let prevented ← createElement "output"
  prevented.setId "prevented"
  discard <| link.on "click" fun e => do
    e.preventDefault
    prevented.setTextContent s!"{← e.defaultPrevented}"
  -- A removable listener.
  let removable ← createElement "button"
  removable.setId "remove-me"
  let removedCount ← IO.mkRef (0 : Nat)
  let removedOut ← createElement "output"
  removedOut.setId "removed-count"
  let listener ← removable.on "click" fun _ => do removedCount.modify (· + 1); removedOut.setTextContent (toString (← removedCount.get))
  discard <| removable.on "click" fun _ => listener.remove
  -- Pointer coordinates.
  let pad ← createElement "div"
  pad.setId "pad"
  pad.setStyles #[("width", "100px"), ("height", "100px"), ("background", "#ddd")]
  let where_ ← createElement "output"
  where_.setId "pointer"
  discard <| pad.on "mousedown" fun e => do
    let i ← e.info
    where_.setTextContent s!"{i.offsetX.round.toUInt64},{i.offsetY.round.toUInt64},{i.button.toUInt64}"
  -- A form submit, read with FormData and prevented.
  match ← getElementById "fixture-form" with
  | some form =>
    let submitted ← createElement "output"
    submitted.setId "submitted"
    discard <| form.on "submit" fun e => do
      e.preventDefault
      let entries ← (← FormData.ofForm form).entries
      let text := entries.toList.map fun (k, v) => match v with | .text t => s!"{k}={t}" | .file n _ _ _ => s!"{k}=file:{n}"
      submitted.setTextContent (", ".intercalate text)
    root.appendChild submitted
  | none => pure ()
  -- A blocking wait in a handler: without JSPI the instance stops with a message.
  let block ← createElement "button"
  block.setId "block"
  -- (In Async work, not the handler itself: a synchronous callback can never suspend.)
  let slept ← createElement "output"
  slept.setId "slept"
  discard <| block.on "click" fun _ => background do
    Std.Async.sleep 1  -- continue in a Lean task, outside the callback
    (IO.sleep 5 : IO Unit)
    slept.setTextContent "slept"
  root.append #[button, count, onceOut, input, mirror, keys, link, prevented, removable, removedOut, pad, where_, block, slept]

def customEventChecks (checks : Checks) (root : Element) : IO Unit := do
  check checks "events.custom-dispatch" do
    let got ← IO.mkRef ""
    let target ← createElement "div"
    root.appendChild target
    discard <| target.on "lasm-test" fun e => do got.set (← e.detail String)
    let event ← Event.custom "lasm-test" (.string "payload")
    let notCancelled ← target.dispatchEvent event
    return (notCancelled && (← got.get) == "payload", ← got.get)
  check checks "events.bubbling-stop" do
    let outer ← createElement "div"
    let inner ← createElement "div"
    outer.appendChild inner
    root.appendChild outer
    let seen ← IO.mkRef (#[] : Array String)
    discard <| outer.on "ping" fun _ => seen.modify (·.push "outer")
    discard <| inner.on "ping" fun e => do seen.modify (·.push "inner"); e.stopPropagation
    discard <| inner.dispatchEvent (← Event.create "ping")
    return expectEq (← seen.get).toList ["inner"]

/-! Timers -/

def timerChecks (checks : Checks) : Async Unit := do
  checkAsync checks "timers.timeout" do
    let fired : IO.Promise Unit ← IO.Promise.new
    let start ← now
    discard <| setTimeout 20 (fired.resolve ())
    Std.Async.await fired
    let elapsed := (← now) - start
    return (elapsed ≥ 15, s!"{elapsed} ms")
  checkAsync checks "timers.interval-clear" do
    let ticks ← IO.mkRef (0 : Nat)
    let done : IO.Promise Unit ← IO.Promise.new
    let timer ← IO.mkRef (none : Option TimerId)
    let t ← setInterval 5 do
      ticks.modify (· + 1)
      if (← ticks.get) == 3 then
        if let some id ← timer.get then clearInterval id
        done.resolve ()
    timer.set (some t)
    Std.Async.await done
    Std.Async.sleep 30
    return expectEq (← ticks.get) 3
  checkAsync checks "timers.clear-timeout" do
    let fired ← IO.mkRef false
    let t ← setTimeout 10 (fired.set true)
    clearTimeout t
    Std.Async.sleep 30
    return (!(← fired.get), "cancelled")
  checkAsync checks "timers.animation-frame" do
    let frame : IO.Promise Float ← IO.Promise.new
    discard <| requestAnimationFrame fun time => frame.resolve time
    let time ← Std.Async.await frame
    let next ← nextFrame
    return (time > 0 && next ≥ time, s!"{time} then {next}")
  checkAsync checks "timers.microtask" do
    let order ← IO.mkRef (#[] : Array String)
    let done : IO.Promise Unit ← IO.Promise.new
    queueMicrotask do order.modify (·.push "microtask"); done.resolve ()
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
    let data ← fetchJson "/api/json"
    return expectEq (Data.describe (data.field "items")) "array of length 3"
  checkAsync checks "fetch.post-json" do
    let r ← fetch "/api/echo" { method := "POST", body := .json (obj [("n", toJS (41 : Nat))]) }
    let i ← r.info
    let echoed ← r.json
    let ct := i.headers.find? (·.1 == "x-request-content-type") |>.map (·.2)
    let n := match echoed.field "n" with | .number n => n | _ => 0
    return (i.status == 200 && n == 41 && ct == some "application/json", s!"{i.status} {ct} {n}")
  checkAsync checks "fetch.bytes-headers" do
    let r ← fetch "/api/bytes" { headers := #[("x-lasm", "yes")] }
    let bytes ← r.bytes
    let header ← r.header "x-echo-lasm"
    return (bytes.toList == [0, 1, 2, 254, 255] && header == some "yes", s!"{bytes.toList} {header}")
  checkAsync checks "fetch.status" do
    let r ← fetch "/api/missing"
    let i ← r.info
    return (i.status == 404 && !i.ok, s!"{i.status}")
  checkAsync checks "fetch.form-body" do
    let form ← FormData.create
    form.append "a" "1"
    form.appendBytes "file" "abc".toUTF8 "x.txt" "text/plain"
    let echoed ← (← fetch "/api/form" { method := "POST", body := .form form }).text
    return (echoed.startsWith "multipart/form-data", echoed.take 40 |>.toString)
  checkAsync checks "fetch.abort-timeout" do
    let signal ← AbortSignal.timeout 30
    try
      discard <| fetch "/api/slow" { signal := some signal }
      return (false, "the slow request was not aborted")
    catch e => return (true, s!"{e}".take 60 |>.toString)
  checkAsync checks "fetch.abort-controller" do
    let c ← AbortController.create
    let signal ← c.signal
    let pending := fetch "/api/slow" { signal := some signal }
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
    s.set "a" "1"; s.set "b" "2"
    let a ← s.get "a"
    s.remove "b"
    let keys ← s.keys
    return (a == some "1" && keys == #["a"] && (← s.length) == 1, s!"{keys}")
  check checks "storage.session" do
    let s ← sessionStorage
    s.set "k" "v"
    return expectEq (← s.get "k") (some "v")
  check checks "url.parse" do
    let some u ← Url.parse "../b/c?x=1&y=two%20words#frag" (some "https://example.com/a/z/") | return (false, "not parsed")
    let bad ← Url.parse "::"
    return (u.href == "https://example.com/a/b/c?x=1&y=two%20words#frag" && u.params == #[("x", "1"), ("y", "two words")] && u.hash == "#frag" && bad.isNone, u.href)
  check checks "url.search-params" do
    let p ← SearchParams.parse "?a=1&a=2&b=x y"
    p.append "c" "&"
    p.delete "b"
    return ((← p.getAll "a") == #["1", "2"] && (← p.toString) == "a=1&a=2&c=%26", ← p.toString)
  check checks "url.encode" do
    let e ← encodeURIComponent "a b/ü"
    return (e == "a%20b%2F%C3%BC" && (← decodeURIComponent e) == "a b/ü", e)
  check checks "history.push-replace" do
    let before ← location
    History.pushState "/pushed?x=1" (obj [("step", toJS (1 : Nat))])
    let after ← location
    let state ← History.state
    History.replaceState before.pathname
    let step := match state.field "step" with | .number n => n | _ => 0
    return (after.pathname == "/pushed" && after.search == "?x=1" && step == 1 && (← location).pathname == before.pathname, after.href)
  check checks "crypto.random" do
    let bytes ← Crypto.randomBytes 32
    let uuid ← Crypto.randomUUID
    return (bytes.size == 32 && uuid.length == 36 && uuid.toList[14]? == some '4', uuid)
  check checks "crypto.io-random" do
    let bytes ← IO.getRandomBytes 16
    return (bytes.size == 16, "IO.getRandomBytes")
  check checks "console.log" do
    Console.log #[.string "lasm-console-check", toJS (42 : Nat), obj [("k", .bool true)]]
    IO.println "lasm-println-check"
    return (true, "the runner checks the page's console")

def cryptoAsync (checks : Checks) : Async Unit := do
  checkAsync checks "crypto.sha256" do
    let digest ← Crypto.sha256 "abc".toUTF8
    return expectEq (Crypto.hex digest) "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"

/-! WebSocket (the test server echoes) -/

def socketChecks (checks : Checks) : Async Unit := do
  checkAsync checks "websocket.echo" do
    let loc ← location
    let scheme := if loc.protocol == "https:" then "wss" else "ws"
    let ws ← WebSocket.connect s!"{scheme}://{loc.host}/ws"
    let opened : IO.Promise Unit ← IO.Promise.new
    let messages ← IO.mkRef (#[] : Array String)
    let got : IO.Promise Unit ← IO.Promise.new
    let closed : IO.Promise Nat ← IO.Promise.new
    discard <| ws.onOpen (opened.resolve ())
    discard <| ws.onMessage fun m => do
      messages.modify (·.push (match m with | .text t => s!"text:{t}" | .bytes b => s!"bytes:{b.toList}"))
      if (← messages.get).size == 2 then got.resolve ()
    discard <| ws.onClose fun info => closed.resolve info.code
    Std.Async.await opened
    ws.send "hello"
    ws.sendBytes (ByteArray.mk #[1, 2, 3])
    Std.Async.await got
    let state ← ws.readyState
    ws.close 1000 "done"
    let code ← Std.Async.await closed
    return ((← messages.get) == #["text:hello", "bytes:[1, 2, 3]"] && state == .open && code == 1000, s!"{← messages.get} {code}")

/-! Canvas -/

def canvasChecks (checks : Checks) (root : Element) : IO Unit := do
  check checks "canvas.draw-read" do
    let canvas ← createElement "canvas"
    canvas.setProp "width" (20 : Nat)
    canvas.setProp "height" (20 : Nat)
    root.appendChild canvas
    let ctx ← canvas.context2d
    ctx.draw #[.fillStyle "rgb(255, 0, 0)", .fillRect 0 0 10 10, .fillStyle "rgb(0, 0, 255)", .beginPath, .arc 15 15 3 0 6.3, .fill,
      .font "10px sans-serif"]
    let pixel ← ctx.imageData 5 5 1 1
    let metrics ← ctx.measureText "Lean"
    return (pixel.toList == [255, 0, 0, 255] && metrics.width > 0, s!"{pixel.toList} {metrics.width}")

/-! Lean itself in the browser -/

def leanChecks (checks : Checks) : IO Unit := do
  check checks "lean.hashmap-bignum" do
    let m : Std.HashMap String Nat := (List.range 1000).foldl (fun m i => m.insert s!"k{i}" (i * i)) {}
    let big := (2 : Nat) ^ 200
    return (m.size == 1000 && m["k999"]? == some 998001 && (toString big).length == 61, s!"{m.size} {(toString big).length}")
  check checks "lean.tasks" do
    let t := Task.spawn fun _ => (List.range 100).foldl (· + ·) 0
    return expectEq t.get 4950
  check checks "lean.js-error" do
    let e ← createElement "div"
    try
      discard <| e.val.callMethod "noSuchMethod" #[] (α := Unit)
      return (false, "no error")
    catch err => return ((toString err).contains "noSuchMethod", toString err)

/-! The app: flags, ports, messages, unmount -/

def appChecks (checks : Checks) : IO Unit := do
  check checks "app.flags" do
    let label ← App.flags String
    return expectEq label "platform"
  check checks "app.target" do
    return expectEq (← App.target) "browser"
  -- The page sends on port "in"; Lean answers on port "out" with the value doubled.
  let incoming ← App.port "in"
  let outgoing ← App.port "out"
  incoming.subscribe fun d => match d with
    | .number n => outgoing.send (n * 2)
    | _ => outgoing.send "not a number"
  App.onMessage fun d => do
    match ← getElementById "message" with
    | some e => e.setTextContent (match d with | .string s => s | _ => d.describe)
    | none => pure ()
  App.onUnmount do
    (← (← global).get "window").set "lasmUnmounted" true

def main : IO Unit := do
  let root ← App.root
  let checks : Checks ← IO.mkRef #[]
  let message ← createElement "output"
  message.setId "message"
  root.appendChild message
  domChecks checks root
  customEventChecks checks root
  eventFixtures root
  platformChecks checks
  canvasChecks checks root
  leanChecks checks
  appChecks checks
  let results ← App.port "results"
  background do
    timerChecks checks
    fetchChecks checks
    cryptoAsync checks
    socketChecks checks
    let all ← checks.get
    let pre ← createElement "pre"
    pre.setId "results"
    pre.setTextContent (← (← (← global).get "JSON").callMethod "stringify" #[toJS all] String)
    results.send all
    let summary ← createElement "output"
    summary.setId "done"
    summary.setTextContent s!"{(all.filter (·.ok)).size}/{all.size}"
    root.append #[pre, summary]
