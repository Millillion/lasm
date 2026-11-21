## Example apps

- **Ledger on @lasm/cli 0.10.0.**
  - Its SQLite modules use 0.10.0's generated shapes: `DatabaseSync.new`, `Array (Option …)` parameters, and Bun's one value per binding. The last hand-written binding (`new DatabaseSync`) is gone.
  - The proof scripts use `@lasm/cli/lean` (`lasmLean`).
  - `build:azure` and `build:gcf` are now `build:azure-functions` and `build:cloud-functions`, matching the targets' names.
