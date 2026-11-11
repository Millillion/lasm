// Tier 3 of the standard bindings: Lasm.JS.Cloudflare, the runtime APIs of Cloudflare
// Workers: the bindings a Worker's `env` holds (Workers KV, D1, R2, Durable Objects,
// Queues), the handler's ExecutionContext (waitUntil, passThroughOnException), the
// scheduled and queue handlers beside fetch, the Cache API (`caches`) and TCP sockets
// (`connect` of `cloudflare:sockets`). Lasm.JS.Web's Request, Response, Headers and
// streams are their web types.
//
// The source is Cloudflare's own TypeScript declarations, the npm package
// @cloudflare/workers-types (index.d.ts: the latest compatibility date; MIT OR
// Apache-2.0, Copyright Cloudflare, Inc.), at the version of the workerd that CI's
// wrangler runs (wrangler 4.152.0 bundles workerd 1.20261019.1; workers-types
// 5.20261019.1 is generated from that workerd). The file is fetched from the npm
// registry and checked against its SHA-256 hash in cloudflare-api.lock.json.
//
// scripts/bindings/cloudflare-api.mjs lowers the declarations selected here to WebIDL
// (scripts/bindings/cloudflare.idl) with serve-api.mjs's lowering and its rich rules
// (classes, generics with defaults, overloads, Map, Record, Partial, object literal
// types, type aliases); generate-web.mjs turns that into
// library/Lasm/JS/Cloudflare/*.lean with Lasm.JS.Web's mapping rules
// (docs/JS_BINDINGS.md, "Cloudflare Workers: Lasm.JS.Cloudflare").
//
// Selection, as for Lasm.JS.Deno and Lasm.JS.Bun: every member of a selected
// declaration, and every overload of a method, is lowered or excluded here with the
// reason; the lowering fails on one that is neither, so a new version's additions are
// decided, not dropped. Members whose doc comment says @experimental, UNSTABLE or
// @deprecated are never lowered.
//
// Generics: a generic declaration is lowered once, each parameter as its default
// (`Key extends string = string` → string), `unknown` (WebIDL any, Lean Data) when it
// has none, or as `typeArgs` says. So `Env` (the bindings object a program declares) is
// Data, and a KV value of type `ExpectedValue` is Data.
//
// Numbers stay WebIDL `double` (Lean Float): workers-types has no doc comments that
// say a `number` is an integer, which is what Lasm.JS.Deno's narrowing quotes.

const unknownEnv = 'the bindings object (`Env`, which the program declares; `unknown` here): Data, whose fields are the bindings (read one with Lasm.JS.readField)';

/** The runtime, one Lean module tree Lasm.JS.Cloudflare. */
export const hosts = [
  {
    name: 'Cloudflare', version: '5.20261019.1', npm: '@cloudflare/workers-types', workerd: '1.20261019.1', wrangler: '4.152.0',
    files: ['index.d.ts'],
    license: 'MIT OR Apache-2.0, Copyright Cloudflare, Inc.',
    tierFile: 'cloudflare-tier3.mjs',
    generator: 'cloudflare-api.mjs',
    support: 'Lasm.JS.Cloudflare.Support',
    rich: true,
    global: null,
    instantiate: {},
    modules: [
      { name: 'Kv', title: 'Workers KV (KVNamespace)' },
      { name: 'D1', title: 'D1, SQLite databases (D1Database)' },
      { name: 'R2', title: 'R2 object storage (R2Bucket)' },
      { name: 'Queues', title: 'Queues (Queue, MessageBatch)' },
      { name: 'Cache', title: 'the Cache API (caches)' },
      { name: 'Sockets', title: 'TCP sockets (connect of cloudflare:sockets)' },
      { name: 'DurableObjects', title: 'Durable Objects (DurableObjectNamespace, DurableObjectState)' },
      { name: 'Workers', title: 'handlers and their ExecutionContext (fetch, scheduled, queue; env of cloudflare:workers)' },
    ],
    globals: [
      { idl: 'globals_Cache', module: 'Cache', jsModule: 'globalThis', members: [{ const: 'caches', name: 'caches' }] },
      { idl: 'cloudflare_sockets', module: 'Sockets', jsModule: 'cloudflare:sockets', members: [{ function: 'cloudflare:sockets._connect', name: 'connect' }] },
      { idl: 'cloudflare_workers', module: 'Workers', jsModule: 'cloudflare:workers', members: [{ const: 'CloudflareWorkersModule.env', name: 'env' }] },
    ],
    declarations: [
      // ---------- Workers KV ----------
      { name: 'KVNamespace', as: 'interface', module: 'Kv',
        overloads: {
          get: {
            'key: Key, options?: Partial<KVNamespaceGetOptions<undefined>>': { lower: true },
            'key: Key, type: "text"': { exclude: 'the same operation as get(key): a string' },
            'key: Key, type: "json"': { lower: true },
            'key: Key, type: "arrayBuffer"': { lower: true },
            'key: Key, type: "stream"': { lower: true },
            'key: Key, options?: KVNamespaceGetOptions<"text">': { exclude: 'get(key, type) with cacheTtl beside the type: KVNamespaceGetOptions instantiated with a literal type (a second instantiation); get(key, options) takes cacheTtl' },
            'key: Key, options?: KVNamespaceGetOptions<"json">': { exclude: 'get(key, type) with cacheTtl (as above)' },
            'key: Key, options?: KVNamespaceGetOptions<"arrayBuffer">': { exclude: 'get(key, type) with cacheTtl (as above)' },
            'key: Key, options?: KVNamespaceGetOptions<"stream">': { exclude: 'get(key, type) with cacheTtl (as above)' },
            'key: Array<Key>, type: "text"': { exclude: 'several keys at once (Array<Key>): the same parameter names as the one-key overloads, so Lasm.JS.Web\'s overload naming cannot tell them apart; one key per call' },
            'key: Array<Key>, type: "json"': { exclude: 'several keys at once (as above)' },
            'key: Array<Key>, options?: Partial<KVNamespaceGetOptions<undefined>>': { exclude: 'several keys at once (as above)' },
            'key: Array<Key>, options?: KVNamespaceGetOptions<"text">': { exclude: 'several keys at once (as above)' },
            'key: Array<Key>, options?: KVNamespaceGetOptions<"json">': { exclude: 'several keys at once (as above)' },
          },
          getWithMetadata: {
            'key: Key, options?: Partial<KVNamespaceGetOptions<undefined>>': { lower: true },
            'key: Key, type: "text"': { exclude: 'the same operation as getWithMetadata(key): a string' },
            'key: Key, type: "json"': { exclude: 'KVNamespaceGetWithMetadataResult with another value type (a second instantiation): read the value with getJson and the metadata with getWithMetadata' },
            'key: Key, type: "arrayBuffer"': { exclude: 'KVNamespaceGetWithMetadataResult with another value type (as above)' },
            'key: Key, type: "stream"': { exclude: 'KVNamespaceGetWithMetadataResult with another value type (as above)' },
            'key: Key, options: KVNamespaceGetOptions<"text">': { exclude: 'getWithMetadata(key, type) with cacheTtl (as get\'s)' },
            'key: Key, options: KVNamespaceGetOptions<"json">': { exclude: 'getWithMetadata(key, type) with cacheTtl (as get\'s)' },
            'key: Key, options: KVNamespaceGetOptions<"arrayBuffer">': { exclude: 'getWithMetadata(key, type) with cacheTtl (as get\'s)' },
            'key: Key, options: KVNamespaceGetOptions<"stream">': { exclude: 'getWithMetadata(key, type) with cacheTtl (as get\'s)' },
            'key: Array<Key>, type: "text"': { exclude: 'several keys at once (as get\'s)' },
            'key: Array<Key>, type: "json"': { exclude: 'several keys at once (as get\'s)' },
            'key: Array<Key>, options?: Partial<KVNamespaceGetOptions<undefined>>': { exclude: 'several keys at once (as get\'s)' },
            'key: Array<Key>, options?: KVNamespaceGetOptions<"text">': { exclude: 'several keys at once (as get\'s)' },
            'key: Array<Key>, options?: KVNamespaceGetOptions<"json">': { exclude: 'several keys at once (as get\'s)' },
          },
        } },
      { name: 'KVNamespaceListOptions', as: 'dictionary', module: 'Kv' },
      // `type: Type` with Type = undefined is never present: Partial<KVNamespaceGetOptions<undefined>> is { cacheTtl? }.
      { name: 'KVNamespaceGetOptions', as: 'dictionary', module: 'Kv', typeArgs: { Type: 'undefined' }, partial: true },
      { name: 'KVNamespacePutOptions', as: 'dictionary', module: 'Kv' },
      { name: 'KVNamespaceListKey', as: 'dictionary', module: 'Kv' },
      { name: 'KVNamespaceListResult', as: 'dictionary', module: 'Kv', merge: true },
      { name: 'KVNamespaceGetWithMetadataResult', as: 'dictionary', module: 'Kv', typeArgs: { Value: 'string' } },

      // ---------- D1 ----------
      { name: 'D1Database', as: 'interface', module: 'D1' },
      { name: 'D1DatabaseSession', as: 'interface', module: 'D1' },
      { name: 'D1PreparedStatement', as: 'interface', module: 'D1',
        overloads: {
          first: { 'colName: string': { lower: true }, '': { lower: true } },
          raw: {
            'options: { columnNames: true; }': { exclude: 'its result is a tuple type ([string[], ...T[]]: the column names, then the rows), which the lowering does not read; raw(options) without columnNames, and the names from all()' },
            'options?: { columnNames?: false }': { lower: true },
          },
        } },
      { name: 'D1Result', as: 'dictionary', module: 'D1', merge: true },
      { name: 'D1Meta', as: 'dictionary', module: 'D1' },
      { name: 'D1ExecResult', as: 'dictionary', module: 'D1' },

      // ---------- R2 ----------
      { name: 'R2Bucket', as: 'interface', module: 'R2',
        overloads: {
          get: {
            'key: string, options: R2GetOptions & { onlyIf: R2Conditional | Headers; }': { exclude: 'get(key, options) with onlyIf required: the same call (R2GetOptions has onlyIf), whose result is an R2Object without a body when the condition fails' },
            'key: string, options?: R2GetOptions': { lower: true },
          },
          put: {
            'key: string, value: ReadableStream | ArrayBuffer | ArrayBufferView | string | null | Blob, options?: R2PutOptions & { onlyIf: R2Conditional | Headers; }':
              { exclude: 'put(key, value, options) with onlyIf required: the same call (R2PutOptions has onlyIf), whose result is null when the condition fails' },
            'key: string, value: ReadableStream | ArrayBuffer | ArrayBufferView | string | null | Blob, options?: R2PutOptions': { lower: true },
          },
        } },
      { name: 'R2Object', as: 'interface', module: 'R2' },
      { name: 'R2ObjectBody', as: 'interface', module: 'R2' },
      { name: 'R2Checksums', as: 'interface', module: 'R2' },
      { name: 'R2MultipartUpload', as: 'interface', module: 'R2' },
      { name: 'R2Objects', as: 'dictionary', module: 'R2', merge: true },
      { name: 'R2Range', as: 'dictionary', module: 'R2', merge: true },
      { name: 'R2StringChecksums', as: 'dictionary', module: 'R2' },
      { name: 'R2HTTPMetadata', as: 'dictionary', module: 'R2' },
      { name: 'R2Conditional', as: 'dictionary', module: 'R2' },
      { name: 'R2GetOptions', as: 'dictionary', module: 'R2' },
      { name: 'R2PutOptions', as: 'dictionary', module: 'R2' },
      { name: 'R2MultipartOptions', as: 'dictionary', module: 'R2' },
      { name: 'R2ListOptions', as: 'dictionary', module: 'R2' },
      { name: 'R2UploadPartOptions', as: 'dictionary', module: 'R2' },
      { name: 'R2UploadedPart', as: 'dictionary', module: 'R2' },

      // ---------- Queues ----------
      { name: 'Queue', as: 'interface', module: 'Queues' },
      { name: 'Message', as: 'interface', module: 'Queues' },
      { name: 'MessageBatch', as: 'interface', module: 'Queues' },
      { name: 'MessageSendRequest', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendOptions', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendBatchOptions', as: 'dictionary', module: 'Queues' },
      { name: 'QueueRetryOptions', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendResponse', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendMetadata', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendMetrics', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendBatchResponse', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendBatchMetadata', as: 'dictionary', module: 'Queues' },
      { name: 'QueueSendBatchMetrics', as: 'dictionary', module: 'Queues' },
      { name: 'QueueMetrics', as: 'dictionary', module: 'Queues' },
      { name: 'MessageBatchMetadata', as: 'dictionary', module: 'Queues' },
      { name: 'MessageBatchMetrics', as: 'dictionary', module: 'Queues' },

      // ---------- Cache API ----------
      { name: 'CacheStorage', as: 'interface', module: 'Cache' },
      { name: 'Cache', as: 'interface', module: 'Cache' },
      { name: 'CacheQueryOptions', as: 'dictionary', module: 'Cache' },

      // ---------- TCP sockets ----------
      { name: 'Socket', as: 'interface', module: 'Sockets' },
      { name: 'SocketOptions', as: 'dictionary', module: 'Sockets' },
      { name: 'SocketAddress', as: 'dictionary', module: 'Sockets' },
      { name: 'TlsOptions', as: 'dictionary', module: 'Sockets' },
      { name: 'SocketInfo', as: 'dictionary', module: 'Sockets' },

      // ---------- Durable Objects ----------
      { name: 'DurableObjectNamespace', as: 'interface', module: 'DurableObjects' },
      { name: 'DurableObjectId', as: 'interface', module: 'DurableObjects' },
      // DurableObjectStub<T> = Fetcher<T, …> & { id; name? }: Fetcher's own members (fetch and connect;
      // the RPC methods of Rpc.Provider<T> are the Durable Object class's, typed from the class) and the stub's.
      { name: 'DurableObjectStub', as: 'interface', module: 'DurableObjects',
        compose: [{ from: 'Fetcher', objectPart: 0 }, { from: 'DurableObjectStub', objectPart: 0 }] },
      { name: 'DurableObjectState', as: 'interface', module: 'DurableObjects',
        exclude: {
          exports: 'Cloudflare.Exports: loopback bindings of the Worker\'s own exports, typed from the program\'s main module (a mapped type)',
          container: 'Containers (Container): outside the runtime APIs of this tier',
          facets: 'Durable Object facets (DurableObjectFacets): child objects started from a class, outside this tier',
          acceptWebSocket: 'WebSocket hibernation: WebSocket is Lasm.JS.Web\'s browser tier, which the server tiers do not use',
          getWebSockets: 'WebSocket hibernation (as acceptWebSocket)',
          setWebSocketAutoResponse: 'WebSocket hibernation (as acceptWebSocket)',
          getWebSocketAutoResponse: 'WebSocket hibernation (as acceptWebSocket)',
          getWebSocketAutoResponseTimestamp: 'WebSocket hibernation (as acceptWebSocket)',
          setHibernatableWebSocketEventTimeout: 'WebSocket hibernation (as acceptWebSocket)',
          getHibernatableWebSocketEventTimeout: 'WebSocket hibernation (as acceptWebSocket)',
          getTags: 'WebSocket hibernation (as acceptWebSocket)',
        } },
      { name: 'DurableObjectStorage', as: 'interface', module: 'DurableObjects',
        overloads: {
          get: { 'key: string, options?: DurableObjectGetOptions': { lower: true }, 'keys: string[], options?: DurableObjectGetOptions': { lower: true } },
          put: { 'key: string, value: T, options?: DurableObjectPutOptions': { lower: true }, 'entries: Record<string, T>, options?: DurableObjectPutOptions': { lower: true } },
          delete: { 'key: string, options?: DurableObjectPutOptions': { lower: true }, 'keys: string[], options?: DurableObjectPutOptions': { lower: true } },
        },
        exclude: {
          sql: 'SqlStorage, the synchronous SQLite API of SQLite-backed objects: its cursor is an iterator of rows (SqlStorageCursor), which this tier does not lower yet',
          kv: 'SyncKvStorage, the synchronous key-value API of SQLite-backed objects: outside this tier (the asynchronous get, put, delete and list are lowered)',
          transactionSync: 'a synchronous closure for the synchronous APIs (sql, kv), which are not lowered',
        } },
      { name: 'DurableObjectTransaction', as: 'interface', module: 'DurableObjects',
        overloads: {
          get: { 'key: string, options?: DurableObjectGetOptions': { lower: true }, 'keys: string[], options?: DurableObjectGetOptions': { lower: true } },
          put: { 'key: string, value: T, options?: DurableObjectPutOptions': { lower: true }, 'entries: Record<string, T>, options?: DurableObjectPutOptions': { lower: true } },
          delete: { 'key: string, options?: DurableObjectPutOptions': { lower: true }, 'keys: string[], options?: DurableObjectPutOptions': { lower: true } },
        } },
      { name: 'DurableObjectNamespaceNewUniqueIdOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectNamespaceGetDurableObjectOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectAbortOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectListOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectGetOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectGetAlarmOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectPutOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectSetAlarmOptions', as: 'dictionary', module: 'DurableObjects' },

      // ---------- Handlers ----------
      { name: 'ExecutionContext', as: 'interface', module: 'Workers',
        exclude: {
          exports: 'Cloudflare.Exports: loopback bindings of the Worker\'s own exports, typed from the program\'s main module (a mapped type)',
          access: 'Cloudflare Access identity (CloudflareAccessContext, the claims of an Access JWT): outside this tier',
          tracing: 'custom tracing spans (Tracing): outside this tier',
        } },
      { name: 'CacheContext', as: 'interface', module: 'Workers' },
      { name: 'CachePurgeOptions', as: 'dictionary', module: 'Workers' },
      { name: 'CachePurgeResult', as: 'dictionary', module: 'Workers' },
      { name: 'CachePurgeError', as: 'dictionary', module: 'Workers' },
      { name: 'ScheduledController', as: 'interface', module: 'Workers' },
      { name: 'ExportedHandlerFetchHandler', as: 'callback', module: 'Workers' },
      { name: 'ExportedHandlerScheduledHandler', as: 'callback', module: 'Workers' },
      { name: 'ExportedHandlerQueueHandler', as: 'callback', module: 'Workers' },
      { name: 'ExportedHandler', as: 'dictionary', module: 'Workers',
        exclude: {
          connect: 'TCP connections to the Worker (a Socket handler): an inbound-socket entry point outside this tier',
          tail: 'Tail Workers (TraceItem events of other Workers): outside this tier',
          trace: 'trace events (TraceItem): outside this tier',
          tailStream: 'streaming Tail Workers (TailStream): outside this tier',
          test: 'the test handler of the Workers test harness: outside this tier',
          email: 'Email Workers (ForwardableEmailMessage): outside this tier',
        } },
    ],
    intersections: {},
    integers: {},
    typeNames: {
      Request: 'Request', Response: 'Response', Headers: 'Headers', URL: 'URL', RequestInfo: 'RequestInfo', RequestInit: 'RequestInit', Blob: 'Blob',
      ReadableStream: 'ReadableStream', WritableStream: 'WritableStream',
      ArrayBuffer: 'ArrayBuffer', ArrayBufferView: 'ArrayBufferView', Uint8Array: 'Uint8Array',
      // A JavaScript Date: Data (a reference; Lasm.JS.Web has no Date). Time in milliseconds is a number elsewhere.
      Date: 'any',
      unknown: 'any',
      'Cloudflare.Env': 'any',
    },
    notSelected: {
      'Cloudflare.Env': unknownEnv,
      Fetcher: 'its object part is DurableObjectStub\'s (fetch and connect); Rpc.Provider<T> is the class\'s RPC methods',
      R2Error: 'an Error with R2\'s code and action: errors are read as Data, as Lasm.JS.Web reads them',
      D1Response: 'merged into D1Result (D1Response & { results })',
    },
  },
];
