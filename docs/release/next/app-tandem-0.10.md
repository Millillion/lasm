## Example apps

- **Tandem on @lasm/cli 0.10.0.**
  - Its SQLite modules use 0.10.0's generated shapes: `DatabaseSync.new`, `Array (Option …)` parameters, and Bun's one value per binding. The hand-written `new DatabaseSync` is gone.
  - The proof scripts use `@lasm/cli/lean` (`lasmLean`).
  - The one hand-written binding left is `ws` on Node (docs/api/decisions/0.4.md, 0.4-7.3).
