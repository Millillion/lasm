-- Differential regression (docs/TESTING.md#differential-testing): deno (the edge profile), issue #26.
-- The edge runtime's libc getenv saw only Emscripten's default variables, never
-- the host's, so LEAN_BACKTRACE=0 (set by the harness on every target) was
-- ignored and every panic printed a JavaScript/Wasm backtrace. Fixed by copying
-- the embedder's string variables into Emscripten's ENV before libc reads it
-- (src/edge/edge-library.js, src/edge/edge-start.mjs). IO.getEnv (a host
-- operation) always saw them; libc and IO.getEnv now agree.
def r_edge_env_backtrace : IO Unit := do
  IO.println s!"r_edge_env_backtrace {(panic! "r_edge_env_backtrace" : Nat) + bb 1}"
  IO.println s!"r_edge_env_backtrace {([] : List Nat).head! + bb 2}"
  IO.println s!"r_edge_env_backtrace {(← IO.getEnv "LEAN_BACKTRACE")}"
