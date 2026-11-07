/-
The Lasm.JS value codec reads back what it writes: whatever `Wire.encode`
accepts, the reader that `Wire.decode` runs (`Wire.decodeWith`) reads back as
the same value, and `encode` refuses exactly the values with a length that
does not fit in the format's u32 (`Data.fits`).

The proof follows the writer. `Reads d e` says that the bytes `e` are read
back as `d`, wherever they sit in a byte array and whatever follows them;
`write_reads` shows that the bytes `write` appends for `d` satisfy it.
-/
import Lasm.JS.Core
import Std.Data.String.ToInt

namespace Lasm.JS

namespace Data

/-- `d` as it arrives at the other end: the same, except that each number is
the float with the same bits (`Float.ofBits n.toBits`; numbers travel as
their bits, and Lean's library does not prove `Float.ofBits (Float.toBits n) = n`). -/
def wire : Data → Data
  | .number n => .number (Float.ofBits n.toBits)
  | .array xs => .array (xs.map wire)
  | .object fs => .object (fs.map fun kv => (kv.1, wire kv.2))
  | d => d
termination_by d => d
decreasing_by
  all_goals
    have := Array.sizeOf_lt_of_mem ‹_ ∈ _›
    first | (simp_all; omega) | (cases ‹String × Data›; simp_all; omega)

/-- `d` is plain data: it holds no reference (`ref`). -/
inductive Plain : Data → Prop
  | undefined : Plain .undefined
  | null : Plain .null
  | bool (b : Bool) : Plain (.bool b)
  | number (n : Float) : Plain (.number n)
  | string (s : String) : Plain (.string s)
  | bigint (i : Int) : Plain (.bigint i)
  | bytes (x : ByteArray) : Plain (.bytes x)
  | array {xs : Array Data} : (∀ x ∈ xs, Plain x) → Plain (.array xs)
  | object {fs : Array (String × Data)} : (∀ kv ∈ fs, Plain kv.2) → Plain (.object fs)

/-- Every length in `d` fits the wire format's u32 (at most `Wire.maxLength`,
2³² − 1): of each string (in UTF-8 bytes), bigint (in decimal digits), byte
array, array, object (in fields) and object key. -/
inductive Fits : Data → Prop
  | undefined : Fits .undefined
  | null : Fits .null
  | bool (b : Bool) : Fits (.bool b)
  | number (n : Float) : Fits (.number n)
  | string {s : String} : s.utf8ByteSize ≤ Wire.maxLength → Fits (.string s)
  | bigint {i : Int} : (toString i).utf8ByteSize ≤ Wire.maxLength → Fits (.bigint i)
  | bytes {x : ByteArray} : x.size ≤ Wire.maxLength → Fits (.bytes x)
  | array {xs : Array Data} : xs.size ≤ Wire.maxLength → (∀ x ∈ xs, Fits x) → Fits (.array xs)
  | object {fs : Array (String × Data)} : fs.size ≤ Wire.maxLength →
      (∀ kv ∈ fs, kv.1.utf8ByteSize ≤ Wire.maxLength) → (∀ kv ∈ fs, Fits kv.2) → Fits (.object fs)
  | ref (v : Value) (d : String) : Fits (.ref v d)

end Data

namespace Proofs.Wire
open Lasm.JS.Wire

/-! ## Bytes -/

/-- The bytes of a byte array, as a list. -/
abbrev toL (b : ByteArray) : List UInt8 := b.data.toList

@[simp] theorem toL_push (b : ByteArray) (x : UInt8) : toL (b.push x) = toL b ++ [x] := by
  simp [toL, ByteArray.data_push]

@[simp] theorem toL_append (a b : ByteArray) : toL (a ++ b) = toL a ++ toL b := by
  simp [toL, ByteArray.data_append]

@[simp] theorem toL_empty : toL .empty = [] := rfl

theorem length_toL (b : ByteArray) : (toL b).length = b.size := by
  simp [toL]

@[simp] theorem length_toL_toUTF8 (s : String) : (toL s.toUTF8).length = s.utf8ByteSize := by
  simp [toL, String.toUTF8_eq_toByteArray]

/-- The bytes of a u32 (what `pushU32` appends). -/
def u32L (n : UInt32) : List UInt8 := [n.toUInt8, (n >>> 8).toUInt8, (n >>> 16).toUInt8, (n >>> 24).toUInt8]

/-- The bytes of a u64 (what `pushU64` appends). -/
def u64L (n : UInt64) : List UInt8 :=
  [n.toUInt8, (n >>> 8).toUInt8, (n >>> 16).toUInt8, (n >>> 24).toUInt8,
   (n >>> 32).toUInt8, (n >>> 40).toUInt8, (n >>> 48).toUInt8, (n >>> 56).toUInt8]

@[simp] theorem toL_pushU32 (b : ByteArray) (n : UInt32) : toL (pushU32 b n) = toL b ++ u32L n := by
  simp [pushU32, u32L]

@[simp] theorem toL_pushU64 (b : ByteArray) (n : UInt64) : toL (pushU64 b n) = toL b ++ u64L n := by
  simp [pushU64, u64L]

@[simp] theorem length_u32L (n : UInt32) : (u32L n).length = 4 := rfl
@[simp] theorem length_u64L (n : UInt64) : (u64L n).length = 8 := rfl

theorem u32_bytes (n : UInt32) :
    n.toUInt8.toUInt32 + ((n >>> 8).toUInt8.toUInt32 <<< 8) + ((n >>> 16).toUInt8.toUInt32 <<< 16) +
      ((n >>> 24).toUInt8.toUInt32 <<< 24) = n := by
  apply UInt32.toNat_inj.mp
  have := n.toNat_lt_size
  simp only [UInt32.size] at this
  simp [UInt32.toNat_add, UInt32.toNat_shiftLeft, UInt32.toNat_shiftRight, Nat.shiftRight_eq_div_pow, Nat.shiftLeft_eq]
  omega

theorem u64_bytes (n : UInt64) :
    n.toUInt8.toUInt64 + ((n >>> 8).toUInt8.toUInt64 <<< 8) + ((n >>> 16).toUInt8.toUInt64 <<< 16) +
      ((n >>> 24).toUInt8.toUInt64 <<< 24) + ((n >>> 32).toUInt8.toUInt64 <<< 32) +
      ((n >>> 40).toUInt8.toUInt64 <<< 40) + ((n >>> 48).toUInt8.toUInt64 <<< 48) +
      ((n >>> 56).toUInt8.toUInt64 <<< 56) = n := by
  apply UInt64.toNat_inj.mp
  have := n.toNat_lt_size
  simp only [UInt64.size] at this
  simp [UInt64.toNat_add, UInt64.toNat_shiftLeft, UInt64.toNat_shiftRight, Nat.shiftRight_eq_div_pow, Nat.shiftLeft_eq]
  omega

theorem get_eq {B : ByteArray} {l : List UInt8} (hB : toL B = l) (k : Nat) (h : k < B.size) :
    B[k] = l[k]'(by rw [← hB, length_toL]; exact h) := by
  subst hB
  rw [ByteArray.getElem_eq_getElem_data, ← Array.getElem_toList]

theorem size_eq {B : ByteArray} {l : List UInt8} (hB : toL B = l) : B.size = l.length := by
  rw [← hB, length_toL]

/-! ## Reading the parts of a value -/

theorem readU32_at {B : ByteArray} {l₁ l₂ : List UInt8} {n : UInt32} (hB : toL B = l₁ ++ u32L n ++ l₂) :
    readU32 B l₁.length = some n := by
  have hs : l₁.length + 4 ≤ B.size := by rw [size_eq hB]; simp
  rw [readU32, dite_eq_left hs]
  simp only [get_eq hB]
  simp [u32L, List.getElem_append_right, -UInt32.toUInt32_toUInt8, u32_bytes]

theorem readU64_at {B : ByteArray} {l₁ l₂ : List UInt8} {n : UInt64} (hB : toL B = l₁ ++ u64L n ++ l₂) :
    readU64 B l₁.length = some n := by
  have hs : l₁.length + 8 ≤ B.size := by rw [size_eq hB]; simp
  rw [readU64, dite_eq_left hs]
  simp only [get_eq hB]
  simp [u64L, List.getElem_append_right, -UInt64.toUInt64_toUInt8, u64_bytes]

theorem extract_at {B x : ByteArray} {l₁ l₂ : List UInt8} (hB : toL B = l₁ ++ toL x ++ l₂) (i : Nat)
    (hi : i = l₁.length) : B.extract i (i + x.size) = x := by
  subst hi
  apply ByteArray.ext
  apply Array.toList_inj.mp
  rw [ByteArray.data_extract, Array.toList_extract]
  simp only [toL] at hB
  rw [hB]
  simp [List.extract]

theorem toNat_length {n : Nat} (h : n ≤ maxLength) : n.toUInt32.toNat = n := by
  simp [maxLength, UInt32.size] at *
  omega

theorem readRaw_at {B x : ByteArray} {l₁ l₂ : List UInt8} (hx : x.size ≤ maxLength)
    (hB : toL B = l₁ ++ u32L x.size.toUInt32 ++ toL x ++ l₂) :
    readRaw B l₁.length = some (x, l₁.length + 4 + x.size) := by
  have h32 := readU32_at (B := B) (n := x.size.toUInt32) (l₁ := l₁) (l₂ := toL x ++ l₂) (by rw [hB]; simp)
  have hs : l₁.length + 4 + x.size ≤ B.size := by rw [size_eq hB]; simp; omega
  have hx' : B.extract (l₁.length + 4) (l₁.length + 4 + x.size) = x :=
    extract_at (l₁ := l₁ ++ u32L x.size.toUInt32) (l₂ := l₂) (by simp [hB]) _ (by simp)
  simp [readRaw, h32, toNat_length hx, hs, hx']

theorem fromUTF8_toByteArray (s : String) : String.fromUTF8? s.toByteArray = some s := by
  simp only [String.fromUTF8?, s.isValidUTF8, dite_true]
  rfl

theorem readString_at {B : ByteArray} {s : String} {l₁ l₂ : List UInt8} (hs : s.utf8ByteSize ≤ maxLength)
    (hB : toL B = l₁ ++ u32L s.utf8ByteSize.toUInt32 ++ toL s.toUTF8 ++ l₂) :
    readString B l₁.length = .ok (s, l₁.length + 4 + s.utf8ByteSize) := by
  have hsz : s.toUTF8.size = s.utf8ByteSize := by simp [String.toUTF8_eq_toByteArray]
  rw [← hsz] at hs hB
  simp [readString, readRaw_at hs hB, fromUTF8_toByteArray]

/-! ## Reading back what is written -/

section
variable (ref : UInt32 → String → Except String Data)

/-- The bytes `e` are read back as `d`: wherever they sit in a byte array `B`
(after `l₁`), whatever follows them (`l₂`), and with any fuel at least their
length. -/
def Reads (d : Data) (e : List UInt8) : Prop :=
  ∀ (B : ByteArray) (l₁ l₂ : List UInt8) (fuel : Nat), toL B = l₁ ++ e ++ l₂ → e.length ≤ fuel →
    readAt id ref fuel B l₁.length = .ok (d.wire, l₁.length + e.length)

/-- The bytes `e` are read back as the values `xs`, one after the other. -/
def ReadsItems (xs : List Data) (e : List UInt8) : Prop :=
  ∀ (B : ByteArray) (l₁ l₂ : List UInt8) (fuel : Nat) (acc : Array Data), toL B = l₁ ++ e ++ l₂ → e.length ≤ fuel →
    readItems id ref fuel B xs.length l₁.length acc = .ok (acc ++ (xs.map Data.wire).toArray, l₁.length + e.length)

/-- The bytes `e` are read back as the fields `fs` (key, value), one after the other. -/
def ReadsFields (fs : List (String × Data)) (e : List UInt8) : Prop :=
  ∀ (B : ByteArray) (l₁ l₂ : List UInt8) (fuel : Nat) (acc : Array (String × Data)), toL B = l₁ ++ e ++ l₂ →
    e.length ≤ fuel →
    readFields id ref fuel B fs.length l₁.length acc =
      .ok (acc ++ (fs.map fun kv => (kv.1, kv.2.wire)).toArray, l₁.length + e.length)

/-- What `write` appends for `d` is read back as `d`. -/
def Written (d : Data) : Prop :=
  ∀ pre out, write pre d = .ok out → ∃ e, toL out = toL pre ++ e ∧ Reads ref d e

theorem get_tag {B : ByteArray} {l₁ l₂ rest : List UInt8} {t : UInt8} (hB : toL B = l₁ ++ t :: rest ++ l₂)
    (h : l₁.length < B.size) : B[l₁.length] = t := by
  rw [get_eq hB]; simp

theorem lt_of_tag {B : ByteArray} {l₁ l₂ rest : List UInt8} {t : UInt8} (hB : toL B = l₁ ++ t :: rest ++ l₂) :
    l₁.length < B.size := by
  rw [size_eq hB]; simp

theorem fuel_succ {fuel n : Nat} (h : n + 1 ≤ fuel) : ∃ f, fuel = f + 1 ∧ n ≤ f := ⟨fuel - 1, by omega, by omega⟩

theorem written_undefined : Written ref .undefined := by
  intro pre out hw
  simp only [write, Except.ok.injEq] at hw
  subst hw
  refine ⟨[0], by simp, ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, -⟩ := fuel_succ (n := 0) (by simpa using hf)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  simp [Data.wire]
  rfl

theorem pushLength_ok {b out : ByteArray} {n : Nat} {what unit : String} :
    pushLength b n what unit = .ok out ↔ n ≤ maxLength ∧ out = pushU32 b n.toUInt32 := by
  unfold pushLength
  split
  · simp_all [eq_comm]
  · simp only [reduceCtorEq, false_iff, not_and]; omega

theorem pushString_ok {b out : ByteArray} {s what : String} :
    pushString b s what = .ok out ↔ s.utf8ByteSize ≤ maxLength ∧ out = pushU32 b s.utf8ByteSize.toUInt32 ++ s.toUTF8 := by
  unfold pushString
  cases h : pushLength b s.utf8ByteSize what "bytes" with
  | error e =>
    simp only [bind, Except.bind, reduceCtorEq, false_iff, not_and]
    intro hs; simp [pushLength, hs] at h
  | ok b' =>
    rw [pushLength_ok] at h
    obtain ⟨hs, rfl⟩ := h
    simp [bind, Except.bind, pure, Except.pure, hs, eq_comm]

theorem written_null : Written ref .null := by
  intro pre out hw
  simp only [write, Except.ok.injEq] at hw
  subst hw
  refine ⟨[1], by simp, ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, -⟩ := fuel_succ (n := 0) (by simpa using hf)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  simp [Data.wire]
  rfl

theorem written_bool (b : Bool) : Written ref (.bool b) := by
  intro pre out hw
  cases b <;> simp only [write, Except.ok.injEq] at hw <;> subst hw
  · refine ⟨[2], by simp, ?_⟩
    intro B l₁ l₂ fuel hB hf
    obtain ⟨f, rfl, -⟩ := fuel_succ (n := 0) (by simpa using hf)
    rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
    simp [Data.wire]
    rfl
  · refine ⟨[3], by simp, ?_⟩
    intro B l₁ l₂ fuel hB hf
    obtain ⟨f, rfl, -⟩ := fuel_succ (n := 0) (by simpa using hf)
    rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
    simp [Data.wire]
    rfl

theorem written_number (n : Float) : Written ref (.number n) := by
  intro pre out hw
  simp only [write, Except.ok.injEq] at hw
  subst hw
  refine ⟨4 :: u64L n.toBits, by simp, ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, -⟩ := fuel_succ (n := 8) (by simpa using hf)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  have h64 := readU64_at (B := B) (n := n.toBits) (l₁ := l₁ ++ [4]) (l₂ := l₂) (by rw [hB]; simp)
  simp only [List.length_append, List.length_singleton] at h64
  simp [h64, Data.wire]
  rfl

theorem written_string (s : String) : Written ref (.string s) := by
  intro pre out hw
  simp only [write, pushString_ok] at hw
  obtain ⟨hs, rfl⟩ := hw
  refine ⟨5 :: u32L s.utf8ByteSize.toUInt32 ++ toL s.toUTF8, by simp, ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, -⟩ := fuel_succ (n := 4 + (toL s.toUTF8).length) (by simp at hf ⊢; omega)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  have hr := readString_at (B := B) (s := s) (l₁ := l₁ ++ [5]) (l₂ := l₂) hs (by rw [hB]; simp)
  simp only [List.length_append, List.length_singleton] at hr
  simp [hr, Data.wire, pure, Except.pure]
  omega

theorem toString_toInt? (i : Int) : (toString i).toInt? = some i := by
  simp [toString]

theorem written_bigint (i : Int) : Written ref (.bigint i) := by
  intro pre out hw
  simp only [write, pushString_ok] at hw
  obtain ⟨hs, rfl⟩ := hw
  refine ⟨6 :: u32L (toString i).utf8ByteSize.toUInt32 ++ toL (toString i).toUTF8, by simp, ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, -⟩ := fuel_succ (n := 4 + (toL (toString i).toUTF8).length) (by simp at hf ⊢; omega)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  have hr := readString_at (B := B) (s := toString i) (l₁ := l₁ ++ [6]) (l₂ := l₂) hs (by rw [hB]; simp)
  simp only [List.length_append, List.length_singleton] at hr
  simp only [hr, toString_toInt?]
  simp [Data.wire, pure, Except.pure]
  omega

theorem written_bytes (x : ByteArray) : Written ref (.bytes x) := by
  intro pre out hw
  simp only [write, bind, Except.bind] at hw
  split at hw
  · simp at hw
  · rename_i b' h
    rw [pushLength_ok] at h
    obtain ⟨hs, rfl⟩ := h
    simp only [pure, Except.pure, Except.ok.injEq] at hw
    subst hw
    refine ⟨7 :: u32L x.size.toUInt32 ++ toL x, by simp, ?_⟩
    intro B l₁ l₂ fuel hB hf
    obtain ⟨f, rfl, -⟩ := fuel_succ (n := 4 + (toL x).length) (by simp at hf ⊢; omega)
    rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
    have hr := readRaw_at (B := B) (x := x) (l₁ := l₁ ++ [7]) (l₂ := l₂) hs (by rw [hB]; simp)
    simp only [List.length_append, List.length_singleton] at hr
    simp [hr, Data.wire, pure, Except.pure]
    omega

theorem items_written (xs : List Data) (ih : ∀ x ∈ xs, Written ref x) :
    ∀ acc out, xs.foldlM write acc = .ok out → ∃ e, toL out = toL acc ++ e ∧ ReadsItems ref xs e := by
  induction xs with
  | nil =>
    intro acc out h
    simp only [List.foldlM_nil, pure, Except.pure, Except.ok.injEq] at h
    subst h
    refine ⟨[], by simp, ?_⟩
    intro B l₁ l₂ fuel acc' hB hf
    simp [readItems.eq_1, pure, Except.pure]
  | cons x xs ihl =>
    intro acc out h
    rw [List.foldlM_cons] at h
    simp only [bind, Except.bind] at h
    split at h
    · simp at h
    rename_i a ha
    obtain ⟨e₁, he₁, hr₁⟩ := ih x (by simp) acc a ha
    obtain ⟨e₂, he₂, hr₂⟩ := ihl (fun y hy => ih y (by simp [hy])) a out h
    refine ⟨e₁ ++ e₂, by simp [he₂, he₁], ?_⟩
    intro B l₁ l₂ fuel acc' hB hf
    simp only [List.length_cons]
    rw [readItems.eq_2]
    have h₁ := hr₁ B l₁ (e₂ ++ l₂) fuel (by simp [hB]) (by simp at hf; omega)
    have h₂ := hr₂ B (l₁ ++ e₁) l₂ fuel (acc'.push x.wire) (by simp [hB]) (by simp at hf; omega)
    simp only [List.length_append] at h₂
    simp only [bind, Except.bind, h₁, h₂]
    simp
    omega

theorem fields_written (fs : List (String × Data)) (ih : ∀ kv ∈ fs, Written ref kv.2) :
    ∀ acc out, fs.foldlM (fun b kv => do write (← pushString b kv.1 "an object key") kv.2) acc = .ok out →
      ∃ e, toL out = toL acc ++ e ∧ ReadsFields ref fs e := by
  induction fs with
  | nil =>
    intro acc out h
    simp only [List.foldlM_nil, pure, Except.pure, Except.ok.injEq] at h
    subst h
    refine ⟨[], by simp, ?_⟩
    intro B l₁ l₂ fuel acc' hB hf
    simp [readFields.eq_1, pure, Except.pure]
  | cons kv fs ihl =>
    obtain ⟨k, v⟩ := kv
    intro acc out h
    rw [List.foldlM_cons] at h
    simp only [bind, Except.bind] at h
    split at h
    · simp at h
    rename_i a ha
    split at ha
    · simp at ha
    rename_i b hb
    rw [pushString_ok] at hb
    obtain ⟨hk, rfl⟩ := hb
    obtain ⟨e₁, he₁, hr₁⟩ := ih (k, v) (by simp) _ a ha
    obtain ⟨e₂, he₂, hr₂⟩ := ihl (fun y hy => ih y (by simp [hy])) a out h
    refine ⟨u32L k.utf8ByteSize.toUInt32 ++ toL k.toUTF8 ++ e₁ ++ e₂, by simp [he₂, he₁], ?_⟩
    intro B l₁ l₂ fuel acc' hB hf
    simp only [List.length_cons]
    rw [readFields.eq_2]
    have hs := readString_at (B := B) (s := k) (l₁ := l₁) (l₂ := e₁ ++ e₂ ++ l₂) hk (by rw [hB]; simp)
    have h₁ := hr₁ B (l₁ ++ u32L k.utf8ByteSize.toUInt32 ++ toL k.toUTF8) (e₂ ++ l₂) fuel (by simp [hB])
      (by simp at hf; omega)
    have h₂ := hr₂ B (l₁ ++ u32L k.utf8ByteSize.toUInt32 ++ toL k.toUTF8 ++ e₁) l₂ fuel (acc'.push (k, v.wire))
      (by simp [hB]) (by simp at hf; omega)
    simp only [List.length_append, length_u32L, length_toL_toUTF8] at h₁ h₂
    simp only [hs, bind, Except.bind, h₁, h₂]
    simp
    omega

theorem written_array {xs : Array Data} (ih : ∀ x ∈ xs, Written ref x) : Written ref (.array xs) := by
  intro pre out hw
  simp only [write, bind, Except.bind] at hw
  split at hw
  · simp at hw
  rename_i b' h
  rw [pushLength_ok] at h
  obtain ⟨hs, rfl⟩ := h
  rw [← Array.foldlM_toList] at hw
  obtain ⟨e, he, hr⟩ := items_written ref xs.toList (fun x hx => ih x (by simpa using hx)) _ out hw
  refine ⟨8 :: u32L xs.size.toUInt32 ++ e, by simp [he], ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, hf'⟩ := fuel_succ (n := 4 + e.length) (by simp at hf ⊢; omega)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  have h32 := readU32_at (B := B) (n := xs.size.toUInt32) (l₁ := l₁ ++ [8]) (l₂ := e ++ l₂) (by rw [hB]; simp)
  have h₂ := hr B (l₁ ++ [8] ++ u32L xs.size.toUInt32) l₂ f (Array.mkEmpty (min xs.size (B.size - l₁.length)))
    (by simp [hB]) (by omega)
  simp only [List.length_append, List.length_singleton, length_u32L, Array.length_toList] at h32 h₂
  simp only [h32, toNat_length hs, bind, Except.bind, h₂]
  simp only [Data.wire, pure, Except.pure, Array.mkEmpty_eq, Array.empty_append, Except.ok.injEq, Prod.mk.injEq,
    Data.array.injEq]
  exact ⟨by rw [← Array.toList_map, Array.toArray_toList], by simp; omega⟩

theorem written_object {fs : Array (String × Data)} (ih : ∀ kv ∈ fs, Written ref kv.2) :
    Written ref (.object fs) := by
  intro pre out hw
  simp only [write, bind, Except.bind] at hw
  split at hw
  · simp at hw
  rename_i b' h
  rw [pushLength_ok] at h
  obtain ⟨hs, rfl⟩ := h
  rw [← Array.foldlM_toList] at hw
  obtain ⟨e, he, hr⟩ := fields_written ref fs.toList (fun kv hkv => ih kv (by simpa using hkv)) _ out hw
  refine ⟨9 :: u32L fs.size.toUInt32 ++ e, by simp [he], ?_⟩
  intro B l₁ l₂ fuel hB hf
  obtain ⟨f, rfl, hf'⟩ := fuel_succ (n := 4 + e.length) (by simp at hf ⊢; omega)
  rw [readAt.eq_2, dite_eq_left (lt_of_tag hB), get_tag hB]
  have h32 := readU32_at (B := B) (n := fs.size.toUInt32) (l₁ := l₁ ++ [9]) (l₂ := e ++ l₂) (by rw [hB]; simp)
  have h₂ := hr B (l₁ ++ [9] ++ u32L fs.size.toUInt32) l₂ f (Array.mkEmpty (min fs.size (B.size - l₁.length)))
    (by simp [hB]) (by omega)
  simp only [List.length_append, List.length_singleton, length_u32L, Array.length_toList] at h32 h₂
  simp only [h32, toNat_length hs, bind, Except.bind, h₂]
  simp only [Data.wire, pure, Except.pure, Array.mkEmpty_eq, Array.empty_append, Except.ok.injEq, Prod.mk.injEq,
    Data.object.injEq]
  exact ⟨by rw [← Array.toList_map, Array.toArray_toList], by simp; omega⟩

/-- What `write` appends for plain data is read back as that data. -/
theorem written {d : Data} (h : d.Plain) : Written ref d := by
  induction h with
  | undefined => exact written_undefined ref
  | null => exact written_null ref
  | bool b => exact written_bool ref b
  | number n => exact written_number ref n
  | string s => exact written_string ref s
  | bigint i => exact written_bigint ref i
  | bytes x => exact written_bytes ref x
  | array _ ih => exact written_array ref ih
  | object _ ih => exact written_object ref ih

/-- The round trip: whatever `encode` accepts of plain data, `decodeWith`
reads back as that data (with numbers as their bits). -/
theorem decode_encode {d : Data} {b : ByteArray} (hp : d.Plain) (he : encode d = .ok b) :
    decodeWith id ref b = .ok d.wire := by
  obtain ⟨e, hb, hr⟩ := written ref hp .empty b he
  simp only [toL_empty, List.nil_append] at hb
  have h := hr b [] [] b.size (by simp [hb]) (by rw [size_eq hb]; exact Nat.le_refl _)
  simp only [List.length_nil, Nat.zero_add] at h
  rw [decodeWith, h]
  simp [bind, Except.bind, size_eq hb, pure, Except.pure]

end

/-! ## Encoding fails exactly on lengths that do not fit -/

theorem foldlM_each {β α ε : Type} {f : β → α → Except ε β} :
    ∀ (xs : List α) (acc out : β), xs.foldlM f acc = .ok out → ∀ x ∈ xs, ∃ a c, f a x = .ok c
  | [], _, _, _ => by simp
  | x :: xs, acc, out, h => by
    rw [List.foldlM_cons] at h
    simp only [bind, Except.bind] at h
    split at h
    · simp at h
    rename_i a ha
    intro y hy
    rcases List.mem_cons.mp hy with rfl | hy
    · exact ⟨acc, a, ha⟩
    · exact foldlM_each xs a out h y hy

theorem foldlM_ok {β α ε : Type} {f : β → α → Except ε β} :
    ∀ (xs : List α), (∀ x ∈ xs, ∀ a, ∃ c, f a x = .ok c) → ∀ acc, ∃ out, xs.foldlM f acc = .ok out
  | [], _, acc => ⟨acc, rfl⟩
  | x :: xs, h, acc => by
    obtain ⟨c, hc⟩ := h x (by simp) acc
    obtain ⟨out, ho⟩ := foldlM_ok xs (fun y hy => h y (by simp [hy])) c
    exact ⟨out, by rw [List.foldlM_cons]; simp [bind, Except.bind, hc, ho]⟩

theorem fits_of_write : ∀ (d : Data) (pre out : ByteArray), write pre d = .ok out → d.Fits
  | .undefined, _, _, _ => .undefined
  | .null, _, _, _ => .null
  | .bool b, _, _, _ => .bool b
  | .number n, _, _, _ => .number n
  | .string _, _, _, h => by simp only [write, pushString_ok] at h; exact .string h.1
  | .bigint _, _, _, h => by simp only [write, pushString_ok] at h; exact .bigint h.1
  | .bytes _, _, _, h => by
    simp only [write, bind, Except.bind] at h
    split at h
    · simp at h
    rename_i hb
    exact .bytes (pushLength_ok.mp hb).1
  | .array xs, _, _, h => by
    simp only [write, bind, Except.bind] at h
    split at h
    · simp at h
    rename_i hb
    rw [← Array.foldlM_toList] at h
    refine .array (pushLength_ok.mp hb).1 fun x hx => ?_
    obtain ⟨a, c, hc⟩ := foldlM_each _ _ _ h x (by simpa using hx)
    exact fits_of_write x a c hc
  | .object fs, _, _, h => by
    simp only [write, bind, Except.bind] at h
    split at h
    · simp at h
    rename_i hb
    rw [← Array.foldlM_toList] at h
    have each := foldlM_each _ _ _ h
    refine .object (pushLength_ok.mp hb).1 (fun kv hkv => ?_) (fun kv hkv => ?_)
    · obtain ⟨a, c, hc⟩ := each kv (by simpa using hkv)
      split at hc
      · simp at hc
      rename_i hk
      exact (pushString_ok.mp hk).1
    · obtain ⟨a, c, hc⟩ := each kv (by simpa using hkv)
      split at hc
      · simp at hc
      rename_i b' _
      exact fits_of_write kv.2 b' c hc
  | .ref v d, _, _, _ => .ref v d
termination_by d => d
decreasing_by
  all_goals
    have := Array.sizeOf_lt_of_mem ‹_ ∈ _›
    first | (simp_all; omega) | (cases ‹String × Data›; simp_all; omega)

theorem write_of_fits {d : Data} (h : d.Fits) : ∀ pre, ∃ out, write pre d = .ok out := by
  induction h with
  | undefined | null | number | ref => intro pre; simp [write]
  | bool b => intro pre; cases b <;> simp [write]
  | string hs | bigint hs => intro pre; exact ⟨_, by simp only [write]; exact pushString_ok.mpr ⟨hs, rfl⟩⟩
  | bytes hs => intro pre; simp [write, bind, Except.bind, pushLength, hs, pure, Except.pure]
  | @array xs hs _ ih =>
    intro pre
    obtain ⟨out, ho⟩ := foldlM_ok xs.toList (fun x hx a => ih x (by simpa using hx) a)
      (pushU32 (pre.push 8) xs.size.toUInt32)
    rw [Array.foldlM_toList] at ho
    exact ⟨out, by simp [write, bind, Except.bind, pushLength, hs, ho]⟩
  | @object fs hs hk _ ih =>
    intro pre
    obtain ⟨out, ho⟩ := foldlM_ok (f := fun b kv => do write (← pushString b kv.1 "an object key") kv.2) fs.toList
      (fun kv hkv a => by
        have hkv : kv ∈ fs := by simpa using hkv
        obtain ⟨c, hc⟩ := ih kv hkv (pushU32 a kv.1.utf8ByteSize.toUInt32 ++ kv.1.toUTF8)
        exact ⟨c, by simp only [bind, Except.bind]; rw [pushString_ok.mpr ⟨hk kv hkv, rfl⟩]; exact hc⟩)
      (pushU32 (pre.push 9) fs.size.toUInt32)
    rw [Array.foldlM_toList] at ho
    refine ⟨out, ?_⟩
    rw [write, pushLength_ok.mpr ⟨hs, rfl⟩]
    exact ho

/-- `encode d` succeeds exactly when every length in `d` fits. -/
theorem encode_ok_iff (d : Data) : (∃ b, encode d = .ok b) ↔ d.Fits :=
  ⟨fun ⟨_, h⟩ => fits_of_write d _ _ h, fun h => write_of_fits h .empty⟩

end Proofs.Wire
end Lasm.JS
