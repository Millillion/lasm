**Server MVP step 1, milestone 1: Lean 4.35.0 baseline (2026-10-17).** On Linux x64,
installed `.54` in Node passes all 22 upstream eval-io inputs (219 actions). A new
runtime adapter covers 65 more Std.Http, Time, Async, Net and JSON tests: 1,255
actions pass with zero deployed failures. 45 actions are rejected by the documented
ahead-of-time `import Lean` policy, 13 fail to link `LeanExport`, and 4 fail natively.
The example server passes 20 HTTP checks plus a curl/fetch smoke. Seven of the ten
topical compiled applications pass, including both HTTP servers. See
[SERVER_MVP.md](SERVER_MVP.md).

Remaining step-1 gates: the other four platforms; LSP and mixed drivers; load, soak
and fault tests; and three clean runs. ETA is not yet estimable. README reviewed;
npm unpublished.
