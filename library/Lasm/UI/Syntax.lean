/-
`html!`: JSX-like markup for `Html Msg`, checked while Lean elaborates.

    html! <div class="todo" onClick={.toggle id}>
            <input type="checkbox" checked={done} />
            <label>{todo.title}</label>
            {if editing then [editor] else []}
          </div>

* Elements: `<tag attr…>children</tag>` or `<tag attr… />`. Tags are checked:
  HTML elements, SVG elements inside `<svg>` (created in the SVG namespace),
  and custom elements (names with `-`). Void elements (`input`, `br`, …) take
  no children; closing tags must match.
* Attributes: `name="text"`, `name={term}`, or a bare `name` (true / present).
  `value`, `checked`, `selected`, `disabled`, `hidden`, `readonly`, `required`,
  `multiple`, `autofocus` and `innerHTML` are DOM properties; `key={k}` keys the
  element; `style={[("color", c)]}` sets inline styles; `onClick={msg}`,
  `onInput={f}`, … are handlers (any `onEventName={decoder}` works); `{attrs}`
  splices a list of attributes.
* Children: text (whitespace is collapsed as in JSX), elements, and `{term}`
  where the term is an `Html Msg`, a list or array of them, an `Option`, a
  `String` (a text node) or a number.

This module only runs while Lean elaborates (it imports Lean's parser); Lasm's
initializer planning keeps it out of the Wasm program.
-/
import Lean.Parser
import Lean.Elab.SyntheticMVars
import Lasm.UI.Html
import Lasm.UI.Elements

namespace Lasm.UI

/-- Attribute values given as `{term}`. -/
class ToAttrValue (α : Type) where
  toAttrValue : α → String

instance : ToAttrValue String := ⟨id⟩
instance : ToAttrValue Nat := ⟨toString⟩
instance : ToAttrValue Int := ⟨toString⟩
instance : ToAttrValue Float := ⟨toString⟩

/-- Inline styles from `style={[("color", "red")]}`. -/
def stylesOf (l : List (String × String)) : List (Attr Msg) := l.map fun (n, v) => .style n v

namespace Syntax
open Lean Parser

/-- Characters that end JSX text. -/
def textStop (c : Char) : Bool := c == '<' || c == '>' || c == '{' || c == '}' || c == '$'

/-- Plain text between tags. -/
def jsxText : Parser :=
  withAntiquot (mkAntiquot "jsxText" `Lasm.UI.Syntax.jsxText) {
    fn := fun c s =>
      let startPos := s.pos
      let s := takeWhile1Fn (fun c => !textStop c) "text" c s
      mkNodeToken `Lasm.UI.Syntax.jsxText startPos true c s }

def nameChar (c : Char) : Bool := c.isAlphanum || c == '-' || c == '_' || c == ':' || c == '.'

/-- A tag or attribute name: letters, digits, `-`, `_`, `:` and `.`. -/
def jsxName : Parser :=
  withAntiquot (mkAntiquot "jsxName" `Lasm.UI.Syntax.jsxName) {
    fn := fun c s =>
      let startPos := s.pos
      if c.atEnd startPos then s.mkEOIError
      else
        let ch := c.get startPos
        if !(ch.isAlpha || ch == '_') then s.mkUnexpectedError "expected a tag or attribute name"
        else
          let s := takeWhileFn nameChar c (s.next c startPos)
          mkNodeToken `Lasm.UI.Syntax.jsxName startPos true c s }

@[combinator_formatter jsxText] def jsxText.formatter : PrettyPrinter.Formatter := pure ()
@[combinator_parenthesizer jsxText] def jsxText.parenthesizer : PrettyPrinter.Parenthesizer := pure ()
@[combinator_formatter jsxName] def jsxName.formatter : PrettyPrinter.Formatter := pure ()
@[combinator_parenthesizer jsxName] def jsxName.parenthesizer : PrettyPrinter.Parenthesizer := pure ()

declare_syntax_cat jsxElement
declare_syntax_cat jsxChild
declare_syntax_cat jsxAttr

syntax jsxAttrVal := str <|> group("{" term "}")
syntax (name := attrValue) jsxName "=" jsxAttrVal : jsxAttr
syntax (name := attrSplice) "{" term "}" : jsxAttr
syntax (name := attrFlag) jsxName : jsxAttr

syntax (name := selfClosing) "<" jsxName jsxAttr* "/>" : jsxElement
syntax (name := withChildren) "<" jsxName jsxAttr* ">" jsxChild* "</" jsxName ">" : jsxElement

syntax (name := childText) jsxText : jsxChild
syntax (name := childTerm) "{" term "}" : jsxChild
syntax (name := childElement) jsxElement : jsxChild

/-- JSX-like markup for `Html Msg` (see `Lasm.UI.Syntax`). -/
syntax (name := htmlTerm) "html!" jsxElement : term

/-- The children `{t}` stands for in `html!`: `t` is an `Html Msg`, a list,
array or option of them, a `String` (a text node) or a number. -/
syntax (name := childrenTerm) "lasm_children% " term:max : term
/-- The attributes `{t}` stands for in `html!`: an `Attr Msg`, a list or an option of them. -/
syntax (name := attrsTerm) "lasm_attrs% " term:max : term

open Elab Term Meta in
/-- Elaborates `t`, then fits it to `List (Html Msg)` (children) or `List (Attr Msg)`
(attributes) by its type, so the message type flows from the context into
nested `html!` and lambdas. -/
def elabSplice (kind : Name) (t : Syntax) (expected? : Option Expr) : TermElabM Expr := do
  let msg ← match expected? with
    | some e =>
      let e ← whnfR (← instantiateMVars e)
      if e.isAppOfArity ``List 1 then
        let inner ← whnfR (← instantiateMVars e.appArg!)
        if inner.isAppOfArity kind 1 then pure inner.appArg! else mkFreshTypeMVar
      else mkFreshTypeMVar
    | none => mkFreshTypeMVar
  let elemTy := mkApp (mkConst kind) msg
  let listTy ← mkAppM ``List #[elemTy]
  let e ← elabTerm t none
  synthesizeSyntheticMVars (postpone := .yes)
  let ty ← whnfR (← instantiateMVars (← inferType e))
  -- Not known yet (a lambda's parameter): wait until it is.
  if ty.getAppFn.isMVar then tryPostpone
  let fail {α} : TermElabM α := do
    let what := if kind == ``Lasm.UI.Html then "children must be an Html, a list, array or option of Html, a String or a number"
      else "attributes must be an Attr, a list or an option of Attr"
    throwErrorAt t m!"html!: this has type{indentExpr ty}\n{what}"
  match ty.getAppFn.constName? with
  | some c =>
    if c == kind then
      unless ← isDefEq ty elemTy do fail
      mkListLit elemTy [e]
    else if c == ``List then
      unless ← isDefEq ty listTy do fail
      return e
    else if c == ``Array then
      unless ← isDefEq ty (← mkAppM ``Array #[elemTy]) do fail
      mkAppM ``Array.toList #[e]
    else if c == ``Option then
      unless ← isDefEq ty (← mkAppM ``Option #[elemTy]) do fail
      mkAppM ``Option.toList #[e]
    else if kind == ``Lasm.UI.Html && c == ``String then
      mkListLit elemTy [mkApp2 (mkConst ``Lasm.UI.Html.text) msg e]
    else if kind == ``Lasm.UI.Html && (c == ``Nat || c == ``Int || c == ``Float || c == ``Char) then
      mkListLit elemTy [mkApp2 (mkConst ``Lasm.UI.Html.text) msg (← mkAppM ``toString #[e])]
    else fail
  | none =>
    if ← isDefEq ty listTy then return e else fail

open Elab Term in
@[term_elab childrenTerm] def elabChildren : TermElab := fun stx expected? =>
  elabSplice ``Lasm.UI.Html stx[1] expected?

open Elab Term in
@[term_elab attrsTerm] def elabAttrs : TermElab := fun stx expected? =>
  elabSplice ``Lasm.UI.Attr stx[1] expected?

def nameOf (stx : Syntax) : String :=
  match stx with
  | .node _ _ #[.atom _ v] => v
  | .atom _ v => v
  | _ => stx.getAtomVal

/-- JSX whitespace: lines are trimmed, blank lines dropped, the rest joined with
spaces; runs of spaces inside a line become one. -/
def jsxWhitespace (s : String) : String :=
  let lines := s.splitOn "\n"
  let multi := lines.length > 1
  let lines := lines.mapIdx fun i l =>
    let l := if multi && i > 0 then l.trimAsciiStart.toString else l
    let l := if multi && i + 1 < lines.length then l.trimAsciiEnd.toString else l
    l
  let lines := if multi then lines.filter (!·.isEmpty) else lines
  let joined := " ".intercalate lines
  -- collapse runs of whitespace
  let (out, _) := joined.foldl (init := ("", false)) fun (out, sp) c =>
    if c.isWhitespace then (if sp then (out, true) else (out.push ' ', true)) else (out.push c, false)
  out

/-- Decodes `&amp;`, `&lt;`, `&gt;`, `&quot;`, `&apos;`, `&nbsp;`, `&#N;` and
`&#xH;` in text, as JSX does. -/
def decodeEntities (s : String) : String := Id.run do
  if !s.contains '&' then return s
  let parts := s.splitOn "&"
  let mut out := parts.head!
  for p in parts.tail! do
    match p.splitOn ";" with
    | name :: rest@(_ :: _) =>
      let tail := ";".intercalate rest
      let decoded : Option String := match name with
        | "amp" => some "&" | "lt" => some "<" | "gt" => some ">" | "quot" => some "\""
        | "apos" => some "'" | "nbsp" => some "\u00A0" | "copy" => some "©" | "mdash" => some "—"
        | "ndash" => some "–" | "hellip" => some "…" | "times" => some "×" | "rarr" => some "→" | "larr" => some "←"
        | n =>
          if n.startsWith "#x" || n.startsWith "#X" then
            (n.drop 2).toString.foldl (fun acc c => acc.bind fun v =>
              if c.isDigit then some (v * 16 + (c.toNat - '0'.toNat))
              else if 'a' ≤ c.toLower ∧ c.toLower ≤ 'f' then some (v * 16 + (c.toLower.toNat - 'a'.toNat + 10))
              else none) (some 0) |>.map fun v => (Char.ofNat v).toString
          else if n.startsWith "#" then ((n.drop 1).toString.toNat?).map fun v => (Char.ofNat v).toString
          else none
      match decoded with
      | some d => out := out ++ d ++ tail
      | none => out := out ++ "&" ++ p
    | _ => out := out ++ "&" ++ p
  return out

def boolProps : List (String × String) :=
  [("checked", "checked"), ("selected", "selected"), ("disabled", "disabled"), ("hidden", "hidden"),
   ("readonly", "readOnly"), ("readOnly", "readOnly"), ("required", "required"), ("multiple", "multiple"),
   ("autofocus", "autofocus"), ("open", "open"), ("muted", "muted"), ("controls", "controls"),
   ("autoplay", "autoplay"), ("loop", "loop"), ("novalidate", "noValidate")]

def stringProps : List (String × String) :=
  [("value", "value"), ("innerHTML", "innerHTML"), ("textContent", "textContent")]

/-- Events with a helper in Lasm.UI (`onInput={f}` takes a function, `onClick={msg}` a message). -/
def eventHelpers : List String :=
  ["onClick", "onDoubleClick", "onMouseDown", "onMouseUp", "onMouseEnter", "onMouseLeave", "onMouseOver",
   "onMouseOut", "onFocus", "onBlur", "onInput", "onChange", "onCheck", "onSubmit", "onKeyDown", "onKeyUp",
   "onEnter", "onEscape"]

def isEventName (n : String) : Bool :=
  n.length > 2 && n.startsWith "on" && (n.toList[2]?.map Char.isUpper).getD false

def lowerFirst (s : String) : String :=
  match s.toList with
  | c :: cs => String.ofList (c.toLower :: cs)
  | [] => s

/-- The terms for one attribute, and the key if it is `key`. -/
def expandAttr (a : Syntax) : MacroM (Option Term × Option Term) := do
  match a with
  | `(jsxAttr| { $t:term }) => return (some (← `(lasm_attrs% $t)), none)
  | `(jsxAttr| $n:jsxName) =>
    let name := nameOf n
    if let some p := boolProps.lookup name then
      return (some (← `([Lasm.UI.Attr.prop $(quote p) (.bool true)])), none)
    if name == "key" || isEventName name then
      Macro.throwErrorAt a s!"{name} needs a value: {name}=\{…}"
    return (some (← `([Lasm.UI.Attr.attr $(quote name) ""])), none)
  | `(jsxAttr| $n:jsxName = $v:jsxAttrVal) =>
    let name := nameOf n
    let strVal? : Option (TSyntax `str) := match v.raw[0] with
      | s@(.node _ `str _) => some ⟨s⟩
      | _ => none
    let termVal? : Option Term := match v.raw[0] with
      | .node _ _ #[_, t, _] => if t.getKind == `str then none else some ⟨t⟩
      | _ => none
    let termVal? := if strVal?.isSome then none else termVal?
    if name == "key" then
      match strVal?, termVal? with
      | some s, _ => return (none, some s)
      | _, some t => return (none, some (← `(Lasm.UI.ToAttrValue.toAttrValue $t)))
      | _, _ => Macro.throwErrorAt v "bad key"
    if name.startsWith "on" && name.length > 2 && !isEventName name then
      Macro.throwErrorAt n s!"event attributes are written in camel case: on{(name.drop 2).toString.capitalize}=\{…}"
    if isEventName name then
      let some t := termVal? | Macro.throwErrorAt v s!"{name} takes a Lean value: {name}=\{…}"
      if eventHelpers.contains name then
        let f := mkIdent (Name.mkStr (Name.mkStr (Name.mkSimple "Lasm") "UI") name)
        return (some (← `([$f $t])), none)
      let event := (lowerFirst (name.drop 2).toString).toLower
      return (some (← `([Lasm.UI.on $(quote event) $t])), none)
    if let some p := boolProps.lookup name then
      match termVal? with
      | some t => return (some (← `([Lasm.UI.Attr.prop $(quote p) (.bool $t)])), none)
      | none => Macro.throwErrorAt v s!"{name} is a boolean property: write {name}=\{true}, {name}=\{b} or a bare {name}"
    if let some p := stringProps.lookup name then
      match strVal?, termVal? with
      | some s, _ => return (some (← `([Lasm.UI.Attr.prop $(quote p) (.str $s)])), none)
      | _, some t => return (some (← `([Lasm.UI.Attr.prop $(quote p) (.str $t)])), none)
      | _, _ => Macro.throwErrorAt v "bad value"
    let name := if name == "className" then "class" else if name == "htmlFor" then "for" else name
    if name == "style" then
      if let some t := termVal? then return (some (← `(Lasm.UI.stylesOf $t)), none)
    match strVal?, termVal? with
    | some s, _ => return (some (← `([Lasm.UI.Attr.attr $(quote name) $s])), none)
    | _, some t => return (some (← `([Lasm.UI.Attr.attr $(quote name) (Lasm.UI.ToAttrValue.toAttrValue $t)])), none)
    | _, _ => Macro.throwErrorAt v "bad attribute value"
  | _ => Macro.throwErrorAt a "unsupported attribute"

/-- `a ++ b ++ …`, or a list literal when every part is a singleton literal. -/
def concatLists (parts : Array Term) : MacroM Term := do
  if parts.isEmpty then `([])
  else
    let mut acc := parts.back!
    for p in parts.pop.reverse do
      acc ← `($p ++ $acc)
    return acc

def nsTerm : Ns → MacroM Term
  | .html => `(Lasm.UI.Ns.html)
  | .svg => `(Lasm.UI.Ns.svg)
  | .mathml => `(Lasm.UI.Ns.mathml)

mutual
partial def expandElement (ns : Ns) (e : Syntax) : MacroM Term := do
  let (nameStx, attrs, children, closing) ← match e with
    | `(jsxElement| < $n:jsxName $as:jsxAttr* />) => pure (n.raw, as.map (·.raw), #[], none)
    | `(jsxElement| < $n:jsxName $as:jsxAttr* > $cs:jsxChild* </ $m:jsxName >) =>
      pure (n.raw, as.map (·.raw), cs.map (·.raw), some m.raw)
    | _ => Macro.throwErrorAt e "expected an element"
  let tag := nameOf nameStx
  if let some m := closing then
    if nameOf m != tag then Macro.throwErrorAt m s!"</{nameOf m}> closes <{tag}>"
  let ns := if tag == "svg" then Ns.svg else if tag == "math" then Ns.mathml else ns
  -- check the tag
  match ns with
  | .html =>
    unless htmlTags.contains tag || tag.contains '-' do
      Macro.throwErrorAt nameStx s!"unknown HTML element <{tag}> (custom elements need a `-` in their name)"
    if voidTags.contains tag && !children.isEmpty then
      Macro.throwErrorAt nameStx s!"<{tag}> is a void element and takes no children: write <{tag} … />"
  | .svg =>
    unless Svg.tags.contains tag || tag.contains '-' do
      Macro.throwErrorAt nameStx s!"unknown SVG element <{tag}>"
  | .mathml => pure ()
  let mut attrTerms := #[]
  let mut key : Option Term := none
  for a in attrs do
    let (t, k) ← expandAttr a
    if let some t := t then attrTerms := attrTerms.push t
    if let some k := k then
      if key.isSome then Macro.throwErrorAt a "the element already has a key"
      key := some k
  let childNs := if ns == .svg && tag == "foreignObject" then Ns.html else ns
  let mut childTerms := #[]
  for c in children do
    if let some t ← expandChild childNs c then childTerms := childTerms.push t
  let attrList ← concatLists attrTerms
  let childList ← concatLists childTerms
  let keyTerm ← match key with
    | some k => `(some $k)
    | none => `(none)
  `(Lasm.UI.Html.elem $(← nsTerm ns) $(quote tag) $keyTerm $attrList $childList)

partial def expandChild (ns : Ns) (c : Syntax) : MacroM (Option Term) := do
  match c with
  | `(jsxChild| $t:jsxText) =>
    let s := decodeEntities (jsxWhitespace (nameOf t))
    if s.isEmpty || s == " " then return none
    return some (← `([Lasm.UI.Html.text $(quote s)]))
  | `(jsxChild| { $t:term }) => return some (← `(lasm_children% $t))
  | `(jsxChild| $e:jsxElement) => return some (← `([$(← expandElement ns e)]))
  | _ => Macro.throwErrorAt c "unsupported child"
end

macro_rules
  | `(html! $e:jsxElement) => expandElement .html e

end Syntax

end Lasm.UI
