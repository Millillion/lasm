/-
A small Markdown reader for article bodies, in pure Lean: paragraphs,
headings, lists, quotes, code blocks, rules, and inline `**strong**`,
`*emphasis*`, `` `code` `` and `[links](url)`. It produces a tree, not HTML
text, and the view turns the tree into elements and text nodes, so nothing
an author writes can become markup: raw HTML in an article is shown as text.
Link targets go through `safeHref`, which only lets `http:`, `https:`,
`mailto:` and relative URLs through (`Proofs/Markdown.lean`).
-/
namespace Conduit.Markdown

inductive Inline where
  | text (s : String)
  | strong (children : List Inline)
  | em (children : List Inline)
  | code (s : String)
  | link (href : String) (children : List Inline)
  deriving Repr, BEq, Inhabited

inductive Block where
  | para (children : List Inline)
  | heading (level : Nat) (children : List Inline)
  | list (ordered : Bool) (items : List (List Inline))
  | quote (children : List Inline)
  | code (text : String)
  | rule
  deriving Repr, BEq, Inhabited

/-! ## Links -/

/-- The scheme of a URL (`javascript` in `javascript:…`), lowercased: the
characters before the first `:`, unless a `/`, `?` or `#` comes first (then
the colon is part of a path, query or fragment and there is no scheme). -/
def schemeOf : List Char → Option (List Char)
  | [] => none
  | ':' :: _ => some []
  | c :: cs => if c == '/' || c == '?' || c == '#' then none else (schemeOf cs).map (c.toLower :: ·)

/-- Whether a link target is harmless: `http:`, `https:`, `mailto:`, or a
URL without a scheme (`/path`, `page`, `#anchor`). -/
def allowedHref (href : String) : Bool :=
  match schemeOf href.toList with
  | none => true
  | some s => s == ['h', 't', 't', 'p'] || s == ['h', 't', 't', 'p', 's'] || s == ['m', 'a', 'i', 'l', 't', 'o']

/-- The link target shown: the author's, or `#` when it is not allowed
(`javascript:`, `data:`, …). -/
def safeHref (href : String) : String := if allowedHref href then href else String.ofList ['#']

/-! ## Inline syntax -/

/-- The characters up to the first `stop`, and what follows it. -/
def takeUntil (stop : Char) : List Char → Option (List Char × List Char)
  | [] => none
  | c :: cs => if c == stop then some ([], cs) else (takeUntil stop cs).map fun (a, b) => (c :: a, b)

/-- The characters up to the first `**`, and what follows it. -/
def takeUntil2 (stop : Char) : List Char → Option (List Char × List Char)
  | [] => none
  | [_] => none
  | c :: d :: cs =>
    if c == stop && d == stop then some ([], cs)
    else (takeUntil2 stop (d :: cs)).map fun (a, b) => (c :: a, b)

theorem takeUntil_length {stop : Char} : ∀ {l a b : List Char}, takeUntil stop l = some (a, b) → b.length < l.length
  | [], _, _, h => by simp [takeUntil] at h
  | c :: cs, a, b, h => by
    unfold takeUntil at h
    split at h
    · cases h; simp
    · cases hr : takeUntil stop cs with
      | none => simp [hr] at h
      | some p =>
        simp [hr] at h
        obtain ⟨_, rfl⟩ := h
        have := takeUntil_length hr
        simp; omega

theorem takeUntil2_length {stop : Char} : ∀ {l a b : List Char}, takeUntil2 stop l = some (a, b) → b.length < l.length
  | [], _, _, h => by simp [takeUntil2] at h
  | [_], _, _, h => by simp [takeUntil2] at h
  | c :: d :: cs, a, b, h => by
    unfold takeUntil2 at h
    split at h
    · cases h; simp; omega
    · cases hr : takeUntil2 stop (d :: cs) with
      | none => simp [hr] at h
      | some p =>
        simp [hr] at h
        obtain ⟨_, rfl⟩ := h
        have := takeUntil2_length hr
        simp at this ⊢; omega

/-- Text, with adjacent pieces merged. -/
def pushText (acc : List Inline) (c : Char) : List Inline :=
  match acc with
  | .text s :: rest => .text (s.push c) :: rest
  | _ => .text (String.singleton c) :: acc

/-- Inline syntax, built in reverse (`inlines` reverses it). -/
def inlinesRev (acc : List Inline) : List Char → List Inline
  | [] => acc
  | '`' :: rest =>
    match h : takeUntil '`' rest with
    | some (code, after) =>
      have := takeUntil_length h
      inlinesRev (.code (String.ofList code) :: acc) after
    | none => inlinesRev (pushText acc '`') rest
  | '*' :: '*' :: rest =>
    match h : takeUntil2 '*' rest with
    | some (inner, after) =>
      have := takeUntil2_length h
      inlinesRev (.strong [.text (String.ofList inner)] :: acc) after
    | none => inlinesRev (pushText (pushText acc '*') '*') rest
  | '*' :: rest =>
    match h : takeUntil '*' rest with
    | some (inner, after) =>
      have := takeUntil_length h
      if inner.isEmpty then inlinesRev (pushText (pushText acc '*') '*') after
      else inlinesRev (.em [.text (String.ofList inner)] :: acc) after
    | none => inlinesRev (pushText acc '*') rest
  | '_' :: rest =>
    match h : takeUntil '_' rest with
    | some (inner, after) =>
      have := takeUntil_length h
      if inner.isEmpty || inner.any (· == ' ') then inlinesRev (pushText acc '_') rest
      else inlinesRev (.em [.text (String.ofList inner)] :: acc) after
    | none => inlinesRev (pushText acc '_') rest
  | '[' :: rest =>
    match h : takeUntil ']' rest with
    | some (label, '(' :: after) =>
      have := takeUntil_length h
      match h2 : takeUntil ')' after with
      | some (href, after2) =>
        have := takeUntil_length h2
        have : after2.length < rest.length + 1 := by simp at *; omega
        inlinesRev (.link (safeHref (String.ofList href)) [.text (String.ofList label)] :: acc) after2
      | none => inlinesRev (pushText acc '[') rest
    | _ => inlinesRev (pushText acc '[') rest
  | c :: rest => inlinesRev (pushText acc c) rest
termination_by l => l.length

def inlines (s : String) : List Inline := (inlinesRev [] s.toList).reverse

/-! ## Blocks -/

def trimLine (s : String) : String := s.trimAscii.toString

def headingOf (line : String) : Option (Nat × String) :=
  let hashes := line.toList.takeWhile (· == '#')
  let n := hashes.length
  if 1 ≤ n && n ≤ 6 && (line.toList.drop n).head? == some ' ' then
    some (n, trimLine (String.ofList (line.toList.drop n)))
  else none

def bulletOf (line : String) : Option String :=
  if line.startsWith "- " || line.startsWith "* " || line.startsWith "+ " then some (trimLine (line.drop 2).toString)
  else none

def numberedOf (line : String) : Option String :=
  let digits := line.toList.takeWhile Char.isDigit
  if !digits.isEmpty && (line.toList.drop digits.length).take 2 == ['.', ' '] then
    some (trimLine (String.ofList (line.toList.drop (digits.length + 2))))
  else none

def isRule (line : String) : Bool :=
  let cs := line.toList.filter (· != ' ')
  cs.length ≥ 3 && (cs.all (· == '-') || cs.all (· == '*') || cs.all (· == '_'))

/-- Blocks from lines (`fuel` bounds the work: one step per line). -/
def blocks : Nat → List String → List Block
  | 0, _ => []
  | _, [] => []
  | fuel + 1, line :: rest =>
    let t := trimLine line
    if t.isEmpty then blocks fuel rest
    else if t.startsWith "```" then
      let body := rest.takeWhile (fun l => !(trimLine l).startsWith "```")
      .code ("\n".intercalate body) :: blocks fuel (rest.drop (body.length + 1))
    else if isRule t then .rule :: blocks fuel rest
    else match headingOf t with
    | some (n, text) => .heading n (inlines text) :: blocks fuel rest
    | none =>
      if (bulletOf t).isSome then
        let items := (line :: rest).takeWhile (fun l => (bulletOf (trimLine l)).isSome)
        .list false (items.map fun l => inlines ((bulletOf (trimLine l)).getD "")) :: blocks fuel ((line :: rest).drop items.length)
      else if (numberedOf t).isSome then
        let items := (line :: rest).takeWhile (fun l => (numberedOf (trimLine l)).isSome)
        .list true (items.map fun l => inlines ((numberedOf (trimLine l)).getD "")) :: blocks fuel ((line :: rest).drop items.length)
      else if t.startsWith ">" then
        let quoted := (line :: rest).takeWhile (fun l => (trimLine l).startsWith ">")
        let text := " ".intercalate (quoted.map fun l => trimLine ((trimLine l).drop 1).toString)
        .quote (inlines text) :: blocks fuel ((line :: rest).drop quoted.length)
      else
        -- A paragraph: this line and the following plain lines.
        let more := rest.takeWhile fun l =>
          let u := trimLine l
          !u.isEmpty && !u.startsWith "```" && !u.startsWith ">" && (headingOf u).isNone && (bulletOf u).isNone &&
            (numberedOf u).isNone && !isRule u
        .para (inlines (" ".intercalate ((t :: more.map trimLine)))) :: blocks fuel (rest.drop more.length)

/-- An article body as blocks. -/
def parse (body : String) : List Block :=
  let lines := (body.replace "\r\n" "\n").splitOn "\n"
  blocks (lines.length + 1) lines

end Conduit.Markdown
