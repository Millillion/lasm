/-
Lasm.Web DOM: the document, creating and finding nodes, the tree, attributes,
classes, styles and properties. Each operation is one call into JavaScript
(`lasm:web`, src/lasm-modules/web.mjs). For whole views, `Lasm.UI` diffs in Lean
and applies one patch per frame instead.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- The page's window. -/
@[js "lasm:web" "window"] opaque window : IO Window
/-- The page's document. -/
@[js "lasm:web" "document"] opaque document : IO Document

/-- `document.createElement(tag)`: an HTML element. -/
@[js "lasm:web" "createElement"] opaque createElement : String → IO Element
/-- `document.createElementNS(namespace, tag)`: an SVG or MathML element. -/
@[js "lasm:web" "createElementNS"] opaque createElementNS : String → String → IO Element
/-- The SVG namespace, for `createElementNS`. -/
def svgNamespace : String := "http://www.w3.org/2000/svg"
/-- A text node. -/
@[js "lasm:web" "createTextNode"] opaque createTextNode : String → IO Text
/-- An empty document fragment. -/
@[js "lasm:web" "createFragment"] opaque createFragment : IO Fragment

/-- `document.getElementById(id)`. -/
@[js "lasm:web" "getElementById"] opaque getElementById : String → IO (Option Element)
@[js "lasm:web" "querySelector"] opaque querySelectorIn : String → Option Node → IO (Option Element)
@[js "lasm:web" "querySelectorAll"] opaque querySelectorAllIn : String → Option Node → IO (Array Element)
/-- The first element of the document matching a CSS selector. -/
def querySelector (selector : String) : IO (Option Element) := querySelectorIn selector none
/-- Every element of the document matching a CSS selector, in document order. -/
def querySelectorAll (selector : String) : IO (Array Element) := querySelectorAllIn selector none

namespace Raw
@[js "lasm:web" "appendChild"] opaque appendChild : Node → Node → IO Unit
@[js "lasm:web" "insertBefore"] opaque insertBefore : Node → Node → Option Node → IO Unit
@[js "lasm:web" "removeChild"] opaque removeChild : Node → Node → IO Unit
@[js "lasm:web" "removeNode"] opaque removeNode : Node → IO Unit
@[js "lasm:web" "replaceNode"] opaque replaceNode : Node → Node → IO Unit
@[js "lasm:web" "append"] opaque append : Node → Array Node → IO Unit
@[js "lasm:web" "replaceChildren"] opaque replaceChildren : Node → Array Node → IO Unit
@[js "lasm:web" "getText"] opaque getText : Node → IO String
@[js "lasm:web" "setText"] opaque setText : Node → String → IO Unit
@[js "lasm:web" "parentNode"] opaque parentNode : Node → IO (Option Node)
@[js "lasm:web" "parentElement"] opaque parentElement : Node → IO (Option Element)
@[js "lasm:web" "firstChild"] opaque firstChild : Node → IO (Option Node)
@[js "lasm:web" "lastChild"] opaque lastChild : Node → IO (Option Node)
@[js "lasm:web" "nextSibling"] opaque nextSibling : Node → IO (Option Node)
@[js "lasm:web" "previousSibling"] opaque previousSibling : Node → IO (Option Node)
@[js "lasm:web" "childNodes"] opaque childNodes : Node → IO (Array Node)
@[js "lasm:web" "contains"] opaque contains : Node → Node → IO Bool
@[js "lasm:web" "cloneNode"] opaque cloneNode : Node → Bool → IO Node
@[js "lasm:web" "isConnected"] opaque isConnected : Node → IO Bool
@[js "lasm:web" "nodeName"] opaque nodeName : Node → IO String
@[js "lasm:web" "tagName"] opaque tagName : Element → IO String
@[js "lasm:web" "children"] opaque children : Element → IO (Array Element)
@[js "lasm:web" "getAttribute"] opaque getAttribute : Element → String → IO (Option String)
@[js "lasm:web" "setAttribute"] opaque setAttribute : Element → String → String → IO Unit
@[js "lasm:web" "setAttributes"] opaque setAttributes : Element → Array (String × String) → IO Unit
@[js "lasm:web" "removeAttribute"] opaque removeAttribute : Element → String → IO Unit
@[js "lasm:web" "hasAttribute"] opaque hasAttribute : Element → String → IO Bool
@[js "lasm:web" "toggleAttribute"] opaque toggleAttribute : Element → String → Option Bool → IO Bool
@[js "lasm:web" "classAdd"] opaque classAdd : Element → Array String → IO Unit
@[js "lasm:web" "classRemove"] opaque classRemove : Element → Array String → IO Unit
@[js "lasm:web" "classToggle"] opaque classToggle : Element → String → Option Bool → IO Bool
@[js "lasm:web" "classContains"] opaque classContains : Element → String → IO Bool
@[js "lasm:web" "setStyles"] opaque setStyles : Element → Array (String × String) → IO Unit
@[js "lasm:web" "removeStyle"] opaque removeStyle : Element → String → IO Unit
@[js "lasm:web" "style"] opaque style : Element → String → IO String
@[js "lasm:web" "getInnerHTML"] opaque getInnerHTML : Element → IO String
@[js "lasm:web" "setInnerHTML"] opaque setInnerHTML : Element → String → IO Unit
@[js "lasm:web" "getValue"] opaque getValue : Element → IO String
@[js "lasm:web" "setValue"] opaque setValue : Element → String → IO Unit
@[js "lasm:web" "getChecked"] opaque getChecked : Element → IO Bool
@[js "lasm:web" "setChecked"] opaque setChecked : Element → Bool → IO Unit
@[js "lasm:web" "focus"] opaque focus : Element → IO Unit
@[js "lasm:web" "blur"] opaque blur : Element → IO Unit
@[js "lasm:web" "click"] opaque click : Element → IO Unit
@[js "lasm:web" "scrollIntoView"] opaque scrollIntoView : Element → Bool → IO Unit
@[js "lasm:web" "getProp"] opaque getProp : Value → String → IO Data
@[js "lasm:web" "getProp"] opaque getPropValue : Value → String → IO Value
@[js "lasm:web" "setProp"] opaque setProp : Value → String → Data → IO Unit
end Raw

/-- An element's position and size in the viewport (`getBoundingClientRect`). -/
structure Rect where
  x : Float
  y : Float
  width : Float
  height : Float
  top : Float
  right : Float
  bottom : Float
  left : Float
  deriving FromJS, Inhabited, Repr

@[js "lasm:web" "rect"] opaque rectOf : Element → IO Rect

namespace Node
/-- Appends `child` as the last child (moving it if it is already in the document). -/
def appendChild (parent child : Node) : IO Unit := Raw.appendChild parent child
/-- Appends several nodes in one call. -/
def append (parent : Node) (children : Array Node) : IO Unit := Raw.append parent children
/-- Inserts `child` before `reference` (at the end when it is `none`). -/
def insertBefore (parent child : Node) (reference : Option Node) : IO Unit := Raw.insertBefore parent child reference
/-- Removes `child` from `parent`. -/
def removeChild (parent child : Node) : IO Unit := Raw.removeChild parent child
/-- Removes the node from its parent. -/
def remove (node : Node) : IO Unit := Raw.removeNode node
/-- Puts `replacement` where the node is. -/
def replaceWith (node replacement : Node) : IO Unit := Raw.replaceNode node replacement
/-- Replaces every child with `children`. -/
def replaceChildren (parent : Node) (children : Array Node := #[]) : IO Unit := Raw.replaceChildren parent children
/-- `textContent`. -/
def textContent (node : Node) : IO String := Raw.getText node
/-- Sets `textContent`, replacing the children with one text node. -/
def setTextContent (node : Node) (text : String) : IO Unit := Raw.setText node text
def parentNode (node : Node) : IO (Option Node) := Raw.parentNode node
def parentElement (node : Node) : IO (Option Element) := Raw.parentElement node
def firstChild (node : Node) : IO (Option Node) := Raw.firstChild node
def lastChild (node : Node) : IO (Option Node) := Raw.lastChild node
def nextSibling (node : Node) : IO (Option Node) := Raw.nextSibling node
def previousSibling (node : Node) : IO (Option Node) := Raw.previousSibling node
/-- The child nodes, in order. -/
def childNodes (node : Node) : IO (Array Node) := Raw.childNodes node
/-- Whether `other` is the node or one of its descendants. -/
def contains (node other : Node) : IO Bool := Raw.contains node other
/-- A copy of the node (with its descendants when `deep`). -/
def cloneNode (node : Node) (deep : Bool := true) : IO Node := Raw.cloneNode node deep
/-- Whether the node is in a document. -/
def isConnected (node : Node) : IO Bool := Raw.isConnected node
/-- `nodeName`: `DIV`, `#text`, `#document`, … -/
def nodeName (node : Node) : IO String := Raw.nodeName node
/-- The first descendant element matching a CSS selector. -/
def querySelector (node : Node) (selector : String) : IO (Option Element) := querySelectorIn selector (some node)
/-- Every descendant element matching a CSS selector. -/
def querySelectorAll (node : Node) (selector : String) : IO (Array Element) := querySelectorAllIn selector (some node)
end Node

namespace Element
/-- The tag name, upper case for HTML elements (`DIV`). -/
def tagName (e : Element) : IO String := Raw.tagName e
/-- The child elements, in order. -/
def children (e : Element) : IO (Array Element) := Raw.children e
def getAttribute (e : Element) (name : String) : IO (Option String) := Raw.getAttribute e name
def setAttribute (e : Element) (name value : String) : IO Unit := Raw.setAttribute e name value
/-- Sets several attributes in one call. -/
def setAttributes (e : Element) (attributes : Array (String × String)) : IO Unit := Raw.setAttributes e attributes
def removeAttribute (e : Element) (name : String) : IO Unit := Raw.removeAttribute e name
def hasAttribute (e : Element) (name : String) : IO Bool := Raw.hasAttribute e name
/-- Adds or removes a boolean attribute; returns whether it is now present. -/
def toggleAttribute (e : Element) (name : String) (force : Option Bool := none) : IO Bool := Raw.toggleAttribute e name force
/-- `id`. -/
def id (e : Element) : IO String := do return (← Raw.getAttribute e "id").getD ""
def setId (e : Element) (id : String) : IO Unit := Raw.setAttribute e "id" id
/-- `data-<key>` attributes (`dataset`). -/
def data (e : Element) (key : String) : IO (Option String) := Raw.getAttribute e ("data-" ++ key)
def setData (e : Element) (key value : String) : IO Unit := Raw.setAttribute e ("data-" ++ key) value
/-- Adds classes (`classList.add`). -/
def addClass (e : Element) (names : Array String) : IO Unit := Raw.classAdd e names
/-- Removes classes (`classList.remove`). -/
def removeClass (e : Element) (names : Array String) : IO Unit := Raw.classRemove e names
/-- Toggles a class (forced on or off with `force`); returns whether it is now present. -/
def toggleClass (e : Element) (name : String) (force : Option Bool := none) : IO Bool := Raw.classToggle e name force
def hasClass (e : Element) (name : String) : IO Bool := Raw.classContains e name
/-- Sets the `class` attribute. -/
def setClassName (e : Element) (names : String) : IO Unit := Raw.setAttribute e "class" names
/-- Sets an inline style property (`style.setProperty`), such as `("color", "red")` or a custom property `--x`. -/
def setStyle (e : Element) (property value : String) : IO Unit := Raw.setStyles e #[(property, value)]
/-- Sets several inline style properties in one call. -/
def setStyles (e : Element) (properties : Array (String × String)) : IO Unit := Raw.setStyles e properties
def removeStyle (e : Element) (property : String) : IO Unit := Raw.removeStyle e property
/-- An inline style property's value (empty when unset). -/
def style (e : Element) (property : String) : IO String := Raw.style e property
def innerHTML (e : Element) : IO String := Raw.getInnerHTML e
/-- Sets `innerHTML`. The string is parsed as HTML: never pass untrusted text (use `setTextContent`). -/
def setInnerHTML (e : Element) (html : String) : IO Unit := Raw.setInnerHTML e html
/-- `value` of an input, select or text area. -/
def value (e : Element) : IO String := Raw.getValue e
def setValue (e : Element) (value : String) : IO Unit := Raw.setValue e value
/-- `checked` of a checkbox or radio button. -/
def checked (e : Element) : IO Bool := Raw.getChecked e
def setChecked (e : Element) (checked : Bool) : IO Unit := Raw.setChecked e checked
def focus (e : Element) : IO Unit := Raw.focus e
def blur (e : Element) : IO Unit := Raw.blur e
def click (e : Element) : IO Unit := Raw.click e
def scrollIntoView (e : Element) (smooth : Bool := false) : IO Unit := Raw.scrollIntoView e smooth
/-- The element's position and size in the viewport. -/
def rect (e : Element) : IO Rect := rectOf e
/-- Any property (`disabled`, `selectedIndex`, `naturalWidth`, …), converted to `α`. -/
def prop (e : Element) (name : String) (α : Type := Data) [FromJS α] : IO α := do
  decodeAs α s!"property {name}" (← Raw.getProp e.val name)
/-- Sets any property. -/
def setProp [ToJS α] (e : Element) (name : String) (x : α) : IO Unit := Raw.setProp e.val name (toJS x)
end Element

namespace Document
/-- `document.body`. -/
def body (_ : Document) : IO Element := do
  match ← querySelector "body" with
  | some b => pure b
  | none => throw (IO.userError "Lasm.Web: the document has no body")
/-- `document.head`. -/
def head (_ : Document) : IO Element := do
  match ← querySelector "head" with
  | some h => pure h
  | none => throw (IO.userError "Lasm.Web: the document has no head")
/-- `document.title`. -/
def title (d : Document) : IO String := do decodeAs String "document.title" (← Raw.getProp d.val "title")
def setTitle (d : Document) (title : String) : IO Unit := Raw.setProp d.val "title" (toJS title)
/-- The element that has the focus, if any. -/
def activeElement (d : Document) : IO (Option Element) := do
  decodeAs (Option Element) "document.activeElement" (← Raw.getProp d.val "activeElement")
end Document

end Lasm.Web
