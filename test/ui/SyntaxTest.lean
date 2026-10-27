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
      (match h [.str "x"] with | some (.set "x") => true | _ => false)
  | _ => false
#guard match (onEnter Msg.inc : Attr Msg) with
  | .on l h => l.event == "keydown" && (h [.str "Enter"]).isSome && (h [.str "a"]).isNone
  | _ => false
-- URLs.
#guard (Url.parse "https://example.com:8080/posts/12/?tab=a%20b#top").map (·.segments) == some ["posts", "12"]
#guard ((Url.parse "https://example.com/?q=lean+4&x=%C3%A9").bind (·.param? "q")) == some "lean 4"
#guard ((Url.parse "https://example.com/?q=lean+4&x=%C3%A9").bind (·.param? "x")) == some "é"
#guard Url.build ["posts", "a b"] [("tab", "c&d")] == "/posts/a%20b?tab=c%26d"
