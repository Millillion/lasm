# Rules for generated bindings

Status: decided 2026-11-16 (Jordan: mechanical rules plus a small reviewed
override table). Entries A9–A12 of [docs/api/decisions/0.3.md](api/decisions/0.3.md),
pending sign-off.

Every generated binding follows these four rules:
- `Lasm.JS.Web`, `Lasm.JS.Node`, `Lasm.JS.Deno`, `Lasm.JS.Bun` and
  `Lasm.JS.Cloudflare`, from `scripts/bindings/generate-web.mjs`;
- `Lasm.Fastly`, from `generate-fastly.mjs`;
- `Lasm.WASI.Http`, from `generate-wasi-http.mjs`.

A rule is mechanical: it gives the same Lean name or type for the same
declaration every time, with no judgment per member. Where the mechanical
result reads badly, a reviewed exception goes in **one data file,
[`scripts/bindings/overrides.json`](../scripts/bindings/overrides.json)**,
which every generator reads through `scripts/bindings/overrides.mjs`.

The rest of each mapping is in [JS_BINDINGS.md](JS_BINDINGS.md):
- WebIDL: "How a WebIDL declaration becomes Lean";
- Node's docs: "How Node's docs become Lean";
- Deno's and Bun's declarations: "How the declarations become Lean";
- WIT and witx: [WASI_FASTLY_BINDINGS.md](WASI_FASTLY_BINDINGS.md).

## The override table

`overrides.json` has three lists. Each entry carries:
- `decision`: its entry in the API decisions (docs/api/decisions/) (`A9.1`, `0.3-2`). **No entry
  goes in without one.**
- `why`: one line.

| List | Entry | Effect |
| --- | --- | --- |
| `names` | `{ binding, name }` | The generated function `binding` (its full Lean name, e.g. `Lasm.JS.Web.FormData.appendWithBlobValue`) is named `name` instead. It has one name only: the mechanical one is gone. |
| `aliases` | `{ alias, of }` | `abbrev alias := of` beside the generated callback type `of`, in its namespace. |
| `integers` | `{ name, type }` | A `number` named `name` is `Nat` or `Int`; see [A11](#a11-numbers). `name` is a member or argument name (`port`), or `Owner.name` with an IDL definition name (`Node_crypto_ScryptOptions.r`) for a name too short to apply everywhere. |

**Checked in CI.** A `names` or `aliases` entry that matches no generated
declaration makes the generator fail, so `--check` fails in CI (the
`generated` job of `web-bindings.yml`). An entry can therefore never outlive
the declaration it renames. `test/binding-overrides.test.mjs` checks the
table's shape, and checks that every `decision` exists in docs/api/decisions/.

The WIT and witx sources type their integers, and have no overloads and no
callbacks, so no entry applies to `Lasm.Fastly` or `Lasm.WASI` today. The
test rejects one listed for them until their generator applies it.

**Adding an entry.** In the same PR:
1. Add the entry to `overrides.json`.
2. Add its entry in docs/api/decisions/0.3.md, as a sub-ID of the rule (`A9.n`, `A10.n`,
   `A11.n`) or a milestone ID (`0.4-n`).
3. Regenerate the bindings.
4. Update the callers.

## A9. Overload names

1. The first overload, in declaration order, keeps the name.
2. Each other overload adds `With` and the first of its arguments whose name
   differs from the first overload's argument at the same position:
   `URLPattern.newWithOptions`, `serveWithOptions`.
3. If that still leaves two overloads with one name, each of them adds all its
   argument names: `FileHandle.readWithOptions`,
   `FileHandle.readWithBufferOptions`.
4. If no argument name differs, the overload adds its arity:
   `first0`.
5. A static member whose name an instance member also has gets the prefix
   `static`: `Response.staticJson`.
6. A name listed in `names` replaces the result.

The table holds:

| Id | Mechanical | Reviewed | Why |
| --- | --- | --- | --- |
| A9.1 | `FormData.appendWithBlobValue`, `FormData.setWithBlobValue` | `FormData.appendBlob`, `FormData.setBlob` | The mechanical name repeats the IDL argument name `blobValue`. |

## A10. Callback type names

1. A callback type has the name its source gives it: WebIDL's `EventListener`,
   Deno's type alias `ServeHandler`, or Cloudflare's `ExportedHandlerFetchHandler`.
2. A function type with no name of its own is named after its owner and
   member: Bun's `ServeOptions.fetch` is `ServeOptionsFetch`.
3. A different name is only an `abbrev` from `aliases`. The generated name
   stays, so the docs and error messages still match the source.

The table has no aliases yet. A stream adds one when its users need a shorter
name for a callback they write often.

## A11. Numbers

1. **A source that types its integers is followed exactly.**
   - WebIDL: `byte`, `short`, `long` and `long long` are `Int`; `octet`,
     `unsigned short`, `unsigned long` and `unsigned long long` are `Nat`;
     `bigint` is `Int`; `float` and `double` are `Float`.
   - Node's `{integer}` is `Int`.
   - WIT and witx: the fixed-width types (`u16` is `UInt16`).
2. **A source that does not type its integers** (TypeScript `number`, Node's
   `{number}`) is `Float`, except for a name in the integer table
   (`overrides.json`, `integers`). Such a name is `Nat`, or `Int` where the
   value can be negative (`pid`, which is negative for a process group).
   - The table applies where the type is exactly `number`, possibly optional
     or nullable. It applies to attributes, dictionary members, and
     operation, constructor and callback arguments. It does not apply to
     unions (`number | bigint`), or to operation results, which have no
     name.
   - The doc comment shows the type it narrowed: `double /* integer: Nat */
     keylen`.
3. The table is one list for every tier, so the same concept has the same
   type everywhere:
   - an HTTP status is `Nat` on the web, Node, Deno, Bun and Cloudflare tiers;
   - a port is `Nat` everywhere;
   - Cloudflare's `limit` and `expirationTtl` are `Nat`.

   Fastly and wasi-http keep WIT's `UInt16` for a status: the width is part
   of their ABI.

The table's rows are entry A11.1. The rows cover these concepts:
- HTTP status
- port
- sizes and lengths in bytes
- counts and limits
- iteration and scrypt parameters
- file descriptors, user and group ids, process ids
- timeouts and time-to-live values in whole units

## A12. Checked downcasts

Every generated interface that JavaScript code can name has:

```lean
def HTMLInputElement.cast? (v : Value) : IO (Option HTMLInputElement)
```

This is `v instanceof HTMLInputElement` (`HTMLInputElement.prototype.isPrototypeOf(v)`).
It gives `some` handle to `v` when `v` is one, and `none` otherwise, including
when the runtime lacks the interface.

```lean
button.addEventListener "click" (some (← EventListener.ofSyncFn fun e => do
  if let some m ← MouseEvent.cast? e.val then
    IO.println s!"{← m.clientX}"))
```

Details:
- **Not generated for** `[LegacyNoInterfaceObject]` interfaces, Deno's and
  Bun's interfaces (declared only, with no global constructor), and Node
  classes that their module does not export (`FileHandle`).
- **The unchecked form stays**, for code that knows the type:
  `({ val := e.val } : MouseEvent)`.
- **Cost:** three host calls (the constructor, its `prototype`, and
  `isPrototypeOf`).
- **Implementation:** `Lasm.JS.Web.Support.isInstance`.
- **Tests:** `test/fixtures/js-web` (`Response.cast?` on every JavaScript
  target) and `test/browser/platform` (`dom.cast` on Chromium, Firefox and
  WebKit).
