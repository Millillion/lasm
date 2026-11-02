---
title: Call an npm package from Lean with Lasm.JS
description: Bind three functions of the semver npm package with one @[js] line each, call them from a Lean program, and build it with the package included.
date: 2026-11-02
kind: tutorial
order: 2
sources:
  - https://github.com/Millillion/lasm/blob/main/docs/JS_BINDINGS.md
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/npm/node-semver
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/content.yml
aiGenerated: true
---

# Call an npm package from Lean with Lasm.JS

A Lean program compiled by Lasm can call Node's built-ins and any npm package.
You write one `@[js]` line per function you call. Lasm generates the
conversions between Lean and JavaScript values from the Lean types. There are
no premade bindings to install.

In this tutorial you call [semver](https://github.com/npm/node-semver), the
package npm itself uses to compare versions, from a small command-line
program.

You need Node.js 24 or newer and npm. CI runs every command on this page and
checks every output it shows ([how](../README.md#tutorials)). The finished
project is in
[`content/tutorials/npm-package-from-lean/project`](../tutorials/npm-package-from-lean/project/).

## 1. Create the project and add semver

```sh
npm create @lasm@latest semver-check
cd semver-check
npm install
npm install --save-exact semver@7.8.5
```

Without `--template`, `npm create @lasm` uses the `plain` template: a Lean
program with `Main.lean`, `App.lean` and a Lake project. `npm install` adds
`@lasm/cli` as a dev dependency. The last command adds semver as an ordinary
dependency, pinned to the version CI tests.

## 2. Keep the logic in pure Lean

Replace `App.lean` with this:

```lean
/-! Pure Lean: no JavaScript, so `lake build App` can also check it natively. -/

namespace App

/-- One line of the report, from what semver said about `version`. -/
def line (version range : String) (normalized : Option String) (inRange : Bool) : String :=
  match normalized with
  | none => s!"{version}: not a version"
  | some v => if inRange then s!"{v}: satisfies {range}" else s!"{v}: does not satisfy {range}"

end App
```

`App.lean` doesn't import `Lasm.JS`, so it stays plain Lean. Keeping pure
logic apart like this means Lean can check it natively, without JavaScript.

## 3. Bind semver and call it

Replace `Main.lean` with this:

```lean
import App
import Lasm.JS
open Lasm.JS

/-- `semver.valid(v)`: the normalized version, or `null` (`none`). -/
@[js "semver" "valid"] opaque valid : String → IO (Option String)

/-- `semver.satisfies(version, range)`. -/
@[js "semver" "satisfies"] opaque satisfies : String → String → IO Bool

/-- `semver.maxSatisfying(versions, range)`: the highest match, or `null`. -/
@[js "semver" "maxSatisfying"] opaque maxSatisfying : Array String → String → IO (Option String)

/-- `npm run dev -- RANGE VERSION…` -/
def main (args : List String) : IO UInt32 := do
  match args with
  | range :: versions@(_ :: _) =>
    for version in versions do
      let normalized ← valid version
      let inRange ← match normalized with
        | some v => satisfies v range
        | none => pure false
      IO.println (App.line version range normalized inRange)
    match ← maxSatisfying versions.toArray range with
    | some best => IO.println s!"highest match: {best}"
    | none => IO.println "highest match: none"
    return 0
  | _ =>
    IO.eprintln "usage: npm run dev -- RANGE VERSION…"
    return 2
```

Each binding has the form `@[js "MODULE" "EXPORT"] opaque name : TYPE`:

- `"semver"` is the npm package, and `"valid"` is the export to call.
- The arguments are converted to JavaScript (`String` becomes a string,
  `Array String` an array).
- The result is converted back by its type. `Option String` reads `null` as
  `none`, and `Bool` reads a boolean.
- `IO` means the call returns its value at once. For functions that return a
  promise, a server would use `Async` instead, which waits without holding a
  Lean thread.

[JS_BINDINGS.md](../../docs/JS_BINDINGS.md) lists every form of binding and
every conversion.

## 4. Run it

```sh
npm run dev -- '^1.2.0' 1.2.3 v1.4.0 2.0.0 banana
```

`npm run dev` runs `lasm Main.lean`, which builds the program and runs it with
the arguments after `--`. The first build of a program that imports `Lasm.JS`
downloads Lasm's larger Lean distribution, which includes Lean's elaborator.

When it builds, Lasm also checks every binding. It loads `semver` from
`node_modules` and checks that each export exists and is a function. Try a
typo: change the `satisfies` binding to

```lean
@[js "semver" "satisfy"]
```

and build:

```sh
npm run build
```

The build stops, and the message names the binding:

```
Lasm.JS binding check failed:
  satisfies: semver export "satisfy" is missing
```

Change it back to `"satisfies"` before you go on.

## 5. Build and run without Lasm

```sh
npm run build
ls dist/node_modules
node dist/main.mjs '^1.2.0' 1.2.3 v1.4.0 2.0.0 banana
```

`dist/` is the whole deployment. Lasm copies the production dependencies,
here only semver, into `dist/node_modules`. Lasm itself is a dev dependency,
so it isn't copied. The last command prints:

```
1.2.3: satisfies ^1.2.0
1.4.0: satisfies ^1.2.0
2.0.0: does not satisfy ^1.2.0
banana: not a version
highest match: v1.4.0
```

`semver.valid` normalized `v1.4.0` to `1.4.0`. `maxSatisfying` returns the
matching item as it was passed in, so the last line keeps the `v`.

## What to know

- `Lasm.JS` programs run on Node.js. A program built natively, without Lasm,
  fails every JavaScript call with a clear error. That is another reason to
  keep pure logic in modules like `App.lean`.
- A JavaScript call costs about 25 to 35 µs, measured on Linux x64
  ([JS_BINDINGS.md](../../docs/JS_BINDINGS.md)). Make one call per real
  operation, not one per tiny step.
- The same approach works for frameworks and database clients.
  [examples/js-crud](../../examples/js-crud) serves one Lean API on Express
  and on Hono, with Postgres through `pg` and JWTs through `jose`.

Next: [A Lean function with a proof, deployed](proof-in-a-fetch-handler.md).
