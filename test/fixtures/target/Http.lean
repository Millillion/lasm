/-
Lasm.target as a wasi:http component (scripts/ci/target-report.mjs): every
request is answered with the line Print.lean prints.
-/
import Lasm.Target
import Lasm.WASI.Http
open Lasm.WASI.Http

def main : IO Unit := IncomingHandler.serve fun _ out =>
  respond out 200 #[("content-type", "text/plain; charset=utf-8")] s!"lasm target {Lasm.target}\n".toUTF8
