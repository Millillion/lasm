/-
Exercises the native pieces a Linux variant (Alpine/musl, gVisor) must provide:
a subprocess (Lasm's process helper), files and the environment (koffi),
signal set-up at start (the signal helper), time and stdout.
Expected output, one line each:
  process: 0 child
  file: data
  env: probe
  time: true
-/
def main : IO Unit := do
  let out ← IO.Process.output { cmd := "sh", args := #["-c", "echo child"] }
  IO.println s!"process: {out.exitCode} {out.stdout.replace "\n" ""}"
  IO.FS.writeFile "/tmp/lasm-probe.txt" "data"
  IO.println s!"file: {← IO.FS.readFile "/tmp/lasm-probe.txt"}"
  IO.println s!"env: {(← IO.getEnv "LASM_PROBE").getD "none"}"
  let now ← IO.monoMsNow
  IO.println s!"time: {if now > 0 then "true" else "false"}"
