import { readFileSync } from 'node:fs';
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
// has none, or as `typeArgs` says. So a KV value of type `ExpectedValue` is Data. The
// exception is `Env` (the bindings object), a Lean type parameter (typeParameters below).
//
// Numbers stay WebIDL `double` (Lean Float): workers-types has no doc comments that
// say a `number` is an integer, which is what Lasm.JS.Deno's narrowing quotes.

/** The web platform's types that workers-types re-declares are Lasm.JS.Web's: the WebIDL name
 * of each (the one table to change when Lasm.JS.Web's layout changes; today every name is
 * Lasm.JS.Web's own). */
export const webTypeName = name => name;

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
    // The Lean modules come from these areas: cloudflare-api.mjs merges areas whose types use
    // each other's, orders them by use, and writes the result to cloudflare-modules.json, which
    // generate-web.mjs reads as `modules`.
    get modules() { return JSON.parse(readFileSync(new URL('./cloudflare-modules.json', import.meta.url), 'utf8')); },
    areaModules: [
      { name: 'Kv', title: 'Workers KV (KVNamespace)' },
      { name: 'D1', title: 'D1, SQLite databases (D1Database)' },
      { name: 'R2', title: 'R2 object storage (R2Bucket)' },
      { name: 'Queues', title: 'Queues (Queue, MessageBatch)' },
      { name: 'Cache', title: 'the Cache API (caches)' },
      { name: 'Sockets', title: 'TCP sockets (connect of cloudflare:sockets)' },
      { name: 'DurableObjects', title: 'Durable Objects (DurableObjectNamespace, DurableObjectState)' },
      { name: 'Workers', title: 'the fetch and scheduled handlers and their ExecutionContext (env of cloudflare:workers)' },
      { name: 'Handlers', title: 'ExportedHandler, every handler of a Worker together (fetch, scheduled, queue, email, tail, trace, tailStream, connect, test)' },
      { name: 'Ai', title: 'Workers AI, AI Gateway, AI Search and AutoRAG, Agent memory (Ai, AiGateway, AiSearchNamespace)' },
      { name: 'Vectorize', title: 'Vectorize, vector indexes (VectorizeIndex)' },
      { name: 'Hyperdrive', title: 'Hyperdrive, database connection pooling (Hyperdrive)' },
      { name: 'Images', title: 'Images and Media transformations (ImagesBinding, MediaBinding)' },
      { name: 'Email', title: 'Email Workers and sending email (ForwardableEmailMessage, SendEmail)' },
      { name: 'Tail', title: 'Tail Workers, trace events and tracing (TraceItem, TailStream, Tracing)' },
      { name: 'Containers', title: 'Containers (Container)' },
      { name: 'Workflows', title: 'Workflows (Workflow, WorkflowStep)' },
      { name: 'Rpc', title: 'service bindings, RPC, dynamic dispatch and Worker loaders (Fetcher, WorkerStub, DispatchNamespace)' },
      { name: 'BrowserRun', title: 'Browser Rendering (BrowserRun)' },
      { name: 'Analytics', title: 'Workers Analytics Engine (AnalyticsEngineDataset)' },
      { name: 'Stream', title: 'Cloudflare Stream (StreamBinding)' },
      { name: 'HtmlRewriter', title: 'HTMLRewriter, a streaming HTML parser' },
      { name: 'Cf', title: 'the cf properties of requests (IncomingRequestCfProperties, RequestInitCfProperties)' },
      { name: 'Services', title: 'the other bindings: rate limiting, Secrets Store, Artifacts, Flagship, Pipelines, Markdown conversion' },
    ],
    // Every declaration of Cloudflare's own is generated (Jordan, 2026-11-16: no hand-picked
    // subset); cloudflare-classify.mjs tells them from the web platform's (Lasm.JS.Web's) and
    // Node's. Each goes to the first module whose pattern its name matches (else Services).
    // `declarations` below are only the ones that need more than the mechanical rules.
    selectAll: true,
    // Modules the umbrella `import Lasm.JS.Cloudflare` leaves out: Workers AI's model catalog is
    // most of the library; a program imports it by name.
    umbrellaExcludes: ['Ai'],
    allOverloads: true,
    areas: [
      // A Worker that uses only some bindings imports only their modules: each handler type is its
      // event's (the queue handler is Queues'), the fetch handler and ExecutionContext are Workers'
      // (with the tracing and Access types ExecutionContext names), and ExportedHandler, which
      // names every handler, is Handlers', after all of them.
      [/^ExportedHandler$/, 'Handlers'],
      [/^ExportedHandlerQueueHandler/, 'Queues'], [/^ExportedHandler(Tail|Trace|TailStream)Handler/, 'Tail'],
      [/^ExportedHandlerConnectHandler/, 'Sockets'], [/^EmailExportedHandler/, 'Email'],
      [/^(Tracing|Span|TracingSpan|CloudflareAccess)/, 'Workers'],
      [/^CloudflareWorkersModule\.DurableObject/, 'DurableObjects'],
      [/^Disposable$/, 'Workers'], [/^InstanceStatus$/, 'Workflows'],
      [/^KVNamespace/, 'Kv'], [/^D1/, 'D1'], [/^R2/, 'R2'],
      [/^(Queue|Message|MessageBatch|MessageSend)/, 'Queues'],
      [/^(Socket|TlsOptions|cloudflare:sockets)/, 'Sockets'],
      [/^(DurableObject|SqlStorage|SyncKv|WebSocketRequestResponsePair|AlarmInvocationInfo|ColoLocalActor|FacetStartup|LoopbackDurable|LoopbackColo|cloudflare:durable-objects)/, 'DurableObjects'],
      [/^(Vector|cloudflare:vectorize)/, 'Vectorize'], [/^Hyperdrive/, 'Hyperdrive'],
      [/^(Image|HostedImages|Media|EmbeddedImage)/, 'Images'],
      [/^(Email|ForwardableEmail|SendEmail|cloudflare:email)/, 'Email'],
      [/^(Trace|Tail|ScriptVersion|UnsafeTrace|Tracing|Span|TailStream\.)/, 'Tail'],
      [/^(Container|Exec)/, 'Containers'],
      [/^(Workflow|cloudflare:workflows|CloudflareWorkersModule\.Workflow)/, 'Workflows'],
      [/^(Rpc\.|Fetcher|Service|WorkerStub|WorkerLoader|workerd|DispatchNamespace|DynamicDispatch|Loopback|CloudflareWorkersModule\.(RpcTarget|WorkerEntrypoint|RpcStub))/, 'Rpc'],
      [/^BrowserRun/, 'BrowserRun'], [/^Analytics/, 'Analytics'],
      [/^(StreamBinding|StreamVideo|StreamScoped|StreamWatermark|StreamError|InternalError|BadRequestError|NotFoundError|ForbiddenError|RateLimitedError|QuotaReachedError|MaxFileSizeError|InvalidURLError|AlreadyUploadedError|TooManyWatermarksError)/, 'Stream'],
      [/^(HTMLRewriter|Doctype|EndTag|DocumentEnd|ContentOptions|Element|Comment|Text)/, 'HtmlRewriter'],
      [/^(RequestInitCf|IncomingRequestCf|CfProperties|BasicImageTransformations)/, 'Cf'],
      [/^(Ai|AI|BaseAi|Base_Ai|AutoRAG|AutoRag|AgentMemory|Inference|UniversalGateway|Gateway|ChatCompletion|Response|Responses|Reasoning|RoleScoped|UsageTags|FunctionDefinition|DeveloperMessage|SystemMessage|UserMessage|AssistantMessage|ToolMessage|FunctionMessage|EasyInputMessage|PredictionContent|AudioParams|WebSearch|ChatTemplate|PromptTokens|CompletionTokens|CompletionUsage|Logprob|TopLogprob|Tool|StreamOptions|XOR|Without)/, 'Ai'],
      [/^(ExecutionContext|ExportedHandler|ScheduledController|ScheduledEvent|QueueEvent|CacheContext|CachePurge|Cloudflare|CloudflareWorkersModule|EventContext|EventPluginContext|PagesFunction|PagesPluginFunction|TestController|ExportedHandler)/, 'Workers'],
    ],
    // JavaScript's and the web platform's types that Lasm.JS.Web does not declare: read as any (Data).
    otherTypes: ['IteratorResult', 'Iterable', 'IterableIterator', 'AsyncIterable', 'AsyncIterableIterator', 'Iterator', 'Generator', 'AsyncGenerator',
      'Float32Array', 'Float64Array', 'Int8Array', 'Int16Array', 'Int32Array', 'Uint16Array', 'Uint32Array', 'BigInt64Array', 'BigUint64Array', 'Uint8ClampedArray',
      'WebAssembly.Module', 'Symbol', 'Function', 'RegExp', 'Map', 'Set', 'WeakMap', 'Error', 'Disposable'],
    globals: [
      { idl: 'globals_Cache', module: 'Cache', jsModule: 'globalThis', members: [{ const: 'caches', name: 'caches' }] },
      { idl: 'cloudflare_sockets', module: 'Sockets', jsModule: 'cloudflare:sockets', members: [{ function: 'cloudflare:sockets._connect', name: 'connect' }] },
      { idl: 'cloudflare_workers', module: 'Workers', jsModule: 'cloudflare:workers', members: [{ const: 'CloudflareWorkersModule.env', name: 'env' }] },
    ],
    declarations: [
      // ---------- Workers KV ----------
      { name: 'KVNamespace', as: 'interface', module: 'Kv' },
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
      { name: 'D1PreparedStatement', as: 'interface', module: 'D1' },
      { name: 'D1Result', as: 'dictionary', module: 'D1', merge: true },
      { name: 'D1Meta', as: 'dictionary', module: 'D1' },
      { name: 'D1ExecResult', as: 'dictionary', module: 'D1' },

      // ---------- R2 ----------
      { name: 'R2Bucket', as: 'interface', module: 'R2' },
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
      { name: 'DurableObjectState', as: 'interface', module: 'DurableObjects' },
      { name: 'DurableObjectStorage', as: 'interface', module: 'DurableObjects' },
      { name: 'DurableObjectTransaction', as: 'interface', module: 'DurableObjects' },
      { name: 'DurableObjectNamespaceNewUniqueIdOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectNamespaceGetDurableObjectOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectAbortOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectListOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectGetOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectGetAlarmOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectPutOptions', as: 'dictionary', module: 'DurableObjects' },
      { name: 'DurableObjectSetAlarmOptions', as: 'dictionary', module: 'DurableObjects' },

      // ---------- Handlers ----------
      { name: 'ExecutionContext', as: 'interface', module: 'Workers' },
      { name: 'CacheContext', as: 'interface', module: 'Workers' },
      { name: 'CachePurgeOptions', as: 'dictionary', module: 'Workers' },
      { name: 'CachePurgeResult', as: 'dictionary', module: 'Workers' },
      { name: 'CachePurgeError', as: 'dictionary', module: 'Workers' },
      { name: 'ScheduledController', as: 'interface', module: 'Workers' },
      { name: 'ExportedHandlerFetchHandler', as: 'callback', module: 'Workers' },
      { name: 'ExportedHandlerScheduledHandler', as: 'callback', module: 'Workers' },
      { name: 'ExportedHandlerQueueHandler', as: 'callback', module: 'Queues' },
      { name: 'ExportedHandler', as: 'dictionary', module: 'Handlers' },
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
      'Cloudflare.Exports': 'any', 'Cloudflare.GlobalProps': 'any',
    },
    // Workers' `Env` (the bindings object) is declared by the program: `structure Env where
    // KV : KVNamespace … deriving FromJS` (Jordan, 2026-11-16; API_DECISIONS A26). The
    // handlers' generic parameter `Env` and `Cloudflare.Env` (cloudflare:workers' `env`) are a
    // Lean type parameter with FromJS; `Data` still works as one.
    typeParameters: { Env: 'Env', 'Cloudflare.Env': 'Env' },
    notSelected: {
      'Cloudflare.Env': 'the bindings object, declared by the program (typeParameters: a Lean type parameter with FromJS)',
      'Cloudflare.GlobalProps': 'the program\'s own main module and Env, as TypeScript programs declare them (type-level only)',
      'Cloudflare.Exports': 'loopback bindings of the program\'s own exports, typed from its main module (a mapped type): Data',
      Fetcher: 'its object part is DurableObjectStub\'s (fetch and connect); Rpc.Provider<T> is the class\'s RPC methods',
      R2Error: 'an Error with R2\'s code and action: errors are read as Data, as Lasm.JS.Web reads them',
      D1Response: 'merged into D1Result (D1Response & { results })',
    },
  },
];
