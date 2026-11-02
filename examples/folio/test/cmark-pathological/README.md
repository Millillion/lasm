# CommonMark's pathological inputs

`pathological_tests.py` is cmark's test of inputs that make a CommonMark
parser slow or crash, from
[commonmark/cmark](https://github.com/commonmark/cmark/blob/0.31.1/test/pathological_tests.py)
at tag `0.31.1` (SHA-256 `6cb0471a67bada46eb9efa42baf09546e5015f1e9aec499e9513e641fa59d930`),
with cmark's license ([COPYING](COPYING), BSD-2-Clause). It is kept for
reference: [`../pathological.mjs`](../pathological.mjs) builds the same inputs
and checks Folio's output against the same patterns.
