/-
The function DSL: `div [class_ "x", onClick .inc] [text "hi"]`. Elements take a
list of attributes and a list of children; void elements (`br`, `img`,
`input`, …) take only attributes. Names that are Lean keywords or clash with
common Lean functions end in `_` (`class_`, `id_`, `type_`, `for_`, `main_`,
`section_`, `max_`, `min_`). SVG elements are in `Lasm.UI.Svg`.
Every element and attribute is also available through `html!` (Lasm.UI.Syntax).
-/
import Lasm.UI.Html

namespace Lasm.UI

/-- A text node. -/
def text (s : String) : Html Msg := .text s

/-- An HTML element with any tag (custom elements included). -/
def node (tag : String) (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg :=
  .elem .html tag none attrs children

/-- An element in a namespace. -/
def nodeNS (ns : Ns) (tag : String) (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg :=
  .elem ns tag none attrs children

/-- Gives an element a key (see `Html.keyed`). -/
def keyed (k : String) (h : Html Msg) : Html Msg := h.keyed k

/-- Nothing (an empty text node), for conditional children. -/
def empty : Html Msg := .text ""

/-- The HTML element names `html!` accepts (besides custom elements, whose names contain `-`). -/
def htmlTags : List String := ["a", "abbr", "address", "area", "article", "aside", "audio", "b", "base", "bdi", "bdo", "blockquote", "body", "br", "button", "canvas", "caption", "cite", "code", "col", "colgroup", "datalist", "dd", "del", "details", "dfn", "dialog", "div", "dl", "dt", "em", "embed", "fieldset", "figcaption", "figure", "footer", "form", "h1", "h2", "h3", "h4", "h5", "h6", "head", "header", "hgroup", "hr", "html", "i", "iframe", "img", "input", "ins", "kbd", "label", "legend", "li", "link", "main", "map", "mark", "menu", "meta", "meter", "nav", "noscript", "object", "ol", "optgroup", "option", "output", "p", "param", "picture", "pre", "progress", "q", "rp", "rt", "ruby", "s", "samp", "script", "search", "section", "select", "slot", "small", "source", "span", "strong", "style", "sub", "summary", "sup", "table", "tbody", "td", "template", "textarea", "tfoot", "th", "thead", "time", "title", "tr", "track", "u", "ul", "var", "video", "wbr"]

/-- Void elements: no children, no closing tag. -/
def voidTags : List String := ["area", "base", "br", "col", "embed", "hr", "img", "input", "link", "meta", "param", "source", "track", "wbr"]

def a (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "a" none attrs children
def abbr (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "abbr" none attrs children
def address (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "address" none attrs children
def article (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "article" none attrs children
def aside (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "aside" none attrs children
def audio (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "audio" none attrs children
def b (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "b" none attrs children
def bdi (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "bdi" none attrs children
def bdo (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "bdo" none attrs children
def blockquote (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "blockquote" none attrs children
def br (attrs : List (Attr Msg)) : Html Msg := .elem .html "br" none attrs []
def button (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "button" none attrs children
def canvas (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "canvas" none attrs children
def caption (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "caption" none attrs children
def cite (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "cite" none attrs children
def code (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "code" none attrs children
def col (attrs : List (Attr Msg)) : Html Msg := .elem .html "col" none attrs []
def colgroup (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "colgroup" none attrs children
def datalist (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "datalist" none attrs children
def dd (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "dd" none attrs children
def del (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "del" none attrs children
def details (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "details" none attrs children
def dfn (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "dfn" none attrs children
def dialog (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "dialog" none attrs children
def div (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "div" none attrs children
def dl (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "dl" none attrs children
def dt (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "dt" none attrs children
def em (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "em" none attrs children
def embed (attrs : List (Attr Msg)) : Html Msg := .elem .html "embed" none attrs []
def fieldset (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "fieldset" none attrs children
def figcaption (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "figcaption" none attrs children
def figure (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "figure" none attrs children
def footer (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "footer" none attrs children
def form (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "form" none attrs children
def h1 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h1" none attrs children
def h2 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h2" none attrs children
def h3 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h3" none attrs children
def h4 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h4" none attrs children
def h5 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h5" none attrs children
def h6 (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "h6" none attrs children
def header (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "header" none attrs children
def hgroup (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "hgroup" none attrs children
def hr (attrs : List (Attr Msg)) : Html Msg := .elem .html "hr" none attrs []
def i (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "i" none attrs children
def iframe (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "iframe" none attrs children
def img (attrs : List (Attr Msg)) : Html Msg := .elem .html "img" none attrs []
def input (attrs : List (Attr Msg)) : Html Msg := .elem .html "input" none attrs []
def ins (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "ins" none attrs children
def kbd (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "kbd" none attrs children
def label (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "label" none attrs children
def legend (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "legend" none attrs children
def li (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "li" none attrs children
def main_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "main" none attrs children
def map_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "map" none attrs children
def mark (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "mark" none attrs children
def menu (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "menu" none attrs children
def meter (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "meter" none attrs children
def nav (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "nav" none attrs children
def noscript (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "noscript" none attrs children
def object_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "object" none attrs children
def ol (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "ol" none attrs children
def optgroup (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "optgroup" none attrs children
def option (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "option" none attrs children
def output (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "output" none attrs children
def p (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "p" none attrs children
def param (attrs : List (Attr Msg)) : Html Msg := .elem .html "param" none attrs []
def picture (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "picture" none attrs children
def pre (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "pre" none attrs children
def progress (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "progress" none attrs children
def q (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "q" none attrs children
def rp (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "rp" none attrs children
def rt (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "rt" none attrs children
def ruby (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "ruby" none attrs children
def s (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "s" none attrs children
def samp (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "samp" none attrs children
def search (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "search" none attrs children
def section_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "section" none attrs children
def select (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "select" none attrs children
def slot_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "slot" none attrs children
def small (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "small" none attrs children
def source (attrs : List (Attr Msg)) : Html Msg := .elem .html "source" none attrs []
def span (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "span" none attrs children
def strong (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "strong" none attrs children
def sub_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "sub" none attrs children
def summary (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "summary" none attrs children
def sup (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "sup" none attrs children
def table (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "table" none attrs children
def tbody (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "tbody" none attrs children
def td (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "td" none attrs children
def template_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "template" none attrs children
def textarea (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "textarea" none attrs children
def tfoot (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "tfoot" none attrs children
def th (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "th" none attrs children
def thead (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "thead" none attrs children
def time (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "time" none attrs children
def tr (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "tr" none attrs children
def track (attrs : List (Attr Msg)) : Html Msg := .elem .html "track" none attrs []
def u (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "u" none attrs children
def ul (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "ul" none attrs children
def var_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "var" none attrs children
def video (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .html "video" none attrs children
def wbr (attrs : List (Attr Msg)) : Html Msg := .elem .html "wbr" none attrs []

/-! Attributes -/

def attr (name value : String) : Attr Msg := .attr name value
def prop (name : String) (value : PropVal) : Attr Msg := .prop name value
def boolProp (name : String) (b : Bool) : Attr Msg := .prop name (.bool b)
def stringProp (name : String) (s : String) : Attr Msg := .prop name (.str s)
/-- An inline style (`style.setProperty`; use CSS names: `"background-color"`). -/
def style (name value : String) : Attr Msg := .style name value
/-- `data-name="value"`. -/
def data (name value : String) : Attr Msg := .attr ("data-" ++ name) value
/-- `aria-name="value"`. -/
def aria (name value : String) : Attr Msg := .attr ("aria-" ++ name) value

def class_ (c : String) : Attr Msg := .attr "class" c
/-- The classes whose flag is true. -/
def classList (cs : List (String × Bool)) : Attr Msg :=
  .attr "class" (" ".intercalate (cs.filterMap fun (c, on) => if on then some c else none))
def id_ (i : String) : Attr Msg := .attr "id" i
def type_ (t : String) : Attr Msg := .attr "type" t
def for_ (i : String) : Attr Msg := .attr "for" i
def max_ (v : String) : Attr Msg := .attr "max" v
def min_ (v : String) : Attr Msg := .attr "min" v
/-- The current value of an input, textarea or select (a property, so it
updates what is shown even after the user typed). -/
def value (v : String) : Attr Msg := .prop "value" (.str v)
def checked (b : Bool) : Attr Msg := .prop "checked" (.bool b)
def selected (b : Bool) : Attr Msg := .prop "selected" (.bool b)
def disabled (b : Bool) : Attr Msg := .prop "disabled" (.bool b)
def hidden (b : Bool) : Attr Msg := .prop "hidden" (.bool b)
def readonly (b : Bool) : Attr Msg := .prop "readOnly" (.bool b)
def required (b : Bool) : Attr Msg := .prop "required" (.bool b)
def multiple (b : Bool) : Attr Msg := .prop "multiple" (.bool b)
def autofocus (b : Bool) : Attr Msg := .prop "autofocus" (.bool b)
def tabindex (n : Int) : Attr Msg := .attr "tabindex" (toString n)
def colspan (n : Nat) : Attr Msg := .attr "colspan" (toString n)
def rowspan (n : Nat) : Attr Msg := .attr "rowspan" (toString n)
def width (n : Nat) : Attr Msg := .attr "width" (toString n)
def height (n : Nat) : Attr Msg := .attr "height" (toString n)

def title (v : String) : Attr Msg := .attr "title" v
def placeholder (v : String) : Attr Msg := .attr "placeholder" v
def href (v : String) : Attr Msg := .attr "href" v
def src (v : String) : Attr Msg := .attr "src" v
def alt (v : String) : Attr Msg := .attr "alt" v
def name (v : String) : Attr Msg := .attr "name" v
def target (v : String) : Attr Msg := .attr "target" v
def rel (v : String) : Attr Msg := .attr "rel" v
def action (v : String) : Attr Msg := .attr "action" v
def method (v : String) : Attr Msg := .attr "method" v
def lang (v : String) : Attr Msg := .attr "lang" v
def dir (v : String) : Attr Msg := .attr "dir" v
def role (v : String) : Attr Msg := .attr "role" v
def pattern (v : String) : Attr Msg := .attr "pattern" v
def step (v : String) : Attr Msg := .attr "step" v
def accept (v : String) : Attr Msg := .attr "accept" v
def autocomplete (v : String) : Attr Msg := .attr "autocomplete" v
def download (v : String) : Attr Msg := .attr "download" v
def srcset (v : String) : Attr Msg := .attr "srcset" v
def sizes (v : String) : Attr Msg := .attr "sizes" v
def loading (v : String) : Attr Msg := .attr "loading" v
def media (v : String) : Attr Msg := .attr "media" v
def enctype (v : String) : Attr Msg := .attr "enctype" v
def list (v : String) : Attr Msg := .attr "list" v
def wrap (v : String) : Attr Msg := .attr "wrap" v
def cols (v : String) : Attr Msg := .attr "cols" v
def rows (v : String) : Attr Msg := .attr "rows" v
def maxlength (v : String) : Attr Msg := .attr "maxlength" v
def minlength (v : String) : Attr Msg := .attr "minlength" v
def size (v : String) : Attr Msg := .attr "size" v
def start (v : String) : Attr Msg := .attr "start" v
def scope (v : String) : Attr Msg := .attr "scope" v
def headers (v : String) : Attr Msg := .attr "headers" v
def kind (v : String) : Attr Msg := .attr "kind" v
def srclang (v : String) : Attr Msg := .attr "srclang" v
def poster (v : String) : Attr Msg := .attr "poster" v
def preload (v : String) : Attr Msg := .attr "preload" v
def sandbox (v : String) : Attr Msg := .attr "sandbox" v
def srcdoc (v : String) : Attr Msg := .attr "srcdoc" v
def datetime (v : String) : Attr Msg := .attr "datetime" v
def spellcheck (v : String) : Attr Msg := .attr "spellcheck" v
def draggable (v : String) : Attr Msg := .attr "draggable" v
def contenteditable (v : String) : Attr Msg := .attr "contenteditable" v

/-! Events -/

/-- A handler for any event, with a decoder. -/
def on (event : String) (d : Decoder Msg) : Attr Msg := Attr.onWith event d
/-- A handler that calls `preventDefault()` (always: the browser needs to know
before Lean runs). -/
def preventDefaultOn (event : String) (d : Decoder Msg) : Attr Msg := Attr.onWith event d (preventDefault := true)
def stopPropagationOn (event : String) (d : Decoder Msg) : Attr Msg := Attr.onWith event d (stopPropagation := true)

def onClick (msg : Msg) : Attr Msg := on "click" (.succeed msg)
def onDoubleClick (msg : Msg) : Attr Msg := on "dblclick" (.succeed msg)
def onMouseDown (msg : Msg) : Attr Msg := on "mousedown" (.succeed msg)
def onMouseUp (msg : Msg) : Attr Msg := on "mouseup" (.succeed msg)
def onMouseEnter (msg : Msg) : Attr Msg := on "mouseenter" (.succeed msg)
def onMouseLeave (msg : Msg) : Attr Msg := on "mouseleave" (.succeed msg)
def onMouseOver (msg : Msg) : Attr Msg := on "mouseover" (.succeed msg)
def onMouseOut (msg : Msg) : Attr Msg := on "mouseout" (.succeed msg)
def onFocus (msg : Msg) : Attr Msg := on "focus" (.succeed msg)
def onBlur (msg : Msg) : Attr Msg := on "blur" (.succeed msg)
/-- `input` events, with the input's value. -/
def onInput (f : String → Msg) : Attr Msg := on "input" (Decoder.targetValue.map f)
/-- `change` events, with the value. -/
def onChange (f : String → Msg) : Attr Msg := on "change" (Decoder.targetValue.map f)
/-- Checkbox changes, with `checked`. -/
def onCheck (f : Bool → Msg) : Attr Msg := on "change" (Decoder.targetChecked.map f)
/-- Form submission (prevents the page load). -/
def onSubmit (msg : Msg) : Attr Msg := preventDefaultOn "submit" (.succeed msg)
def onKeyDown (f : String → Msg) : Attr Msg := on "keydown" (Decoder.key.map f)
def onKeyUp (f : String → Msg) : Attr Msg := on "keyup" (Decoder.key.map f)
/-- Enter pressed in the element. -/
def onEnter (msg : Msg) : Attr Msg := on "keydown" ((Decoder.key.filter (· == "Enter")).map fun _ => msg)
/-- Escape pressed in the element. -/
def onEscape (msg : Msg) : Attr Msg := on "keydown" ((Decoder.key.filter (· == "Escape")).map fun _ => msg)

/-! SVG -/

namespace Svg

def node (tag : String) (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg :=
  .elem .svg tag none attrs children

/-- The SVG element names `html!` accepts inside `<svg>`. -/
def tags : List String := ["svg", "g", "defs", "symbol", "use", "path", "rect", "circle", "ellipse", "line", "polyline", "polygon", "text", "tspan", "textPath", "marker", "pattern", "clipPath", "mask", "linearGradient", "radialGradient", "stop", "filter", "feGaussianBlur", "feOffset", "feBlend", "feColorMatrix", "feMerge", "feMergeNode", "foreignObject", "image", "title", "desc", "animate", "animateTransform"]

def svg (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "svg" none attrs children
def g (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "g" none attrs children
def defs (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "defs" none attrs children
def symbol (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "symbol" none attrs children
def use_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "use" none attrs children
def path (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "path" none attrs children
def rect (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "rect" none attrs children
def circle (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "circle" none attrs children
def ellipse (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "ellipse" none attrs children
def line (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "line" none attrs children
def polyline (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "polyline" none attrs children
def polygon (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "polygon" none attrs children
def text_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "text" none attrs children
def tspan (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "tspan" none attrs children
def textPath (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "textPath" none attrs children
def marker (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "marker" none attrs children
def pattern (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "pattern" none attrs children
def clipPath (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "clipPath" none attrs children
def mask (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "mask" none attrs children
def linearGradient (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "linearGradient" none attrs children
def radialGradient (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "radialGradient" none attrs children
def stop_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "stop" none attrs children
def filter_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "filter" none attrs children
def feGaussianBlur (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feGaussianBlur" none attrs children
def feOffset (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feOffset" none attrs children
def feBlend (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feBlend" none attrs children
def feColorMatrix (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feColorMatrix" none attrs children
def feMerge (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feMerge" none attrs children
def feMergeNode (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "feMergeNode" none attrs children
def foreignObject (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "foreignObject" none attrs children
def image (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "image" none attrs children
def title_ (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "title" none attrs children
def desc (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "desc" none attrs children
def animate (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "animate" none attrs children
def animateTransform (attrs : List (Attr Msg)) (children : List (Html Msg)) : Html Msg := .elem .svg "animateTransform" none attrs children

def viewBox (v : String) : Attr Msg := .attr "viewBox" v
def d (v : String) : Attr Msg := .attr "d" v
def fill (v : String) : Attr Msg := .attr "fill" v
def stroke (v : String) : Attr Msg := .attr "stroke" v
def cx (v : String) : Attr Msg := .attr "cx" v
def cy (v : String) : Attr Msg := .attr "cy" v
def r (v : String) : Attr Msg := .attr "r" v
def rx (v : String) : Attr Msg := .attr "rx" v
def ry (v : String) : Attr Msg := .attr "ry" v
def x (v : String) : Attr Msg := .attr "x" v
def y (v : String) : Attr Msg := .attr "y" v
def x1 (v : String) : Attr Msg := .attr "x1" v
def y1 (v : String) : Attr Msg := .attr "y1" v
def x2 (v : String) : Attr Msg := .attr "x2" v
def y2 (v : String) : Attr Msg := .attr "y2" v
def points (v : String) : Attr Msg := .attr "points" v
def transform (v : String) : Attr Msg := .attr "transform" v
def opacity (v : String) : Attr Msg := .attr "opacity" v
def offset (v : String) : Attr Msg := .attr "offset" v
def strokeWidth (v : String) : Attr Msg := .attr "stroke-width" v
def fillOpacity (v : String) : Attr Msg := .attr "fill-opacity" v
def strokeLinecap (v : String) : Attr Msg := .attr "stroke-linecap" v
def strokeDasharray (v : String) : Attr Msg := .attr "stroke-dasharray" v
def textAnchor (v : String) : Attr Msg := .attr "text-anchor" v
def fontSize (v : String) : Attr Msg := .attr "font-size" v
def width (v : String) : Attr Msg := .attr "width" v
def height (v : String) : Attr Msg := .attr "height" v

end Svg

end Lasm.UI
