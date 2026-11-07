/-
The patch encoding is read back exactly: the reference decoder
(Lasm.UI.Proofs.Decode, the reading half of src/lasm-modules/ui-dom.mjs)
reads every frame that `Encode.frame` writes as the patch that was encoded
(`Wire.ofOps`), and the applier's tables stay in step with the encoder's
across frames.

The proof follows the encoder's structure. Each encoder step appends bytes to
the frame's ops (`out`) and decoder definitions (`defs`); `Step` says that the
appended ops decode to the expected result and that the definitions extend
the decoder table to match. The invariants (`Sync`, `DS`): every interned
name and value the encoder can refer to is at the same index in the
applier's table, and every decoder shape the encoder has defined is in the
applier's decoder table under its id.
-/
import Lasm.UI.Encode
import Lasm.UI.Proofs.Basic
import Lasm.UI.Proofs.Decode

namespace Lasm.UI.Proofs.Wire
open Lasm.UI Lasm.UI.Model Lasm.UI.Encode Lasm.UI.Decode Lasm.UI.Decode.Reader

/-! ## Bytes -/

/-- The bytes of a byte array, as a list. -/
abbrev toL (b : ByteArray) : List UInt8 := b.data.toList

@[simp] theorem toL_push (b : ByteArray) (x : UInt8) : toL (b.push x) = toL b ++ [x] := by
  simp [toL, ByteArray.data_push]

@[simp] theorem toL_append (a b : ByteArray) : toL (a ++ b) = toL a ++ toL b := by
  simp [toL, ByteArray.data_append]

@[simp] theorem toL_empty : toL .empty = [] := rfl

/-- The LEB128 bytes of `n` (what `pushVar` appends). -/
def leb (n : Nat) : List UInt8 :=
  if n < 128 then [n.toUInt8] else (n % 128 + 128).toUInt8 :: leb (n / 128)
termination_by n
decreasing_by omega

theorem leb_zero : leb 0 = [0] := by rw [leb]; rfl

theorem leb_one : leb 1 = [1] := by rw [leb]; rfl

theorem toL_pushVar (b : ByteArray) (n : Nat) : toL (pushVar b n) = toL b ++ leb n := by
  rw [pushVar, leb]
  split
  · simp
  · rw [toL_pushVar _ (n / 128)]; simp
termination_by n
decreasing_by omega

theorem var_leb (n : Nat) (r : Bytes) : readVar (leb n ++ r) = some (n, r) := by
  rw [leb]
  split
  · have : n.toUInt8.toNat = n := by simp; omega
    simp [readVar, this]; omega
  · have h1 : (n % 128 + 128).toUInt8.toNat = n % 128 + 128 := by simp; omega
    have ih := var_leb (n / 128) r
    simp only [List.cons_append, readVar, h1, ih]
    rw [ite_eq_right_of_eq_false _ _ (eq_false (by omega))]
    simp only [Option.some.injEq, Prod.mk.injEq, and_true]
    omega
termination_by n
decreasing_by omega

/-- The bytes of a string (what `pushStr` appends). -/
def strB (s : String) : List UInt8 := leb s.utf8ByteSize ++ toL s.toUTF8

theorem toL_pushStr (b : ByteArray) (s : String) : toL (pushStr b s) = toL b ++ strB s := by
  simp [pushStr, toL_pushVar, strB]

theorem length_toL_toUTF8 (s : String) : (toL s.toUTF8).length = s.utf8ByteSize := by
  show s.toByteArray.data.toList.length = _
  rw [Array.length_toList]; exact String.size_toByteArray

theorem fromUTF8_toL (s : String) : String.fromUTF8? ⟨(toL s.toUTF8).toArray⟩ = some s := by
  simp only [toL, Array.toArray_toList]
  simp only [String.fromUTF8?, String.toUTF8_eq_toByteArray, s.isValidUTF8, dite_true]
  rfl

theorem str_strB (s : String) (r : Bytes) : readStr (strB s ++ r) = some (s, r) := by
  have hl := length_toL_toUTF8 s
  simp only [readStr, strB, List.append_assoc, var_leb]
  rw [← hl, ite_eq_left_of_eq_true _ _ (eq_true (by simp)), List.take_left, List.drop_left, fromUTF8_toL]
  rfl

/-! ## Tables -/

/-- The encoder's interning table `m` and the applier's `l` agree: the same
number of entries, and every string the encoder would refer to by index is at
that index in the applier's table. -/
def NSync (m : Std.HashMap String Nat) (l : List String) : Prop :=
  m.size = l.length ∧ ∀ (s : String) (i : Nat), m[s]? = some i → l[i]? = some s

theorem NSync.empty : NSync {} [] := by
  simp [NSync]

theorem NSync.insert {m : Std.HashMap String Nat} {l : List String} {s : String}
    (h : NSync m l) (hs : m[s]? = none) : NSync (m.insert s m.size) (l ++ [s]) := by
  obtain ⟨hsz, hl⟩ := h
  have hmem : ¬ s ∈ m := by simp [Std.HashMap.mem_iff_isSome_getElem?, hs]
  refine ⟨by simp [Std.HashMap.size_insert, hmem, hsz], ?_⟩
  intro s' i h'
  rw [Std.HashMap.getElem?_insert] at h'
  split at h'
  · rename_i heq
    simp only [beq_iff_eq] at heq
    subst heq
    simp only [Option.some.injEq] at h'
    subst h'
    simp [hsz]
  · have := hl s' i h'
    have hi : i < l.length := by
      obtain ⟨hi, _⟩ := List.getElem?_eq_some_iff.mp this
      exact hi
    rw [List.getElem?_append_left hi, this]

theorem intern_hit {m : Std.HashMap String Nat} {l : List String} {s : String} {i : Nat}
    (h : NSync m l) (hs : m[s]? = some i) (r : Bytes) : intern l (leb (i + 2) ++ r) = some (s, l, r) := by
  simp [intern, var_leb, h.2 s i hs]

theorem intern_add (l : List String) (s : String) (r : Bytes) :
    intern l (leb 0 ++ (strB s ++ r)) = some (s, l ++ [s], r) := by
  simp [intern, var_leb, str_strB]

theorem intern_keep (l : List String) (s : String) (r : Bytes) :
    intern l (leb 1 ++ (strB s ++ r)) = some (s, l, r) := by
  simp [intern, var_leb, str_strB]

/-- The encoder's tables and the applier's agree on names and values. -/
structure Sync (t : Tables) (st : State) : Prop where
  names : NSync t.names st.names
  values : NSync t.values st.values

/-- Every decoder shape the encoder has defined is in the applier's decoder
table under its id. -/
def DSync (m : Std.HashMap (List Path) Nat) (D : Nat → Option (List Path)) : Prop :=
  ∀ (ps : List Path) (i : Nat), m[ps]? = some i → D i = some ps

/-- `DSync`, and every id is below the number of shapes (so a new id is fresh). -/
def DS (m : Std.HashMap (List Path) Nat) (D : Nat → Option (List Path)) : Prop :=
  DSync m D ∧ ∀ (ps : List Path) (i : Nat), m[ps]? = some i → i < m.size

/-- The encoder only adds decoder shapes. -/
def Sub (a b : Std.HashMap (List Path) Nat) : Prop :=
  ∀ (ps : List Path) (i : Nat), a[ps]? = some i → b[ps]? = some i

theorem Sub.refl (a : Std.HashMap (List Path) Nat) : Sub a a := fun _ _ h => h

theorem Sub.trans {a b c : Std.HashMap (List Path) Nat} (h₁ : Sub a b) (h₂ : Sub b c) : Sub a c :=
  fun ps i h => h₂ ps i (h₁ ps i h)

theorem DSync.mono {a b : Std.HashMap (List Path) Nat} {D} (h : Sub a b) (hb : DSync b D) : DSync a D :=
  fun ps i hi => hb ps i (h ps i hi)

/-- The decoder definitions `db` take the applier's decoder table from one
matching `a` to one matching `b`, and do nothing else. -/
def Defs (a b : Std.HashMap (List Path) Nat) (db : Bytes) : Prop :=
  ∀ st : State, DS a st.decoders → ∃ D, DS b D ∧ ∀ r, ops st (db ++ r) = ops { st with decoders := D } r

theorem Defs.nil (a : Std.HashMap (List Path) Nat) : Defs a a [] := by
  intro st h
  exact ⟨st.decoders, h, fun r => by cases st; rfl⟩

theorem Defs.trans {a b c : Std.HashMap (List Path) Nat} {d₁ d₂ : Bytes} (h₁ : Defs a b d₁) (h₂ : Defs b c d₂) :
    Defs a c (d₁ ++ d₂) := by
  intro st h
  obtain ⟨D₁, hD₁, e₁⟩ := h₁ st h
  obtain ⟨D₂, hD₂, e₂⟩ := h₂ { st with decoders := D₁ } hD₁
  exact ⟨D₂, hD₂, fun r => by rw [List.append_assoc, e₁, e₂]⟩

/-- One step of the encoder, from `e` to `e'`: the bytes it appends to the
frame's ops are read by `dec` as `x` (with the tables kept in step), the
decoder definitions it appends extend the decoder table to match, and it
only adds decoder shapes. -/
structure Step (e e' : Enc) (dec : Reader α) (x : α) : Prop where
  out : ∃ bytes, toL e'.out = toL e.out ++ bytes ∧ ∀ st, Sync e.tables st → DSync e'.tables.decoders st.decoders →
    ∃ st', Sync e'.tables st' ∧ st'.decoders = st.decoders ∧ ∀ r, dec st (bytes ++ r) = some (x, st', r)
  defs : ∃ db, toL e'.defs = toL e.defs ++ db ∧ Defs e.tables.decoders e'.tables.decoders db
  mono : Sub e.tables.decoders e'.tables.decoders

/-- A step that only appends ops. -/
theorem Step.ofOut {e e' : Enc} {dec : Reader α} {x : α}
    (hd : e'.defs = e.defs) (ht : e'.tables.decoders = e.tables.decoders)
    (out : ∃ bytes, toL e'.out = toL e.out ++ bytes ∧ ∀ st, Sync e.tables st →
      ∃ st', Sync e'.tables st' ∧ st'.decoders = st.decoders ∧ ∀ r, dec st (bytes ++ r) = some (x, st', r)) :
    Step e e' dec x where
  out := by
    obtain ⟨bytes, h, hdec⟩ := out
    exact ⟨bytes, h, fun st hs _ => hdec st hs⟩
  defs := ⟨[], by simp [hd], by rw [ht]; exact Defs.nil _⟩
  mono := by rw [ht]; exact Sub.refl _

/-! ## Names and values -/

theorem name_step (e : Enc) (s : String) : Step e (e.name s) Decode.name s := by
  apply Step.ofOut (by simp [Enc.name]) (by simp only [Enc.name, Enc.nameInto]; split <;> (try split) <;> rfl)
  simp only [Enc.name, Enc.nameInto]
  split
  · rename_i i hs
    refine ⟨leb (i + 2), by simp [toL_pushVar], fun st h => ⟨st, h, rfl, fun r => ?_⟩⟩
    simp [Decode.name, intern_hit h.names hs]
  · rename_i hs
    split
    · refine ⟨leb 0 ++ strB s, by simp [toL_pushStr, leb_zero], fun st h => ⟨{ st with names := st.names ++ [s] },
        ⟨h.names.insert hs, h.values⟩, rfl, fun r => ?_⟩⟩
      simp [Decode.name, List.append_assoc, intern_add]
    · refine ⟨leb 1 ++ strB s, by simp [toL_pushStr, leb_one], fun st h => ⟨st, h, rfl, fun r => ?_⟩⟩
      simp [Decode.name, List.append_assoc, intern_keep]

theorem value_step (e : Enc) (s : String) : Step e (e.value s) Decode.value s := by
  apply Step.ofOut (by simp only [Enc.value]; split <;> (try split) <;> rfl)
    (by simp only [Enc.value]; split <;> (try split) <;> rfl)
  simp only [Enc.value]
  split
  · rename_i i hs
    refine ⟨leb (i + 2), by simp [toL_pushVar], fun st h => ⟨st, h, rfl, fun r => ?_⟩⟩
    simp [Decode.value, intern_hit h.values hs]
  · rename_i hs
    split
    · refine ⟨leb 0 ++ strB s, by simp [toL_pushStr, leb_zero], fun st h => ⟨{ st with values := st.values ++ [s] },
        ⟨h.names, h.values.insert hs⟩, rfl, fun r => ?_⟩⟩
      simp [Decode.value, List.append_assoc, intern_add]
    · refine ⟨leb 1 ++ strB s, by simp [toL_pushStr, leb_one], fun st h => ⟨st, h, rfl, fun r => ?_⟩⟩
      simp [Decode.value, List.append_assoc, intern_keep]

/-! ## Reading in steps -/

theorem bind_run (p : Reader α) (f : α → Reader β) (st : State) (bs : Bytes) :
    (p >>= f) st bs = match p st bs with
      | some (x, st, r) => f x st r
      | none => none := rfl

theorem pure_run (x : α) (st : State) (bs : Bytes) : (pure x : Reader α) st bs = some (x, st, bs) := rfl

theorem Step.pure (e : Enc) (x : α) : Step e e (Pure.pure x) x :=
  Step.ofOut rfl rfl ⟨[], by simp, fun st h => ⟨st, h, rfl, fun r => rfl⟩⟩

theorem Step.bind {e₁ e₂ e₃ : Enc} {p : Reader α} {f : α → Reader β} {x : α} {y : β}
    (h₁ : Step e₁ e₂ p x) (h₂ : Step e₂ e₃ (f x) y) : Step e₁ e₃ (p >>= f) y where
  out := by
    obtain ⟨b₁, hb₁, d₁⟩ := h₁.out
    obtain ⟨b₂, hb₂, d₂⟩ := h₂.out
    refine ⟨b₁ ++ b₂, by rw [hb₂, hb₁, List.append_assoc], fun st hs hD => ?_⟩
    obtain ⟨st₁, hs₁, hD₁, r₁⟩ := d₁ st hs (DSync.mono h₂.mono hD)
    obtain ⟨st₂, hs₂, hD₂, r₂⟩ := d₂ st₁ hs₁ (by rw [hD₁]; exact hD)
    refine ⟨st₂, hs₂, by rw [hD₂, hD₁], fun r => ?_⟩
    rw [bind_run, List.append_assoc, r₁ (b₂ ++ r)]
    exact r₂ r
  defs := by
    obtain ⟨d₁, hd₁, D₁⟩ := h₁.defs
    obtain ⟨d₂, hd₂, D₂⟩ := h₂.defs
    exact ⟨d₁ ++ d₂, by rw [hd₂, hd₁, List.append_assoc], D₁.trans D₂⟩
  mono := h₁.mono.trans h₂.mono

/-- A step that reads nothing, before a reader. -/
theorem Step.before {e₁ e₂ e₃ : Enc} {q : Reader β} {y : β}
    (h₁ : Step e₁ e₂ (Pure.pure ()) ()) (h₂ : Step e₂ e₃ q y) : Step e₁ e₃ q y := by
  have := Step.bind h₁ (f := fun _ => q) h₂
  exact this

theorem byte_step (e : Enc) (k : UInt8) : Step e (e.byte k) byte k :=
  Step.ofOut rfl rfl ⟨[k], by simp [Enc.byte], fun st h => ⟨st, h, rfl, fun r => by simp [Reader.byte]⟩⟩

theorem var_step (e : Enc) (n : Nat) : Step e (e.var n) var n :=
  Step.ofOut rfl rfl ⟨leb n, by simp [Enc.var, toL_pushVar], fun st h => ⟨st, h, rfl, fun r => by
    simp [var, Reader.lift, var_leb]⟩⟩

theorem str_step (e : Enc) (s : String) : Step e (e.str s) str s :=
  Step.ofOut rfl rfl ⟨strB s, by simp [Enc.str, toL_pushStr], fun st h => ⟨st, h, rfl, fun r => by
    simp [str, Reader.lift, str_strB]⟩⟩

/-! ## Decoder shapes -/

/-- The bytes of a path (a segment count and the segments). -/
def pathB (p : Path) : Bytes := leb p.length ++ (p.map strB).flatten

/-- The bytes of a list of paths. -/
def pathsB (ps : List Path) : Bytes := (ps.map pathB).flatten

theorem toL_foldl_pushStr (p : Path) (b : ByteArray) : toL (p.foldl pushStr b) = toL b ++ (p.map strB).flatten := by
  induction p generalizing b with
  | nil => simp
  | cons s p ih => simp [List.foldl, ih, toL_pushStr]

theorem toL_foldl_paths (ps : List Path) (b : ByteArray) :
    toL (ps.foldl (init := b) fun d p => p.foldl (init := pushVar d p.length) pushStr) = toL b ++ pathsB ps := by
  induction ps generalizing b with
  | nil => simp [pathsB]
  | cons p ps ih => simp [List.foldl, ih, toL_foldl_pushStr, toL_pushVar, pathsB, pathB]

theorem strs_read (p : Path) (st : State) (r : Bytes) :
    strs p.length st ((p.map strB).flatten ++ r) = some (p, st, r) := by
  induction p with
  | nil => rfl
  | cons s p ih => simp [strs, bind_run, pure_run, str, Reader.lift, str_strB, ih]

theorem paths_read (ps : List Path) (st : State) (r : Bytes) :
    paths ps.length st (pathsB ps ++ r) = some (ps, st, r) := by
  induction ps with
  | nil => rfl
  | cons p ps ih =>
    simp [paths, bind_run, pure_run, var, Reader.lift, pathsB, pathB, var_leb, strs_read, ih] at *

theorem ops_step {st st' : State} {c r : Bytes} {w : List Wire} (hc : c ≠ []) (h : op st (c ++ r) = some (w, st', r)) :
    ops st (c ++ r) = (ops st' r).map fun (ws, st) => (w ++ ws, st) := by
  obtain _ | ⟨b, c⟩ := c
  · exact absurd rfl hc
  simp only [List.cons_append] at h ⊢
  rw [ops, h]
  simp only
  rw [dite_eq_left_of_eq_true (eq_true (by simp; omega))]

theorem DS.insert {m : Std.HashMap (List Path) Nat} {D : Nat → Option (List Path)} {ps : List Path}
    (h : DS m D) (hps : m[ps]? = none) :
    DS (m.insert ps m.size) (fun j => if j = m.size then some ps else D j) := by
  have hmem : ¬ ps ∈ m := by simp [Std.HashMap.mem_iff_isSome_getElem?, hps]
  have hsz : (m.insert ps m.size).size = m.size + 1 := by simp [Std.HashMap.size_insert, hmem]
  constructor
  · intro ps' j hj
    rw [Std.HashMap.getElem?_insert] at hj
    split at hj
    · rename_i heq
      simp only [beq_iff_eq] at heq
      simp only [Option.some.injEq] at hj
      subst heq hj
      simp
    · have := h.2 ps' j hj
      show (if j = m.size then some ps else D j) = some ps'
      rw [ite_eq_right_of_eq_false _ _ (eq_false (by omega))]
      exact h.1 ps' j hj
  · intro ps' j hj
    rw [hsz]
    rw [Std.HashMap.getElem?_insert] at hj
    split at hj
    · simp only [Option.some.injEq] at hj; omega
    · have := h.2 ps' j hj; omega

/-- Defining a decoder shape (`Enc.decoder`) reads nothing in the ops; the
definition it appends adds the shape to the decoder table under its id. -/
theorem encDecoder_step (e : Enc) (ps : List Path) :
    Step e (e.decoder ps).1 (Pure.pure ()) () ∧ (e.decoder ps).1.tables.decoders[ps]? = some (e.decoder ps).2 := by
  simp only [Enc.decoder]
  split
  · rename_i i hi
    exact ⟨Step.pure e (), hi⟩
  · rename_i hps
    refine ⟨⟨⟨[], by simp, fun st hs _ => ⟨st, ⟨hs.names, hs.values⟩, rfl, fun r => rfl⟩⟩, ?_, ?_⟩, by simp⟩
    · refine ⟨[7] ++ leb e.tables.decoders.size ++ leb ps.length ++ pathsB ps, ?_, ?_⟩
      · simp [toL_foldl_paths, toL_pushVar]
      · intro st hD
        refine ⟨_, hD.insert hps, fun r => ?_⟩
        rw [ops_step (st' := { st with decoders := fun j => if j = e.tables.decoders.size then some ps else st.decoders j })
          (w := []) (by simp)]
        · cases ops _ r <;> simp
        · simp [op, bind_run, pure_run, Reader.byte, var, Reader.lift, var_leb, paths_read, define]
    · intro ps' j hj
      rw [Std.HashMap.getElem?_insert]
      split
      · rename_i heq
        simp only [beq_iff_eq] at heq
        subst heq
        simp [hps] at hj
      · exact hj

/-- Reading a decoder id the encoder has defined gives its shape. -/
theorem decoder_step (e : Enc) {ps : List Path} {d : Nat} (h : e.tables.decoders[ps]? = some d) :
    Step e e (decoder d) ps where
  out := ⟨[], by simp, fun st hs hD => ⟨st, hs, rfl, fun r => by simp [decoder, hD ps d h]⟩⟩
  defs := ⟨[], by simp, Defs.nil _⟩
  mono := Sub.refl _

/-! ## Attributes -/

@[simp] theorem decoders_name (e : Enc) (s : String) : (e.name s).tables.decoders = e.tables.decoders := by
  simp only [Enc.name, Enc.nameInto]; split <;> (try split) <;> rfl

@[simp] theorem decoders_value (e : Enc) (s : String) : (e.value s).tables.decoders = e.tables.decoders := by
  simp only [Enc.value]; split <;> (try split) <;> rfl

@[simp] theorem tables_byte (e : Enc) (k : UInt8) : (e.byte k).tables = e.tables := rfl
@[simp] theorem tables_var (e : Enc) (n : Nat) : (e.var n).tables = e.tables := rfl

/-- A listener: its decoder shape (defined if new), then `5 event id`. -/
theorem listener_step (e : Enc) (ev : String) (ps : List Path) :
    Step e (let (e, d) := e.decoder ps; ((e.byte 5).name ev).var d) attrOp (.set (.on ev) (.listener ⟨ev, ps⟩)) := by
  obtain ⟨hs, hd⟩ := encDecoder_step e ps
  rcases hdec : e.decoder ps with ⟨e₁, d⟩
  rw [hdec] at hs hd
  exact Step.before hs (Step.bind (byte_step _ 5) (Step.bind (name_step _ ev) (Step.bind (var_step _ d)
    (Step.bind (decoder_step _ (by simpa using hd)) (Step.pure _ _)))))

theorem attr_step (e : Enc) (a : Attr Msg) : Step e (e.attr a) attrOp (.set a.key a.val) := by
  cases a with
  | attr n s => exact Step.bind (byte_step e 0) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
  | prop n v =>
    cases v with
    | str s => exact Step.bind (byte_step e 1) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
    | bool b =>
      cases b
      · exact Step.bind (byte_step e 2) (Step.bind (name_step _ n) (Step.pure _ _))
      · exact Step.bind (byte_step e 3) (Step.bind (name_step _ n) (Step.pure _ _))
  | style n s => exact Step.bind (byte_step e 4) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
  | on l h => exact listener_step e l.event l.paths

theorem attrOp_step (e : Enc) (o : AttrOp) : Step e (e.attrOp o) attrOp o.wire := by
  match o with
  | .set (.attr n) (.str s) => exact Step.bind (byte_step e 0) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
  | .set (.attr n) (.prop (.str s)) => exact Step.bind (byte_step e 8) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.attr n) (.prop (.bool false)) => exact Step.bind (byte_step e 8) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.attr n) (.prop (.bool true)) => exact Step.bind (byte_step e 8) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.attr n) (.listener l) => exact Step.bind (byte_step e 8) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.prop n) (.str s) => exact Step.bind (byte_step e 9) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.prop n) (.prop (.str s)) => exact Step.bind (byte_step e 1) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
  | .set (.prop n) (.prop (.bool false)) => exact Step.bind (byte_step e 2) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.prop n) (.prop (.bool true)) => exact Step.bind (byte_step e 3) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.prop n) (.listener l) => exact Step.bind (byte_step e 9) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.style n) (.str s) => exact Step.bind (byte_step e 4) (Step.bind (name_step _ n) (Step.bind (value_step _ s) (Step.pure _ _)))
  | .set (.style n) (.prop (.str s)) => exact Step.bind (byte_step e 10) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.style n) (.prop (.bool false)) => exact Step.bind (byte_step e 10) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.style n) (.prop (.bool true)) => exact Step.bind (byte_step e 10) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.style n) (.listener l) => exact Step.bind (byte_step e 10) (Step.bind (name_step _ n) (Step.pure _ _))
  | .set (.on ev) (.str s) => exact Step.bind (byte_step e 11) (Step.bind (name_step _ ev) (Step.pure _ _))
  | .set (.on ev) (.prop (.str s)) => exact Step.bind (byte_step e 11) (Step.bind (name_step _ ev) (Step.pure _ _))
  | .set (.on ev) (.prop (.bool false)) => exact Step.bind (byte_step e 11) (Step.bind (name_step _ ev) (Step.pure _ _))
  | .set (.on ev) (.prop (.bool true)) => exact Step.bind (byte_step e 11) (Step.bind (name_step _ ev) (Step.pure _ _))
  | .set (.on ev) (.listener l) => exact listener_step e ev l.paths
  | .remove (.attr n) => exact Step.bind (byte_step e 8) (Step.bind (name_step _ n) (Step.pure _ _))
  | .remove (.prop n) => exact Step.bind (byte_step e 9) (Step.bind (name_step _ n) (Step.pure _ _))
  | .remove (.style n) => exact Step.bind (byte_step e 10) (Step.bind (name_step _ n) (Step.pure _ _))
  | .remove (.on ev) => exact Step.bind (byte_step e 11) (Step.bind (name_step _ ev) (Step.pure _ _))

theorem attrOps_step (os : List AttrOp) (e : Enc) :
    Step e (os.foldl Enc.attrOp e) (attrOps os.length) (os.map AttrOp.wire) := by
  induction os generalizing e with
  | nil => exact Step.pure e _
  | cons o os ih => exact Step.bind (attrOp_step e o) (Step.bind (ih _) (Step.pure _ _))

theorem attrs_step (as : List (Attr Msg)) (e : Enc) :
    Step e (as.foldl (fun e a => e.attr a) e) (attrOps as.length) (as.map fun a => .set a.key a.val) := by
  induction as generalizing e with
  | nil => exact Step.pure e _
  | cons a as ih => exact Step.bind (attr_step e a) (Step.bind (ih _) (Step.pure _ _))

theorem applyAttrOps_sets (as : List (Attr Msg)) (g : Attrs) :
    applyAttrOps (as.map fun a => .set a.key a.val) g = fun k => match lastVal k as with
      | some v => some v
      | none => g k := by
  induction as generalizing g with
  | nil => funext k; simp [applyAttrOps, lastVal]
  | cons a as ih =>
    funext k
    simp only [List.map_cons, applyAttrOps, ih, applyAttrOp, lastVal]
    cases lastVal k as with
    | some v => rfl
    | none =>
      by_cases h : k = a.key
      · subst h; simp
      · have : (a.key == k) = false := by simp; exact Ne.symm h
        simp [h, this]

/-- The attributes of a new element, applied in order to an element with none,
are the slots `attrsOf` gives it. -/
theorem applyAttrOps_attrsOf (as : List (Attr Msg)) :
    applyAttrOps (as.map fun a => .set a.key a.val) (fun _ => none) = attrsOf as := by
  rw [applyAttrOps_sets]
  funext k
  simp only [attrsOf]
  cases lastVal k as <;> rfl

/-! ## Nodes -/

/-- A step that writes at least one byte of ops. -/
def Grows (e e' : Enc) : Prop := (toL e.out).length < (toL e'.out).length

theorem Step.le {e e' : Enc} {dec : Reader α} {x : α} (h : Step e e' dec x) :
    (toL e.out).length ≤ (toL e'.out).length := by
  obtain ⟨b, hb, _⟩ := h.out
  rw [hb]; simp

/-- Two steps whose bytes `dec` reads in turn. -/
theorem Step.comp {e₁ e₂ e₃ : Enc} {p : Reader α} {q : Reader β} {dec : Reader γ} {x : α} {y : β} {z : γ}
    (h₁ : Step e₁ e₂ p x) (h₂ : Step e₂ e₃ q y)
    (hdec : ∀ st st₁ st₂ b₁ b₂ r, toL e₂.out = toL e₁.out ++ b₁ → p st (b₁ ++ (b₂ ++ r)) = some (x, st₁, b₂ ++ r) →
      q st₁ (b₂ ++ r) = some (y, st₂, r) → dec st (b₁ ++ (b₂ ++ r)) = some (z, st₂, r)) :
    Step e₁ e₃ dec z where
  out := by
    obtain ⟨b₁, hb₁, d₁⟩ := h₁.out
    obtain ⟨b₂, hb₂, d₂⟩ := h₂.out
    refine ⟨b₁ ++ b₂, by rw [hb₂, hb₁, List.append_assoc], fun st hs hD => ?_⟩
    obtain ⟨st₁, hs₁, hD₁, r₁⟩ := d₁ st hs (DSync.mono h₂.mono hD)
    obtain ⟨st₂, hs₂, hD₂, r₂⟩ := d₂ st₁ hs₁ (by rw [hD₁]; exact hD)
    refine ⟨st₂, hs₂, by rw [hD₂, hD₁], fun r => ?_⟩
    rw [List.append_assoc]
    exact hdec st st₁ st₂ b₁ b₂ r hb₁ (r₁ _) (r₂ r)
  defs := by
    obtain ⟨d₁, hd₁, D₁⟩ := h₁.defs
    obtain ⟨d₂, hd₂, D₂⟩ := h₂.defs
    exact ⟨d₁ ++ d₂, by rw [hd₂, hd₁, List.append_assoc], D₁.trans D₂⟩
  mono := h₁.mono.trans h₂.mono

theorem ns?_nsByte (ns : Ns) : ns? (Enc.nsByte ns).toNat = some ns := by cases ns <;> rfl

theorem nodeHead_elem_step (e : Enc) (id : Nat) (ns : Ns) (tag : String) (attrs : List (Attr Msg)) (n : Nat) :
    Step e (((attrs.foldl (init := (((e.byte (Enc.nsByte ns)).var id).name tag).var attrs.length) fun e a => e.attr a)).var n)
      nodeHead (id, .inr (ns, tag, attrs.map (fun a => .set a.key a.val), n)) := by
  cases ns
  · exact Step.bind (byte_step e 1) (Step.bind (var_step _ id) (Step.bind (name_step _ tag) (Step.bind (var_step _ _) (Step.bind (attrs_step attrs _) (Step.bind (var_step _ n) (Step.pure _ _))))))
  · exact Step.bind (byte_step e 2) (Step.bind (var_step _ id) (Step.bind (name_step _ tag) (Step.bind (var_step _ _) (Step.bind (attrs_step attrs _) (Step.bind (var_step _ n) (Step.pure _ _))))))
  · exact Step.bind (byte_step e 3) (Step.bind (var_step _ id) (Step.bind (name_step _ tag) (Step.bind (var_step _ _) (Step.bind (attrs_step attrs _) (Step.bind (var_step _ n) (Step.pure _ _))))))

theorem nodeHead_text_step (e : Enc) (id : Nat) (s : String) :
    Step e (((e.byte 0).var id).str s) nodeHead (id, .inl s) :=
  Step.bind (byte_step e 0) (Step.bind (var_step _ id) (Step.bind (str_step _ s) (Step.pure _ _)))

theorem grows_byte (e e' : Enc) (k : UInt8) {dec : Reader α} {x : α} (h : Step (e.byte k) e' dec x) : Grows e e' := by
  have := h.le
  simp only [Enc.byte, toL_push, List.length_append] at this
  unfold Grows; simp only [List.length_cons, List.length_nil] at this; omega

theorem ne_nil_of_grows {e e' : Enc} {b : Bytes} (g : Grows e e') (h : toL e'.out = toL e.out ++ b) : b ≠ [] := by
  intro hb; subst hb; unfold Grows at g; rw [h] at g; simp at g

mutual
theorem node_step : (n : Live Msg) → (e : Enc) → Step e (e.node n) node (toDom n) ∧ Grows e (e.node n)
  | .text id s, e => by
    have h := nodeHead_text_step e id s
    refine ⟨Step.comp h (Step.pure _ ()) fun st st₁ st₂ b₁ b₂ r _ hp hq => ?_, ?_⟩
    · simp only [pure_run, Option.some.injEq, Prod.mk.injEq] at hq
      obtain ⟨-, h₁, h₂⟩ := hq
      rw [node, hp]
      simp [h₁, h₂]
    · simp only [Enc.node]
      exact grows_byte e _ 0 (Step.bind (f := fun _ => str) (var_step _ id) (str_step _ s))
  | .elem id ns tag key attrs cs, e => by
    have h := nodeHead_elem_step e id ns tag attrs cs.length
    have hcs := nodes_step cs (((attrs.foldl (init := (((e.byte (Enc.nsByte ns)).var id).name tag).var attrs.length)
      fun e a => e.attr a)).var cs.length)
    have g : Grows e (((attrs.foldl (init := (((e.byte (Enc.nsByte ns)).var id).name tag).var attrs.length)
        fun e a => e.attr a)).var cs.length) := by
      cases ns <;> exact grows_byte e _ _ (Step.bind (var_step _ id) (Step.bind (name_step _ tag)
        (Step.bind (var_step _ _) (Step.bind (attrs_step attrs _) (var_step _ cs.length)))) :
          Step _ _ (do let _ ← var; let _ ← name; let c ← var; let _ ← attrOps c; var) cs.length)
    have eq : e.node (.elem id ns tag key attrs cs) = Enc.nodes (((attrs.foldl (init := (((e.byte (Enc.nsByte ns)).var id).name tag).var attrs.length)
        fun e a => e.attr a)).var cs.length) cs := by
      simp only [Enc.node]
    rw [eq]
    refine ⟨Step.comp h hcs fun st st₁ st₂ b₁ b₂ r hb hp hq => ?_, Nat.lt_of_lt_of_le g hcs.le⟩
    have hne := ne_nil_of_grows g hb
    rw [node, hp]
    simp only
    rw [dite_eq_left_of_eq_true (eq_true (by obtain _ | _ := b₁; exact absurd rfl hne; simp; omega)), hq]
    simp [applyAttrOps_attrsOf]
theorem nodes_step : (cs : List (Live Msg)) → (e : Enc) →
    Step e (e.nodes cs) (fun st bs => nodes st cs.length bs) (cs.map toDom)
  | [], e => by
    simp only [Enc.nodes, List.length_nil, List.map_nil]
    exact Step.ofOut rfl rfl ⟨[], by simp, fun st h => ⟨st, h, rfl, fun r => by simp [nodes]⟩⟩
  | c :: cs, e => by
    obtain ⟨hc, g⟩ := node_step c e
    have hcs := nodes_step cs (e.node c)
    simp only [Enc.nodes]
    refine Step.comp hc hcs fun st st₁ st₂ b₁ b₂ r hb hp hq => ?_
    have hne := ne_nil_of_grows g hb
    simp only [List.length_cons]
    rw [nodes, hp]
    simp only
    rw [dite_eq_left_of_eq_true (eq_true (by obtain _ | _ := b₁; exact absurd rfl hne; simp; omega)), hq]
    rfl
end

/-! ## Ops and frames -/

/-- The number `before` is sent as. -/
def beforeN : Option Nat → Nat
  | none => 0
  | some i => i + 1

theorem before_beforeN (b : Option Nat) : before (beforeN b) = b := by
  cases b <;> simp [before, beforeN]

theorem before_step (e : Enc) (b : Option Nat) : Step e (e.before b) var (beforeN b) := by
  cases b with
  | none => exact Step.ofOut rfl rfl ⟨[0], by simp [Enc.before, Enc.byte], fun st h => ⟨st, h, rfl, fun r => by
      simp [var, Reader.lift, readVar, beforeN]⟩⟩
  | some i => exact var_step e (i + 1)

/-- Steps of the op loop: the bytes the encoder appends are read by the
frame's op loop as the applier's operations `w`. -/
structure Loop (e e' : Enc) (w : List Wire) : Prop where
  out : ∃ bytes, toL e'.out = toL e.out ++ bytes ∧ ∀ st, Sync e.tables st → DSync e'.tables.decoders st.decoders →
    ∃ st', Sync e'.tables st' ∧ st'.decoders = st.decoders ∧
      ∀ r, ops st (bytes ++ r) = (ops st' r).map fun (ws, st) => (w ++ ws, st)
  defs : ∃ db, toL e'.defs = toL e.defs ++ db ∧ Defs e.tables.decoders e'.tables.decoders db
  mono : Sub e.tables.decoders e'.tables.decoders

theorem Loop.nil (e : Enc) : Loop e e [] where
  out := ⟨[], by simp, fun st h _ => ⟨st, h, rfl, fun r => by
    simp only [List.nil_append]; generalize ops st r = o; cases o <;> simp⟩⟩
  defs := ⟨[], by simp, Defs.nil _⟩
  mono := Sub.refl _

theorem Loop.trans {e₁ e₂ e₃ : Enc} {w₁ w₂ : List Wire} (h₁ : Loop e₁ e₂ w₁) (h₂ : Loop e₂ e₃ w₂) :
    Loop e₁ e₃ (w₁ ++ w₂) where
  out := by
    obtain ⟨b₁, hb₁, d₁⟩ := h₁.out
    obtain ⟨b₂, hb₂, d₂⟩ := h₂.out
    refine ⟨b₁ ++ b₂, by rw [hb₂, hb₁, List.append_assoc], fun st hs hD => ?_⟩
    obtain ⟨st₁, hs₁, hD₁, r₁⟩ := d₁ st hs (DSync.mono h₂.mono hD)
    obtain ⟨st₂, hs₂, hD₂, r₂⟩ := d₂ st₁ hs₁ (by rw [hD₁]; exact hD)
    refine ⟨st₂, hs₂, by rw [hD₂, hD₁], fun r => ?_⟩
    rw [List.append_assoc, r₁, r₂, Option.map_map]
    congr 1
    funext ⟨ws, st⟩
    simp
  defs := by
    obtain ⟨d₁, hd₁, D₁⟩ := h₁.defs
    obtain ⟨d₂, hd₂, D₂⟩ := h₂.defs
    exact ⟨d₁ ++ d₂, by rw [hd₂, hd₁, List.append_assoc], D₁.trans D₂⟩
  mono := h₁.mono.trans h₂.mono

/-- One op that writes at least one byte is one turn of the op loop. -/
theorem Loop.ofStep {e e' : Enc} {w : List Wire} (h : Step e e' op w) (g : Grows e e') : Loop e e' w where
  out := by
    obtain ⟨b, hb, d⟩ := h.out
    refine ⟨b, hb, fun st hs hD => ?_⟩
    obtain ⟨st', hs', hD', r'⟩ := d st hs hD
    exact ⟨st', hs', hD', fun r => ops_step (ne_nil_of_grows g hb) (r' r)⟩
  defs := h.defs
  mono := h.mono

theorem Step.value {e e' : Enc} {dec : Reader α} {x y : α} (h : Step e e' dec x) (hxy : x = y) : Step e e' dec y :=
  hxy ▸ h

mutual
theorem op_loop (p : Nat) : (o : Op Msg) → (e : Enc) → Loop e (Enc.op p e o) (Wire.ofOp p o)
  | .insert n b, e => by
    have h : Step e (Enc.op p e (.insert n b)) op [Wire.insert p (toDom n) (before (beforeN b))] := Step.bind (byte_step e 1) (Step.bind (var_step _ p) (Step.bind (before_step _ b)
      (Step.bind (node_step n _).1 (Step.pure _ [Wire.insert p (toDom n) (before (beforeN b))]))))
    rw [before_beforeN] at h
    exact Loop.ofStep h (grows_byte e _ 1 (Step.bind (var_step _ p) (Step.bind (before_step _ b) (node_step n _).1) :
      Step _ _ (do let _ ← var; let _ ← var; node) (toDom n)))
  | .move i b, e => by
    have h : Step e (Enc.op p e (Op.move (Msg := Msg) i b)) op [Wire.move p i (before (beforeN b))] := Step.bind (byte_step e 2) (Step.bind (var_step _ p) (Step.bind (var_step _ i)
      (Step.bind (before_step _ b) (Step.pure _ [Wire.move p i (before (beforeN b))]))))
    rw [before_beforeN] at h
    exact Loop.ofStep h (grows_byte e _ 2 (Step.bind (var_step _ p) (Step.bind (var_step _ i) (before_step _ b)) :
      Step _ _ (do let _ ← var; let _ ← var; var) (beforeN b)))
  | .remove i, e => Loop.ofStep (Step.bind (byte_step e 3) (Step.bind (var_step _ i) (Step.pure _ _)))
      (grows_byte e _ 3 (var_step _ i))
  | .clear, e => Loop.ofStep (Step.bind (byte_step e 4) (Step.bind (var_step _ p) (Step.pure _ _)))
      (grows_byte e _ 4 (var_step _ p))
  | .text i s, e => Loop.ofStep (Step.bind (byte_step e 5) (Step.bind (var_step _ i) (Step.bind (str_step _ s) (Step.pure _ _))))
      (grows_byte e _ 5 (Step.bind (var_step _ i) (str_step _ s) : Step _ _ (do let _ ← var; str) s))
  | .attrs i aops, e => Loop.ofStep (Step.bind (byte_step e 6) (Step.bind (var_step _ i) (Step.bind (var_step _ aops.length)
        (Step.bind (attrOps_step aops _) (Step.pure _ _)))))
      (grows_byte e _ 6 (Step.bind (var_step _ i) (Step.bind (var_step _ aops.length) (attrOps_step aops _)) :
        Step _ _ (do let _ ← var; let c ← var; attrOps c) (aops.map AttrOp.wire)))
  | .sub i os, e => by
    simp only [Enc.op, Wire.ofOp]
    exact opList_loop i os e
theorem opList_loop (p : Nat) : (os : List (Op Msg)) → (e : Enc) → Loop e (Enc.opList p e os) (Wire.ofOps p os)
  | [], e => by simp only [Enc.opList, Wire.ofOps]; exact Loop.nil e
  | o :: os, e => by
    simp only [Enc.opList, Wire.ofOps]
    exact (op_loop p o e).trans (opList_loop p os _)
end

/-- The applier's tables are in step with the encoder's: the same interned
names and values at the same indices, and every decoder shape under its id. -/
def Synced (t : Tables) (st : State) : Prop := Sync t st ∧ DS t.decoders st.decoders

theorem synced_empty : Synced {} {} :=
  ⟨⟨NSync.empty, NSync.empty⟩, by simp [DS, DSync]⟩

theorem opList_foldl (p : Nat) (os : List (Op Msg)) (e : Enc) : os.foldl (Enc.op p) e = Enc.opList p e os := by
  induction os generalizing e with
  | nil => simp [Enc.opList]
  | cons o os ih => simp [Enc.opList, ih]

/-- One frame: from tables in step, the applier reads the frame as exactly
the patch that was encoded, and the tables are in step again. -/
theorem frame_decodes (t : Tables) (st : State) (ops : Array (Op Msg)) (root : Nat) (h : Synced t st) :
    ∃ st', Decode.frame st (Encode.frame t ops root).1 = some (Wire.ofOps root ops.toList, st') ∧
      Synced (Encode.frame t ops root).2 st' := by
  obtain ⟨hs, hd⟩ := h
  have he : Encode.frame t ops root = ((Enc.opList root { tables := t } ops.toList).defs ++
      (Enc.opList root { tables := t } ops.toList).out, (Enc.opList root { tables := t } ops.toList).tables) := by
    simp only [Encode.frame, ← Array.foldl_toList, opList_foldl]
  have L := opList_loop root ops.toList { tables := t }
  rw [he]
  generalize Enc.opList root { tables := t } ops.toList = e at L ⊢
  obtain ⟨db, hdb, D⟩ := L.defs
  obtain ⟨bytes, hb, dec⟩ := L.out
  obtain ⟨D', hD', hops⟩ := D st hd
  obtain ⟨st', hs', hD'', hr⟩ := dec { st with decoders := D' } ⟨hs.names, hs.values⟩ hD'.1
  refine ⟨st', ?_, hs', by rw [hD'']; exact hD'⟩
  show Decode.ops st (toL (e.defs ++ e.out)) = _
  have h0 : Decode.ops st' [] = some ([], st') := by rw [Decode.ops]
  have hr' := hr []
  rw [h0] at hr'
  rw [toL_append, hdb, hb]
  simp only [toL_empty, List.nil_append]
  rw [← List.append_nil bytes, hops, hr']
  simp

/-- A session: from the start, every frame is read as exactly its patch. -/
theorem frames_decode (t : Tables) (st : State) (fs : List (Array (Op Msg) × Nat)) (h : Synced t st) :
    Decode.frames st (encodeAll t fs) = some (fs.map fun (ops, root) => Wire.ofOps root ops.toList) := by
  induction fs generalizing t st with
  | nil => rfl
  | cons f fs ih =>
    obtain ⟨ops, root⟩ := f
    obtain ⟨st', h₁, h₂⟩ := frame_decodes t st ops root h
    simp only [encodeAll, Decode.frames, h₁, ih _ _ h₂, List.map_cons, Option.map_some]

end Lasm.UI.Proofs.Wire
