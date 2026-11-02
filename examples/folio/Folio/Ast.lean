/-
The CommonMark document tree: what the parser builds and the renderer turns
into HTML. Lists hold their items, each item a list of blocks.
-/
namespace Folio

inductive Inline where
  | text (s : String)
  | softbreak
  | linebreak
  | code (s : String)
  /-- Raw HTML in the source (an HTML tag, comment, declaration, …). -/
  | html (s : String)
  | emph (cs : List Inline)
  | strong (cs : List Inline)
  | link (dest title : String) (cs : List Inline)
  | image (dest title : String) (cs : List Inline)
  deriving Repr, Inhabited

inductive Block where
  | para (cs : List Inline)
  | heading (level : Nat) (cs : List Inline)
  | thematic
  | code (info literal : String)
  /-- An HTML block in the source. -/
  | html (literal : String)
  | quote (bs : List Block)
  | list (ordered : Bool) (start : Nat) (tight : Bool) (items : List (List Block))
  deriving Repr, Inhabited

/-- A link reference definition: its destination and title. -/
structure LinkRef where
  dest : String
  title : String
  deriving Repr, Inhabited

end Folio
