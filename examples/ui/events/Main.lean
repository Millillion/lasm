/-
Event decisions in Lasm.UI (docs/UI.md, "Preventing the default and stopping
propagation"), and the browser suite's test of them (scripts/ui/browser-checks.mjs):
each handler decides for each event whether to prevent its default and stop
its propagation.

- A chat box: Enter sends and inserts no newline, Shift+Enter inserts one,
  Enter during an IME composition is left to the input method, every other key types (`preventDefaultOn` deciding per key).
- A button that stops the click from reaching its row only with Shift held
  (`stopPropagationOn`).
- A link whose handler prevents the navigation and stops propagation (`custom`).
- Ctrl+S on the document saves, while typing in an input is untouched
  (`Subs.preventDefaultOn .document "keydown"`).
- A checkbox whose handler's decoder fails: the click is left alone, so the
  box still toggles.
- Three nested click handlers, which run innermost first, after the target's
  own listeners (handlers are delegated to the mount root in the bubble phase).
- A focus handler (focus does not bubble) that stops propagation: the input's
  own focus listeners still run.
-/
import Lasm.UI
open Lasm.UI

structure Model where
  draft : String := ""
  sent : List String := []
  inner : Nat := 0
  outer : Nat := 0
  custom : Nat := 0
  customOuter : Nat := 0
  saves : Nat := 0
  field : String := ""
  never : Nat := 0
  nest : List String := []
  focused : Nat := 0

inductive Msg where
  | draft (s : String)
  | send
  | inner
  | outer
  | custom
  | customOuter
  | save
  | field (s : String)
  | never
  | nest (s : String)
  | focused

/-- Enter sends (and prevents the newline); Shift+Enter, Enter confirming an
IME composition and every other key give no message, so the browser handles
them. -/
def onSend : Attr Msg :=
  preventDefaultOn "keydown" (Decoder.map2 Prod.mk Decoder.key (Decoder.map2 Prod.mk Decoder.shiftKey Decoder.isComposing) |>.filterMap fun
    | ("Enter", false, false) => some (.send, true)
    | _ => none)

/-- Shift+click stops the click at the button; a plain click reaches the row. -/
def onInnerClick : Attr Msg :=
  stopPropagationOn "click" (Decoder.shiftKey.map fun shift => (.inner, shift))

/-- Both decisions at once. -/
def onCustomClick : Attr Msg :=
  custom "click" (.succeed { message := .custom, preventDefault := true, stopPropagation := true })

/-- Reads a field the event does not have, so it never gives a message: the
`true` is never used, and the click toggles the box. -/
def onNever : Attr Msg :=
  preventDefaultOn "click" ((Decoder.string ["target", "dataset", "missing"]).map fun _ => (.never, true))

/-- Focus does not bubble, so stopping it changes nothing beyond the input. -/
def onFocusStop : Attr Msg :=
  stopPropagationOn "focus" (.succeed (.focused, true))

def view (m : Model) : Html Msg :=
  html! <main id="events">
          <section>
            <textarea id="chat" value={m.draft} onInput={Msg.draft} {[onSend]}></textarea>
            <ol id="sent">{m.sent.reverse.map fun s => html! <li>{s}</li>}</ol>
          </section>
          <section id="row" onClick={Msg.outer}>
            <button id="inner" {[onInnerClick]}>Inner</button>
            <span id="inner-count">{m.inner}</span>
            <span id="outer-count">{m.outer}</span>
          </section>
          <section id="custom-row" onClick={Msg.customOuter}>
            <a id="custom-link" href="#navigated" {[onCustomClick]}>Custom</a>
            <span id="custom-count">{m.custom}</span>
            <span id="custom-outer-count">{m.customOuter}</span>
          </section>
          <section>
            <input id="field" value={m.field} onInput={Msg.field} />
            <span id="saves">{m.saves}</span>
          </section>
          <section>
            <input id="check" type="checkbox" {[onNever]} />
            <span id="never">{m.never}</span>
          </section>
          <section id="nest" onClick={Msg.nest "outer"}>
            <div id="nest-mid" onClick={Msg.nest "mid"}>
              <button id="nest-inner" onClick={Msg.nest "inner"}>Nested</button>
            </div>
            <span id="nest-log">{" ".intercalate m.nest.reverse}</span>
          </section>
          <section>
            <input id="focus-me" {[onFocusStop]} />
            <span id="focused">{m.focused}</span>
          </section>
        </main>

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .draft s => ({ m with draft := s }, .none)
  | .send => if m.draft.isEmpty then (m, .none) else ({ m with sent := m.draft :: m.sent, draft := "" }, .none)
  | .inner => ({ m with inner := m.inner + 1 }, .none)
  | .outer => ({ m with outer := m.outer + 1 }, .none)
  | .custom => ({ m with custom := m.custom + 1 }, .none)
  | .customOuter => ({ m with customOuter := m.customOuter + 1 }, .none)
  | .save => ({ m with saves := m.saves + 1 }, .none)
  | .field s => ({ m with field := s }, .none)
  | .never => ({ m with never := m.never + 1 }, .none)
  | .nest s => ({ m with nest := s :: m.nest }, .none)
  | .focused => ({ m with focused := m.focused + 1 }, .none)

/-- Ctrl+S (or Cmd+S) saves instead of opening the browser's dialog; other keys get no message. -/
def subscriptions (_ : Model) : Subs Msg :=
  Subs.preventDefaultOn .document "keydown"
    (Decoder.map2 Prod.mk Decoder.key (Decoder.map2 (· || ·) Decoder.ctrlKey Decoder.metaKey) |>.filterMap fun
      | ("s", true) => some (.save, true)
      | _ => none)

def main : IO Unit := (App.element (fun (_ : Unit) => ({}, .none)) update view subscriptions).run
