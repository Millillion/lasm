# The CommonMark specification's examples

`spec.json` holds the 652 examples of the CommonMark specification 0.31.2,
each a Markdown input and the HTML it must produce. It is extracted from
`spec.txt` at tag `0.31.2` of
[commonmark/commonmark-spec](https://github.com/commonmark/commonmark-spec/tree/0.31.2)
(SHA-256 of `spec.txt`: `257c41ad946f7a1414a499aca402a1aa8fdac3678532266611348c1cf54f4b80`)
by the rules of that repository's `test/spec_tests.py --dump-tests`, and is
identical to the published <https://spec.commonmark.org/0.31.2/spec.json>
(SHA-256 `1ee44e648e75cba1f2ee49caf4d51379c847ba550f325454468aaff900372782`).
`node test/commonmark-spec/extract.mjs` downloads `spec.txt`, checks its
SHA-256 and regenerates `spec.json`.

[LICENSE](LICENSE) is the repository's license file: the specification is
CC BY-SA 4.0 (Copyright (C) 2014-16 John MacFarlane), so `spec.json`, which
is extracted from it, is shared under the same license.
