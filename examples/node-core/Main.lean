/-
node-core: a small file tool written against the generated Node bindings (Lasm.JS.Node) only.

For each file of a directory it prints the size, the SHA-256 (node:crypto), and the gzip size
(node:zlib), and checks that gunzip gives the bytes back. Without an argument it makes a
directory of sample files first (node:fs/promises, node:os, node:path) and removes it after.

  npx @lasm/cli Main.lean -- [directory]
-/
import Lasm.JS.Node
import Lasm.JS.Node.Zlib  -- not in the compiled core set: compiled on first import
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

def text : DOMStringOrUint8Array → String
  | .domString s => s
  | .uint8Array b => String.fromUTF8! b

def hexDigest (bytes : ByteArray) : IO String := do
  let h ← crypto.createHash "sha256"
  h.update (.uint8Array bytes)
  match ← h.digest (some "hex") with
  | .domString s => pure s
  | .uint8Array b => pure (String.fromUTF8! b)

/-- One line per file: name, size, SHA-256, gzip size; false when gunzip does not round-trip. -/
def report (dir : String) : Async Bool := do
  let mut ok := true
  let entries ← fsPromises.readdir (.domString dir) (some (.readdirOptions { withFileTypes := some true }))
  let mut names : Array String := #[]
  for e in entries do
    if let .dirent d := e then
      if ← d.isFile then names := names.push (text (← d.name))
  for name in names.qsort (· < ·) do
    let file ← path.join #[dir, name]
    let bytes ← match ← fsPromises.readFile (.domString file) with
      | .uint8Array b => pure b
      | .domString s => pure s.toUTF8
    let gz ← zlib.gzipSync (.uint8Array bytes)
    let back ← zlib.gunzip (.uint8Array gz)
    let same := back == bytes
    ok := ok && same
    IO.println s!"{name}\t{bytes.size} bytes\tsha256 {← hexDigest bytes}\tgzip {gz.size} bytes{if same then "" else "\tROUND TRIP FAILED"}"
  return ok

def run : Async UInt32 := do
  let args := (← process.argv).extract 2
  let (dir, made) ← match args[0]? with
    | some d => pure (d, false)
    | none => do
      let d := text (← fsPromises.mkdtemp (.domString (← path.join #[← os.tmpdir, "node-core-"])))
      fsPromises.writeFile (.domString (← path.join #[d, "empty.txt"])) (.domString "")
      fsPromises.writeFile (.domString (← path.join #[d, "hello.txt"])) (.domString "hello, world\n")
      fsPromises.writeFile (.domString (← path.join #[d, "repeat.txt"])) (.domString (String.join (List.replicate 1000 "lasm ")))
      pure (d, true)
  let ok ← report dir
  if made then fsPromises.rm (.domString dir) (some { recursive := some true, force := some true })
  IO.println s!"node {← process.version} on {← os.platform}: {if ok then "ok" else "FAILED"}"
  return if ok then 0 else 1

def main : IO UInt32 := run.block
