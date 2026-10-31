-- Differential regression (docs/TESTING.md#differential-testing): wasi and wasi-node, seed 1.
-- A panic with LEAN_BACKTRACE=0 printed a backtrace on WASI when LEAN_BACKTRACE was
-- not among the first three environment variables: libc's getenv lost entries after
-- the third (src/wasi/lasm_wasi_libc.c widened the WASI pointers with aliasing
-- typed stores). The harness always runs WASI with several variables first.
def r_wasi_env_backtrace : IO Unit := do
  IO.println s!"r_wasi_env_backtrace {(#[1, 2, 3] : Array Nat)[bb 7]!}"
  IO.println s!"r_wasi_env_backtrace {(Array.range (bb 4)).set! (bb 9) 1}"
