/-
The binary patch stream read by the `lasm:ui-dom` applier (src/browser/ui-dom.mjs).
Format (docs/BROWSER.md, "Patch protocol"): unsigned LEB128 integers, strings as
a byte length and UTF-8 bytes. Names (tags, attribute, property, style and event
names) are interned: a name is `0` + string (added to
the table), `1` + string (not added; the table is full) or `index + 2`.
A frame is the decoder definitions (new decoder shapes, numbered from 0 in
order) followed by the ops.

    op      1 INSERT parent before node     before: 0 appends, else id + 1
            2 MOVE parent id before
            3 REMOVE id
            4 CLEAR parent
            5 TEXT id string
            6 ATTRS id count attrop*
            7 DECODER decoderId pathCount (segmentCount string*)*
    node    0 id string                     a text node
            ns id tag attrCount attr* childCount node*
                                            ns: 1 html, 2 svg, 3 mathml
    attr    0 name string                   setAttribute
            1 name string | 2 name | 3 name property: a string, false, true
            4 name string                   style.setProperty
            5 event decoderId flags         listener; flags: 1 preventDefault, 2 stopPropagation
    attrop  attr, or 8 name | 9 name | 10 name | 11 event
                                            remove an attribute, property, style, listener
-/
import Std.Data.HashMap
import Lasm.UI.Diff

namespace Lasm.UI.Encode

/-- The interning tables, shared with the applier across frames. -/
structure Tables where
  names : Std.HashMap String Nat := {}
  decoders : Std.HashMap (List Path) Nat := {}
  deriving Inhabited

/-- At most this many interned names (beyond it names are sent in full). -/
def maxNames : Nat := 8192

structure Enc where
  tables : Tables
  defs : ByteArray := .empty
  out : ByteArray := .empty
  deriving Inhabited

def pushVar (b : ByteArray) (n : Nat) : ByteArray :=
  if n < 128 then b.push n.toUInt8 else pushVar (b.push (n % 128 + 128).toUInt8) (n / 128)
termination_by n
decreasing_by omega

@[inline] def pushStr (b : ByteArray) (s : String) : ByteArray :=
  pushVar b s.utf8ByteSize ++ s.toUTF8

namespace Enc

@[inline] def byte (e : Enc) (x : UInt8) : Enc := { e with out := e.out.push x }
@[inline] def var (e : Enc) (n : Nat) : Enc := { e with out := pushVar e.out n }
@[inline] def str (e : Enc) (s : String) : Enc := { e with out := pushStr e.out s }

/-- A name into `b`, interning it. -/
def nameInto (t : Tables) (b : ByteArray) (s : String) : Tables × ByteArray :=
  match t.names[s]? with
  | some i => (t, pushVar b (i + 2))
  | none =>
    if t.names.size < maxNames then
      ({ t with names := t.names.insert s t.names.size }, pushStr (b.push 0) s)
    else (t, pushStr (b.push 1) s)

def name (e : Enc) (s : String) : Enc :=
  let (t, out) := nameInto e.tables e.out s
  { e with tables := t, out }

/-- The id of a decoder shape, defining it first if new. -/
def decoder (e : Enc) (paths : List Path) : Enc × Nat :=
  match e.tables.decoders[paths]? with
  | some i => (e, i)
  | none =>
    let i := e.tables.decoders.size
    let t := { e.tables with decoders := e.tables.decoders.insert paths i }
    let d := pushVar (pushVar (e.defs.push 7) i) paths.length
    let d := paths.foldl (init := d) fun d p => p.foldl (init := pushVar d p.length) pushStr
    ({ e with tables := t, defs := d }, i)

def flags (l : Listener) : Nat := (if l.preventDefault then 1 else 0) + (if l.stopPropagation then 2 else 0)

/-- An attribute slot set to a value (`attr` above). -/
def setAttr (e : Enc) (k : AttrKey) (v : AttrVal) : Enc :=
  match k, v with
  | .attr n, .str s => (e.byte 0).name n |>.str s
  | .prop n, .prop (.str s) => (e.byte 1).name n |>.str s
  | .prop n, .prop (.bool false) => (e.byte 2).name n
  | .prop n, .prop (.bool true) => (e.byte 3).name n
  | .style n, .str s => (e.byte 4).name n |>.str s
  | .on ev, .listener l =>
    let (e, d) := e.decoder l.paths
    ((e.byte 5).name ev).var d |>.var (flags l)
  -- slots and values never mix otherwise (`Attr.key`/`Attr.val`); remove the slot
  | .attr n, _ => (e.byte 8).name n
  | .prop n, _ => (e.byte 9).name n
  | .style n, _ => (e.byte 10).name n
  | .on ev, _ => (e.byte 11).name ev

def attrOp (e : Enc) : AttrOp → Enc
  | .set k v => e.setAttr k v
  | .remove (.attr n) => (e.byte 8).name n
  | .remove (.prop n) => (e.byte 9).name n
  | .remove (.style n) => (e.byte 10).name n
  | .remove (.on ev) => (e.byte 11).name ev

def nsByte : Ns → UInt8
  | .html => 1
  | .svg => 2
  | .mathml => 3

mutual
def node (e : Enc) : Live Msg → Enc
  | .text id s => ((e.byte 0).var id).str s
  | .elem id ns tag _ attrs cs =>
    let e := ((e.byte (nsByte ns)).var id).name tag
    let e := attrs.foldl (init := e.var attrs.length) fun e a => e.setAttr a.key a.val
    nodes (e.var cs.length) cs
def nodes (e : Enc) : List (Live Msg) → Enc
  | [] => e
  | c :: cs => nodes (node e c) cs
end

@[inline] def before (e : Enc) : Option Nat → Enc
  | none => e.byte 0
  | some i => e.var (i + 1)

mutual
def op (parent : Nat) (e : Enc) : Op Msg → Enc
  | .insert n b => node (((e.byte 1).var parent).before b) n
  | .move i b => (((e.byte 2).var parent).var i).before b
  | .remove i => (e.byte 3).var i
  | .clear => (e.byte 4).var parent
  | .text i s => ((e.byte 5).var i).str s
  | .attrs i aops => aops.foldl attrOp (((e.byte 6).var i).var aops.length)
  | .sub i ops' => opList i e ops'
def opList (parent : Nat) (e : Enc) : List (Op Msg) → Enc
  | [] => e
  | o :: os => opList parent (op parent e o) os
end

end Enc

/-- One frame's bytes for ops on the children of `root`, and the updated tables. -/
def frame (t : Tables) (ops : Array (Op Msg)) (root : Nat := 0) : ByteArray × Tables :=
  let e := ops.foldl (Enc.op root) { tables := t }
  (e.defs ++ e.out, e.tables)

end Lasm.UI.Encode
