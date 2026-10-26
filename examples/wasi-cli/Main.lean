/-
A Lean command-line program built as a standard WASI module (docs/WASI.md):
  lasm build Main.lean --target wasi
  wasmtime run --dir . wasi/main.wasm check
CI (.github/workflows/wasi.yml) runs each mode under wasmtime, wasmer and
Node's node:wasi and compares the output with native Lean's.
  check            arguments, environment, files in the preopened directory,
                   clocks, randomness, sleeps, Std.Async, tasks, Std.Time
  sum              sums the numbers on standard input, one per line
  exit N           IO.Process.exit N
  fail             an uncaught IO error (exit status 1)
  deep N           non-tail recursion N frames deep
-/
import Std.Async
import Std.Sync.Mutex
import Std.Time
open Std.Async

def depth : Nat → Nat
  | 0 => 0
  | n + 1 => depth n + 1

def check (args : List String) : IO Unit := do
  IO.println s!"args: {args}"
  IO.println s!"GREETING: {(← IO.getEnv "GREETING").getD "(unset)"}"
  IO.println s!"MISSING: {(← IO.getEnv "LASM_SURELY_MISSING").getD "(unset)"}"
  -- Files, in the directory the host preopened (wasmtime --dir .).
  let dir : System.FilePath := "lasm-wasi-check"
  if ← dir.pathExists then IO.FS.removeDirAll dir
  IO.FS.createDir dir
  let file := dir / "hello.txt"
  IO.FS.writeFile file "line one\nline two\n"
  IO.FS.withFile file .append fun h => h.putStrLn "line three"
  IO.println s!"read: {repr (← IO.FS.readFile file)}"
  IO.println s!"lines: {(← IO.FS.lines file).size}"
  IO.println s!"size: {(← file.metadata).byteSize}"
  IO.println s!"isDir: {← dir.isDir} {← file.isDir}"
  IO.FS.writeBinFile (dir / "bytes.bin") (ByteArray.mk #[0, 1, 2, 255])
  IO.println s!"bytes: {(← IO.FS.readBinFile (dir / "bytes.bin")).toList}"
  IO.FS.rename (dir / "bytes.bin") (dir / "renamed.bin")
  let names := (← dir.readDir).map (·.fileName) |>.qsort (· < ·)
  IO.println s!"readDir: {names}"
  IO.FS.removeFile (dir / "renamed.bin")
  IO.println s!"removed: {!(← (dir / "renamed.bin").pathExists)}"
  try discard <| IO.FS.readFile (dir / "missing.txt")
  catch e => IO.println s!"missing: {e}"
  IO.FS.removeDirAll dir
  IO.println s!"cleaned: {!(← dir.pathExists)}"
  -- Clocks and randomness.
  let t0 ← IO.monoMsNow
  IO.sleep 25
  IO.println s!"sleep: {decide ((← IO.monoMsNow) - t0 ≥ 25)}"
  IO.println s!"random: {(← IO.getRandomBytes 16).size}"
  IO.println s!"rand: {decide ((← IO.rand 0 100) ≤ 100)}"
  -- Std.Async and tasks on the cooperative runtime.
  let v ← (Async.block (do
    let a ← async do Std.Async.sleep 20; pure (40 : Nat)
    let b ← async do Std.Async.sleep 5; pure (2 : Nat)
    return (← await a) + (← await b)) : IO Nat)
  IO.println s!"async: {v}"
  let tasks ← (List.range 10).mapM fun i => (IO.asTask (pure (i + 1)) : IO _)
  let mut total := 0
  for t in tasks do total := total + (← IO.ofExcept (← IO.wait t))
  IO.println s!"tasks: {total}"
  let m ← Std.Mutex.new (0 : Nat)
  let ts ← (List.range 8).mapM fun _ => (IO.asTask (m.atomically (modify (· + 1))) : IO _)
  for t in ts do discard <| IO.wait t
  IO.println s!"mutex: {← m.atomically get}"
  let now ← Std.Time.PlainDateTime.now
  IO.println s!"year: {decide (now.year.toInt ≥ 2026)}"
  IO.println s!"bignum: {2 ^ 100}"
  IO.eprintln "stderr: ok"

def main (args : List String) : IO UInt32 := do
  match args with
  | "check" :: rest => check rest; return 0
  | ["sum"] =>
    let stdin ← IO.getStdin
    let mut total := 0
    repeat
      let line ← stdin.getLine
      if line.isEmpty then break
      total := total + (line.trimAscii.toString.toNat?.getD 0)
    IO.println s!"sum: {total}"
    return 0
  | ["exit", n] => IO.Process.exit (n.toNat?.getD 0).toUInt8
  | ["fail"] => throw (IO.userError "failing on purpose")
  | ["deep", n] => IO.println s!"depth: {depth (n.toNat?.getD 1000)}"; return 0
  | _ => IO.eprintln "usage: main.wasm check|sum|exit N|fail|deep N"; return 2
