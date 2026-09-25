/- Supplementary ordinary Lean IO coverage; no upstream test is changed. -/
private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

private def payload (size : Nat) : ByteArray := Id.run do
  let mut bytes := ByteArray.mk #[0, 255, 128, 65, 10, 195, 169, 17]
  while bytes.size < size do
    let count := min bytes.size (size - bytes.size)
    bytes := bytes.copySlice 0 bytes bytes.size count
  return bytes.extract 0 size

def main (args : List String) : IO Unit := do
  let directory : System.FilePath := args.head!
  IO.FS.createDirAll directory
  let size := 64 * 1024 * 1024 + 1
  let bytes := payload size
  ensure (bytes.size == size) "payload length"
  let file := directory / "large.bin"
  IO.FS.writeBinFile file bytes
  let received ← IO.FS.readBinFile file
  ensure (received == bytes) "large binary file round trip"
  let direct ← IO.FS.withFile file .read fun handle => handle.read (size + 1).toUSize
  ensure (direct == bytes) "large direct read with EOF"
  IO.println s!"bytes={received.size}, hash={hash received}"
  IO.FS.removeFile file
  IO.FS.removeDir directory
  IO.println "large file transfer checks passed"
