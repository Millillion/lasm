/-
Lasm.Web URLs and forms: parsing URLs (`URL`), query parameters
(`URLSearchParams`), percent-encoding and `FormData`.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- A parsed URL (the fields of JavaScript's `URL`). -/
structure Url where
  href : String
  origin : String
  /-- With the colon: `https:`. -/
  protocol : String
  username : String
  password : String
  /-- Host name and port. -/
  host : String
  hostname : String
  port : String
  pathname : String
  /-- With the question mark, or empty. -/
  search : String
  /-- With the hash sign, or empty. -/
  hash : String
  /-- The query parameters, decoded, in order. -/
  params : Array (String × String)
  deriving FromJS, Inhabited, Repr

/-- One `FormData` entry: text, or a file (from `<input type="file">`). -/
inductive FormValue where
  | text (value : String)
  | file (name : String) (type : String) (size : Nat) (blob : Value)

instance : FromJS FormValue where
  fromJS
    | .string s => .ok (.text s)
    | d@(.object _) => do
      let name ← readField String d "name"
      let type ← readField String d "type"
      let size ← readField Nat d "size"
      match d.field "file" with
      | .ref v _ => .ok (.file name type size v)
      | _ => .error "a file entry without its file"
    | _ => .error ""
  typeName := "Lasm.Web.FormValue"

namespace Raw
@[js "lasm:web" "parseUrl"] opaque parseUrl : String → Option String → IO (Option Url)
@[js "lasm:web" "searchParams"] opaque searchParams : Data → IO SearchParams
@[js "lasm:web" "paramsEntries"] opaque paramsEntries : SearchParams → IO (Array (String × String))
@[js "lasm:web" "encodeURIComponent"] opaque encodeURIComponent : String → IO String
@[js "lasm:web" "decodeURIComponent"] opaque decodeURIComponent : String → IO String
@[js "lasm:web" "formData"] opaque formData : Option Element → IO FormData
@[js "lasm:web" "formEntries"] opaque formEntries : FormData → IO (Array (String × FormValue))
@[js "lasm:web" "formAppend"] opaque formAppend : FormData → String → String → IO Unit
@[js "lasm:web" "formAppendBytes"] opaque formAppendBytes : FormData → String → ByteArray → String → String → IO Unit
@[js "lasm:web" "blobBytes"] opaque blobBytes : Value → Async ByteArray
end Raw

/-- Parses an absolute URL, or one relative to `base`; `none` when it is not a URL. -/
def Url.parse (url : String) (base : Option String := none) : IO (Option Url) := Raw.parseUrl url base
/-- `encodeURIComponent`. -/
def encodeURIComponent (text : String) : IO String := Raw.encodeURIComponent text
/-- `decodeURIComponent`; an error for malformed escapes. -/
def decodeURIComponent (text : String) : IO String := Raw.decodeURIComponent text

namespace SearchParams
/-- Query parameters from pairs. -/
def create (pairs : Array (String × String) := #[]) : IO SearchParams := Raw.searchParams (toJS pairs)
/-- Query parameters parsed from `a=1&b=2` (a leading `?` is ignored). -/
def parse (query : String) : IO SearchParams := Raw.searchParams (.string query)
def get (p : SearchParams) (name : String) : IO (Option String) := p.val.callMethod "get" #[toJS name] (Option String)
def getAll (p : SearchParams) (name : String) : IO (Array String) := p.val.callMethod "getAll" #[toJS name] (Array String)
def has (p : SearchParams) (name : String) : IO Bool := p.val.callMethod "has" #[toJS name] Bool
def set (p : SearchParams) (name value : String) : IO Unit := p.val.callMethod "set" #[toJS name, toJS value] Unit
def append (p : SearchParams) (name value : String) : IO Unit := p.val.callMethod "append" #[toJS name, toJS value] Unit
def delete (p : SearchParams) (name : String) : IO Unit := p.val.callMethod "delete" #[toJS name] Unit
def entries (p : SearchParams) : IO (Array (String × String)) := Raw.paramsEntries p
/-- `a=1&b=2`, percent-encoded. -/
def toString (p : SearchParams) : IO String := p.val.callMethod "toString" #[] String
end SearchParams

namespace FormData
def create : IO FormData := Raw.formData none
/-- The fields of a `<form>` element. -/
def ofForm (form : Element) : IO FormData := Raw.formData (some form)
def append (d : FormData) (name value : String) : IO Unit := Raw.formAppend d name value
/-- Appends bytes as a file field. -/
def appendBytes (d : FormData) (name : String) (bytes : ByteArray) (filename : String) (type : String := "application/octet-stream") : IO Unit :=
  Raw.formAppendBytes d name bytes filename type
def get (d : FormData) (name : String) : IO (Option String) := do
  match ← d.val.callMethod "get" #[toJS name] Data with
  | .string s => pure (some s)
  | _ => pure none
def entries (d : FormData) : IO (Array (String × FormValue)) := Raw.formEntries d
end FormData

/-- The contents of a file entry (`FormValue.file`). -/
def FormValue.bytes : FormValue → Async ByteArray
  | .text t => pure t.toUTF8
  | .file _ _ _ blob => Raw.blobBytes blob

end Lasm.Web
