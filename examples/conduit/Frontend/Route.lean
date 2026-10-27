/-
The browser app's pages and their URLs (RealWorld's routes). `Route.parse`
reads a URL; `Route.href` writes one. Shared by the server (which renders
the first page of any URL) and the browser app (which routes in the page).
-/
namespace Conduit.Frontend

/-- Which articles the home page lists. -/
inductive Feed where
  | global
  | following
  | tag (name : String)
  deriving Repr, BEq, DecidableEq, Inhabited

inductive Route where
  /-- `/`, `/?feed=following`, `/tag/:tag`, with `?page=N`. -/
  | home (feed : Feed) (page : Nat)
  | login
  | register
  | settings
  /-- `/editor` (new) and `/editor/:slug` (edit). -/
  | editor (slug : Option String)
  | article (slug : String)
  /-- `/profile/:username` and `/profile/:username/favorites`, with `?page=N`. -/
  | profile (username : String) (favorites : Bool) (page : Nat)
  | notFound
  deriving Repr, BEq, DecidableEq, Inhabited

/-- Articles per page in every list. -/
def pageSize : Nat := 10

/-- `?page=N` (1 when absent or not a positive number). -/
def pageOf (params : List (String × String)) : Nat :=
  match (params.lookup "page").bind String.toNat? with
  | some n => if n = 0 then 1 else n
  | none => 1

/-- The route of a path (decoded segments) and its query parameters. -/
def Route.parse (segments : List String) (params : List (String × String)) : Route :=
  match segments with
  | [] => .home (if params.lookup "feed" == some "following" then .following else .global) (pageOf params)
  | ["tag", t] => .home (.tag t) (pageOf params)
  | ["login"] => .login
  | ["register"] => .register
  | ["settings"] => .settings
  | ["editor"] => .editor none
  | ["editor", slug] => .editor (some slug)
  | ["article", slug] => .article slug
  | ["profile", u] => .profile u false (pageOf params)
  | ["profile", u, "favorites"] => .profile u true (pageOf params)
  | _ => .notFound

/-- Percent-encodes a path segment (everything but unreserved characters). -/
def encodeSegment (s : String) : String :=
  s.toUTF8.foldl (init := "") fun acc b =>
    let c := Char.ofNat b.toNat
    if c.isAlphanum || c == '-' || c == '_' || c == '.' || c == '~' then acc.push c
    else
      let hex := "0123456789ABCDEF".toList
      acc.push '%' |>.push (hex[b.toNat / 16]!) |>.push (hex[b.toNat % 16]!)

/-- `?page=N`, or `&page=N` after other parameters; nothing for page 1. -/
def pageQuery (page : Nat) (first : Bool) : String :=
  if page ≤ 1 then "" else (if first then "?" else "&") ++ s!"page={page}"

def Route.href : Route → String
  | .home .global p => "/" ++ pageQuery p true
  | .home .following p => "/?feed=following" ++ pageQuery p false
  | .home (.tag t) p => "/tag/" ++ encodeSegment t ++ pageQuery p true
  | .login => "/login"
  | .register => "/register"
  | .settings => "/settings"
  | .editor none => "/editor"
  | .editor (some s) => "/editor/" ++ encodeSegment s
  | .article s => "/article/" ++ encodeSegment s
  | .profile u false p => "/profile/" ++ encodeSegment u ++ pageQuery p true
  | .profile u true p => "/profile/" ++ encodeSegment u ++ "/favorites" ++ pageQuery p true
  | .notFound => "/"

/-- Pages only a logged-in user can see. -/
def Route.needsUser : Route → Bool
  | .settings | .editor _ | .home .following _ => true
  | _ => false

/-- Pages a logged-in user is sent away from. -/
def Route.guestOnly : Route → Bool
  | .login | .register => true
  | _ => false

end Conduit.Frontend
