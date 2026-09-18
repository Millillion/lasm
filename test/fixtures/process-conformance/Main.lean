import Init

def ensure (value : Bool) (label : String) : IO Unit :=
  unless value do throw (IO.userError label)

def main (args : List String) : IO Unit := do
  let some node := args.head? | throw (IO.userError "expected Node executable")
  let code := "process.stdin.setEncoding('utf8'); let s=''; process.stdin.on('data',b=>s+=b); process.stdin.on('end',()=>{process.stdout.write(s);process.stderr.write('stderr λ');process.exitCode=7})"
  let result ← IO.Process.output { cmd := node, args := #["-e", code] } (some "input λ\x00tail")
  ensure (result.exitCode == 7 && result.stdout == "input λ\x00tail" && result.stderr == "stderr λ") "stdin EOF, stdout, stderr, exit status"
  let environment ← IO.Process.output {
    cmd := node,
    args := #["-e", "console.log(process.env.LASM_TEST_VALUE+':'+('PATH' in process.env))"],
    inheritEnv := false, env := #[("LASM_TEST_VALUE", some "first"), ("LASM_TEST_VALUE", some "λ"), ("PATH", none)] }
  ensure (environment.stdout == "λ:false\n") "environment overrides"
  let cwd ← IO.Process.getCurrentDir
  let location ← IO.Process.output { cmd := node, args := #["-e", "process.stdout.write(process.cwd())"], cwd := some cwd }
  ensure (location.stdout == cwd.toString) "child cwd"
  let large ← IO.Process.output {
    cmd := node,
    args := #["-e", "process.stdout.write('a'.repeat(1048576));process.stderr.write('b'.repeat(1048576))"] }
  ensure (large.stdout.length == 1048576 && large.stderr.length == 1048576) "concurrent pipes exceed kernel buffer"
  let child ← IO.Process.spawn {
    cmd := node, args := #["-e", "console.log('ready');setTimeout(()=>{},60000)"],
    stdin := .null, stdout := .piped, stderr := .null, setsid := true }
  -- Native Lean can return from fork before the child establishes its session.
  -- A handshake avoids racing process-group creation with group termination.
  ensure ((← child.stdout.getLine) == "ready\n") "child readiness"
  ensure (child.pid != 0 && child.pid != (← IO.Process.getPID)) "real process id"
  ensure ((← child.tryWait).isNone) "nonblocking tryWait"
  child.kill
  let status ← child.wait
  ensure (status != 0) "terminated process exit"
  IO.println "process conformance passed"
