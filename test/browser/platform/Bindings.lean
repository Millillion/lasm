/-
Conformance checks for the browser tier of Lasm.JS.Web (docs/JS_BINDINGS.md,
"The browser tier"; scripts/bindings/web-browser.mjs), part of the platform
suite (Main.lean): run on Chromium, Firefox and WebKit by
scripts/browser/browser-ci.mjs, each check reported as `bindings.<name>`.

Every check is a property: the comment above it states the Lean proposition it
checks, over generated inputs (a seeded generator, so a failure is
reproducible), against a Lean model (a list, an association list, a string
function) or the specification's stated behaviour. They are properties of the
browsers behind the bindings, which Lean has no model of, so (as for tier 1's
test/fixtures/js-web, docs/TESTING_STRATEGY.md §4) they stay comments rather
than `Candidates.lean` definitions.

The availability probe looks up every generated member on the browser and
writes the missing ones to `#bindings-missing` (reported, never a failure).
-/
import Std.Async
import Lasm.JS
import Lasm.JS.Web.Browser
import Surface
open Lasm.JS Lasm.JS.Web

namespace Bindings

/-- How a check's outcome is recorded (Main.lean's `record`). -/
abbrev Record := String → Bool → String → IO Unit

def check (record : Record) (name : String) (body : IO (Bool × String)) : IO Unit := do
  match ← body.toBaseIO with
  | .ok (ok, detail) => record s!"bindings.{name}" ok detail
  | .error e => record s!"bindings.{name}" false s!"error: {e}"

def checkAsync (record : Record) (name : String) (body : Async (Bool × String)) : Async Unit := do
  try
    let (ok, detail) ← body
    record s!"bindings.{name}" ok detail
  catch e => record s!"bindings.{name}" false s!"error: {e}"

/-! Generated inputs -/

structure Rng where
  state : UInt64

def Rng.next (g : Rng) : Nat × Rng :=
  let s := g.state * 6364136223846793005 + 1442695040888963407
  ((s >>> 33).toNat, ⟨s⟩)
def Rng.below (g : Rng) (n : Nat) : Nat × Rng := let (x, g) := g.next; (x % n, g)
/-- A random Unicode scalar value: ASCII, Latin-1, the BMP outside surrogates, or astral. -/
def Rng.char (g : Rng) : Char × Rng := Id.run do
  let (kind, g) := g.below 4
  let (x, g) := g.next
  let n := match kind with
    | 0 => 32 + x % 95
    | 1 => 160 + x % 96
    | 2 => let v := 256 + x % (0xFFFE - 256); if 0xD800 ≤ v ∧ v ≤ 0xDFFF then v - 0x800 else v
    | _ => 0x10000 + x % 0x100000
  return (Char.ofNat n, g)
def Rng.string (g : Rng) (maxLength : Nat) : String × Rng := Id.run do
  let (n, g) := g.below (maxLength + 1)
  let mut g := g
  let mut s := ""
  for _ in [0:n] do
    let (c, g') := g.char
    s := s.push c; g := g'
  return (s, g)
def Rng.bool (g : Rng) : Bool × Rng := let (x, g) := g.below 2; (x == 1, g)

/-- A generator in a reference, for loops in `IO`. -/
abbrev Gen := IO.Ref Rng
def Gen.below (g : Gen) (n : Nat) : IO Nat := g.modifyGet fun r => r.below n
def Gen.string (g : Gen) (maxLength : Nat) : IO String := g.modifyGet fun r => r.string maxLength
def Gen.bool (g : Gen) : IO Bool := g.modifyGet Rng.bool
def gen (seed : UInt64) : IO Gen := IO.mkRef ⟨seed⟩

/-! Lean models -/

/-- UTF-16 code units of a string: what JavaScript's `length` counts. -/
def utf16Length (s : String) : Nat := s.foldl (fun n c => n + if c.val > 0xFFFF then 2 else 1) 0

/-- HTML's serialization of text in an element (HTML Standard, "escaping a string", not in attribute mode). -/
def escapeText (s : String) : String :=
  s.foldl (fun acc c => acc ++ match c with
    | '&' => "&amp;" | '<' => "&lt;" | '>' => "&gt;" | ' ' => "&nbsp;" | c => c.toString) ""

/-- An association list keeping insertion order. -/
def assocSet (m : List (String × String)) (k v : String) : List (String × String) :=
  if m.any (·.1 == k) then m.map fun (a, b) => if a == k then (a, v) else (a, b) else m ++ [(k, v)]
def assocErase (m : List (String × String)) (k : String) : List (String × String) := m.filter (·.1 != k)

/-- Equality of copied JavaScript data. -/
partial def dataEq : Data → Data → Bool
  | .undefined, .undefined | .null, .null => true
  | .bool a, .bool b => a == b
  | .number a, .number b => a == b
  | .string a, .string b => a == b
  | .array a, .array b => a.size == b.size && (a.zip b).all fun (x, y) => dataEq x y
  | .object a, .object b => a.size == b.size && (a.zip b).all fun ((k, x), (l, y)) => k == l && dataEq x y
  | _, _ => false

/-! Helpers -/

/-- `a[i]`, for handle types (which have no `Inhabited` instance, only `Nonempty`). -/
def nth (a : Array α) (i : Nat) : IO α :=
  match a[i]? with
  | some x => pure x
  | none => throw (IO.userError s!"index {i} out of bounds ({a.size})")

def make (tag : String) : IO Element := do (← document).createElement tag
def textOf (n : Node) : IO String := return (← n.textContent).getD ""
/-- The text of each child node, in order. -/
def childTexts (n : Node) : IO (List String) := do
  let nodes ← (← n.childNodes).values
  return (← nodes.mapM textOf).toList
def fails (act : IO α) : IO Bool := do
  match ← act.toBaseIO with
  | .ok _ => return false
  | .error _ => return true

/-! Geometry and CSS -/

def geometry (record : Record) : IO Unit := do
  -- ∀ x y w h ∈ [-50, 50) ∩ ℤ, let r := DOMRect(x, y, w, h):
  --   r.left = min x (x + w) ∧ r.right = max x (x + w) ∧ r.top = min y (y + h) ∧ r.bottom = max y (y + h)
  check record "geometry.rect" do
    let g ← gen 1
    let mut bad : Array String := #[]
    for _ in [0:40] do
      let x := (← g.below 100).toFloat - 50
      let y := (← g.below 100).toFloat - 50
      let w := (← g.below 100).toFloat - 50
      let h := (← g.below 100).toFloat - 50
      let r ← DOMRect.new (some x) (some y) (some w) (some h)
      let ok := (← r.left) == min x (x + w) && (← r.right) == max x (x + w) && (← r.top) == min y (y + h) && (← r.bottom) == max y (y + h)
      unless ok do bad := bad.push s!"({x}, {y}, {w}, {h})"
    return (bad.isEmpty, s!"{bad}")

def css (record : Record) (root : Element) : IO Unit := do
  -- ∀ (p, v) in a table of properties with values in their canonical form (longhands, a keyword, a custom property):
  --   setProperty p v → getPropertyValue p = v, then removeProperty p = v ∧ getPropertyValue p = ""
  check record "css.style-roundtrip" do
    let e : HTMLElement := { val := (← make "div").val }
    let style ← e.style
    let mut bad : Array String := #[]
    for (p, v) in [("width", "40px"), ("color", "red"), ("display", "flex"), ("opacity", "0.5"), ("margin-top", "3px"), ("--lasm-x", "7")] do
      style.setProperty p v
      let got ← style.getPropertyValue p
      let removed ← style.removeProperty p
      let after ← style.getPropertyValue p
      unless got == v && removed == v && after == "" do bad := bad.push s!"{p}: {got} {removed} {after}"
    return (bad.isEmpty, s!"{bad}")
  -- An attached element with width w px and height h px: getComputedStyle's width is "{w}px" and its
  -- getBoundingClientRect is w × h
  check record "css.computed-and-rect" do
    let e : HTMLElement := { val := (← make "div").val }
    discard <| root.appendChild e
    let style ← e.style
    style.setProperty "width" "40px"
    style.setProperty "height" "10px"
    style.setProperty "display" "block"
    let computed ← (← getComputedStyle e).getPropertyValue "width"
    let r ← e.getBoundingClientRect
    discard <| root.removeChild e
    return (computed == "40px" && (← r.width) == 40 && (← r.height) == 10, s!"{computed} {← r.width}x{← r.height}")
  -- matchMedia q matches iff the viewport satisfies q: (min-width: 1px) holds in any window, (max-width: 0px) in none
  check record "css.match-media" do
    let yes ← (← matchMedia "(min-width: 1px)").«matches»
    let no ← (← matchMedia "(max-width: 0px)").«matches»
    return (yes && !no, s!"{yes} {no}")

/-! The document tree -/

def tree (record : Record) (root : Element) : IO Unit := do
  let doc ← document
  -- ∀ sequences of 60 operations (append, insertBefore i, removeChild i, replaceChild i) from a seeded generator,
  -- after each: the texts of p.childNodes = the model list after the same operations (insert at i, erase i,
  -- set i), and p.textContent = String.join of the model
  check record "dom.children-model" do
    let g ← gen 2
    let p ← make "div"
    let mut model : Array String := #[]
    let mut nodes : Array Text := #[]
    let mut bad : Array String := #[]
    for step in [0:60] do
      let label := s!"n{step};"
      let t ← doc.createTextNode label
      let op ← g.below 4
      if model.isEmpty || op == 0 then
        discard <| p.appendChild t
        model := model.push label; nodes := nodes.push t
      else
        let i ← g.below model.size
        match op with
        | 1 =>
          discard <| p.insertBefore t (some (← nth nodes i))
          model := (model.extract 0 i).push label ++ model.extract i model.size
          nodes := (nodes.extract 0 i).push t ++ nodes.extract i nodes.size
        | 2 =>
          discard <| p.removeChild (← nth nodes i)
          model := model.extract 0 i ++ model.extract (i + 1) model.size
          nodes := nodes.extract 0 i ++ nodes.extract (i + 1) nodes.size
        | _ =>
          discard <| p.replaceChild t (← nth nodes i)
          model := model.set! i label; nodes := nodes.set! i t
      let texts ← childTexts p
      unless texts == model.toList && (← textOf p) == String.join model.toList do bad := bad.push s!"step {step}: {texts} vs {model}"
    return (bad.isEmpty, s!"{bad.toList.take 2}")
  -- ∀ sequences of setAttribute n v, removeAttribute n and toggleAttribute n over a few names (values random
  -- Unicode strings), after each, for every name n: getAttribute n = model.lookup n ∧ hasAttribute n = (n ∈ model)
  -- ∧ getAttributeNames = the model's names in insertion order
  check record "dom.attributes-model" do
    let g ← gen 3
    let e ← make "div"
    let names := #["a", "data-x", "title", "aria-label"]
    let mut model : List (String × String) := []
    let mut bad : Array String := #[]
    for step in [0:60] do
      let n := names[← g.below names.size]!
      match ← g.below 3 with
      | 0 =>
        let v ← g.string 8
        e.setAttribute n v
        model := assocSet model n v
      | 1 =>
        e.removeAttribute n
        model := assocErase model n
      | _ =>
        let present ← e.toggleAttribute n
        model := if model.any (·.1 == n) then assocErase model n else assocSet model n ""
        unless present == model.any (·.1 == n) do bad := bad.push s!"step {step}: toggle {n} gave {present}"
      for m in names do
        unless (← e.getAttribute m) == model.lookup m && (← e.hasAttribute m) == model.any (·.1 == m) do
          bad := bad.push s!"step {step}: {m}"
      unless (← e.getAttributeNames).toList == model.map (·.1) do bad := bad.push s!"step {step}: names"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- ∀ sequences of classList add t, remove t and toggle t (with force none, true or false): contains t ↔ t ∈ model,
  -- length = model.length, and value = the model joined by spaces (an ordered set, in insertion order)
  check record "dom.classlist-model" do
    let g ← gen 4
    let e ← make "div"
    let tokens := #["a", "b", "c", "d"]
    let list ← e.classList
    let mut model : List String := []
    let mut bad : Array String := #[]
    for step in [0:60] do
      let t := tokens[← g.below tokens.size]!
      match ← g.below 5 with
      | 0 => list.add #[t]; unless model.contains t do model := model ++ [t]
      | 1 => list.remove #[t]; model := model.filter (· != t)
      | 2 =>
        let on ← list.toggle t
        model := if model.contains t then model.filter (· != t) else model ++ [t]
        unless on == model.contains t do bad := bad.push s!"step {step}: toggle"
      | k =>
        let force := k == 3
        let on ← list.toggle t (some force)
        model := if force then (if model.contains t then model else model ++ [t]) else model.filter (· != t)
        unless on == force do bad := bad.push s!"step {step}: forced toggle"
      for u in tokens do
        unless (← list.contains u) == model.contains u do bad := bad.push s!"step {step}: contains {u}"
      unless (← list.length) == model.length && (← list.value) == " ".intercalate model do
        bad := bad.push s!"step {step}: {← list.value} vs {model}"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- ∀ s (random Unicode strings), t := new Text(s): t.data = s ∧ t.length = utf16Length s, and ∀ i ≤ s.length,
  -- t.splitText (utf16Length (s.take i)) leaves t.data = s.take i and returns a node whose data = s.drop i
  check record "dom.text-utf16" do
    let g ← gen 5
    let mut bad : Array String := #[]
    for _ in [0:30] do
      let s ← g.string 12
      let t ← Text.new (some s)
      unless (← t.data) == s && (← t.length) == utf16Length s do bad := bad.push s!"{s.quote}"
      let i ← g.below (s.length + 1)
      let rest ← t.splitText (utf16Length (s.take i).toString)
      unless (← t.data) == (s.take i).toString && (← rest.data) == (s.drop i).toString do bad := bad.push s!"split {s.quote} at {i}"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- ∀ s (random Unicode strings with HTML's special characters): e.textContent := s →
  --   e.textContent = s ∧ e.innerHTML = escapeText s (HTML's serialization of text)
  check record "dom.text-serialization" do
    let g ← gen 6
    let mut bad : Array String := #[]
    for _ in [0:30] do
      let s := (← g.string 6) ++ (#["&", "<", ">", " ", "\"", "'"][← g.below 6]!) ++ (← g.string 6)
      let e ← make "p"
      e.setTextContent (some s)
      let html := match ← e.innerHTML with | .domString h => h | .trustedHTML _ => "(TrustedHTML)"
      unless (← textOf e) == s && html == escapeText s do bad := bad.push s!"{s.quote}: {html.quote}"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- A random tree of 14 elements (each appended to a random earlier one), with class k on some:
  --   ∀ a b, a.contains b ↔ b is a or a descendant of a (the model's parent links);
  --   root.querySelectorAll ".k" has as many elements as the model has descendants with k;
  --   root.cloneNode true is equal to root (isEqualNode) and not the same node
  check record "dom.tree-queries" do
    let g ← gen 7
    let top ← make "section"
    let mut nodes : Array Element := #[top]
    let mut parents : Array Nat := #[0]
    let mut marked : Array Bool := #[false]
    for i in [1:14] do
      let p ← g.below i
      let e ← make "div"
      let k ← g.bool
      if k then (← e.classList).add #["k"]
      discard <| (← nth nodes p).appendChild e
      nodes := nodes.push e; parents := parents.push p; marked := marked.push k
    let rec isAncestor (fuel a b : Nat) : Bool :=
      match fuel with
      | 0 => false
      | fuel + 1 => a == b || (b != 0 && isAncestor fuel a parents[b]!)
    let mut bad : Array String := #[]
    for a in [0:nodes.size] do
      for b in [0:nodes.size] do
        unless (← (← nth nodes a).contains (some (← nth nodes b))) == isAncestor 20 a b do bad := bad.push s!"contains {a} {b}"
    let found ← (← top.querySelectorAll ".k").length
    let expected := ((List.range nodes.size).filter fun i => i != 0 && marked[i]!).length
    unless found == expected do bad := bad.push s!"querySelectorAll {found} vs {expected}"
    let copy ← top.cloneNode (some true)
    unless (← copy.isEqualNode (some top)) && !(← copy.isSameNode (some top)) do bad := bad.push "cloneNode"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- ∀ k ∈ [1, 8]: appending a fragment holding k nodes to p moves them all: p gains k children and the
  -- fragment has none
  check record "dom.fragment" do
    let mut bad : Array String := #[]
    for k in [1:9] do
      let f ← doc.createDocumentFragment
      for i in [0:k] do discard <| f.appendChild (← doc.createTextNode s!"{i}")
      let p ← make "div"
      discard <| p.appendChild f
      unless (← (← p.childNodes).length) == k && (← (← f.childNodes).length) == 0 do bad := bad.push s!"{k}"
    return (bad.isEmpty, s!"{bad}")
  -- ∀ k ∈ [1, 8]: observing p's childList and appending k children, takeRecords's records are childList
  -- records whose added nodes number k in all
  check record "dom.mutation-observer" do
    let mut bad : Array String := #[]
    for k in [1:9] do
      let p ← make "div"
      let observer ← MutationObserver.new (← MutationCallback.ofSyncFn fun _ _ => pure ())
      observer.observe p (some { childList := some true })
      for _ in [0:k] do discard <| p.appendChild (← make "span")
      let records ← observer.takeRecords
      observer.disconnect
      let mut added := 0
      for r in records do
        unless (← r.type) == "childList" do bad := bad.push s!"type {← r.type}"
        added := added + (← (← r.addedNodes).length)
      unless added == k do bad := bad.push s!"{k}: {added}"
    return (bad.isEmpty, s!"{bad}")
  -- The window's document is the document, and an attached focusable element that is focused is the active element
  check record "html.window-focus" do
    let w ← window
    let same ← (← w.document).isSameNode (some (← document))
    let input : HTMLInputElement := { val := (← make "input").val }
    discard <| root.appendChild input
    input.focus
    let active ← match ← doc.activeElement with
      | some a => a.isSameNode (some input)
      | none => pure false
    discard <| root.removeChild input
    return (same && active, s!"{same} {active}")

/-! Forms -/

def forms (record : Record) (root : Element) : IO Unit := do
  -- ∀ s (random Unicode strings with line breaks): an input's value := s → value = s without CR and LF
  -- (HTML's value sanitization of text inputs); a text area's value := s → value = s with CRLF, then CR,
  -- normalized to LF
  check record "html.value-sanitization" do
    let g ← gen 8
    let mut bad : Array String := #[]
    for _ in [0:30] do
      let s := (← g.string 5) ++ (#["\n", "\r", "\r\n", ""][← g.below 4]!) ++ (← g.string 5)
      let input : HTMLInputElement := { val := (← make "input").val }
      input.setValue s
      let area : HTMLTextAreaElement := { val := (← make "textarea").val }
      area.setValue s
      let normalized := (s.replace "\r\n" "\n").replace "\r" "\n"
      unless (← input.value) == String.ofList (s.toList.filter (· ∉ ['\n', '\r'])) && (← area.value) == normalized do
        bad := bad.push s.quote
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- A checkbox: checked reads back what was set, and its value defaults to "on"
  check record "html.checkbox" do
    let input : HTMLInputElement := { val := (← make "input").val }
    input.setType "checkbox"
    input.setChecked true
    let on ← input.checked
    input.setChecked false
    return (on && !(← input.checked) && (← input.value) == "on", s!"{on} {← input.value}")
  -- ∀ n ∈ [1, 6] options with values v₀ … vₙ₋₁ and ∀ i < n: selectedIndex := i → value = vᵢ
  check record "html.select" do
    let select : HTMLSelectElement := { val := (← make "select").val }
    let values := #["zero", "one", "two", "thrée", "four", "five"]
    for v in values do
      let o : HTMLOptionElement := { val := (← make "option").val }
      o.setValue v
      o.setText v
      select.add o
    let mut bad : Array String := #[]
    for i in [0:values.size] do
      select.setSelectedIndex i
      unless (← select.value) == values[i]! do bad := bad.push s!"{i}: {← select.value}"
    return (bad.isEmpty && (← (← select.options).length) == values.size, s!"{bad}")
  -- ∀ named inputs (names and values random Unicode strings without line breaks): new FormData(form).entries
  -- = the inputs' (name, value) pairs in tree order
  check record "html.form-data" do
    let g ← gen 9
    let form : HTMLFormElement := { val := (← make "form").val }
    let mut model : Array (String × String) := #[]
    for _ in [0:6] do
      let input : HTMLInputElement := { val := (← make "input").val }
      let n := s!"f{model.size}" ++ (← g.string 4)
      let v ← g.string 6
      input.setName n
      input.setValue v
      discard <| form.appendChild input
      model := model.push (n, v)
    discard <| root.appendChild form
    let entries ← (← FormData.new (some form.val)).entries
    discard <| root.removeChild form
    let got := entries.map fun (k, v) => (k, match v with | .usvString s => s | .file _ => "(file)")
    return (got == model, s!"{got.size} entries")

/-! Storage, history, location -/

def storage (record : Record) : IO Unit := do
  -- ∀ sequences of setItem k v and removeItem k (keys and values random Unicode strings, a few keys), on
  -- localStorage and on sessionStorage, after each: getItem k = model.lookup k for every key ∧ length = model.length
  for (name, area) in [("local-storage", ← localStorage), ("session-storage", ← sessionStorage)] do
    check record s!"html.{name}-model" do
      let g ← gen 10
      area.clear
      let keys ← (List.range 4).mapM fun i => return s!"k{i}" ++ (← g.string 3)
      let mut model : List (String × String) := []
      let mut bad : Array String := #[]
      for step in [0:40] do
        let k := keys[← g.below keys.length]!
        if (← g.below 3) == 0 then
          area.removeItem k; model := assocErase model k
        else
          let v ← g.string 8
          area.setItem k v; model := assocSet model k v
        for k in keys do
          unless (← area.getItem k) == model.lookup k do bad := bad.push s!"step {step}"
        unless (← area.length) == model.length do bad := bad.push s!"step {step}: length"
      area.clear
      return (bad.isEmpty && (← area.length) == 0, s!"{bad.toList.take 3}")

def historyChecks (record : Record) : IO Unit := do
  -- ∀ i < 3, pushState dᵢ "" uᵢ (dᵢ JSON-like data, uᵢ a path): location.pathname = uᵢ ∧ history.state = dᵢ
  -- (a structured clone) ∧ history.length grew by one; replaceState with the original URL restores the pathname
  check record "html.history" do
    let h ← history
    let loc ← location
    let original ← loc.href
    let path ← loc.pathname
    let mut bad : Array String := #[]
    for i in [0:3] do
      let before ← h.length
      let d := obj [("i", toJS i), ("s", toJS s!"é{i}"), ("a", .array #[.bool true, .null])]
      let u := s!"/lasm-bindings-{i}"
      h.pushState d "" (some u)
      unless (← loc.pathname) == u && dataEq (← h.state) d && (← h.length) == before + 1 do bad := bad.push s!"{i}"
    h.replaceState .null "" (some original)
    return (bad.isEmpty && (← loc.pathname) == path, s!"{bad}")
  -- location.href is a URL: new URL(location.href).href = location.href
  check record "html.location-href" do
    let href ← (← location).href
    return ((← (← URL.new href).href) == href, href)

/-! Events -/

def events (record : Record) (root : Element) : IO Unit := do
  -- ∀ init (generated values): every attribute of the constructed event reads back the init's value
  -- (MouseEvent clientX, clientY, button, buttons and modifier keys; PointerEvent pointerId, pressure ∈ {k/256}
  -- and pointerType; KeyboardEvent key, code and repeat; WheelEvent deltaX, deltaY; InputEvent data and
  -- inputType; PopStateEvent state; HashChangeEvent oldURL and newURL; StorageEvent key and newValue)
  check record "events.init-roundtrip" do
    let g ← gen 11
    let mut bad : Array String := #[]
    for step in [0:20] do
      let x : Int := (← g.below 1000); let y : Int := (← g.below 1000)
      let button : Int := (← g.below 5); let buttons ← g.below 32
      let ctrl ← g.bool; let shift ← g.bool
      let m ← MouseEvent.new "mousedown" (some {
        clientX := some x, clientY := some y, button := some button, buttons := some buttons, ctrlKey := some ctrl, shiftKey := some shift })
      unless (← m.clientX) == x && (← m.clientY) == y && (← m.button) == button && (← m.buttons) == buttons
          && (← m.ctrlKey) == ctrl && (← m.shiftKey) == shift do bad := bad.push s!"mouse {step}"
      let id : Int := (← g.below 100000)
      let pressure := (← g.below 257).toFloat / 256
      let kind := #["mouse", "pen", "touch"][← g.below 3]!
      let p ← PointerEvent.new "pointerdown" (some { pointerId := some id, pressure := some pressure, pointerType := some kind })
      unless (← p.pointerId) == id && (← p.pressure) == pressure && (← p.pointerType) == kind do bad := bad.push s!"pointer {step}"
      let key ← g.string 4; let code ← g.string 4; let rep ← g.bool
      let k ← KeyboardEvent.new "keydown" (some { key := some key, code := some code, «repeat» := some rep })
      unless (← k.key) == key && (← k.code) == code && (← k.«repeat») == rep do bad := bad.push s!"keyboard {step}"
      let dx := ((← g.below 2000).toFloat - 1000) / 8; let dy := ((← g.below 2000).toFloat - 1000) / 8
      let w ← WheelEvent.new "wheel" (some { deltaX := some dx, deltaY := some dy })
      unless (← w.deltaX) == dx && (← w.deltaY) == dy do bad := bad.push s!"wheel {step}"
      let data ← g.string 5
      let i ← InputEvent.new "input" (some { data := some data, inputType := some "insertText" })
      unless (← i.data) == some data && (← i.inputType) == "insertText" do bad := bad.push s!"input {step}"
      let state := obj [("step", toJS step), ("text", toJS data)]
      let ps ← PopStateEvent.new "popstate" (some { state := state })
      unless dataEq (← ps.state) state do bad := bad.push s!"popstate {step}"
      let hc ← HashChangeEvent.new "hashchange" (some { oldURL := some "https://a.test/#1", newURL := some s!"https://a.test/#{step}" })
      unless (← hc.oldURL) == "https://a.test/#1" && (← hc.newURL) == s!"https://a.test/#{step}" do bad := bad.push s!"hashchange {step}"
      let se ← StorageEvent.new "storage" (some { key := some key, newValue := some data })
      unless (← se.key) == some key && (← se.newValue) == some data do bad := bad.push s!"storage {step}"
    return (bad.isEmpty, s!"{bad.toList.take 4}")
  -- ∀ bubbles cancelable prevent ∈ Bool: a KeyboardEvent dispatched on a child runs a listener on its parent iff
  -- bubbles, the listener sees the event's key, and dispatchEvent returns ¬(bubbles ∧ cancelable ∧ prevent) (the listener
  -- calls preventDefault when prevent)
  check record "events.dispatch" do
    let parent ← make "div"
    let child ← make "span"
    discard <| parent.appendChild child
    discard <| root.appendChild parent
    let seen ← IO.mkRef (none : Option String)
    let prevent ← IO.mkRef false
    let listener ← EventListener.ofSyncFn fun e => do
      let k : KeyboardEvent := { val := e.val }
      seen.set (some (← k.key))
      if ← prevent.get then e.preventDefault
    let mut bad : Array String := #[]
    for bubbles in [false, true] do
      for cancelable in [false, true] do
        for p in [false, true] do
          parent.addEventListener "keydown" (some listener)
          seen.set none; prevent.set p
          let key := s!"{bubbles}{cancelable}{p}"
          let notCancelled ← child.dispatchEvent (← KeyboardEvent.new "keydown" (some { key := some key, bubbles := some bubbles, cancelable := some cancelable }))
          parent.removeEventListener "keydown" (some listener)
          let ran ← seen.get
          let expected := if bubbles then some key else none
          unless ran == expected && notCancelled == !(cancelable && p && bubbles) do bad := bad.push s!"{key}: {ran} {notCancelled}"
    discard <| root.removeChild parent
    return (bad.isEmpty, s!"{bad}")

/-! Canvas 2D -/

def canvasOf (root : Element) (w h : Nat) : IO (HTMLCanvasElement × CanvasRenderingContext2D) := do
  let canvas : HTMLCanvasElement := { val := (← make "canvas").val }
  canvas.setWidth w
  canvas.setHeight h
  discard <| root.appendChild canvas
  let some ctx ← canvas.getContext "2d" | throw (IO.userError "getContext \"2d\" returned null")
  return (canvas, { val := ctx })

def canvasChecks (record : Record) (root : Element) : IO Unit := do
  -- ∀ opaque colours (r, g, b) and rectangles R with integer corners in a 16×16 canvas: after clearRect and fillRect R,
  -- getImageData's pixel at (x, y) = (r, g, b, 255) if (x, y) ∈ R and (0, 0, 0, 0) otherwise
  check record "canvas.fill-pixels" do
    let g ← gen 12
    let (_, ctx) ← canvasOf root 16 16
    let mut bad : Array String := #[]
    for step in [0:10] do
      let r ← g.below 256; let gr ← g.below 256; let b ← g.below 256
      let x0 ← g.below 16; let y0 ← g.below 16
      let w := 1 + (← g.below (16 - x0)); let h := 1 + (← g.below (16 - y0))
      ctx.clearRect 0 0 16 16
      ctx.setFillStyle s!"rgb({r}, {gr}, {b})"
      ctx.fillRect x0.toFloat y0.toFloat w.toFloat h.toFloat
      let data ← (← ctx.getImageData 0 0 16 16).data
      let mut ok := data.size == 16 * 16 * 4
      for y in [0:16] do
        for x in [0:16] do
          let i := 4 * (16 * y + x)
          let inside := x0 ≤ x && x < x0 + w && y0 ≤ y && y < y0 + h
          let want : List Nat := if inside then [r, gr, b, 255] else [0, 0, 0, 0]
          unless [data[i]!.toNat, data[i+1]!.toNat, data[i+2]!.toNat, data[i+3]!.toNat] == want do ok := false
      unless ok do bad := bad.push s!"step {step}"
    return (bad.isEmpty, s!"{bad}")
  -- ∀ opaque pixel data d (alpha 255) of a w×h image: getImageData after putImageData (new ImageData(d, w, h)) = d
  check record "canvas.put-get" do
    let g ← gen 13
    let (_, ctx) ← canvasOf root 8 8
    let mut bad : Array String := #[]
    for _ in [0:8] do
      let w := 1 + (← g.below 8); let h := 1 + (← g.below 8)
      let mut d := ByteArray.empty
      for i in [0:w * h * 4] do
        let v ← g.below 256
        d := d.push (if i % 4 == 3 then 255 else v.toUInt8)
      ctx.putImageData (← ImageData.newWithData d w (some h)) 0 0
      let back ← (← ctx.getImageData 0 0 w h).data
      unless back.data == d.data do bad := bad.push s!"{w}x{h}"
    return (bad.isEmpty, s!"{bad}")
  -- ∀ v: lineWidth := v → lineWidth = (if v > 0 then v else the previous value) (non-positive values are ignored);
  -- globalAlpha := a → globalAlpha = (if 0 ≤ a ≤ 1 then a else the previous value);
  -- save; fillStyle := c; restore → fillStyle = its value before save; fillStyle := "red" → fillStyle = "#ff0000"
  check record "canvas.state" do
    let (_, ctx) ← canvasOf root 4 4
    let mut bad : Array String := #[]
    let mut width := 1.0
    for v in [2.5, 0, -3, 7, 0.25] do
      ctx.setLineWidth v
      if v > 0 then width := v
      unless (← ctx.lineWidth) == width do bad := bad.push s!"lineWidth {v}"
    let mut alpha := 1.0
    for a in [0.5, 2, -1, 0, 0.75] do
      ctx.setGlobalAlpha a
      if 0 ≤ a && a ≤ 1 then alpha := a
      unless (← ctx.globalAlpha) == alpha do bad := bad.push s!"globalAlpha {a}"
    ctx.setFillStyle "red"
    let red ← ctx.fillStyle
    ctx.save
    ctx.setFillStyle "blue"
    ctx.restore
    let restored ← ctx.fillStyle
    unless dataEq red (.string "#ff0000") && dataEq restored red do bad := bad.push s!"fillStyle {red.describe} {restored.describe}"
    return (bad.isEmpty, s!"{bad}")
  -- ∀ rectangles R with integer corners and points p with half-integer coordinates in a 16×16 square:
  -- isPointInPath (a Path2D holding R) p ↔ p ∈ R
  check record "canvas.path" do
    let g ← gen 14
    let (_, ctx) ← canvasOf root 16 16
    let mut bad : Array String := #[]
    for step in [0:10] do
      let x0 ← g.below 16; let y0 ← g.below 16
      let w := 1 + (← g.below (16 - x0)); let h := 1 + (← g.below (16 - y0))
      let path ← Path2D.new
      path.rect x0.toFloat y0.toFloat w.toFloat h.toFloat
      for _ in [0:10] do
        let px := (← g.below 16).toFloat + 0.5; let py := (← g.below 16).toFloat + 0.5
        let inside := x0.toFloat ≤ px && px < (x0 + w).toFloat && y0.toFloat ≤ py && py < (y0 + h).toFloat
        unless (← ctx.isPointInPathWithPath path px py) == inside do bad := bad.push s!"step {step} ({px}, {py})"
    return (bad.isEmpty, s!"{bad.toList.take 3}")
  -- measureText "" has width 0 and a non-empty text a positive width; toDataURL is a PNG data URL
  check record "canvas.text-and-url" do
    let (canvas, ctx) ← canvasOf root 4 4
    ctx.setFont "10px sans-serif"
    let empty ← (← ctx.measureText "").width
    let lean ← (← ctx.measureText "Lean").width
    let url ← canvas.toDataURL
    return (empty == 0 && lean > 0 && url.startsWith "data:image/png", s!"{empty} {lean} {url.take 22}")

/-! WebSocket (the test server echoes on /ws) -/

/-- A message's data: text, or the bytes of a binary frame (an ArrayBuffer with binaryType "arraybuffer"). -/
def messageText (d : Data) : IO String := do
  match d with
  | .string s => return s!"text:{s}"
  | .bytes b => return s!"bytes:{b.toList}"
  | .ref v _ => return s!"bytes:{(← Support.arrayBufferBytes v).toList}"
  | d => return s!"other:{d.describe}"

def socket (record : Record) : Async Unit := do
  -- ∀ messages m₀ … m₅ (random Unicode text and random bytes, sent in order once open): the echo server's
  -- messages are the same, in order, text as strings and binary frames as the same bytes; close 1000 r
  -- gives a CloseEvent with code 1000, reason r and wasClean
  checkAsync record "websocket.echo" do
    let g ← gen 15
    let loc ← location
    let scheme := if (← loc.protocol) == "https:" then "wss" else "ws"
    let ws ← WebSocket.new s!"{scheme}://{← loc.host}/ws"
    ws.setBinaryType .arraybuffer
    let opened : IO.Promise Unit ← IO.Promise.new
    let received ← IO.mkRef (#[] : Array String)
    let all : IO.Promise Unit ← IO.Promise.new
    let closed : IO.Promise (Nat × String × Bool) ← IO.Promise.new
    let mut sent : Array String := #[]
    let mut payloads : Array BufferSourceOrBlobOrUSVString := #[]
    for i in [0:6] do
      if i % 2 == 0 then
        let s ← g.string 10
        sent := sent.push s!"text:{s}"; payloads := payloads.push s
      else
        let n ← g.below 20
        let mut b := ByteArray.empty
        for _ in [0:n] do b := b.push (← g.below 256).toUInt8
        sent := sent.push s!"bytes:{b.toList}"; payloads := payloads.push b
    let count := sent.size
    ws.addEventListener "open" (some (← EventListener.ofSyncFn fun _ => opened.resolve ()))
    ws.addEventListener "message" (some (← EventListener.ofSyncFn fun e => do
      let m : MessageEvent := { val := e.val }
      received.modify (·.push "")
      let text ← messageText (← m.data)
      received.modify fun a => a.set! (a.size - 1) text
      if (← received.get).size == count then all.resolve ()))
    ws.addEventListener "close" (some (← EventListener.ofSyncFn fun e => do
      let c : CloseEvent := { val := e.val }
      closed.resolve ((← c.code), (← c.reason), (← c.wasClean))))
    Std.Async.await opened
    let openState ← ws.readyState
    for p in payloads do ws.send p
    Std.Async.await all
    ws.close (some 1000) (some "bye é")
    let (code, reason, clean) ← Std.Async.await closed
    let got ← received.get
    return (got == sent && openState == WebSocket.OPEN && code == 1000 && reason == "bye é" && clean && (← ws.readyState) == WebSocket.CLOSED,
      s!"{got.size}/{sent.size} {code} {reason} {clean}")
  -- ∀ u ∈ URLs that are not ws:, wss:, http: or https: URLs, or that have a fragment: new WebSocket(u) throws
  checkAsync record "websocket.invalid-url" do
    let mut bad : Array String := #[]
    for u in ["ftp://127.0.0.1/", "ws://127.0.0.1/#frag", "not a url", "ws://[::1"] do
      unless ← fails (WebSocket.new u) do bad := bad.push u
    return (bad.isEmpty, s!"{bad}")

/-! Animation frames -/

def frames (record : Record) : Async Unit := do
  -- Two successive animation frames: the callbacks' timestamps t₁ ≤ t₂, both positive
  checkAsync record "html.animation-frames" do
    let first : IO.Promise Float ← IO.Promise.new
    discard <| requestAnimationFrame (← FrameRequestCallback.ofSyncFn fun t => first.resolve t)
    let t1 ← Std.Async.await first
    let second : IO.Promise Float ← IO.Promise.new
    discard <| requestAnimationFrame (← FrameRequestCallback.ofSyncFn fun t => second.resolve t)
    let t2 ← Std.Async.await second
    return (t1 > 0 && t1 ≤ t2, s!"{t1} {t2}")

/-! Availability: which generated members this browser lacks (reported, never a failure) -/

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool
@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data

def names (info : Data) (key : String) : Array String :=
  match info.field key with
  | .array xs => xs.filterMap fun | .string s => some s | _ => none
  | _ => #[]

def availability (record : Record) (root : Element) : IO Unit := do
  let .object entries ← jsonParse Surface.json | throw (IO.userError "the surface is not an object")
  let g ← Lasm.JS.global
  let mut missing : Array String := #[]
  for (path, info) in entries do
    if ← reflectHas g path then
      let v ← g.get path Value
      for m in names info "static" do
        unless ← reflectHas v m do missing := missing.push s!"{path}.{m}"
      let proto := names info "prototype"
      unless proto.isEmpty do
        let p ← v.get "prototype" Value
        for m in proto do
          unless ← reflectHas p m do missing := missing.push s!"{path}.prototype.{m}"
    else missing := missing.push path
  let out ← make "pre"
  out.setId "bindings-missing"
  out.setTextContent (some ("\n".intercalate missing.toList))
  discard <| root.appendChild out
  record "bindings.availability" true s!"{missing.size} generated members missing"

/-! Running -/

/-- The synchronous checks, on the app's root element. -/
def run (record : Record) (rootValue : Value) : IO Unit := do
  let root : Element := { val := rootValue }
  geometry record
  css record root
  tree record root
  forms record root
  storage record
  historyChecks record
  events record root
  canvasChecks record root
  availability record root

/-- The checks that wait (animation frames, a WebSocket, a scroll). -/
def runAsync (record : Record) : Async Unit := do
  frames record
  socket record
  -- scrollIntoView's promise settles (CSSOM View now returns Promise<ScrollResult>; browsers that return
  -- undefined settle at once), and the element is then attached and its box has the size given to it
  checkAsync record "css.scroll-into-view" do
    let e : HTMLElement := { val := (← make "div").val }
    (← e.style).setProperty "height" "20px"
    let some body ← (← document).body | return (false, "no body")
    discard <| body.appendChild e
    discard <| e.scrollIntoView
    let h ← (← e.getBoundingClientRect).height
    discard <| body.removeChild e
    return (h == 20, s!"{h}")

end Bindings
