/-
Lasm.UI core types: `Html Msg` (elements, text, keyed children), attributes,
properties, styles and event handlers with declared decoders. Pure Lean: no
JavaScript is involved, so views can be rendered on a server
(`Lasm.UI.render`), tested natively and reasoned about in proofs.
Guide: docs/UI.md.
-/

namespace Lasm.UI

/-- The namespace an element is created in (`document.createElementNS`). -/
inductive Ns where
  | html
  | svg
  | mathml
  deriving DecidableEq, Repr, Inhabited, Hashable

/-- A value read from a DOM event by a decoder. Objects and functions arrive as
`undefined`; read their fields with longer paths instead. -/
inductive EvVal where
  | undefined
  | null
  | bool (b : Bool)
  | num (n : Float)
  | str (s : String)
  deriving Inhabited, Repr

namespace EvVal

def toString? : EvVal → Option String
  | .str s => some s
  | _ => none

def toBool? : EvVal → Option Bool
  | .bool b => some b
  | _ => none

def toFloat? : EvVal → Option Float
  | .num n => some n
  | _ => none

/-- A number that is an integer (`event.keyCode`, `event.button`, …). -/
def toInt? : EvVal → Option Int
  | .num n =>
    if n.isNaN || n.isInf || n != n.round then none
    else if n < 0 then some (-((-n).toUInt64.toNat : Int)) else some (n.toUInt64.toNat : Int)
  | _ => none

end EvVal

/-- A property value (`element[name] = value`). Numbers are passed as strings,
which the DOM converts. -/
inductive PropVal where
  | str (s : String)
  | bool (b : Bool)
  deriving DecidableEq, Repr, Inhabited, Hashable

/-- A property path read from an event object, such as `["target", "value"]`.
A path starting with `currentTarget` reads the element whose handler runs. -/
abbrev Path := List String

/-- An event decoder: the event fields it reads (declared, so the browser
encodes only those) and a pure function of their values. `none` ignores the
event (no message). -/
structure Decoder (α : Type) where
  paths : List Path
  run : List EvVal → Option α

namespace Decoder

/-- Always succeeds with `a`, reading nothing. -/
def succeed (a : α) : Decoder α := ⟨[], fun _ => some a⟩

/-- Never produces a message. -/
def fail : Decoder α := ⟨[], fun _ => none⟩

/-- Reads one property path and converts its value. -/
def field (p : Path) (f : EvVal → Option α) : Decoder α :=
  ⟨[p], fun | v :: _ => f v | [] => none⟩

def map (f : α → β) (d : Decoder α) : Decoder β := ⟨d.paths, fun vs => (d.run vs).map f⟩

/-- Combines two decoders (their paths are read together). -/
def map2 (f : α → β → γ) (d₁ : Decoder α) (d₂ : Decoder β) : Decoder γ :=
  ⟨d₁.paths ++ d₂.paths, fun vs =>
    let n := d₁.paths.length
    match d₁.run (vs.take n), d₂.run (vs.drop n) with
    | some a, some b => some (f a b)
    | _, _ => none⟩

/-- Keeps the values `f` accepts (`none` ignores the event). -/
def filterMap (f : α → Option β) (d : Decoder α) : Decoder β := ⟨d.paths, fun vs => (d.run vs).bind f⟩

/-- Keeps the values satisfying `p`. -/
def filter (p : α → Bool) (d : Decoder α) : Decoder α := d.filterMap fun a => if p a then some a else none

instance : Functor Decoder := ⟨map, fun a d => map (fun _ => a) d⟩
instance : Pure Decoder := ⟨succeed⟩
instance : Seq Decoder := ⟨fun f x => map2 (· ·) f (x ())⟩
instance : Applicative Decoder := {}

def string (p : Path) : Decoder String := field p EvVal.toString?
def bool (p : Path) : Decoder Bool := field p EvVal.toBool?
def float (p : Path) : Decoder Float := field p EvVal.toFloat?
def int (p : Path) : Decoder Int := field p EvVal.toInt?
/-- The raw value at a path (never fails). -/
def value (p : Path) : Decoder EvVal := field p some

/-- `event.target.value` (inputs, textareas, selects). -/
def targetValue : Decoder String := string ["target", "value"]
/-- `event.target.checked` (checkboxes, radio buttons). -/
def targetChecked : Decoder Bool := bool ["target", "checked"]
/-- `event.key` (`"Enter"`, `"Escape"`, `"a"`, …). -/
def key : Decoder String := string ["key"]
def ctrlKey : Decoder Bool := bool ["ctrlKey"]
def shiftKey : Decoder Bool := bool ["shiftKey"]
def altKey : Decoder Bool := bool ["altKey"]
def metaKey : Decoder Bool := bool ["metaKey"]
def clientX : Decoder Float := float ["clientX"]
def clientY : Decoder Float := float ["clientY"]
def offsetX : Decoder Float := float ["offsetX"]
def offsetY : Decoder Float := float ["offsetY"]
def button : Decoder Int := int ["button"]
def deltaY : Decoder Float := float ["deltaY"]
def timeStamp : Decoder Float := float ["timeStamp"]
/-- `event.target.dataset[name]`. -/
def dataset (name : String) : Decoder String := string ["target", "dataset", name]

end Decoder

/-- What the DOM knows of an event handler: the event, the fields its decoder
reads and its options. Diffing compares these (never the Lean function). -/
structure Listener where
  event : String
  paths : List Path
  preventDefault : Bool := false
  stopPropagation : Bool := false
  deriving DecidableEq, Repr, Inhabited, Hashable

/-- An attribute of an element: an HTML attribute (`setAttribute`), a DOM
property (`el[name] = v`), an inline style, or an event handler. -/
inductive Attr (Msg : Type) where
  | attr (name value : String)
  | prop (name : String) (value : PropVal)
  | style (name value : String)
  | on (listener : Listener) (handle : List EvVal → Option Msg)

instance : Inhabited (Attr Msg) := ⟨.attr "" ""⟩

/-- The DOM slot an attribute occupies; a later attribute for the same slot
wins, as with repeated `setAttribute` calls. -/
inductive AttrKey where
  | attr (name : String)
  | prop (name : String)
  | style (name : String)
  | on (event : String)
  deriving DecidableEq, Repr, Inhabited, Hashable

/-- The DOM-visible value of an attribute (handlers without their function). -/
inductive AttrVal where
  | str (s : String)
  | prop (v : PropVal)
  | listener (l : Listener)
  deriving DecidableEq, Repr, Inhabited

namespace Attr

def key : Attr Msg → AttrKey
  | .attr n _ => .attr n
  | .prop n _ => .prop n
  | .style n _ => .style n
  | .on l _ => .on l.event

def val : Attr Msg → AttrVal
  | .attr _ v => .str v
  | .prop _ v => .prop v
  | .style _ v => .str v
  | .on l _ => .listener l

/-- Maps the messages an attribute's handler produces. -/
def map (f : α → β) : Attr α → Attr β
  | .attr n v => .attr n v
  | .prop n v => .prop n v
  | .style n v => .style n v
  | .on l h => .on l fun vs => (h vs).map f

/-- An event handler from a decoder. -/
def onWith (event : String) (d : Decoder Msg) (preventDefault stopPropagation : Bool := false) : Attr Msg :=
  .on { event, paths := d.paths, preventDefault, stopPropagation } d.run

end Attr

/-- A virtual DOM tree producing messages of type `Msg`. `key` identifies an
element among its siblings across renders (keyed children). -/
inductive Html (Msg : Type) where
  | text (s : String)
  | elem (ns : Ns) (tag : String) (key : Option String) (attrs : List (Attr Msg)) (children : List (Html Msg))

instance : Inhabited (Html Msg) := ⟨.text ""⟩

namespace Html

/-- Gives an element a key, so it keeps its DOM node (and state such as focus
and scroll position) when its siblings are reordered, inserted or removed. -/
def keyed (k : String) : Html Msg → Html Msg
  | .elem ns tag _ attrs children => .elem ns tag (some k) attrs children
  | h => h

/-- Maps the messages a view produces (embedding a component's view). -/
def map (f : α → β) : Html α → Html β
  | .text s => .text s
  | .elem ns tag key attrs children =>
    .elem ns tag key (attrs.map (Attr.map f)) (children.attach.map fun ⟨c, _⟩ => map f c)
termination_by h => sizeOf h
decreasing_by simp_wf; have := List.sizeOf_lt_of_mem ‹_›; omega

/-- Number of nodes. -/
def size : Html Msg → Nat
  | .text _ => 1
  | .elem _ _ _ _ children => (children.attach.map fun ⟨c, _⟩ => size c).sum + 1
termination_by h => sizeOf h
decreasing_by simp_wf; have := List.sizeOf_lt_of_mem ‹_›; omega

end Html

instance : Functor Html := ⟨Html.map, fun b h => Html.map (fun _ => b) h⟩

end Lasm.UI
