/-
The site generator: a directory of Markdown pages becomes a site.

- Each page may start with **front matter**: lines `key: value` between two
  `---` lines (`title`, `date` as `YYYY-MM-DD`, `draft: true`, `slug`,
  `layout`, `summary`; other keys are available to templates).
- `index.md` is the home page; its front matter configures the site
  (`title`, `url`, `description`, `raw_html: true` to trust raw HTML).
- A **layout** is an HTML template with `{{ name }}` placeholders: `{{ content }}`
  is the rendered page, every other value is escaped.
- The **index** (the home page) links every published page, newest first;
  the **feed** (`feed.xml`, RSS 2.0) lists the same pages.
- Drafts are not published: no page, no link, no feed item.

Everything is pure: `build` takes the files' text and returns the files to
write. `Cli.lean` does the reading and writing.
-/
import Folio.Render

namespace Folio.Site

/-! ## Front matter -/

/-- A page's front matter and body. -/
structure Source where
  fields : List (String × String)
  body : String
  deriving Repr, Inhabited

/-- Strips one pair of matching quotes. -/
def unquote (s : String) : String :=
  let cs := s.toList
  if cs.length ≥ 2 && (cs.head! == '"' || cs.head! == '\'') && cs.getLast! == cs.head! then
    String.ofList (cs.drop 1).dropLast
  else s

/-- Splits front matter (`---` lines around `key: value` lines) from the body. -/
def parseSource (text : String) : Source :=
  let lines := text.splitOn "\n" |>.map fun l => if l.endsWith "\r" then String.ofList l.toList.dropLast else l
  match lines with
  | first :: rest =>
    if first.trimAsciiEnd.toString == "---" then
      match rest.findIdx? (·.trimAsciiEnd.toString == "---") with
      | some i =>
        let fields := (rest.take i).filterMap fun l =>
          match l.splitOn ":" with
          | k :: v :: vs =>
            let key := (jsTrim k)
            if key.isEmpty || key.startsWith "#" then none
            else some (key, unquote (jsTrim (":".intercalate (v :: vs))))
          | _ => none
        { fields, body := "\n".intercalate (rest.drop (i + 1)) }
      | none => { fields := [], body := text }
    else { fields := [], body := text }
  | [] => { fields := [], body := text }

def Source.get (s : Source) (key : String) : String := (s.fields.lookup key).getD ""

/-! ## Slugs -/

/-- The characters a slug may contain: `a-z`, `0-9`, `-`. -/
def isSlugChar (c : Char) : Bool := ('a' ≤ c && c ≤ 'z') || ('0' ≤ c && c ≤ '9') || c == '-'

/-- A well-formed slug: not empty, only `a-z`, `0-9` and `-`. -/
def isSlug (s : String) : Bool := !s.toList.isEmpty && s.toList.all isSlugChar

/-- Words of ASCII letters (lowercased) and digits, joined by `-`; `page`
when there are none. -/
def slugify (s : String) : String :=
  let words := (s.toList.map fun c => if isAsciiAlnum c then some (asciiLower c) else none).splitBy (fun a b => a.isSome == b.isSome)
    |>.filterMap fun w => if w.all Option.isSome then some (String.ofList (w.filterMap id)) else none
    |>.filter (!·.isEmpty)
  let slug := "-".intercalate words
  if isSlug slug then slug else "page"

/-- The first of `base`, `base-2`, …, `base-9` not in `taken`; otherwise
`base` followed by more `x`s than any taken slug is long. -/
def uniqueSlug (base : String) (taken : List String) : String :=
  let candidates := base :: ['2', '3', '4', '5', '6', '7', '8', '9'].map fun d => base ++ String.ofList ['-', d]
  match candidates.find? (· ∉ taken) with
  | some s => s
  | none => base ++ String.ofList (List.replicate ((taken.map (·.length)).foldr max 0 + 1) 'x')

/-- Slugs for a list of wished-for slugs, in order, each different from
`taken` and from the ones before it. -/
def assignSlugs (taken : List String) : List String → List String
  | [] => []
  | w :: ws => let s := uniqueSlug w taken; s :: assignSlugs (s :: taken) ws

/-! ## Pages -/

structure Page where
  /-- The file the page came from. -/
  file : String
  slug : String
  title : String
  /-- `YYYY-MM-DD`, or empty. -/
  date : String
  summary : String
  layout : String
  fields : List (String × String)
  /-- The page's Markdown, rendered. -/
  html : List Html
  deriving Inhabited

/-- A page's address, relative to the site's root. -/
def Page.href (p : Page) : String := p.slug ++ "/"

/-- Where a page is written, relative to the output directory. -/
def Page.path (p : Page) : String := p.href ++ "index.html"

/-- A `YYYY-MM-DD` date. -/
def validDate (d : String) : Bool :=
  let cs := d.toList
  cs.length == 10 && cs[4]! == '-' && cs[7]! == '-' &&
  ([0, 1, 2, 3, 5, 6, 8, 9].all fun i => isDigit cs[i]!) &&
  (let m := (String.ofList [cs[5]!, cs[6]!]).toNat!; 1 ≤ m && m ≤ 12) &&
  (let day := (String.ofList [cs[8]!, cs[9]!]).toNat!; 1 ≤ day && day ≤ 31)

/-- Newest first; pages without a date last; then by slug. -/
def newerFirst (a b : Page) : Bool :=
  if a.date == b.date then decide (a.slug ≤ b.slug) else decide (b.date ≤ a.date)

/-! ## Templates -/

inductive Piece where
  | lit (s : String)
  | var (name : String)
  deriving Repr, Inhabited

/-- Splits a template at `{{ name }}` placeholders. -/
def parseTemplate (t : String) : List Piece := Id.run do
  let a := chars t
  let mut out : Array Piece := #[]
  let mut lit := ""
  let mut i := 0
  for _ in [0:a.size] do
    if i ≥ a.size then break
    if a[i]! == '{' && a[i + 1]? == some '{' then
      match Scan.findSeq a (i + 2) "}}".toList with
      | some e =>
        out := out.push (.lit lit)
        lit := ""
        out := out.push (.var (jsTrim (slice a (i + 2) (e - 2))))
        i := e
      | none => lit := lit.push a[i]!; i := i + 1
    else
      lit := lit.push a[i]!
      i := i + 1
  return (out.push (.lit lit)).toList

/-- Fills a template: `{{ content }}` with the page's HTML as it is, every
other `{{ name }}` with the escape of its value (empty if it has none). -/
def fill (pieces : List Piece) (vars : List (String × String)) (content : String) : String :=
  String.join (pieces.map fun
    | .lit s => s
    | .var "content" => content
    | .var n => escapeHtml ((vars.lookup n).getD ""))

def defaultLayout : String :=
  "<!doctype html>\n<html lang=\"en\">\n<head>\n<meta charset=\"utf-8\">\n" ++
  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n" ++
  "<title>{{ title }}</title>\n" ++
  "<link rel=\"alternate\" type=\"application/rss+xml\" href=\"{{ root }}feed.xml\">\n</head>\n<body>\n" ++
  "<header><a href=\"{{ root }}\">{{ site.title }}</a></header>\n<main>\n<h1>{{ title }}</h1>\n" ++
  "{{ content }}</main>\n</body>\n</html>\n"

/-! ## The feed (RSS 2.0) -/

def dayNames : List String := ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]
def monthNames : List String := ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]

/-- RFC 822 date of a `YYYY-MM-DD` date, at midnight UTC. -/
def rfc822 (d : String) : String :=
  let y := (d.take 4).toString.toNat!
  let m := ((d.drop 5).take 2).toString.toNat!
  let day := ((d.drop 8).take 2).toString.toNat!
  -- Sakamoto's day of the week
  let t := [0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4]
  let y' := if m < 3 then y - 1 else y
  let w := (y' + y' / 4 - y' / 100 + y' / 400 + t.getD (m - 1) 0 + day) % 7
  let dd := if day < 10 then s!"0{day}" else toString day
  s!"{dayNames.getD w ""}, {dd} {monthNames.getD (m - 1) ""} {y} 00:00:00 +0000"

/-- An XML element with escaped text: `<name>text</name>`. -/
def xmlText (name text : String) : String := s!"<{name}>{escapeHtml text}</{name}>"

/-! ## The site -/

structure Input where
  /-- `index.md`, the home page and the site's settings. -/
  index : String
  /-- Every other page: file name and text. -/
  pages : List (String × String)
  /-- Layouts: name (`page` is the default) and template. -/
  layouts : List (String × String)
  deriving Inhabited

structure Output where
  /-- Files to write: path relative to the output directory, and text. -/
  files : List (String × String)
  /-- What was wrong with the input (the build still completes). -/
  warnings : List String
  /-- The published pages, newest first. -/
  published : List Page

/-- The site's settings, from `index.md`'s front matter. -/
structure Config where
  title : String
  url : String
  description : String
  options : Options

def config (index : Source) : Config :=
  let url := index.get "url"
  { title := if (index.get "title").isEmpty then "Folio" else index.get "title"
    url := if url.isEmpty || url.endsWith "/" then url else url ++ "/"
    description := index.get "description"
    options := { rawHtml := index.get "raw_html" == "true" } }

/-- Reads one page: its front matter, and its Markdown rendered. -/
def readOne (o : Options) (page : String × String) : String × Source × List Html :=
  let s := parseSource page.2
  (page.1, s, toHtml o (Blocks.parse s.body))

/-- Whether a page's front matter says `draft: true`. -/
def isDraft (s : Source) : Bool := s.get "draft" == "true"

/-- Reads the pages; drafts are dropped here. -/
def readPages (o : Options) (pages : List (String × String)) : List (String × Source × List Html) :=
  (pages.map (readOne o)).filter fun r => !isDraft r.2.1

def stem (file : String) : String :=
  let base := ((file.splitOn "/").getLast?.getD file)
  if base.endsWith ".md" then String.ofList (base.toList.take (base.length - 3)) else base

/-- The slug a page asks for: `slug`, else its file name without `.md`. -/
def wish (r : String × Source × List Html) : String :=
  slugify (if (r.2.1.get "slug").isEmpty then stem r.1 else r.2.1.get "slug")

/-- A page, from what was read and its slug. -/
def mkPage (x : (String × Source × List Html) × String) : Page :=
  let ((file, s, html), slug) := x
  { file, slug, title := if (s.get "title").isEmpty then stem file else s.get "title"
    date := s.get "date", summary := s.get "summary", layout := s.get "layout", fields := s.fields, html }

/-- The published pages, with unique slugs, in input order. -/
def unsorted (o : Options) (pages : List (String × String)) : List Page :=
  let read := readPages o pages
  (read.zip (assignSlugs [] (read.map wish))).map mkPage

/-- The published pages, newest first. -/
def published (o : Options) (pages : List (String × String)) : List Page :=
  (unsorted o pages).mergeSort newerFirst

/-- The index's list: a link to every published page, with its date. -/
def indexList (ps : List Page) : Html :=
  .elem .ul [] (ps.map fun p =>
    .elem .li [] ([.elem .a [(.href, p.href)] [.text p.title]] ++
      (if p.date.isEmpty then [] else [.text " ", .elem .time [(.datetime, p.date)] [.text p.date]])))

/-- The feed: one item per published page, in order. -/
def feed (c : Config) (ps : List Page) : String :=
  let items := ps.map fun p =>
    "<item>" ++ xmlText "title" p.title ++ xmlText "link" (c.url ++ p.href) ++
    xmlText "guid" (c.url ++ p.href) ++
    (if validDate p.date then xmlText "pubDate" (rfc822 p.date) else "") ++
    xmlText "description" (Html.serialize p.html) ++ "</item>\n"
  "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<rss version=\"2.0\">\n<channel>\n" ++
  xmlText "title" c.title ++ "\n" ++ xmlText "link" c.url ++ "\n" ++ xmlText "description" c.description ++ "\n" ++
  String.join items ++ "</channel>\n</rss>\n"

/-- The template of a layout name (`page` when it names none or an unknown one). -/
def layoutFor (layouts : List (String × String)) (name : String) : String :=
  match layouts.lookup (if name.isEmpty then "page" else name) with
  | some t => t
  | none => (layouts.lookup "page").getD defaultLayout

/-- **The site**: every published page at `slug/index.html`, the index at
`index.html`, the feed at `feed.xml`. -/
def build (input : Input) : Output :=
  let index := parseSource input.index
  let c := config index
  let ps := published c.options input.pages
  let vars (title : String) (root : String) (extra : List (String × String)) : List (String × String) :=
    [("title", title), ("site.title", c.title), ("site.url", c.url), ("site.description", c.description),
     ("root", root)] ++ extra
  let pageFile (p : Page) : String × String :=
    (p.path, fill (parseTemplate (layoutFor input.layouts p.layout))
      (vars p.title "../" ([("date", p.date), ("summary", p.summary), ("slug", p.slug)] ++ p.fields)) (Html.serialize p.html))
  let indexHtml := toHtml c.options (Blocks.parse index.body) ++ [indexList ps, .text "\n"]
  let indexFile := ("index.html", fill (parseTemplate (layoutFor input.layouts "index"))
    (vars c.title "./" []) (Html.serialize indexHtml))
  let warnings := ps.filterMap fun p =>
    if !p.date.isEmpty && !validDate p.date then some s!"{p.file}: date {p.date} is not YYYY-MM-DD" else
    if !p.layout.isEmpty && (input.layouts.lookup p.layout).isNone then some s!"{p.file}: no layout {p.layout}" else none
  { files := indexFile :: ("feed.xml", feed c ps) :: ps.map pageFile, warnings, published := ps }

end Folio.Site
