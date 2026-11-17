## Editor and Lake projects

- **Fixed: the Lean editor in projects without a Lake manifest.** After `npx lasm editor` added Lasm's library to the lakefile (0.3-7), the editor's `lake setup-file` failed with "missing manifest; use `lake update`" (or "dependency 'lasm' not in manifest"). Every lasm command now writes Lasm's package into `lake-manifest.json` as `lake update` does, keeping the project's other packages.
