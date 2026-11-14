/-
# src/browser/static-server.mjs, in Lean: `resolveStaticPath`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| JavaScript (src/browser/static-server.mjs) | Lean |
| --- | --- |
| `decodeURIComponent(pathname)` (ECMAScript's Decode, throwing URIError) | `decodeURIComponent` |
| `normalize`, `join` and `extname` of `node:path` (POSIX) | `normalizePath`, `joinPath`, `extnamePath` |
| `new RegExp(`\\b${encoding}\\b`).test(accepts)` | `hasWord` |
| `compressible` | `compressible` |
| `resolveStaticPath(root, pathname, { fallback, accepts, fileExists })` | `resolveStaticPath` |

`fileExists` (the file system: an existing regular file) is a parameter.
`node:path` is modelled for POSIX hosts: `normalizeString`'s character loop
keeps a stack of segments, dropping `.` and empty ones and popping for `..`
(kept as `..` above a relative start); `extname` is its right-to-left scan.
A Lean `String` holds Unicode scalar values, so the model covers request
paths without lone surrogates (a URL's pathname has none: it is ASCII).
The rest of the module (`startStaticServer`: the HTTP server, live reload,
headers; `listenError`, a table of messages) is not modelled.
-/

namespace Lasm.Cli.StaticServer

/-- The value of an ASCII hex digit, either case. -/
def hexDigitValue (c : Char) : Option Nat :=
  if '0' ≤ c ∧ c ≤ '9' then some (c.toNat - 48)
  else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 87)
  else if 'A' ≤ c ∧ c ≤ 'F' then some (c.toNat - 55)
  else none

/-- `%XX` at the front: its byte and what follows. -/
def percentByte : List Char → Option (Nat × List Char)
  | '%' :: h :: l :: rest =>
    match hexDigitValue h, hexDigitValue l with
    | some a, some b => some (16 * a + b, rest)
    | _, _ => none
  | _ => none

/-- `k` more `%XX` continuation bytes (`10xxxxxx`) folded into `acc`. -/
def continuation : Nat → Nat → List Char → Option (Nat × List Char)
  | 0, acc, rest => some (acc, rest)
  | k + 1, acc, rest =>
    match percentByte rest with
    | some (b, rest') => if b / 64 = 2 then continuation k (acc * 64 + b % 64) rest' else none
    | none => none

/-- One encoded character: its code point, if the octets are UTF-8 for one. -/
def decodeOne (b : Nat) (rest : List Char) : Option (Nat × List Char) :=
  if b < 0x80 then some (b, rest)
  else if b / 32 = 6 then
    (continuation 1 (b % 32) rest).bind fun (cp, r) => if 0x80 ≤ cp then some (cp, r) else none
  else if b / 16 = 14 then
    (continuation 2 (b % 16) rest).bind fun (cp, r) =>
      if 0x800 ≤ cp ∧ ¬ (0xD800 ≤ cp ∧ cp ≤ 0xDFFF) then some (cp, r) else none
  else if b / 8 = 30 then
    (continuation 3 (b % 8) rest).bind fun (cp, r) => if 0x10000 ≤ cp ∧ cp ≤ 0x10FFFF then some (cp, r) else none
  else none

/-- `decodeURIComponent(text)`: `none` where it throws URIError. -/
def decodeURIComponent (s : List Char) : Option (List Char) :=
  match hs : s with
  | [] => some []
  | c :: cs =>
    if c = '%' then
      match h : percentByte s with
      | none => none
      | some (b, rest) =>
        match h' : decodeOne b rest with
        | none => none
        | some (cp, rest') =>
          have : rest'.length < (c :: cs).length := by
            have l1 : ∀ (t : List Char) (b : Nat) (r : List Char), percentByte t = some (b, r) → r.length + 3 ≤ t.length := by
              intro t b r ht
              unfold percentByte at ht
              split at ht
              · split at ht
                · simp at ht; obtain ⟨-, rfl⟩ := ht; simp
                · simp at ht
              · simp at ht
            have l2 : ∀ (k acc : Nat) (t : List Char) (cp : Nat) (r : List Char), continuation k acc t = some (cp, r) → r.length ≤ t.length := by
              intro k
              induction k with
              | zero => intro acc t cp r ht; simp [continuation] at ht; obtain ⟨-, rfl⟩ := ht; simp
              | succ k ih =>
                intro acc t cp r ht
                simp only [continuation] at ht
                split at ht
                · rename_i b' t' hp
                  split at ht
                  · have := ih _ _ _ _ ht; have := l1 t b' t' hp; omega
                  · simp at ht
                · simp at ht
            have l3 : rest'.length ≤ rest.length := by
              unfold decodeOne at h'
              split at h'
              · simp at h'; obtain ⟨-, rfl⟩ := h'; simp
              · split at h'
                · simp only [Option.bind_eq_some_iff] at h'; obtain ⟨⟨a, r⟩, hc, h2⟩ := h'
                  split at h2 <;> simp at h2; obtain ⟨-, rfl⟩ := h2; exact l2 _ _ _ _ _ hc
                · split at h'
                  · simp only [Option.bind_eq_some_iff] at h'; obtain ⟨⟨a, r⟩, hc, h2⟩ := h'
                    split at h2 <;> simp at h2; obtain ⟨-, rfl⟩ := h2; exact l2 _ _ _ _ _ hc
                  · split at h'
                    · simp only [Option.bind_eq_some_iff] at h'; obtain ⟨⟨a, r⟩, hc, h2⟩ := h'
                      split at h2 <;> simp at h2; obtain ⟨-, rfl⟩ := h2; exact l2 _ _ _ _ _ hc
                    · simp at h'
            have := l1 s b rest h
            rw [hs] at this
            omega
          (decodeURIComponent rest').map (Char.ofNat cp :: ·)
    else (decodeURIComponent cs).map (c :: ·)
termination_by s.length

/-- `normalizeString`'s segments: `.` and empty segments dropped, `..` pops
(or, above a relative start, is kept). -/
def pushSegment (absolute : Bool) (stack : List (List Char)) (seg : List Char) : List (List Char) :=
  if seg = [] ∨ seg = ['.'] then stack
  else if seg = ['.', '.'] then
    match stack.getLast? with
    | some last => if last = ['.', '.'] then (if absolute then stack else stack ++ [seg]) else stack.dropLast
    | none => if absolute then stack else [seg]
  else stack ++ [seg]

/-- `path.normalize(p)` (POSIX). -/
def normalizePath (p : List Char) : List Char :=
  if p = [] then ['.'] else
  let absolute := p.head? = some '/'
  let trailing := p.getLast? = some '/'
  let segs := (p.splitOn '/').foldl (pushSegment absolute) []
  let body := ['/'].intercalate segs
  if body = [] then (if absolute then ['/'] else if trailing then ['.', '/'] else ['.'])
  else (if absolute then ['/'] else []) ++ body ++ (if trailing then ['/'] else [])

/-- `path.join(a, b)` (POSIX): the non-empty arguments joined by `/`, normalized. -/
def joinPath (a b : List Char) : List Char :=
  let joined := ['/'].intercalate ([a, b].filter (· ≠ []))
  if joined = [] then ['.'] else normalizePath joined

/-- `extname`'s scan, from the right: (startDot, startPart, end, matchedSlash,
preDotState) as indices into the path. -/
def extScan (p : List Char) : Int × Nat × Int × Bool × Int :=
  go (p.length) (-1, 0, -1, true, 0)
where
  go : Nat → Int × Nat × Int × Bool × Int → Int × Nat × Int × Bool × Int
    | 0, st => st
    | i + 1, (startDot, startPart, e, matched, pre) =>
      let c := p[i]?.getD ' '
      if c = '/' then
        if !matched then (startDot, i + 1, e, matched, pre) else go i (startDot, startPart, e, matched, pre)
      else
        let (e, matched) := if e = -1 then ((i : Int) + 1, false) else (e, matched)
        if c = '.' then
          if startDot = -1 then go i (i, startPart, e, matched, pre)
          else if pre ≠ 1 then go i (startDot, startPart, e, matched, 1)
          else go i (startDot, startPart, e, matched, pre)
        else if startDot ≠ -1 then go i (startDot, startPart, e, matched, -1)
        else go i (startDot, startPart, e, matched, pre)

/-- `path.extname(p)` (POSIX). -/
def extnamePath (p : List Char) : List Char :=
  let (startDot, startPart, e, _, pre) := extScan p
  if startDot = -1 ∨ e = -1 ∨ pre = 0 ∨ (pre = 1 ∧ startDot = e - 1 ∧ startDot = (startPart : Int) + 1) then []
  else (p.drop startDot.toNat).take (e - startDot).toNat

/-- A word character of `\b`. -/
def wordChar (c : Char) : Bool := c.isAlphanum || c = '_'

/-- `new RegExp(`\\b${w}\\b`).test(s)`, for a word `w`: an occurrence with no
word character on either side. -/
def hasWord (w s : List Char) : Bool :=
  go [] s
where
  go (before : List Char) : List Char → Bool
    | [] => false
    | c :: cs =>
      (w.isPrefixOf (c :: cs) && !(before.head?.map wordChar).getD false &&
        !(((c :: cs).drop w.length).head?.map wordChar).getD false) || go (c :: before) cs

/-- `compressible`. -/
def compressible : List (List Char) :=
  [".html", ".js", ".mjs", ".css", ".json", ".wasm", ".svg", ".txt", ".map", ".xml", ".webmanifest"].map String.toList

/-- What `resolveStaticPath` returns: the status, and for 200 the file, the
file served and its encoding. -/
structure Resolution where
  status : Nat
  file : Option (List Char) := none
  served : Option (List Char) := none
  encoding : Option String := none
deriving DecidableEq, Repr

/-- The request path: the decoded path, `index.html` added after a final `/`. -/
def requestPath (decoded : List Char) : List Char :=
  if decoded.getLast? = some '/' then decoded ++ "index.html".toList else decoded

/-- The file found for the request path: `file` when it exists, else (for a
path without an extension) the fallback page when it exists. -/
def foundFile (fileExists : List Char → Bool) (root path file : List Char) (fallback : Option (List Char)) :
    Option (List Char) :=
  if fileExists file then some file
  else
    let file' := match fallback with
      | some f => if f ≠ [] ∧ extnamePath path = [] then joinPath root f else file
      | none => file
    if fileExists file' then some file' else none

/-- The precompressed copy served, and its encoding, if any. -/
def compressedCopy (fileExists : List Char → Bool) (accepts file : List Char) : Option (List Char × String) :=
  if compressible.contains (extnamePath file) then
    if hasWord "br".toList accepts && fileExists (file ++ ".br".toList) then some (file ++ ".br".toList, "br")
    else if hasWord "gzip".toList accepts && fileExists (file ++ ".gz".toList) then some (file ++ ".gz".toList, "gzip")
    else none
  else none

/-- `resolveStaticPath(root, pathname, { fallback, accepts, fileExists })`
(`fallback` none for a falsy one). -/
def resolveStaticPath (fileExists : List Char → Bool) (root pathname accepts : List Char)
    (fallback : Option (List Char)) : Resolution :=
  match decodeURIComponent pathname with
  | none => { status := 400 }
  | some decoded =>
    let path := requestPath decoded
    let file := normalizePath (joinPath root path)
    if file ≠ root ∧ ¬ (root ++ ['/']).isPrefixOf file then { status := 403 } else
    match foundFile fileExists root path file fallback with
    | none => { status := 404 }
    | some file =>
      match compressedCopy fileExists accepts file with
      | some (served, encoding) => { status := 200, file := some file, served := some served, encoding := some encoding }
      | none => { status := 200, file := some file, served := some file }

end Lasm.Cli.StaticServer
