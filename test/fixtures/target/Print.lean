/-
Lasm.target on every target (scripts/ci/target-report.mjs, web-bindings.yml
job target-report): prints the target the program is built for. The JavaScript
targets, WASI and Fastly run it as built; wasi-http answers with Http.lean.
-/
import Lasm.Target

def main : IO Unit := IO.println s!"lasm target {Lasm.target}"
