# Proposal: Lasm.Web.Crypto, Web Crypto on every target

Status: a draft for Jordan to accept or reject (2026-11-04). Nothing here is
built. It answers Porter's API proposal in ROADMAP.md ("a shared Web Crypto
module, since Conduit and Porter each hand-bind SHA-256, PBKDF2, random
values, ECDSA, Ed25519 and JWK export") and item 10 of Jordan's 2026-11-04
decisions.

## 1. Motivation

Today `Lasm.Web.Crypto` ([library/Lasm/Web/Crypto.lean](../../library/Lasm/Web/Crypto.lean))
has four functions: `randomBytes`, `randomUUID`, `digest` (the algorithm as a
string) and `sha256`, plus `hex`. Everything else, apps bind for themselves:

- **Conduit** ([Server/Crypto.lean](../../examples/conduit/Server/Crypto.lean),
  96 lines): random bytes, PBKDF2-HMAC-SHA-256 password hashes, HS256 JWTs,
  base64url, and a byte comparison that does not exit early.
- **Conduit again** ([Server/LeanCrypto.lean](../../examples/conduit/Server/LeanCrypto.lean),
  189 lines): the same SHA-256, HMAC and PBKDF2 written in pure Lean, for
  Fastly and wasi-http, which have no Web Crypto.
- **Porter** ([Server/Crypto.lean](../../examples/porter/Server/Crypto.lean),
  134 lines): SHA-256, random values, the same PBKDF2 and byte comparison,
  ECDSA P-256 and Ed25519 key generation, JWK import and export, and signing.

That is about 420 lines of near-duplicate code. Each copy builds JavaScript
objects (`obj [("name", toJS "PBKDF2"), …]`) whose algorithm names and
parameters Lean does not check, so a typo only shows up at run time. Each app
also has its own answer for the platforms without Web Crypto. Porter has no
answer at all: it does not run on Fastly or WASI.

A shared module fixes all of this once. It gives typed algorithms, one
constant-time comparison, one base64url, and one documented answer, per
platform, for what works and what fails.

## 2. Scope

In scope, in priority order:

1. Random bytes and UUIDs (`getRandomValues`, `randomUUID`).
2. Digests: SHA-1, SHA-256, SHA-384, SHA-512.
3. HMAC: sign and verify, with SHA-256, SHA-384 or SHA-512.
4. PBKDF2 key derivation (`deriveBits`), for passwords.
5. Signatures: ECDSA P-256 (ES256) and Ed25519 (EdDSA): generate, import
   and export (JWK and raw), sign and verify.
6. AES-GCM: encrypt and decrypt, with 128- or 256-bit keys.
7. Helpers every caller needs: constant-time `equal`, `hex`, base64 and
   base64url, both encode and decode.

Out of scope: RSA (neither app uses it, and its key formats are large), ECDH
and X25519, HKDF (these can be added later in the same shape), AES-CBC and
AES-CTR, `wrapKey`, and non-extractable key storage beyond what Web Crypto
gives.

## 3. Proposed Lean API

The module stays `Lasm.Web.Crypto` (see open question 1), imports only
`Lasm.JS.Core`, and keeps today's four functions, so this is not a breaking
change except that `digest` takes a typed algorithm.

```lean
namespace Lasm.Web.Crypto

/-! Randomness: synchronous on every host. -/
def randomBytes (n : Nat) : IO ByteArray
def randomUUID : IO String

/-! Digests -/
inductive Hash where | sha1 | sha256 | sha384 | sha512
  deriving BEq, Repr, Inhabited
def digest (h : Hash) (data : ByteArray) : Async ByteArray
def sha256 (data : ByteArray) : Async ByteArray := digest .sha256 data

/-! Keys: an opaque handle to a host `CryptoKey`, or to key bytes held in
Lean on the targets without Web Crypto. -/
structure Key  -- opaque
inductive Algorithm where
  | hmac (hash : Hash)            -- HS256 etc.
  | ecdsaP256                     -- ES256 (signatures use SHA-256)
  | ed25519                       -- EdDSA
  | aesGcm (bits : Nat := 256)    -- 128 or 256
inductive Usage where | sign | verify | encrypt | decrypt
structure KeyPair where
  publicKey : Key
  privateKey : Key

def generateKey (a : Algorithm) (usages : List Usage) (extractable := false) : Async Key
def generateKeyPair (a : Algorithm) (extractable := false) : Async KeyPair
def importRaw (a : Algorithm) (bytes : ByteArray) (usages : List Usage) : Async Key
def importJwk (a : Algorithm) (jwk : Lean.Json) (usages : List Usage) : Async Key
def exportRaw (k : Key) : Async ByteArray
def exportJwk (k : Key) : Async Lean.Json
def Key.algorithm (k : Key) : Algorithm

/-! Signatures and MACs. ECDSA signatures are `r ‖ s` (64 bytes), as JWS
expects and Web Crypto returns. `verify` never throws on a bad signature;
it returns `false`. -/
def sign (k : Key) (data : ByteArray) : Async ByteArray
def verify (k : Key) (signature data : ByteArray) : Async Bool
def hmac (h : Hash) (secret data : ByteArray) : Async ByteArray   -- import + sign in one call

/-! Key derivation -/
def pbkdf2 (h : Hash) (password salt : ByteArray) (iterations : Nat) (bytes : Nat := 32) : Async ByteArray

/-! AES-GCM. `encrypt` returns ciphertext ‖ tag; a 12-byte random `iv` is
the caller's to keep. `decrypt` fails with "authentication failed" on a
wrong key, iv or tag. -/
def encrypt (k : Key) (iv plaintext : ByteArray) (additional : ByteArray := .empty) : Async ByteArray
def decrypt (k : Key) (iv ciphertext : ByteArray) (additional : ByteArray := .empty) : Async ByteArray

/-! Helpers (pure Lean, so they work natively too) -/
def equal (a b : ByteArray) : Bool          -- time depends only on the lengths
def hex (bytes : ByteArray) : String
def base64 (bytes : ByteArray) : String
def base64url (bytes : ByteArray) : String  -- no padding
def fromBase64? (s : String) : Option ByteArray
def fromBase64url? (s : String) : Option ByteArray

/-! What this platform offers -/
def supports (a : Algorithm) : IO Bool

end Lasm.Web.Crypto
```

**Errors.** Failures are `IO.userError`s with one fixed form, so users and
tests can rely on them:

- `Lasm.Web.Crypto.sign: Ed25519 is not available on --target wasi (no Web Crypto; see docs/CRYPTO.md)`
- `Lasm.Web.Crypto.decrypt: authentication failed`

Porter's 134 lines would shrink to about 40: its JWK thumbprint, its token
formats and its key storage.

## 4. Per-platform behaviour

There are three kinds of target:

- **JavaScript hosts.** Node, Bun, Deno, the browser, and every edge isolate
  (Workers, Vercel Edge, Netlify Edge, Deno Deploy, Supabase). Everything
  goes to `crypto.subtle` through the existing `lasm:web` module, which uses
  web-standard APIs only.
- **Wasm hosts without JavaScript.** WASI (CGI), wasi-http and Spin, and
  Fastly Compute. Randomness comes from the host (`random_get`, which
  `IO.getRandomBytes` already uses). Digests, HMAC and PBKDF2 use a pure
  Lean implementation: Conduit's `LeanCrypto.lean`, moved into the library
  and checked against Node's crypto. Signatures and AES-GCM fail clearly.
- **Native builds** (`lake build`, the editor). The pure Lean parts work;
  the rest fails with Lasm.JS's usual "only in programs compiled by Lasm"
  error.

| | random | digest, HMAC, PBKDF2 | ECDSA P-256 | Ed25519 | AES-GCM |
| --- | --- | --- | --- | --- | --- |
| Node 24 / 26 | host | host | host | host | host |
| Bun | host | host | host | host (check in CI) | host |
| Deno, Deno Deploy, Supabase | host | host | host | host | host |
| Workers | host (not at startup) | host; PBKDF2 ≤ 100,000 iterations | host | host | host |
| Vercel Edge, Netlify Edge | host | host | host | host (check in CI) | host |
| Browser | host (secure contexts for `subtle`) | host | host | host (recent engines) | host |
| WASI, wasi-http, Spin | host `random_get` | pure Lean | fails | fails | fails |
| Fastly Compute | host `random_get` | pure Lean | fails | fails | fails |

Notes:

- **"Check in CI"** means the first implementation PR measures the cell on
  our pinned runtime images. If a host lacks an algorithm, `supports`
  returns `false` and calls fail with the error above. We do not polyfill.
- **Workers' startup.** `crypto.getRandomValues` throws in the global scope
  (EDGE.md, "Workers' global scope"). Calls made from `initialize` fail with
  a message that says so; inside a handler they work.
- **Workers' PBKDF2 limit.** Workers caps PBKDF2 at 100,000 iterations.
  Larger counts fail there with a message naming the cap, rather than the
  host's generic `NotSupportedError`.
- **Browsers** expose `crypto.subtle` only in secure contexts (HTTPS or
  localhost). Otherwise the error says so.
- **Why no pure-Lean signatures or AES.** Lean has no constant-time
  arithmetic guarantees, and the compiled code goes through clang, LLVM and
  Binaryen. A homemade ECDSA or AES would be a side-channel risk that we
  cannot test away. Hashes, HMAC and PBKDF2 over public algorithms carry
  much less of that risk, and the examples already depend on them. Fastly's
  and wasi-http's own crypto host calls could fill the gap later (open
  question 3).

**Dispatch.** The JavaScript path and the pure Lean path sit behind one
function each. The choice is made once, from the platform code (as
`Lasm.Fetch.serveWith` does), and never by catching an error.

## 5. Alternatives considered

1. **Leave it to apps** (today). Rejected: about 420 duplicated lines, no
   type checking, and each app decides its own fallback.
2. **Pure Lean everywhere.** One implementation and provable, but slower than the
   host's native code (not yet measured; PBKDF2 at 100,000 iterations is
   where it would show) and unsafe for
   asymmetric keys, for the reasons in §4. Rejected, except as the fallback
   for hashes on hosts without JavaScript.
3. **Host only; fail on WASI and Fastly.** Simplest. But Conduit already
   needs SHA-256, HMAC and PBKDF2 on Fastly and wasi-http, so it would keep
   its private copy. Rejected.
4. **A thin, stringly-typed mirror of `crypto.subtle`** (`Value` keys,
   `Data` algorithm objects). It would be complete at once, but it is what
   the apps already have. Rejected as the main API. `Raw` stays available
   for anything not covered.
5. **Recommended: typed Web Crypto on JavaScript hosts, pure Lean digests,
   HMAC and PBKDF2 elsewhere, and a clear failure for the rest** (§3, §4).

## 6. Test plan

- **Known-answer tests:** NIST CAVP vectors for SHA-1 and SHA-2, RFC 4231
  for HMAC, RFC 6070 and RFC 7914 §11 for PBKDF2, RFC 8032 §7.1 for Ed25519,
  NIST GCM vectors for AES-GCM, and the Wycheproof suites for ECDSA P-256,
  Ed25519 and AES-GCM (these include the invalid signatures and tags that
  `verify` and `decrypt` must reject). They run on every target in the
  table, so each cell is backed by a test, not by a claim.
- **Differential:** random inputs hashed, MACed and derived by the pure Lean
  path and by Node's `node:crypto`, compared byte for byte, on every PR.
  This is Conduit's `test/crypto-check.mjs`, promoted. Signatures are
  checked across hosts: sign on Bun and verify on Node, Deno and workerd,
  and the reverse.
- **Interop:** Porter's oracle tests (openid-client, oauth4webapi, jose)
  keep running unchanged after Porter moves to the module. Conduit's
  RealWorld suites likewise.
- **Unsupported paths:** one test per "fails" cell asserts the exact error
  text, and asserts that `supports` agrees with it.
- **Proofs:** `equal` is proved to agree with `==`. Base64 and base64url are
  proved to round-trip (`fromBase64url? (base64url b) = some b`). Proving
  that `equal` is constant-time is not possible in Lean; a timing test
  catches gross regressions.
- **Mutation testing:** the `lasm:web` crypto glue joins the Stryker set,
  with the usual 80 % floor.

## 7. Migration

- Conduit: `Server/Crypto.lean` and `Server/LeanCrypto.lean` become calls
  into the module. The stored formats (`pbkdf2_sha256$…`, HS256 JWTs) are
  unchanged, so databases and tokens still move between targets.
- Porter: keeps only its formats and JWK thumbprint, and can then run on
  Fastly and WASI if it switches to HMAC-signed tokens there (its choice,
  not this proposal's).
- `Crypto.digest "SHA-256"` becomes `Crypto.digest .sha256`. Breaking, but
  only a few call sites; release notes cover it.

## 8. Open questions for Jordan

1. **Name.** Keep `Lasm.Web.Crypto`, even though it now works on servers
   and WASI, not only in the browser? Or move it to a top-level
   `Lasm.Crypto`, with `Lasm.Web.Crypto` re-exporting it? (Recommendation:
   `Lasm.Crypto`, because "Web" reads as browser-only in `Lasm.Web`'s
   module docstring.)
2. **Pure Lean fallback.** Ship the pure Lean SHA-2, HMAC and PBKDF2 for
   WASI and Fastly (recommended), or fail there and keep Lasm host-only?
3. **Fastly's native crypto.** Later, should we bind Fastly's and wasi-http's
   host crypto (where they have it) so signatures work there too, or leave
   those cells as "fails"?
4. **Key type.** An opaque `Key` with its algorithm attached (recommended),
   or separate types per algorithm (`HmacKey`, `EcdsaKey`, …), which catch
   more mistakes at compile time but double the API?
5. **Base64 home.** Base64 and base64url are needed outside crypto too
   (JWTs, data URLs). Put them here, or in a small `Lasm.Bytes` module?

## 9. Effort

About 6–8 working days. Each step is one PR:

- typed API and the JavaScript path: 2 days;
- moving the pure Lean path into the library, with dispatch: 1 day;
- the vectors and the cross-target CI matrix: 2–3 days;
- migrating Conduit and Porter, and docs (a new docs/CRYPTO.md and the
  README's library table): 1–2 days.

It also needs a regenerated prebuilt library (`library/prebuilt`), as every
library change does.
