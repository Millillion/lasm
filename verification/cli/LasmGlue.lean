-- The CLI's glue program (Lasm/Cli/Glue.lean), built by .github/workflows/glue.yml
-- into src/glue/lasm-glue.wasm.
import Lasm.Cli.Glue

def main : IO Unit := Lasm.Cli.Glue.main
