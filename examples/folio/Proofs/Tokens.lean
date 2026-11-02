/-
An HTML tokenizer for the propositions: it reads HTML text as a list of
tokens (start tags with their attributes, end tags, void tags, and text
characters), and fails on anything the renderer could not have written: an
unknown tag or attribute, a `<`, `>` or `"` in text, or a `&` that does not
start `&amp;`, `&lt;`, `&gt;` or `&quot;`. It knows exactly the renderer's
tags (`Tag.all`) and attributes (`Attr.all`).

It is written as one character-at-a-time state machine (mutually recursive
functions, each consuming the first character), so Lean accepts it as total
without a termination proof.
-/
import Folio

namespace Folio.Proofs

inductive Tok where
  | open (t : Tag) (attrs : List (Attr × String))
  | close (t : Tag)
  | void (t : Tag) (attrs : List (Attr × String))
  | char (c : Char)
  deriving DecidableEq, Repr

/-- The characters of tag and attribute names. -/
def isNameChar (c : Char) : Bool := ('a' ≤ c && c ≤ 'z') || ('0' ≤ c && c ≤ '9')

def tagOf (name : List Char) : Option Tag := Tag.all.find? (·.name.toList == name)
def attrOf (name : List Char) : Option Attr := Attr.all.find? (·.name.toList == name)

/-- Prepends a token to the rest of a tokenization. -/
def cons (t : Tok) (r : Option (List Tok)) : Option (List Tok) := r.map (t :: ·)

mutual
/-- Text, until the next tag. -/
def lexText : List Char → Option (List Tok)
  | [] => some []
  | c :: r =>
    if c = '<' then lexTag r
    else if c = '&' then lexRef r
    else if c = '>' ∨ c = '"' then none
    else cons (.char c) (lexText r)
  termination_by structural x => x

/-- After `&` in text: one of the four references. -/
def lexRef : List Char → Option (List Tok)
  | 'a' :: 'm' :: 'p' :: ';' :: r => cons (.char '&') (lexText r)
  | 'l' :: 't' :: ';' :: r => cons (.char '<') (lexText r)
  | 'g' :: 't' :: ';' :: r => cons (.char '>') (lexText r)
  | 'q' :: 'u' :: 'o' :: 't' :: ';' :: r => cons (.char '"') (lexText r)
  | _ => none
  termination_by structural x => x

/-- After `<`. -/
def lexTag : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if c = '/' then lexCloseName [] r
    else if isNameChar c then lexOpenName [c] r
    else none
  termination_by structural x => x

/-- The name of an end tag (reversed so far). -/
def lexCloseName (buf : List Char) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if c = '>' then
      match tagOf buf.reverse with
      | some t => cons (.close t) (lexText r)
      | none => none
    else if isNameChar c then lexCloseName (c :: buf) r
    else none
  termination_by structural x => x

/-- The name of a start tag (reversed so far). -/
def lexOpenName (buf : List Char) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if isNameChar c then lexOpenName (c :: buf) r
    else match tagOf buf.reverse with
      | none => none
      | some t =>
        if c = '>' then cons (.open t []) (lexText r)
        else if c = ' ' then lexAfterSpace t [] r
        else none
  termination_by structural x => x

/-- After a space in a tag: an attribute, or `/>`. -/
def lexAfterSpace (t : Tag) (as : List (Attr × String)) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if c = '/' then lexSlash t as r
    else if isNameChar c then lexAttrName t as [c] r
    else none
  termination_by structural x => x

/-- After ` /` in a tag. -/
def lexSlash (t : Tag) (as : List (Attr × String)) : List Char → Option (List Tok)
  | [] => none
  | c :: r => if c = '>' then cons (.void t as.reverse) (lexText r) else none
  termination_by structural x => x

/-- An attribute name (reversed so far), up to `=`. -/
def lexAttrName (t : Tag) (as : List (Attr × String)) (buf : List Char) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if isNameChar c then lexAttrName t as (c :: buf) r
    else if c = '=' then
      match attrOf buf.reverse with
      | some a => lexQuote t as a r
      | none => none
    else none
  termination_by structural x => x

/-- After `=`: the opening `"`. -/
def lexQuote (t : Tag) (as : List (Attr × String)) (a : Attr) : List Char → Option (List Tok)
  | [] => none
  | c :: r => if c = '"' then lexValue t as a [] r else none
  termination_by structural x => x

/-- An attribute value (reversed so far), up to `"`. -/
def lexValue (t : Tag) (as : List (Attr × String)) (a : Attr) (v : List Char) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if c = '"' then lexAfterValue t ((a, String.ofList v.reverse) :: as) r
    else if c = '&' then lexValueRef t as a v r
    else if c = '<' ∨ c = '>' then none
    else lexValue t as a (c :: v) r
  termination_by structural x => x

/-- After `&` in an attribute value. -/
def lexValueRef (t : Tag) (as : List (Attr × String)) (a : Attr) (v : List Char) : List Char → Option (List Tok)
  | 'a' :: 'm' :: 'p' :: ';' :: r => lexValue t as a ('&' :: v) r
  | 'l' :: 't' :: ';' :: r => lexValue t as a ('<' :: v) r
  | 'g' :: 't' :: ';' :: r => lexValue t as a ('>' :: v) r
  | 'q' :: 'u' :: 'o' :: 't' :: ';' :: r => lexValue t as a ('"' :: v) r
  | _ => none
  termination_by structural x => x

/-- After an attribute's closing `"`: `>`, or a space. -/
def lexAfterValue (t : Tag) (as : List (Attr × String)) : List Char → Option (List Tok)
  | [] => none
  | c :: r =>
    if c = '>' then cons (.open t as.reverse) (lexText r)
    else if c = ' ' then lexAfterSpace t as r
    else none
  termination_by structural x => x
end

/-- **The HTML tokenizer**: the tokens of an HTML text, or `none` if it is
not HTML the renderer could have written. -/
def tokenize (s : String) : Option (List Tok) := lexText s.toList

mutual
/-- The tokens a tree stands for: start and end tags around each element's
children, one token per text character. -/
def _root_.Folio.Html.tokens : Html → List Tok
  | .text s => s.toList.map .char
  | .raw s => s.toList.map .char
  | .elem t as cs => .open t as :: (Html.tokensList cs ++ [.close t])
  | .void t as => [.void t as]

def _root_.Folio.Html.tokensList : List Html → List Tok
  | [] => []
  | h :: hs => Html.tokens h ++ Html.tokensList hs
end

mutual
/-- No raw HTML anywhere in a tree. -/
def _root_.Folio.Html.NoRaw : Html → Prop
  | .text _ => True
  | .raw _ => False
  | .elem _ _ cs => Html.NoRawList cs
  | .void _ _ => True

def _root_.Folio.Html.NoRawList : List Html → Prop
  | [] => True
  | h :: hs => Html.NoRaw h ∧ Html.NoRawList hs
end

/-- Whether start and end tags nest properly: every end tag closes the
innermost open element, and every element is closed. -/
def nests : List Tok → List Tag → Bool
  | [], stack => stack.isEmpty
  | .open t _ :: r, stack => nests r (t :: stack)
  | .close t :: r, s :: stack => t == s && nests r stack
  | .close _ :: _, [] => false
  | .void _ _ :: r, stack => nests r stack
  | .char _ :: r, stack => nests r stack

end Folio.Proofs
