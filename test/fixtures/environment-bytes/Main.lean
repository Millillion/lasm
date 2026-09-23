import Std.Internal.UV.System

def main : IO Unit := do
  for key in ["LASM_RAW_VALUE", "LASM_RAW_EMPTY", "LASM_RAW_UNSET"] do
    let value ← IO.getEnv key
    IO.println s!"io/{key}: {repr (value.map (fun s => s.toUTF8.data.toList))}"
    let value ← Std.Internal.UV.System.osGetenv key
    IO.println s!"uv/{key}: {repr (value.map (fun s => s.toUTF8.data.toList))}"
  for (key, value) in ← Std.Internal.UV.System.osEnviron do
    if key == "LASM_RAW_VALUE" then
      IO.println s!"environ: {repr value.toUTF8.data.toList}"
  let child ← IO.Process.output {
    cmd := "/usr/bin/python3"
    args := #["-c", "import os; print(os.environb[b'LASM_RAW_VALUE'].hex())"]
  }
  IO.println s!"inherited-child: exit={child.exitCode} stdout={repr child.stdout} stderr={repr child.stderr}"
  Std.Internal.UV.System.osSetenv "LASM_RAW_VALUE" "λ/changed"
  IO.println s!"changed/io: {repr (← IO.getEnv "LASM_RAW_VALUE")}"
  IO.println s!"changed/uv: {repr (← Std.Internal.UV.System.osGetenv "LASM_RAW_VALUE")}"
  Std.Internal.UV.System.osUnsetenv "LASM_RAW_VALUE"
  IO.println s!"unset/io: {repr (← IO.getEnv "LASM_RAW_VALUE")}"
  IO.println s!"unset/uv: {repr (← Std.Internal.UV.System.osGetenv "LASM_RAW_VALUE")}"
  IO.println "raw-environment comparison completed"
