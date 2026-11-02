/- The `folio` command (Folio.Site, Folio.render), for Node (`npm run build`,
dist/cli/main.mjs) and WASI (`npm run build:wasi`, wasi/main.wasm):

  folio build [SITE] [OUT]       the site in SITE (default .) into OUT (default SITE/public)
  folio render [--raw-html] FILE  one Markdown file to HTML on standard output

A site is `index.md` (the home page and its settings), `content/**/*.md`
(the pages) and `layouts/*.html` (optional). Exit status: 0 done, 1 done with
warnings, 2 usage or unreadable input. -/
import Folio

open System

def usage : String :=
  "usage: folio build [SITE] [OUT]\n       folio render [--raw-html] FILE"

/-- The Markdown files under `dir`, as paths relative to `dir`, sorted. -/
def markdownFiles (dir : FilePath) : IO (Array String) := do
  let mut out := #[]
  let mut todo : List (FilePath × String) := [(dir, "")]
  -- one directory per iteration, bounded by a generous number of directories
  for _ in [0:100000] do
    match todo with
    | [] => break
    | (d, rel) :: rest =>
      todo := rest
      let entries ← d.readDir
      for e in entries.qsort (·.fileName < ·.fileName) do
        let r := if rel.isEmpty then e.fileName else rel ++ "/" ++ e.fileName
        if ← e.path.isDir then todo := todo ++ [(e.path, r)]
        else if e.fileName.endsWith ".md" then out := out.push r
  return out.qsort (· < ·)

def readOptional (path : FilePath) : IO String := do
  if ← path.pathExists then IO.FS.readFile path else return ""

def build (site out : FilePath) : IO UInt32 := do
  let index ← readOptional (site / "index.md")
  let content := site / "content"
  let files ← if ← content.isDir then markdownFiles content else pure #[]
  let pages ← files.toList.mapM fun (f : String) => do return (f, ← IO.FS.readFile (content / FilePath.mk f))
  let layoutDir := site / "layouts"
  let mut layouts := []
  if ← layoutDir.isDir then
    for e in ← layoutDir.readDir do
      if e.fileName.endsWith ".html" then
        layouts := layouts ++ [((e.fileName.dropEnd 5).toString, ← IO.FS.readFile e.path)]
  let result := Folio.Site.build { index, pages, layouts }
  for (path, text) in result.files do
    let target := out / path
    if let some parent := target.parent then IO.FS.createDirAll parent
    IO.FS.writeFile target text
  for w in result.warnings do IO.eprintln s!"warning: {w}"
  IO.println s!"{result.published.length} pages, the index and the feed written to {out}"
  return if result.warnings.isEmpty then 0 else 1

def main (args : List String) : IO UInt32 := do
  try
    match args with
    | ["build"] => build "." ("." / "public")
    | ["build", site] => build site (FilePath.mk site / "public")
    | ["build", site, out] => build site out
    | ["render", file] => IO.print (Folio.render {} (← IO.FS.readFile file)); return 0
    | ["render", "--raw-html", file] =>
      IO.print (Folio.render { rawHtml := true, anyUrl := true } (← IO.FS.readFile file)); return 0
    | _ => IO.eprintln usage; return 2
  catch e =>
    IO.eprintln s!"folio: {e}"
    return 2
