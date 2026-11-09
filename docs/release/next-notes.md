# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Improvements

- **Lasm.JS reads and writes Symbol-keyed properties.** `Value.get` and `Value.set` take a key of any type with `ToJS`, as JavaScript's `o[key]` does: a `String` (unchanged), a number (`o.get (3 : Nat)`), or a Symbol `Value` (`Symbol.iterator`, `Symbol.for "k"`). An array key is its string, as in JavaScript; `getFields` still takes strings. Source compatible: existing calls compile unchanged. *API change for Jordan's review:* `get [ToJS κ] (o : Value) (key : κ) …` and `set [ToJS κ] [ToJS α] (o : Value) (key : κ) (x : α)`, previously `(key : String)`. See docs/JS_BINDINGS.md, "Property keys".
