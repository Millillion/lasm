import Init

-- This is an additional differential fixture, not an edited upstream test.
-- The harness supplies a FIFO and its measured kernel capacity. Leaving a
-- partial stdio buffer above that capacity makes dropping the writer flush it.
@[noinline] def writeAndDrop (path : System.FilePath) (bytes : ByteArray) : IO Unit := do
  let writer ← IO.FS.Handle.mk path .write
  writer.write bytes

def main (args : List String) : IO Unit := do
  let [path, count] := args | throw (IO.userError "expected FIFO path and byte count")
  let some count := count.toNat? | throw (IO.userError "invalid byte count")
  let expected := ByteArray.mk (Array.replicate count (120 : UInt8))
  let reader ← IO.asTask (prio := .dedicated) do
    let handle ← IO.FS.Handle.mk path .read
    IO.sleep 300
    let actual ← handle.read count.toUSize
    unless actual == expected do throw (IO.userError "buffered FIFO contents differ")
  writeAndDrop path expected
  IO.ofExcept reader.get
  IO.println "buffered FIFO finalizer and delayed reader completed"
