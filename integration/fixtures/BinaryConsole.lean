/- Supplementary ordinary Lean IO coverage; no upstream test is changed. -/
private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

def main (args : List String) : IO Unit := do
  let directory : System.FilePath := args.head!
  IO.FS.createDirAll directory
  let bytes := ByteArray.mk ((List.range 256).toArray.map UInt8.ofNat)
  let file := directory / "bytes.bin"
  IO.FS.writeBinFile file bytes
  ensure ((← IO.FS.readBinFile file) == bytes) "binary file round trip"
  let stdout ← IO.getStdout
  let stderr ← IO.getStderr
  -- Flush every byte, including invalid UTF-8 and split multibyte sequences.
  -- A host must not decode individual writes or append line delimiters.
  for byte in bytes.data do
    stdout.write (ByteArray.mk #[byte])
    stdout.flush
  for byte in #[0, 255, 254, 195, 128, 10, 0] do
    stderr.write (ByteArray.mk #[byte])
    stderr.flush
  stdout.write "λ日本語".toUTF8
  stdout.flush
  IO.FS.removeFile file
  IO.FS.removeDir directory
  stdout.write "binary console checks passed".toUTF8
