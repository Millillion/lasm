// Lasm.JS.Bun: the whole `Bun` namespace of Bun 1.4.4 and its `bun:sqlite` module, from
// Bun's own TypeScript declarations (packages/bun-types of oven-sh/bun at the release tag,
// byte-identical to the npm package bun-types 1.4.4), pinned in serve-api.lock.json. The
// rules are ts-auto.mjs's (docs/JS_BINDINGS.md, "Lasm.JS.Bun"), as for Lasm.JS.Deno: every
// function, constant and class is lowered with the types it uses, except what is excluded
// here (each with its reason) and what the declarations mark @experimental or @deprecated.
// docs/API_DECISIONS.md (milestone 0.4) records the shapes and overrides.

export const bun = {
  name: 'Bun', version: '1.4.4', repo: 'oven-sh/bun', tag: 'bun-v1.4.4',
  files: ['packages/bun-types/bun.d.ts', 'packages/bun-types/serve.d.ts', 'packages/bun-types/sqlite.d.ts', 'packages/bun-types/redis.d.ts',
    'packages/bun-types/sql.d.ts', 'packages/bun-types/s3.d.ts', 'packages/bun-types/shell.d.ts', 'packages/bun-types/security.d.ts',
    'packages/bun-types/fetch.d.ts', 'packages/bun-types/wasm.d.ts'],
  license: 'MIT, Copyright Oven and the Bun contributors',
  global: 'Bun',
  auto: true,
  title: 'the Bun namespace and bun:sqlite',
  /** Runtime modules declared with `declare module "…"` whose declarations are part of the binding (loaded from that module). */
  roots: ['bun:sqlite'],
  modules: [
    { name: 'Core', title: 'Bun\'s utilities, files, processes and sockets (Bun.file, Bun.spawn, Bun.listen, Bun.password, …)' },
    { name: 'Serve', title: 'HTTP servers and WebSockets (Bun.serve)' },
    { name: 'Shell', title: 'the shell ($)' },
    { name: 'Sqlite', title: 'bun:sqlite' },
    { name: 'Sql', title: 'SQL clients (Bun.SQL, Bun.sql)' },
    { name: 'Redis', title: 'Redis (Bun.RedisClient, Bun.redis)' },
    { name: 'S3', title: 'S3 (Bun.S3Client, Bun.s3)' },
  ],
  /** A declaration's module: its @category, else its file. */
  categories: {
    Utilities: 'Core', 'HTTP & Networking': 'Core', Bundler: 'Core', Security: 'Core', 'File System': 'Core', 'Process Management': 'Core',
    'Cloud Storage': 'S3', Database: 'Sqlite', 'HTML Manipulation': 'Core', FFI: 'Core', Testing: 'Core',
  },
  fileModules: {
    'bun.d.ts': 'Core', 'serve.d.ts': 'Serve', 'sqlite.d.ts': 'Sqlite', 'redis.d.ts': 'Redis', 'sql.d.ts': 'Sql', 's3.d.ts': 'S3',
    'shell.d.ts': 'Shell', 'security.d.ts': 'Core', 'fetch.d.ts': 'Core', 'wasm.d.ts': 'Core',
  },
  excludeCategories: {
    Bundler: 'Bun.build, plugins and the transpiler configure Bun\'s bundler, which builds JavaScript; Lasm builds the program',
    FFI: 'native libraries through pointers (bun:ffi): computed TypeScript types',
  },
  exclude: {
    $: 'the shell is a tagged template literal (`$\`ls ${dir}\``): its escaping comes from the template\'s TemplateStringsArray, which Lean cannot make; Bun.spawn runs commands',
    sql: 'the default SQL client is a tagged template literal (sql`select …`), as $; Bun.SQL\'s methods (unsafe, …) run queries',
    fetch: 'the web fetch (Lasm.JS.Web.fetch), declared again on Bun',
    plugin: 'registers bundler plugins for Bun\'s module loader (JavaScript source transforms)',
    'markdown.react': 'renders to React elements (JSX)',
    'TranspilerOptions.macro': 'bundler macros (JavaScript modules run at transpile time)',
    'unsafe.arrayBufferToString(buffer: Uint16Array)': 'reads a UTF-16 Uint16Array in place; the Uint8Array overload takes bytes',
    'Glob.scanSync': 'returns a synchronous iterator object (not an array); scan gives the same paths',
    'CookieMap.entries': 'returns a synchronous iterator object; toJSON gives the cookies', 'CookieMap.keys': 'as entries', 'CookieMap.values': 'as entries',
    'Statement.iterate': 'returns a synchronous iterator object; all gives the rows',
    'Statement.as': 'maps rows to instances of a JavaScript class (a constructor type)',
    'S3File.unlink': 'the same function as delete (declared as its type)',
    'Database.transaction': 'wraps a JavaScript function in a transaction and returns a callable object (generic over its arguments); run BEGIN and COMMIT with Database.run',
    'cron.parse': 'typed with template literal types (cron expressions); Bun.cron takes the expression as a string',
  },
  /** Generic parameters whose instantiation by a function differs from the declaration's default: the one the plain name stands for. */
  defaults: { 'Serve.Options.R': 'never', WebSocketData: 'undefined', Data: 'undefined', DataBinaryType: '"buffer"',
    'WebSocketHandler.T': 'undefined', 'Serve.Routes.R': 'never', 'Serve.RoutesWithUpgrade.R': 'never', 'Serve.Routes.WebSocketData': 'undefined', 'Serve.RoutesWithUpgrade.WebSocketData': 'undefined',
    'Subprocess.In': '"ignore"', 'Subprocess.Out': '"pipe"', 'Subprocess.Err': '"inherit"' },
  /** Declarations Bun hands over as class instances (getters), not plain objects: handles. */
  as: { ResourceUsage: 'interface' },
  split: {},
  names: {
    'write(destination: BunFile, input: Response | Request, options?: {createPath?: boolean;})': 'writeResponse',
    'write(destinationPath: PathLike, input: Response | Request, options?: {createPath?: boolean;})': 'writePathResponse',
    'write(destination: BunFile, input: BunFile, options?: {mode?: number; createPath?: boolean;})': 'writeFile',
    'write(destinationPath: PathLike, input: BunFile, options?: {mode?: number; createPath?: boolean;})': 'writePathFile',
    'concatArrayBuffers(buffers: Array<ArrayBufferView | ArrayBufferLike>, maxLength: number, asUint8Array: false)': 'concatArrayBuffersToArrayBuffer',
    'concatArrayBuffers(buffers: Array<ArrayBufferView | ArrayBufferLike>, maxLength: number, asUint8Array: true)': 'concatArrayBuffersToUint8Array',
    'BunFile.slice(begin?: number, contentType?: string)': 'sliceFrom',
    'BunFile.slice(contentType?: string)': 'sliceWithType',
    'S3File.slice(begin?: number, contentType?: string)': 'sliceFrom',
    'S3File.slice(contentType?: string)': 'sliceWithType',
    'CookieMap.delete(options: CookieStoreDeleteOptions)': 'deleteWithOptions',
    'CookieMap.delete(name: string, options: Omit<CookieStoreDeleteOptions, "name">)': 'deleteNamed',
    'RedisClient.zrangebyscore(key: RedisClient.KeyLike, min: string | number, max: string | number, withscores: "WITHSCORES", ...options: string | number[])': 'zrangebyscoreWithscoresOptions',
  },
  intersections: {
    'SpawnOptions.SpawnOptions<"ignore", "pipe", "inherit"> & {cmd: string[];}': 'SpawnCmdOptions',
    'SpawnOptions.SpawnSyncOptions<"ignore", "pipe", "pipe"> & {cmd: string[]; onExit?: never;}': 'SpawnSyncCmdOptions',
    'ParseOptions & {compact?: true}': 'XMLCompactParseOptions',
    'ParseOptions & {compact: false}': 'XMLFullParseOptions',
  },
  /** Member types TypeScript computes (conditional, indexed or keyof types), stated plainly, with why. */
  overrides: {
    'TOML.stringify': { type: 'string | undefined', reason: 'a conditional type of the value; a string, or undefined for a function or symbol' },
    'Server.reload': { params: { options: 'Serve.Options<undefined, never>' }, reason: 'the same options as Bun.serve (the declaration instantiates the route parameter as string rather than never)' },
    'Server.upgrade': { params: { options: '{ headers?: HeadersInit; data?: unknown }' }, reason: 'a conditional rest tuple on the WebSocket data type' },
    'Database.query': { type: 'Statement', reason: 'a conditional type of the parameters' },
    'Database.prepare': { type: 'Statement', reason: 'a conditional type of the parameters' },
    'SocketHandler.data': { params: { data: 'Uint8Array' }, reason: 'indexed by the binary type (a Buffer by default)' },
    'SocketHandler.binaryType': { type: '"arraybuffer" | "buffer" | "uint8array"', reason: 'keyof BinaryTypeList' },
    'udp.SocketHandler.data': { params: { data: 'Uint8Array' }, reason: 'indexed by the binary type (a Buffer by default)' },
    'XML.parse': { type: 'unknown', reason: 'the document is a recursive tree of nodes, read as Data (a Lean structure cannot contain itself through the node union)' },
    'XML.stringify': { params: { value: 'unknown' }, reason: 'the recursive document tree, passed as Data' },
    'Subprocess.stdin': { type: 'FileSink | number | undefined', reason: 'conditional on the stdin option (a FileSink when "pipe")' },
    'Subprocess.stdout': { type: 'ReadableStream<Uint8Array> | number | undefined', reason: 'conditional on the stdout option (a stream when "pipe")' },
    'Subprocess.stderr': { type: 'ReadableStream<Uint8Array> | number | undefined', reason: 'conditional on the stderr option (a stream when "pipe")' },
    'Subprocess.readable': { type: 'ReadableStream<Uint8Array> | number | undefined', reason: 'conditional on the stdout option' },
    'SyncSubprocess.stdout': { type: 'Uint8Array | undefined', reason: 'conditional on the stdout option (bytes when "pipe")' },
    'SyncSubprocess.stderr': { type: 'Uint8Array | undefined', reason: 'conditional on the stderr option (bytes when "pipe")' },
    env: { type: 'Record<string, string>', reason: 'an intersection of Bun\'s, Node\'s and import.meta\'s environment types: the variables as strings' },
    hash: { type: 'Hash', reason: 'a function that is also an object of hash functions: its functions (Hash.wyhash, …); call Bun.hash itself with Value.call' },
    'Password.AlgorithmLabel': { type: '"bcrypt" | "argon2id" | "argon2d" | "argon2i"', reason: 'an indexed type: the algorithms\' names' },
    'udp.BaseUDPSocket.binaryType': { type: '"arraybuffer" | "buffer" | "uint8array"', reason: 'keyof BinaryTypeList' },
    'Spawn.BaseOptions.stdio': { type: 'unknown[]', reason: 'a tuple of stdin, stdout and stderr typed by the generic options: each entry as Data' },
    'udp.ConnectedSocketHandler.data': { params: { data: 'Uint8Array' }, reason: 'indexed by the binary type (a Buffer by default)' },
  },
  instances: {},
  /** `number`s the doc comment describes as a port, count or size (WebIDL integers; `double` otherwise), each quoting it. */
  integers: {
    'ServeOptions.port': { type: 'unsigned short', quote: 'The port the server listens on' },
    'ServeOptions.idleTimeout': { type: 'unsigned long', quote: 'Sets the number of seconds to wait before timing out a connection' },
    'ServeOptions.maxRequestBodySize': { type: 'unsigned long long', quote: 'The maximum size of a request body, in bytes' },
    'Server.port': { type: 'unsigned short', quote: 'The port the server is listening on.' },
    'Server.pendingRequests': { type: 'unsigned long', quote: 'The number of in-flight requests' },
    'Server.timeout.seconds': { type: 'unsigned long', quote: 'to the given number of seconds' },
    'Server.closeIdleConnections': { type: 'unsigned long', quote: 'The number of connections that were closed.' },
    'SocketAddress.port': { type: 'unsigned short', quote: 'The port of the client.' },
  },
  typeNames: {
    Request: 'Request', Response: 'Response', URL: 'URL', AbortSignal: 'AbortSignal', ReadableStream: 'ReadableStream', WritableStream: 'WritableStream',
    WebSocket: 'WebSocket', Headers: 'Headers', Blob: 'Blob', EventTarget: 'EventTarget', ArrayBuffer: 'ArrayBuffer', Event: 'Event', HeadersInit: 'HeadersInit',
    File: 'File', FormData: 'FormData', BlobPropertyBag: 'BlobPropertyBag', BufferEncoding: 'DOMString', Float32Array: 'object', Float64Array: 'object', Uint16Array: 'object', 'NodeJS.Signals': 'DOMString',
    BunFetchRequestInit: 'object', BunFetchRequestInitTLS: 'object', TemplateStringsArray: 'object', BodyInit: 'BodyInit', RequestInit: 'RequestInit', ResponseInit: 'ResponseInit', TextDecoder: 'TextDecoder',
  },
};
