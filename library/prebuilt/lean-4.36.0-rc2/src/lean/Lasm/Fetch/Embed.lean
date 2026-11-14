/-
`embed_dir! "dir"`: the files under `dir` (relative to the source file),
embedded while Lean compiles the program (Lasm.Fetch.Assets). This module only
runs at compile time.
-/
import Lean.Elab.Term
import Lean.Meta.AppBuilder
import Lasm.Fetch.Assets

namespace Lasm.Fetch
open Lean Elab Term

private def b64chars : Array Char :=
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".toList.toArray

/-- Standard base64 with padding. -/
def base64Encode (b : ByteArray) : String := Id.run do
  let mut out := ""
  let mut i := 0
  while i < b.size do
    let b0 := b[i]!.toNat
    let b1 := if i + 1 < b.size then b[i+1]!.toNat else 0
    let b2 := if i + 2 < b.size then b[i+2]!.toNat else 0
    let n := b0 * 65536 + b1 * 256 + b2
    out := out.push b64chars[n / 262144 % 64]! |>.push b64chars[n / 4096 % 64]!
    out := out.push (if i + 1 < b.size then b64chars[n / 64 % 64]! else '=')
    out := out.push (if i + 2 < b.size then b64chars[n % 64]! else '=')
    i := i + 3
  return out

private partial def walk (root : System.FilePath) (rel : String) : IO (Array String) := do
  let mut out := #[]
  for entry in ← (root / rel).readDir do
    let name := entry.fileName
    if name.startsWith "." then continue
    let r := if rel.isEmpty then name else rel ++ "/" ++ name
    if ← entry.path.isDir then out := out ++ (← walk root r)
    else out := out.push r
  return out.qsort (· < ·)

/-- Embeds the files under a directory (relative to this source file) as
`Lasm.Fetch.Assets`; `.br` copies are used for clients that accept Brotli and
`.gz` copies are left out. In `lasm dev` (`LASM_DEV_SERVER`), or when the
directory is missing, nothing is embedded and the server reads the directory
at run time. -/
elab "embed_dir!" dir:str : term => do
  let file ← getFileName
  let base := (System.FilePath.mk file).parent.getD "."
  let root := base / dir.getString
  let dev := (← IO.getEnv "LASM_DEV_SERVER").isSome
  if dev || !(← root.isDir) then
    return mkApp2 (mkConst ``Assets.mk) (← Meta.mkArrayLit (mkConst ``Asset) []) (toExpr root.toString)
  let files ← walk root ""
  let mut assets := #[]
  for rel in files do
    if rel.endsWith ".br" || rel.endsWith ".gz" then continue
    let bytes ← IO.FS.readBinFile (root / rel)
    let brFile := root / (rel ++ ".br")
    let br ← if ← brFile.pathExists then some <$> IO.FS.readBinFile brFile else pure none
    let brExpr := match br with
      | some b => mkApp2 (mkConst ``Option.some [0]) (mkConst ``String) (toExpr (base64Encode b))
      | none => mkApp (mkConst ``Option.none [0]) (mkConst ``String)
    assets := assets.push (mkApp4 (mkConst ``Asset.mk) (toExpr ("/" ++ rel)) (toExpr (contentTypeOf rel))
      (toExpr (base64Encode bytes)) brExpr)
  return mkApp2 (mkConst ``Assets.mk) (← Meta.mkArrayLit (mkConst ``Asset) assets.toList) (toExpr root.toString)

end Lasm.Fetch
