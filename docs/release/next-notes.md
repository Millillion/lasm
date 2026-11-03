# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes

- **Lasm.UI handlers decide `preventDefault` and `stopPropagation` for each event (#71).**
  - **Before:** `preventDefaultOn` and `stopPropagationOn` applied a fixed option to every event the handler received, even when its decoder produced no message. A chat box could not send on Enter without either blocking all typing or inserting a newline.
  - **Now:** the decoder returns the decision with the message, as in Elm's `Html.Events`. The applier already calls Lean synchronously from its DOM listener, so the decision is applied while the event is still being dispatched. A handler that produces no message (a `filterMap` returning `none`, a field of the wrong type) leaves the event alone.
  - **New:** `custom event (d : Decoder (Handled Msg))` decides both; `Handled` is `{ message, preventDefault := false, stopPropagation := false }`. Subscriptions get the same four functions on `window` and `document`: `Subs.on`, `Subs.preventDefaultOn`, `Subs.stopPropagationOn`, `Subs.custom`, which take a `Target` (`.window` or `.document`). Ctrl+S can be prevented while every other key still types. `Decoder.isComposing` reads `event.isComposing`, so a chat box can leave Enter alone while an input method (Japanese, Chinese, Korean) is composing a word.
  - **Migration:**
    - `preventDefaultOn e d` becomes `preventDefaultOn e (d.map (·, true))`, and `stopPropagationOn e d` becomes `stopPropagationOn e (d.map (·, true))`.
    - `Attr.onWith e d (preventDefault := p) (stopPropagation := s)` loses its flags: `Attr.onWith e d` is `on e d`; use `custom e (d.map fun m => { message := m, preventDefault := p, stopPropagation := s })` for the flags.
    - `Subs.onWindow e d` becomes `Subs.on .window e d`, and `Subs.onDocument e d` becomes `Subs.on .document e d`. Their flags go the same way: `Subs.preventDefaultOn .document e (d.map (·, true))`.
    - `Listener` has no `preventDefault` or `stopPropagation` fields, an `Attr.on` handler returns `Option (Handled Msg)`, and `SubSpec.window`/`SubSpec.document` are now `SubSpec.event target event paths`.
    - `onSubmit`, `onClick`, `onInput`, `onEnter`, `onEscape`, `Subs.onKeyDown` and the other shorthands keep their signatures and behaviour.
  - **In this repository:** when the examples' `@lasm/cli` pins move to this release, Tandem's `Subs.onWindow "online"` becomes `Subs.on .window "online"`, and Conduit's `Proofs/View.lean` adds `Attr.custom` to its local simp set (`onSubmit` unfolds through it); Porter, Folio and Ledger need no change.
  - **Patch protocol:** a listener (attribute op 5) is `5 event decoderId`, without the flags (docs/BROWSER.md).
  - See [UI.md](../UI.md#preventing-the-default-and-stopping-propagation).
