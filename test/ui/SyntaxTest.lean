/-
`html!`, the function DSL and `render`, checked while Lean elaborates this file
(scripts/ui/lean-tests.mjs): each `#guard` must hold.
-/
import Lasm.UI
open Lasm.UI

inductive Msg where
  | inc
  | set (s : String)
  | pick (n : Nat)

def items : List Nat := [1, 2]

-- Text, whitespace, entities, numbers, unicode at the start of text.
#guard render (html! <p>Hello,   world!</p> : Html Msg) == "<p>Hello, world!</p>"
#guard render (html! <p>
    two
    lines
  </p> : Html Msg) == "<p>two lines</p>"
#guard render (html! <p>a &amp; b &lt;c&gt; &#65;&#x42;</p> : Html Msg) == "<p>a &amp; b &lt;c&gt; AB</p>"
#guard render (html! <button>−</button> : Html Msg) == "<button>−</button>"
#guard render (html! <p>✓ done</p> : Html Msg) == "<p>✓ done</p>"
#guard render (html! <p><b>{(3 : Nat)}</b> items left</p> : Html Msg) == "<p><b>3</b> items left</p>"
#guard render (html! <p><b>x</b> <i>y</i></p> : Html Msg) == "<p><b>x</b> <i>y</i></p>"
-- Attributes, properties, styles, keys, splices.
#guard render (html! <input type="text" value={"v"} disabled /> : Html Msg) == "<input type=\"text\" value=\"v\" disabled>"
#guard render (html! <div class="a" data-id={(7 : Nat)} aria-label="l" style={[("color", "red")]}></div> : Html Msg)
  == "<div class=\"a\" data-id=\"7\" aria-label=\"l\" style=\"color:red\"></div>"
#guard render (html! <div {if true then [class_ "on"] else []}></div> : Html Msg) == "<div class=\"on\"></div>"
#guard render (html! <ul>{items.map fun i => html! <li key={i} onClick={Msg.pick i}>{i}</li>}</ul> : Html Msg)
  == "<ul><li>1</li><li>2</li></ul>"
#guard match (html! <li key="k"></li> : Html Msg) with | .elem _ _ (some "k") _ _ => true | _ => false
-- SVG gets its namespace; foreignObject switches back to HTML.
#guard match (html! <svg><circle r="1" /></svg> : Html Msg) with
  | .elem .svg "svg" _ _ [.elem .svg "circle" _ _ _] => true | _ => false
#guard match (html! <svg><foreignObject><div></div></foreignObject></svg> : Html Msg) with
  | .elem .svg _ _ _ [.elem .svg _ _ _ [.elem .html "div" _ _ _]] => true | _ => false
-- Escaping and adjacent text nodes in SSR.
#guard render (div [title "\"q\""] [text "<&>", text "b"] : Html Msg) == "<div title=\"&quot;q&quot;\">&lt;&amp;&gt;<!---->b</div>"
#guard render (div [] [br []] : Html Msg) == "<div><br></div>"
-- Handlers decode their declared fields.
#guard match (html! <input onInput={Msg.set} /> : Html Msg) with
  | .elem _ _ _ [.on l h] _ => l.event == "input" && l.paths == [["target", "value"]] &&
      (match h [.str "x"] with | some ⟨.set "x", false, false⟩ => true | _ => false)
  | _ => false
#guard match (onEnter Msg.inc : Attr Msg) with
  | .on l h => l.event == "keydown" && (h [.str "Enter"]).isSome && (h [.str "a"]).isNone
  | _ => false
-- URLs.
#guard (Url.parse "https://example.com:8080/posts/12/?tab=a%20b#top").map (·.segments) == some ["posts", "12"]
#guard ((Url.parse "https://example.com/?q=lean+4&x=%C3%A9").bind (·.param? "q")) == some "lean 4"
#guard ((Url.parse "https://example.com/?q=lean+4&x=%C3%A9").bind (·.param? "x")) == some "é"
#guard Url.build ["posts", "a b"] [("tab", "c&d")] == "/posts/a%20b?tab=c%26d"

-- Event decisions (preventDefaultOn, stopPropagationOn, custom): each handler
-- decides per event; no message leaves the event alone.
def msgName : Msg → String
  | .inc => "inc" | .set s => s!"set {s}" | .pick n => s!"pick {n}"
/-- What a handler gives for these values: its message and both decisions. -/
def outcome (a : Attr Msg) (vs : List EvVal) : Option (String × Bool × Bool) :=
  match a with
  | .on _ h => (h vs).map fun r => (msgName r.message, r.preventDefault, r.stopPropagation)
  | _ => none
/-- Enter sends and prevents the newline; Shift+Enter, Enter during an IME
composition and other keys are left alone. -/
def chatKeys : Attr Msg :=
  preventDefaultOn "keydown" (Decoder.map2 Prod.mk Decoder.key (Decoder.map2 Prod.mk Decoder.shiftKey Decoder.isComposing) |>.filterMap fun
    | ("Enter", false, false) => some (.inc, true)
    | _ => none)
#guard outcome chatKeys [.str "Enter", .bool false, .bool false] == some ("inc", true, false)
#guard outcome chatKeys [.str "Enter", .bool true, .bool false] == none
#guard outcome chatKeys [.str "Enter", .bool false, .bool true] == none
#guard outcome chatKeys [.str "a", .bool false, .bool false] == none
-- A decoder that fails (a missing field) gives nothing, so nothing is prevented.
#guard outcome chatKeys [.undefined, .undefined, .undefined] == none
#guard match chatKeys with | .on l _ => l == { event := "keydown", paths := [["key"], ["shiftKey"], ["isComposing"]] } | _ => false
-- The Bool decides: a message without preventing.
#guard outcome (preventDefaultOn "click" (.succeed (Msg.inc, false))) [] == some ("inc", false, false)
#guard outcome (stopPropagationOn "click" (Decoder.bool ["ctrlKey"] |>.map fun c => (Msg.inc, c))) [.bool true] == some ("inc", false, true)
#guard outcome (stopPropagationOn "click" (Decoder.bool ["ctrlKey"] |>.map fun c => (Msg.inc, c))) [.bool false] == some ("inc", false, false)
#guard outcome (custom "click" (.succeed { message := Msg.inc, preventDefault := true, stopPropagation := true })) [] == some ("inc", true, true)
#guard outcome (on "click" (.succeed Msg.inc)) [] == some ("inc", false, false)
-- The shorthands keep their behaviour: onSubmit always prevents; the others never.
#guard outcome (onSubmit Msg.inc) [] == some ("inc", true, false)
#guard outcome (onEnter Msg.inc) [.str "Enter"] == some ("inc", false, false)
#guard outcome (onEscape Msg.inc) [.str "Escape"] == some ("inc", false, false)
#guard outcome (onEscape Msg.inc) [.str "Enter"] == none
#guard outcome (onClick Msg.inc) [] == some ("inc", false, false)
#guard outcome (onInput Msg.set) [.str "v"] == some ("set v", false, false)
-- Html.map and Attr.map keep the decisions.
#guard outcome (Attr.map (fun _ => Msg.pick 1) (onSubmit Msg.inc)) [] == some ("pick 1", true, false)

-- Runtime.decide: innermost element first, every handler of an element runs,
-- enclosing elements stop after one that stops propagation.
def summary (d : Runtime.Decision Msg) : List String × Bool × Bool := (d.msgs.toList.map msgName, d.preventDefault, d.stopPropagation)
def stopIf (n : Nat) : Attr Msg := stopPropagationOn "click" (Decoder.bool ["ctrlKey"] |>.map fun c => (Msg.pick n, c))
#guard summary (Runtime.decide "click" [([stopIf 1], [.bool false]), ([onClick (Msg.pick 2)], [])] {}) == (["pick 1", "pick 2"], false, false)
#guard summary (Runtime.decide "click" [([stopIf 1], [.bool true]), ([onClick (Msg.pick 2)], [])] {}) == (["pick 1"], false, true)
-- Two handlers on one element (same fields) both run, and their decisions combine.
#guard summary (Runtime.decide "keydown" [([onEnter Msg.inc, preventDefaultOn "keydown" (Decoder.key.map fun _ => (Msg.pick 1, true))], [.str "Enter"])] {}) == (["inc", "pick 1"], true, false)
-- Handlers reading other fields than the last one's do not run (the DOM slot holds the last listener).
#guard summary (Runtime.decide "keydown" [([onEnter Msg.inc, chatKeys], [.str "Enter", .bool false, .bool false])] {}) == (["inc"], true, false)
-- A handler without a message decides nothing; outer ones still run.
#guard summary (Runtime.decide "keydown" [([chatKeys], [.str "Enter", .bool true, .bool false]), ([preventDefaultOn "keydown" (.succeed (Msg.inc, false))], [])] {}) == (["inc"], false, false)
#guard summary (Runtime.decide "click" [([custom "click" (Decoder.fail : Decoder (Handled Msg))], []), ([onSubmit Msg.inc], [])] {}) == ([], false, false)
-- The applier's answer: 1 a frame, 2 preventDefault, 4 stopPropagation.
#guard match Runtime.answer true true true with | .number n => n == 7 | _ => false
#guard match Runtime.answer false true false with | .number n => n == 2 | _ => false
#guard match Runtime.answer false false true with | .number n => n == 4 | _ => false
#guard match Runtime.answer true false false with | .number n => n == 1 | _ => false

-- Subscriptions: Subs.on, preventDefaultOn, stopPropagationOn, custom on window and document.
def subOutcome (s : Subs Msg) (vs : Array Lasm.JS.Data) : List (Option (String × Bool × Bool)) :=
  s.items.map fun i => (i.handle vs).map fun r => (msgName r.message, r.preventDefault, r.stopPropagation)
def saveKey : Subs Msg :=
  Subs.preventDefaultOn .document "keydown" (Decoder.map2 Prod.mk Decoder.key Decoder.ctrlKey |>.filterMap fun
    | ("s", true) => some (.inc, true)
    | _ => none)
#guard subOutcome saveKey #[.string "s", .bool true] == [some ("inc", true, false)]
#guard subOutcome saveKey #[.string "s", .bool false] == [none]
#guard (saveKey.items.map (·.spec)) == [.event .document "keydown" [["key"], ["ctrlKey"]]]
#guard subOutcome (Subs.on .window "online" (.succeed Msg.inc)) #[] == [some ("inc", false, false)]
#guard ((Subs.on .window "online" (.succeed Msg.inc)).items.map (·.spec)) == [.event .window "online" []]
#guard subOutcome (Subs.stopPropagationOn .window "x" (.succeed (Msg.inc, true))) #[] == [some ("inc", false, true)]
#guard subOutcome (Subs.custom .document "x" (.succeed { message := Msg.inc, preventDefault := true, stopPropagation := true })) #[] == [some ("inc", true, true)]
#guard subOutcome (Subs.onKeyDown (Decoder.key.map Msg.set)) #[.string "k"] == [some ("set k", false, false)]
#guard ((Subs.onKeyDown (Decoder.key.map Msg.set)).items.map (·.spec)) == [.event .document "keydown" [["key"]]]
#guard ((Subs.onResize fun _ _ => Msg.inc).items.map (·.spec)) == [.event .window "resize" [["currentTarget", "innerWidth"], ["currentTarget", "innerHeight"]]]
#guard subOutcome (Subs.map (fun _ => Msg.pick 3) saveKey) #[.string "s", .bool true] == [some ("pick 3", true, false)]
