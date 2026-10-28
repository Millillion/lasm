/-
Article slugs. `slugify` turns a title into lowercase ASCII words joined by
`-` ("How to Train Your Dragon!" → "how-to-train-your-dragon"); `uniqueSlug`
appends `-2`, `-3`, … when that slug is taken. Proved in `Proofs/Slug.lean`:
a slug has only `a-z`, `0-9` and `-`, is never empty, and `uniqueSlug` never
returns a taken slug.
-/
namespace Conduit

/-- The characters a slug may contain besides `-`. -/
def slugAlphabet : List Char := "abcdefghijklmnopqrstuvwxyz0123456789".toList

/-- What each kept character becomes: itself, or its lowercase letter. -/
def slugTable : List (Char × Char) :=
  slugAlphabet.map (fun c => (c, c)) ++ ("ABCDEFGHIJKLMNOPQRSTUVWXYZ".toList.zip "abcdefghijklmnopqrstuvwxyz".toList)

/-- The character a slug keeps for `c`: ASCII letters (lowercased) and digits. -/
def slugChar? (c : Char) : Option Char := (slugTable.find? (·.1 == c)).map (·.2)

/-- Groups of characters between separators (`none`), possibly empty. -/
def groups : List (Option Char) → List (List Char)
  | [] => [[]]
  | none :: rest => [] :: groups rest
  | some c :: rest =>
    match groups rest with
    | [] => [[c]]
    | w :: ws => (c :: w) :: ws

/-- The words of a title: maximal runs of kept characters, in order. -/
def slugWords (cs : List Char) : List (List Char) :=
  (groups (cs.map slugChar?)).filter (!·.isEmpty)

/-- The slug of a title; `"article"` when the title has no letters or digits. -/
def slugify (title : String) : String :=
  match slugWords title.toList with
  | [] => "article"
  | ws => String.ofList (['-'].intercalate ws)

/-- The `n`th candidate: the base, then `base-2`, `base-3`, … -/
def candidate (base : String) (n : Nat) : String :=
  if n = 0 then base else base ++ "-" ++ toString (n + 1)

/-- The first candidate that is not taken. There is always one among the
first `taken.length + 1` candidates (they are distinct), so the fallback is
never used (`uniqueSlug_fresh`). -/
def uniqueSlug (base : String) (taken : List String) : String :=
  match (List.range (taken.length + 1)).find? (fun n => !taken.contains (candidate base n)) with
  | some n => candidate base n
  | none => base

end Conduit
