## Library

- **Breaking: `Lasm.RPC` is removed** (API decision 0.6-13). `Lasm.RPC`,
  `Lasm.RPC.Core`, `Lasm.RPC.Server` and `Lasm.RPC.Client` are gone, with
  docs/RPC.md, their 13 proved propositions and 4 candidates (library/PROOFS.md)
  and the `lean-rpc` fuzz target. A server and a browser app share plain Lean
  types and talk plain REST over each host's own fetch API.

  Migration, as `lasm init --template fullstack` now does it
  (templates/fullstack):
  - server: replace each `Endpoint` and `Endpoint.serve` with a route, a
    `match` on the request's method and path segments (`GET`/`POST /api/todos`,
    `PATCH`/`DELETE /api/todos/ID`) that reads the JSON body, validates it once
    and hands the handler the validated value as a subtype
    (`ValidTitle := { t : String // checkTitle t = .ok () }`), answering JSON
    and `{"error"}` with a 4xx status when validation fails;
  - browser: replace each `e.call req onResult` with a `Cmd.task` that calls
    `Lasm.JS.Web.fetch` and decodes the answer with `FromJson`;
  - for request bodies from the network, use a `parseJson` that refuses
    exponents of more than four digits (Lean's parser computes `10 ^ exponent`),
    as the template's `Shared.lean` and the examples' `SafeJson` modules do.
