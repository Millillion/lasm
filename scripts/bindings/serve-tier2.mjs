// Tier 2 of the standard bindings, second part: Lasm.JS.Deno and Lasm.JS.Bun, the
// HTTP server entry points of Deno (`Deno.serve`) and Bun (`Bun.serve`) and what a
// handler needs. Lasm.JS.Web's Request and Response are the handler's types.
//
// The source is each runtime's own TypeScript declarations, pinned to the runtime
// version CI runs (the same Deno and Bun as the conformance jobs) and checked
// against SHA-256 hashes in serve-api.lock.json:
//   - Deno: cli/tsc/dts/lib.deno.ns.d.ts and lib.deno_net.d.ts of denoland/deno at
//     the release tag (what `deno types` prints; MIT, Copyright the Deno authors);
//   - Bun: packages/bun-types/serve.d.ts and bun.d.ts of oven-sh/bun at the
//     release tag (the files of the npm package bun-types of the same version;
//     MIT, Copyright Oven and the Bun contributors).
// DECISIONS.md says why these and not the runtimes' prose docs.
//
// scripts/bindings/serve-api.mjs reads the declarations selected here and lowers
// them to WebIDL (scripts/bindings/deno.idl, bun.idl); generate-web.mjs turns that
// into library/Lasm/JS/{Deno,Bun}/*.lean with Lasm.JS.Web's mapping rules
// (docs/JS_BINDINGS.md, "Lasm.JS.Deno and Lasm.JS.Bun").
//
// Declarations are lowered `as` an interface (a handle to an object the runtime
// keeps: a server, a request's info), a dictionary (plain data, copied: options,
// an address) or a callback (a function type).
//
// Selection. Every member of a selected declaration, and every overload of a
// selected function, is either lowered or listed in `exclude` with the reason; the
// lowering fails on a member that is neither, so a new version's additions are
// decided, not dropped. A member or overload whose doc comment says @experimental,
// UNSTABLE or @deprecated is never lowered (the lowering records it as excluded,
// with the tag as the reason).
//
// Types. The declarations' own types are lowered by the rules of serve-api.mjs
// (`string` → DOMString, `T | Promise<T>` → Promise<T>, a union of string literals
// → an enum, a function type → a callback, …). `integers` narrows a `number` that
// the declaration's doc comment describes as a count, port or size (WebIDL `double`
// otherwise): each entry quotes the words of the doc comment it relies on, and the
// lowering fails if they are no longer there. `typeNames` maps the names the
// declarations use that are not selected here (web classes are Lasm.JS.Web's).

import { deno } from './deno-tier2.mjs';

/** The runtimes, each one Lean module tree Lasm.JS.<name>. */
export const hosts = [
  // Lasm.JS.Deno: the whole Deno namespace (deno-tier2.mjs, lowered by ts-auto.mjs).
  deno,
  {
    name: 'Bun', version: '1.4.4', repo: 'oven-sh/bun', tag: 'bun-v1.4.4',
    files: ['packages/bun-types/serve.d.ts', 'packages/bun-types/bun.d.ts'],
    license: 'MIT, Copyright Oven and the Bun contributors',
    global: 'Bun',
    modules: [{ name: 'Serve', title: 'HTTP servers (Bun.serve)' }],
    instantiate: { WebSocketData: 'undefined', R: 'string' },
    functions: {
      serve: {
        module: 'Serve',
        overloads: { 'options: Serve.Options<WebSocketData, R>': { lower: true } },
      },
    },
    declarations: [
      { name: 'Server', as: 'interface', module: 'Serve',
        exclude: {
          upgrade: 'WebSockets: outside the HTTP entry-point cut (the options have no websocket handlers; ROADMAP: Tandem\'s WebSocket proposal)',
          publish: 'WebSockets (as upgrade)', subscriberCount: 'WebSockets (as upgrade)', pendingWebSockets: 'WebSockets (as upgrade)',
        } },
      { name: 'SocketAddress', as: 'dictionary', module: 'Serve' },
      // Serve.Options is XOR<HostnamePortServeOptions, UnixServeOptions> & XOR<FetchOrRoutes,
      // FetchOrRoutesWithWebSocket> (types the Lean side cannot state): lowered as one dictionary of
      // the TCP alternative's members and FetchOrRoutes' second alternative's `fetch` (required there).
      { name: 'Serve.Options', as: 'dictionary', module: 'Serve', lean: 'ServeOptions',
        compose: [
          { from: 'Serve.BaseServeOptions' },
          { from: 'Serve.HostnamePortServeOptions' },
          { from: 'Serve.FetchOrRoutes', alternative: 1, only: ['fetch'] },
        ],
        exclude: {
          tls: 'TLS options take BunFile and BufferSource values of Bun\'s file API (outside this cut); TLS is terminated by Deno.serve\'s serveWithTlsOptions or a proxy',
          development: 'Bun\'s development error page and the HTML-bundle dev server (hot reloading, console forwarding), for Bun\'s own bundler; not a server option of a Lean handler',
          routes: 'Bun\'s route table (BunRequest with typed params from template-literal types); a Lean handler routes in Lean',
        } },
    ],
    intersections: {},
    integers: {
      'Server.closeIdleConnections': { type: 'unsigned long', quote: 'The number of connections that were closed.' },
      'Server.timeout.seconds': { type: 'unsigned long', quote: 'to the given number of seconds' },
      'Server.pendingRequests': { type: 'unsigned long', quote: 'The number of in-flight requests' },
      'Server.port': { type: 'unsigned short', quote: 'The port the server is listening on.' },
      'SocketAddress.port': { type: 'unsigned short', quote: 'The port of the client.' },
      'Serve.Options.maxRequestBodySize': { type: 'unsigned long long', quote: 'The maximum size of a request body, in bytes' },
      'Serve.Options.port': { type: 'unsigned short', quote: 'The port the server listens on' },
      'Serve.Options.idleTimeout': { type: 'unsigned long', quote: 'Sets the number of seconds to wait before timing out a connection' },
    },
    typeNames: { Request: 'Request', Response: 'Response', URL: 'URL', ErrorLike: 'any', 'Serve.Options': 'Serve.Options',
      'Server': 'Server' },
    notSelected: {
      Disposable: 'Server extends it: [Symbol.dispose], a Symbol-keyed method for `using` (explicit resource management), which Lean does not have; stop() is the same operation',
      ErrorLike: 'an Error with Node-style code, errno and syscall: read as any (Data), as Lasm.JS.Web reads errors',
      'Serve.UnixServeOptions': 'Unix domain sockets', 'Serve.FetchOrRoutesWithWebSocket': 'WebSockets',
      'Serve.Routes': 'Bun\'s route table', TLSOptions: 'TLS options (see tls)', 'Serve.Development': 'the development server (see development)',
    },
  },
];
