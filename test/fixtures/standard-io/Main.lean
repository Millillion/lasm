module
public import Std.Async
public import Std.Sync.Mutex
public section

private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

def exercise (directory : String) : IO Unit := do
  let root : System.FilePath := directory
  IO.FS.createDirAll (root / "nested")
  let file := root / "nested" / "日本語.txt"
  IO.FS.writeFile file "hello λ\nsecond line\n"
  ensure ((← IO.FS.readFile file) == "hello λ\nsecond line\n") "Unicode readFile"
  let escaped ← IO.FS.withFile file .read fun handle => pure handle
  ensure ((← escaped.getLine) == "hello λ\n") "Handle escaped withFile"
  ensure ((← escaped.getLine) == "second line\n") "second line"
  ensure ((← escaped.getLine) == "") "EOF"
  escaped.rewind
  ensure ((← escaped.read 5) == "hello".toUTF8) "partial read"
  IO.FS.withFile file .append fun handle => handle.putStr "tail"
  ensure ((← IO.FS.readFile file).endsWith "tail") "append"
  IO.FS.withFile file .readWrite fun handle => do
    discard <| handle.read 5
    handle.truncate
    handle.flush
  ensure ((← IO.FS.readFile file) == "hello") "truncate at cursor"
  let binary := root / "binary"
  let bytes := ByteArray.mk #[0, 1, 127, 128, 255]
  IO.FS.writeBinFile binary bytes
  ensure ((← IO.FS.readBinFile binary) == bytes) "binary round trip"
  let badUtf8 ← try discard <| IO.FS.readFile binary; pure false catch _ => pure true
  ensure badUtf8 "UTF-8 validation"
  let missing ← try
      discard <| IO.FS.readFile (root / "missing")
      pure false
    catch
    | .noFileOrDirectory .. => pure true
    | _ => pure false
  ensure missing "structured missing-file error"
  let alreadyExists ← try
      discard <| IO.FS.Handle.mk file .writeNew
      pure false
    catch
    | .alreadyExists .. => pure true
    | _ => pure false
  ensure alreadyExists "exclusive file creation"
  let invalid ← try
      discard <| IO.FS.readFile (System.FilePath.mk (file.toString ++ "\x00suffix"))
      pure false
    catch
    | .invalidArgument .. => pure true
    | _ => pure false
  ensure invalid "embedded NUL error"
  let metadata ← file.metadata
  ensure (metadata.byteSize == 5 && metadata.type == .file) "metadata"
  ensure ((← (root / "nested").readDir).size == 1) "directory entries"
  let renamed := root / "renamed"
  IO.FS.rename file renamed
  ensure (!(← file.pathExists) && (← renamed.pathExists)) "rename"
  IO.FS.hardLink renamed (root / "linked")
  ensure ((← IO.FS.readFile (root / "linked")) == "hello") "hard link"
  let buffer ← IO.mkRef ({} : IO.FS.Stream.Buffer)
  IO.withStdout (IO.FS.Stream.ofBuffer buffer) do IO.println "captured λ"
  ensure ((← buffer.get).data == "captured λ\n".toUTF8) "standard stream redirection"
  let profileBuffer ← IO.mkRef ({} : IO.FS.Stream.Buffer)
  IO.withStderr (IO.FS.Stream.ofBuffer profileBuffer) do
    let value ← timeit "timed action" do IO.sleep 2; pure (42 : Nat)
    ensure (value == 42) "timeit result"
    let caught ← try
        timeit "timed failure" (throw (IO.userError "timed error") : IO Unit)
        pure false
      catch e => pure (e.toString == "timed error")
    ensure caught "timeit preserves IO errors"
    let profiled ← allocprof "allocations" (pure (17 : Nat))
    ensure (profiled == 17) "allocation profiler result"
  let profileText := String.fromUTF8! (← profileBuffer.get).data
  ensure (profileText.startsWith "timed action ") "timeit current stderr"
  ensure (profileText.contains "timed failure ") "failed action timing"
  ensure (profileText.contains "allocations") "allocation profiler current stderr"
  IO.setNumHeartbeats 1200
  IO.addHeartbeats 300
  ensure ((← IO.getNumHeartbeats) ≥ 1500) "heartbeat counter"
  let cancellation ← IO.CancelToken.new
  let callbacks ← IO.mkRef (0 : Nat)
  for _ in [0:5] do cancellation.onSet (callbacks.modify (· + 1))
  ensure ((← callbacks.get) == 0) "cancellation callbacks wait for set"
  cancellation.set
  ensure ((← callbacks.get) == 5) "cancellation callbacks run inline"
  cancellation.onSet (callbacks.modify (· + 1))
  ensure ((← callbacks.get) == 6) "already set cancellation callback"
  cancellation.set
  ensure ((← callbacks.get) == 6) "cancellation is idempotent"
  let leftBuffer ← IO.mkRef ({} : IO.FS.Stream.Buffer)
  let rightBuffer ← IO.mkRef ({} : IO.FS.Stream.Buffer)
  let leftOutput ← IO.asTask <| IO.withStdout (IO.FS.Stream.ofBuffer leftBuffer) do
    IO.sleep 20
    IO.println "left"
  let rightOutput ← IO.asTask <| IO.withStdout (IO.FS.Stream.ofBuffer rightBuffer) do
    IO.sleep 5
    IO.println "right"
  discard <| IO.ofExcept (← IO.wait leftOutput)
  discard <| IO.ofExcept (← IO.wait rightOutput)
  ensure ((← leftBuffer.get).data == "left\n".toUTF8) "left task stream isolation"
  ensure ((← rightBuffer.get).data == "right\n".toUTF8) "right task stream isolation"
  IO.FS.withTempFile fun handle path => do
    handle.putStr "temporary"
    handle.flush
    ensure ((← IO.FS.readFile path) == "temporary") "temporary file"
  IO.FS.withTempDir fun path => do ensure (← path.isDir) "temporary directory"
  let mutex ← Std.Mutex.new (0 : Nat)
  let promise ← IO.Promise.new
  let resolver ← IO.asTask do promise.resolve (42 : Nat)
  ensure (promise.result!.get == 42) "promise resolution"
  discard <| IO.ofExcept (← IO.wait resolver)
  let mut tasks := #[]
  for i in [0:24] do
    tasks := tasks.push (← IO.asTask do
      let path := root / s!"task-{i}"
      IO.FS.writeFile path s!"task {i} λ"
      ensure ((← IO.FS.readFile path) == s!"task {i} λ") "concurrent task memory"
      mutex.atomically do
        let value ← get
        -- Deliberately suspend while holding the lock.
        IO.FS.writeFile (root / "counter") (toString (value + 1))
        set (value + 1))
  for task in tasks do discard <| IO.ofExcept (← IO.wait task)
  ensure ((← mutex.atomically get) == 24) "mutual exclusion"
  let condition ← Std.Condvar.new
  let ready ← Std.Mutex.new false
  let notifier ← IO.asTask do
    IO.sleep 5
    ready.atomically do set true
    condition.notifyAll
  ready.atomicallyOnce condition get (pure ())
  discard <| IO.ofExcept (← IO.wait notifier)
  let first ← IO.asTask do IO.sleep 2; pure (3 : Nat)
  let second ← IO.asTask do IO.sleep 20; pure (5 : Nat)
  let winner ← IO.ofExcept (← IO.waitAny [first, second])
  ensure (winner == 3 || winner == 5) "waitAny result"
  discard <| IO.ofExcept (← IO.wait first)
  discard <| IO.ofExcept (← IO.wait second)
  let cancellable ← IO.asTask do
    while !(← IO.checkCanceled) do IO.sleep 1
    pure (17 : Nat)
  IO.cancel cancellable
  ensure ((← IO.ofExcept (← IO.wait cancellable)) == 17) "cooperative task cancellation"
  let cancelledTimer ← Std.Internal.UV.Timer.mk 100 false
  let abandoned ← cancelledTimer.next
  let abandonedTask := abandoned.result?
  cancelledTimer.cancel
  -- Drop our promise token: cancellation must release the runtime's token too.
  discard <| pure abandoned
  ensure (abandonedTask.get.isNone) "timer cancellation releases promise"
  let resetTimer ← Std.Internal.UV.Timer.mk 5 false
  let tick ← resetTimer.next
  resetTimer.reset
  discard <| IO.wait tick.result!
  resetTimer.stop
  Std.Async.Async.block do
    let left ← Std.Async.async do Std.Async.sleep 5; pure (7 : Nat)
    let right ← Std.Async.async do Std.Async.sleep 1; pure (9 : Nat)
    let a ← Std.Async.await left
    let b ← Std.Async.await right
    ensure (a + b == 16) "async timers and tasks"
    let interval ← Std.Async.Interval.mk 2
    interval.tick
    interval.tick
    interval.reset
    interval.tick
    interval.stop
  IO.eprintln "stderr λ"
  IO.println "standard IO checks passed"
  IO.FS.removeDirAll root

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw (IO.userError "Expected test directory")
  exercise directory
