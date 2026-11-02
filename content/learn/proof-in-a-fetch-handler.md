---
title: A Lean function with a proof, deployed
description: Write an HTTP handler whose page-size rule is proved in Lean, watch the build refuse a broken proof, then serve it on Node and Workers.
date: 2026-11-02
kind: tutorial
order: 3
sources:
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/Millillion/lasm/blob/main/docs/FETCH.md
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/PROOFS.md
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/content.yml
aiGenerated: true
---

# A Lean function with a proof, deployed

Lean is a programming language and a proof assistant. With Lasm, the function
you prove things about is the function your server runs: Lasm compiles that
same Lean definition to WebAssembly.

In this tutorial you write a rule for the `?limit=` parameter of an HTTP
endpoint, prove that it keeps the page size between 1 and 100, and serve it.
Then you break the rule and watch the build refuse it.

You need Node.js 24 or newer and npm. CI runs every command on this page and
checks every output it shows ([how](../README.md#tutorials)). The finished
project is in
[`content/tutorials/proof-in-a-fetch-handler/project`](../tutorials/proof-in-a-fetch-handler/project/).

## 1. Create the project

```sh
npm create @lasm@latest verified-limit -- --template fetch --deploy workers
cd verified-limit
```

This is the same template as in
[From zero to Lean on Cloudflare Workers](lean-on-cloudflare-workers.md): a
`Lasm.Fetch` handler in `Main.lean`, pure logic in `App.lean`, and the files
for Workers.

## 2. The rule and its proofs

Replace `App.lean` with this:

```lean
/-! Pure Lean: no JavaScript, so `lake build App` can also check it natively. -/

namespace App

/-- Keep a requested page size between 1 and 100. -/
def clampLimit (n : Nat) : Nat := min 100 (max 1 n)

/-- The page size for `?limit=`: 20 when it is absent or not a number. -/
def pageSize (limit? : Option String) : Nat :=
  match limit?.bind String.toNat? with
  | none => 20
  | some n => clampLimit n

/-- Whatever a client sends, the page size is between 1 and 100. -/
theorem pageSize_bounds (limit? : Option String) :
    1 ≤ pageSize limit? ∧ pageSize limit? ≤ 100 := by
  unfold pageSize clampLimit
  split <;> omega

/-- A size that is already in range is kept as it is. -/
theorem clampLimit_keeps (n : Nat) (h₁ : 1 ≤ n) (h₂ : n ≤ 100) : clampLimit n = n := by
  unfold clampLimit
  omega

-- The build fails if either proof ever depends on `sorry` (or any new axiom).
/-- info: 'App.pageSize_bounds' depends on axioms: [propext, Classical.choice, Quot.sound] -/
#guard_msgs in #print axioms App.pageSize_bounds

/-- info: 'App.clampLimit_keeps' depends on axioms: [propext, Quot.sound] -/
#guard_msgs in #print axioms App.clampLimit_keeps

end App
```

- `pageSize` reads the `limit` parameter. When it is absent or not a number,
  the size is 20. Otherwise `clampLimit` keeps it between 1 and 100.
- `pageSize_bounds` says that **for every possible input**, the size is
  between 1 and 100. This covers every string a client can send, not only the
  ones a test would try. `unfold` opens the definitions, `split` takes the two
  cases of the `match`, and `omega` proves each case's arithmetic.
- `clampLimit_keeps` says a size that is already in range is kept unchanged.
- `#print axioms` lists what a proof depends on. A proof with a `sorry` in it
  would also list `sorryAx`. `#guard_msgs` fails the build when that output
  differs from the line above it.

## 3. Use it in the handler

Replace `Main.lean` with this:

```lean
/-
`GET /items?limit=N` answers with the first N items, where N is
`App.pageSize`: the function the theorems in App.lean are about.
-/
import App
import Lasm.Fetch
import Lean.Data.Json
open Lasm.Fetch Lean

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", ["items"] =>
    let size := App.pageSize (req.queryParam? "limit")
    let items := (List.range size).map (· + 1)
    return .json (Json.mkObj [("size", toJson size), ("items", toJson items)]).compress
  | _, _ => return .notFound

def main : IO Unit := serve handle
```

The handler calls `App.pageSize`, the function the theorems are about. There
is no second copy of the rule to keep in sync.

## 4. Build and run it on Node

```sh
npm install
npm run build
npm start
```

Lean checks every proof while it compiles `App.lean`, so `npm run build`
succeeds only if they all hold. In another terminal:

```sh
curl 'http://localhost:3000/items?limit=3'
curl 'http://localhost:3000/items?limit=0'
curl 'http://localhost:3000/items?limit=1000000'
```

```json
{"items":[1,2,3],"size":3}
{"items":[1],"size":1}
```

The third answer lists the numbers 1 to 100 and ends like this:

```
99,100],"size":100}
```

A client can't make the server build a longer list. Stop the server with
Ctrl-C.

## 5. Break the rule

Suppose someone drops the upper bound. In `App.lean`, change `clampLimit` to:

```lean
def clampLimit (n : Nat) : Nat := max 1 n
```

and build again:

```sh
npm run build
```

The build fails. `omega` reports that it could not prove the goal, and gives a
counterexample:

```
App.lean:18:12: error: omega could not prove the goal:
   18 |   split <;> omega
      |             ^
a possible counterexample may satisfy the constraints
  a ≥ 101
where
 a := ↑n✝
```

Any size of 101 or more breaks the theorem, so no program is built. Put the
line back as it was.

## 6. Skip the proof

What if someone replaces the proof with `sorry` instead, which tells Lean to
accept the theorem without proof? In `pageSize_bounds`, replace the line
`split <;> omega` with:

```lean
  sorry
```

and build again:

```sh
npm run build
```

Lean only warns about a `sorry`:

```
App.lean:15:8: warning: declaration uses `sorry`
```

But `#print axioms` now lists `sorryAx`, so `#guard_msgs` fails the build:

```
App.lean:27:15: error: 'App.pageSize_bounds' depends on axioms: [propext, sorryAx, Classical.choice, Quot.sound]
```

Put the proof back.

## 7. Deploy it to Workers

```sh
npm run build:workers
npx wrangler dev
```

`wrangler dev` serves the Worker locally on port 8787, in workerd. In another
terminal:

```sh
curl 'http://localhost:8787/items?limit=3'
curl 'http://localhost:8787/items?limit=1000000'
```

The answers are the same as on Node:

```json
{"items":[1,2,3],"size":3}
```

and the list of 1 to 100, ending with `99,100],"size":100}`. CI runs this step with wrangler 4.152.0 on local
workerd, with no account. `npx wrangler deploy` would upload `workers/` to
your Cloudflare account. We don't test deployments.

## What is proved, and what is trusted

The theorems are about `App.pageSize`, and the handler runs `App.pageSize`.
What they rely on, and don't prove, is the toolchain: Lean's compiler, Lasm,
and the JavaScript or WebAssembly runtime that runs the result. The same split
applies to the 294 theorems of Conduit, the RealWorld app written in Lean
([PROOFS.md](../../examples/conduit/PROOFS.md)).
