/-
# src/dev.mjs, in Lean: `changedFiles`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

A snapshot is a JavaScript `Map` from a file to its hash (`null`, `none`
here, for a file that could not be read), read as its entries in insertion
order; a `Map` has each key once.
-/

namespace Lasm.Cli

/-- `changedFiles(before, after)`:

```js
for (const [file, hash] of after) if (before.get(file) !== hash) changed.push(file);
for (const file of before.keys()) if (!after.has(file)) changed.push(file);
```

`before.get(file)` of a file `before` lacks is `undefined`, which differs
from every hash and from `null`: here `before.lookup file` is `none`, which
differs from every `some hash`. -/
def changedFiles (before after : List (String × Option String)) : List String :=
  (after.filter fun (file, hash) => before.lookup file != some hash).map (·.1) ++
    (before.filter fun (file, _) => !(after.any (·.1 == file))).map (·.1)

end Lasm.Cli
