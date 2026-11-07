# Draft: upstream report for leanprover/lean4 (Lean.Json)

Status: **draft, not filed.** For Jordan to review and file at
https://github.com/leanprover/lean4/issues (Lasm issue #135). Lasm works
around both bugs in `Lasm.RPC.parseJson` (library/Lasm/RPC/Core.lean); the
example apps use it for untrusted JSON.

Suggested title: **`Json.parse` expands exponents eagerly (DoS on untrusted
input), and `JsonNumber.toString` prints small zeros as invalid JSON**

---

Lean version: 4.35.0 (the code below is unchanged on `master` as far as we
can see; please check). Both found by coverage-guided fuzzing of a JSON RPC
decoder built on `Lean.Json.parse`.

## 1. `Json.parse` computes `10 ^ exponent` for a positive exponent

`Lean.Json.Parser.exponent` reads the exponent of a number and, for a
positive one, returns `value.shiftl n`, which is
`⟨m * 10 ^ (s - e), e - s⟩` (`JsonNumber.shiftl`, Lean/Data/Json/Basic.lean).
The only bound is `n > USize.size` ("exp too large"), so any exponent below
2^64 is expanded into a natural number with that many digits.

A 90-byte input is enough to keep a process busy, and growing its memory,
for as long as it takes to compute a 26-million-digit power of ten:

```lean
import Lean.Data.Json
open Lean

-- Does not return in reasonable time; memory grows.
#eval (Json.parse "{\"title\":\"x\",\"priority\":33330000000049E026191701}").isOk
```

Any server that parses request bodies with `Json.parse` (directly, or through
`fromJson?` on a parsed body) can be stalled by one small request. On a
single-threaded runtime (WebAssembly, in our case) the whole server stops.
libFuzzer reported a timeout after 14 s natively for this input.

Possible fixes, in increasing order of change:

- Bound the exponent in `Parser.exponent` (for example fail above a few
  thousand, enough for every `Float`; we use four digits), or bound the size of
  the resulting mantissa.
- Keep the exponent symbolic: let `JsonNumber` carry a signed exponent (or
  store positive exponents without multiplying), and expand only when a
  consumer asks for a `Nat`/`Int`, where it can be bounded or refused.

A negative exponent only adds to `e` (`shiftr`), so it is cheap to parse; we
have not checked every consumer of such numbers.

Our workaround scans the text before parsing and refuses a number (outside
strings) whose exponent has more than four significant digits.

## 2. `JsonNumber.toString` prints zeros with more than ten decimal places as `0.e-N`

`JsonNumber.toString ⟨0, e⟩` with `e > 10` prints `0.` followed by an empty
fraction and an exponent, which is not JSON:

```lean
import Lean.Data.Json
open Lean

#eval (Json.parse "[-0.0e-51]").toOption.get!.compress   -- "[0.e-42]"
#eval (Json.parse "0e-11").toOption.get!.compress        -- "0.e-1"
#eval Json.parse "[0.e-42]"                              -- error
```

So `compress`/`pretty` output does not always parse again, and a program that
echoes a client's number back (an RPC answer, a stored document) writes JSON
that no parser, Lean's included, accepts.

Cause: in `toString`, for `m = 0`, `exp := 9 + countDigits 0 - e` is negative
once `e > 10`, so the `m % e' = 0 && exp = 0` branch (which prints `0`) is
skipped, and `right` (the fraction with trailing zeros dropped) is empty. For
any non-zero mantissa `m % e'` is `m`, so only zero is affected.

Possible fixes: print `0` whenever the mantissa is zero,
before the general case; or normalize `⟨0, e⟩` to `⟨0, 0⟩` in the parser and
in `JsonNumber` arithmetic.

Our workaround rewrites every zero to `⟨0, 0⟩` after parsing.
