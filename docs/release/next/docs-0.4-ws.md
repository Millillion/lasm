## Decisions

- **WebSockets on Node:** `Node.serve` gets no upgrade hook in Stage 0. A Node program that serves WebSockets binds an npm package such as `ws` with `@[js]`, as Tandem does (docs/api/decisions/0.4.md, 0.4-7.3).
