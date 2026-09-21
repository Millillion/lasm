import Init.System.IO

def main : IO Unit := do
  IO.println s!"windows={System.Platform.isWindows};mac={System.Platform.isOSX};bits={System.Platform.numBits}"
  IO.println ((System.FilePath.mk "data" / "todos.json").toString)
  IO.println (System.FilePath.mk "C:\\data\\todos.json").isAbsolute
  IO.println ((System.FilePath.mk "C:\\data\\todos.json").parent.map (·.toString) |>.getD "none")
  IO.println s!"target={System.Platform.target};emscripten={System.Platform.isEmscripten}"
