import Lean.Runtime

def main : IO Unit := do
  IO.println s!"emscripten={System.Platform.isEmscripten}"
  IO.println s!"libuv={Lean.libUVVersion}"
  IO.println s!"openssl={Lean.openSSLVersion}"
