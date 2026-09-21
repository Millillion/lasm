import Init

-- The last handle reference belongs to the completed task's stdout context.
-- Its finalizer must be allowed to wait while a different task reads the FIFO.
def main (args : List String) : IO Unit := do
  let [path, count] := args | throw (IO.userError "expected FIFO path and byte count")
  let some count := count.toNat? | throw (IO.userError "invalid byte count")
  let expected := ByteArray.mk (Array.replicate count (120 : UInt8))
  let reader ← IO.asTask (prio := .dedicated) do
    let handle ← IO.FS.Handle.mk path .read
    IO.sleep 300
    let actual ← handle.read count.toUSize
    unless actual == expected do throw (IO.userError "buffered FIFO contents differ")
  let writer ← IO.asTask (prio := .dedicated) do
    let handle ← IO.FS.Handle.mk path .write
    discard <| IO.setStdout (IO.FS.Stream.ofHandle handle)
    handle.write expected
  IO.ofExcept reader.get
  IO.ofExcept writer.get
  IO.println "buffered FIFO finalizer and delayed reader completed"
