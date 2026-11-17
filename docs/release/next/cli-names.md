## The CLI (Stage 0, milestone 0.7)

- **Breaking: `lasm init --deploy lambda` writes the Lambda `.zip` setup**
  (`npm run build:lambda`, which was `--deploy lambda-zip`); the container image
  (`Dockerfile.lambda`) is now `--deploy lambda-container` (0.7-9). Every
  `--deploy` name is now the `lasm build --target` it builds, except
  `lambda-container` and `spin`. Migration: `--deploy lambda-zip` →
  `--deploy lambda`; `--deploy lambda` → `--deploy lambda-container`. Existing
  projects are unchanged (`lasm init` writes files once).

- The README's environment variables list `LASM_VM_STACK_MB` (0.7-13).
