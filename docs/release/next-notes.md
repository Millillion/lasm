# Next release (unreleased)

Changes since 0.8.0, collected until the release's version bump turns this
file into `<version>-notes.md`.

## Lasm.JS

- **Bind your own JavaScript files** (A6.1, docs/API_DECISIONS.md):
  `@[js "./ffi/stream.mjs" "writeAndEnd"]` names an ES module of the project,
  relative to the Lean file, and `lasm build` ships it, with the files it
  imports by relative path, on every target. Migration: a local `file:` npm
  package used only for this can become a project file.
