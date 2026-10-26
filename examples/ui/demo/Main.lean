/-
A tour of Lasm.UI in one app (also the browser suite's feature test,
scripts/ui/browser-checks.mjs): routing with links and the back button, HTTP,
a delay, a timer subscription switched on and off, document key events, focus,
SVG, a keyed list, ports and messages from JavaScript, and server-side
rendering of a component that a second instance hydrates.
-/
import Lasm.UI
open Lasm.UI

inductive Page where
  | home
  | about
  | item (id : Nat) (tab : Option String)
  | notFound
  deriving DecidableEq

/-- Routes: the app is served under `/demo/`. -/
def route (u : Url) : Page :=
  match u.segments with
  | ["demo"] | [] => .home
  | ["demo", "about"] => .about
  | ["demo", "items", id] => match id.toNat? with
    | some n => .item n (u.param? "tab")
    | none => .notFound
  | _ => .notFound

structure Model where
  page : Page
  http : String := ""
  delayed : String := ""
  ticking : Bool := false
  ticks : Nat := 0
  lastKey : String := ""
  name : String := ""
  letters : List String := ["a", "b", "c", "d", "e"]
  received : String := ""
  count : Nat := 0
  /-- Mounted only to hydrate the counter component. -/
  ssr : Bool := false

inductive Msg where
  | urlChanged (u : Url)
  | goItem
  | fetch (path : String)
  | fetched (r : Except Http.Error String)
  | startDelay
  | delayDone
  | toggleTicks
  | tick (t : Float)
  | key (k : String)
  | focusName
  | setName (s : String)
  | reverse
  | portIn (n : Nat)
  | received (s : String)
  | renderSsr
  | inc

def counterView (n : Nat) : Html Msg :=
  html! <div id="counter">
          <button id="counter-inc" onClick={Msg.inc}>+</button>
          <span id="counter-value">{n}</span>
        </div>

def pageName : Page → String
  | .home => "home"
  | .about => "about"
  | .item n _ => s!"item {n}"
  | .notFound => "not found"

def clock (ticks : Nat) : Html Msg :=
  let angle := (ticks % 60).toFloat * 6.0 * 3.14159265 / 180.0
  let x := 50.0 + 40.0 * Float.sin angle
  let y := 50.0 - 40.0 * Float.cos angle
  html! <svg id="clock" viewBox="0 0 100 100" width="100" height="100">
          <circle cx="50" cy="50" r="45" fill="none" stroke="currentColor" />
          <line x1="50" y1="50" x2={toString x} y2={toString y} stroke="currentColor" stroke-width="2" />
        </svg>

def view (m : Model) : Html Msg :=
  if m.ssr then counterView m.count else
  html! <div id="demo">
          <nav>
            <a href="/demo/">Home</a> <a href="/demo/about">About</a>
            <button id="go-item" onClick={Msg.goItem}>Item 7</button>
          </nav>
          <h2 id="page">{pageName m.page}</h2>
          <section>
            <button id="fetch" onClick={Msg.fetch "/api/json"}>Fetch</button>
            <button id="fetch-missing" onClick={Msg.fetch "/api/missing"}>Fetch a missing page</button>
            <pre id="http">{m.http}</pre>
          </section>
          <section>
            <button id="delay" onClick={Msg.startDelay}>Wait 100 ms</button>
            <span id="delayed">{m.delayed}</span>
            <button id="tick-toggle" onClick={Msg.toggleTicks}>{if m.ticking then "Stop" else "Start"}</button>
            <span id="ticks">{m.ticks}</span>
            {clock m.ticks}
          </section>
          <section>
            <span id="last-key">{m.lastKey}</span>
            <input id="name" value={m.name} onInput={Msg.setName} placeholder="Your name" />
            <button id="focus" onClick={Msg.focusName}>Focus</button>
            <p id="hello">{if m.name.isEmpty then "" else s!"Hello, {m.name}!"}</p>
          </section>
          <section>
            <button id="reverse" onClick={Msg.reverse}>Reverse</button>
            <ul id="keyed">{m.letters.map fun l => html! <li key={l} data-k={l}>{l}</li>}</ul>
            <span id="received">{m.received}</span>
          </section>
          {counterView m.count}
        </div>

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .urlChanged u => ({ m with page := route u }, .none)
  | .goItem => (m, Cmd.pushUrl (Url.build ["demo", "items", "7"] [("tab", "info")]))
  | .fetch path => (m, Http.request { url := path } fun
      | .ok r => .fetched (.ok s!"{r.status} {r.body}")
      | .error e => .fetched (.error e))
  | .fetched (.ok s) => ({ m with http := s }, .none)
  | .fetched (.error e) => ({ m with http := s!"error {e}" }, .none)
  | .startDelay => ({ m with delayed := "waiting" }, Cmd.delay 100 .delayDone)
  | .delayDone => ({ m with delayed := "done" }, .none)
  | .toggleTicks => ({ m with ticking := !m.ticking }, .none)
  | .tick _ => ({ m with ticks := m.ticks + 1 }, .none)
  | .key k => ({ m with lastKey := k }, .none)
  | .focusName => (m, Cmd.focus "name")
  | .setName s => ({ m with name := s }, .none)
  | .reverse => ({ m with letters := m.letters.reverse }, .none)
  | .portIn n => (m, Cmd.port "out" (Lasm.JS.toJS (2 * n)))
  | .received s => ({ m with received := s }, .none)
  | .renderSsr => (m, Cmd.port "ssr" (.string (render (counterView 0))))
  | .inc => ({ m with count := m.count + 1 }, .none)

def subscriptions (m : Model) : Subs Msg :=
  if m.ssr then .none else
  Subs.batch [
    if m.ticking then Subs.every 100 .tick else .none,
    Subs.onKeyDown (Decoder.key.map .key),
    Subs.port "in" fun d => match d with | .number n => some (.portIn n.toUInt64.toNat) | _ => none,
    Subs.port "render" fun _ => some .renderSsr ]

def app : App Lasm.JS.Data Model Msg where
  init flags url :=
    let ssr := match flags.field "ssr" with | .bool b => b | _ => false
    ({ page := route url, ssr }, .none)
  update := update
  view := view
  subscriptions := subscriptions
  onUrlChange := some .urlChanged
  receive := some fun d => match d with | .string s => some (.received s) | _ => none

def main : IO Unit := app.run
