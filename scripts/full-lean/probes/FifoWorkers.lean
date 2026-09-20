import Init

-- Supplementary differential fixture. Four independent reads must not prevent
-- another thread's writes from reaching those readers. The harness holds each
-- FIFO open so this isolates read/write progress from FIFO open rendezvous.
def main (args : List String) : IO Unit := do
  let [directory] := args | throw (IO.userError "expected FIFO directory")
  let mut readers := #[]
  let mut writers := #[]
  for i in [:4] do
    let path := System.FilePath.mk directory / s!"{i}.fifo"
    readers := readers.push (← IO.FS.Handle.mk path .read)
    writers := writers.push (← IO.FS.Handle.mk path .write)
  let mut tasks := #[]
  let mut started := #[]
  for reader in readers do
    let ready : IO.Promise Unit ← IO.Promise.new
    started := started.push ready
    tasks := tasks.push (← IO.asTask (prio := .dedicated) do
      ready.resolve ()
      let bytes ← reader.read 1
      unless bytes == "x".toUTF8 do throw (IO.userError "FIFO payload differs"))
  for ready in started do discard <| IO.wait ready.result?
  IO.sleep 300
  IO.println "four readers started"
  for writer in writers do
    writer.write "x".toUTF8
    writer.flush
  for task in tasks do IO.ofExcept task.get
  IO.println "concurrent FIFO reads and writes completed"
