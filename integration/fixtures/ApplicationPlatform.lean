import Lean.Runtime
import Init.System.Platform
import Init.System.FilePath
import Init.System.IO

def main : IO Unit := do
  IO.println s!"windows={System.Platform.isWindows}"
  IO.println s!"macos={System.Platform.isOSX}"
  IO.println s!"linux={System.Platform.isLinux}"
  IO.println s!"bits={System.Platform.numBits}"
  IO.println s!"path={System.FilePath.toString (System.FilePath.mk "data" / "todos.json")}"
  IO.println s!"absolute={(System.FilePath.mk "C:\\data").isAbsolute}"
  IO.println s!"target={System.Platform.target}"
  IO.println s!"emscripten={System.Platform.isEmscripten}"
  IO.println s!"libuv={Lean.libUVVersion}"
  IO.println s!"openssl={Lean.openSSLVersion}"
