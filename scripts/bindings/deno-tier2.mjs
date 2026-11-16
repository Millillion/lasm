// Lasm.JS.Deno: the whole `Deno` namespace of Deno 2.9.6, from its own TypeScript
// declarations (cli/tsc/dts/lib.deno.ns.d.ts, lib.deno_net.d.ts, and Deno KV and
// Deno.cron from lib.deno.unstable.d.ts), pinned in serve-api.lock.json. The rules
// are ts-auto.mjs's (docs/JS_BINDINGS.md, "Lasm.JS.Deno"): every function,
// constant and class of the namespace is lowered, with the types they reach, except
// what is excluded here (each with its reason; the lowering fails on a stale entry)
// and what the declarations mark @experimental, UNSTABLE or @deprecated.
// docs/API_DECISIONS.md (0.4) records the shapes and the overrides below.

const inPlace = 'reads into the caller\'s buffer in place; Lean bytes are copies (read the `readable` stream, or readFile)';
const inPlaceWrite = 'writes part of a buffer and returns how much; use the `writable` stream, or writeFile';

export const deno = {
  name: 'Deno', version: '2.9.6', repo: 'denoland/deno', tag: 'v2.9.6',
  files: ['cli/tsc/dts/lib.deno.ns.d.ts', 'cli/tsc/dts/lib.deno_net.d.ts', 'cli/tsc/dts/lib.deno.unstable.d.ts'],
  license: 'MIT, Copyright 2018-2026 the Deno authors',
  global: 'Deno',
  auto: true,
  title: 'the Deno namespace',
  /** Lean modules (Lasm.JS.Deno.<name>), in import order; a declaration's @category picks its module. */
  modules: [
    { name: 'Runtime', title: 'the process, its environment and the system (Deno.env, Deno.args, Deno.exit, …)' },
    { name: 'Permissions', title: 'permissions (Deno.permissions)' },
    { name: 'Io', title: 'standard streams and the terminal (Deno.stdin, Deno.inspect, …)' },
    { name: 'Fs', title: 'the file system (Deno.readFile, Deno.open, Deno.FsFile, …)' },
    { name: 'Subprocess', title: 'subprocesses (Deno.Command, Deno.ChildProcess)' },
    { name: 'Net', title: 'TCP, TLS, Unix sockets and DNS (Deno.listen, Deno.connect, Deno.resolveDns, …)' },
    { name: 'Serve', title: 'HTTP servers (Deno.serve)' },
    { name: 'WebSockets', title: 'WebSocket upgrades (Deno.upgradeWebSocket)' },
    { name: 'Fetch', title: 'HTTP clients for fetch (Deno.createHttpClient)' },
    { name: 'Kv', title: 'Deno KV (Deno.openKv) and Deno.cron' },
  ],
  categories: {
    Runtime: 'Runtime', Permissions: 'Permissions', 'I/O': 'Io', 'File System': 'Fs', Subprocess: 'Subprocess', Network: 'Net',
    'HTTP Server': 'Serve', WebSockets: 'WebSockets', Fetch: 'Fetch', Cloud: 'Kv', Performance: 'Runtime', Platform: 'Runtime',
    FFI: 'Runtime', Testing: 'Runtime', GPU: 'Runtime', Jupyter: 'Runtime', Telemetry: 'Runtime',
  },
  /** Declarations of the unstable file that are lowered, with why. */
  unstable: {
    'cli/tsc/dts/lib.deno.unstable.d.ts': {
      names: ['openKv', 'Kv', 'KvKey', 'KvKeyPart', 'KvConsistencyLevel', 'KvListSelector', 'KvMutation', 'KvListIterator', 'KvEntry', 'KvEntryMaybe',
        'KvListOptions', 'KvCommitResult', 'KvCommitError', 'AtomicCheck', 'AtomicOperation', 'KvU64', 'cron', 'CronSchedule', 'CronScheduleExpression'],
      reason: 'Deno KV and Deno.cron (Jordan, 2026-11-16: full Deno support, KV included; Deno Deploy provides both, the Deno CLI with --unstable-kv and --unstable-cron)',
    },
  },
  /** Whole categories not lowered. */
  excludeCategories: {
    FFI: 'native libraries through pointers (Deno.dlopen, UnsafePointer): their signatures are computed TypeScript types (conditional and mapped), and Deno Deploy has no FFI',
    Testing: 'Deno.test and Deno.bench register tests for `deno test` and `deno bench`, which do not run Lasm\'s output (a Lasm program runs with deno run)',
  },
  exclude: {
    errors: 'the error classes (Deno.errors.NotFound, …), for instanceof checks: a JavaScript error reaches Lean as an IO.Error whose message starts with the class name',
    telemetry: 'OpenTelemetry provider objects (typed any) for an OpenTelemetry JavaScript API package bound with @[js]; Lean code passes them on, as Lasm.JS.global gives them',
    'FsFile.read': inPlace, 'FsFile.readSync': inPlace, 'FsFile.write': inPlaceWrite, 'FsFile.writeSync': inPlaceWrite,
    'Conn.read': inPlace, 'Conn.write': inPlaceWrite,
    'stdin.read': inPlace, 'stdin.readSync': inPlace, 'stdout.write': inPlaceWrite, 'stdout.writeSync': inPlaceWrite, 'stderr.write': inPlaceWrite, 'stderr.writeSync': inPlaceWrite,
    'serve(options: ServeUnixOptions & ServeInit<Deno.UnixAddr>)': 'the same operation as serveWithUnixOptions with the handler inside the options: one Lean function per operation',
    'serve(options: (ServeTcpOptions | ServeTcpOptions & TlsCertifiedKeyPem) & ServeInit<Deno.NetAddr>)': 'the same operation as serveWithOptions and serveWithTlsOptions with the handler inside the options: one Lean function per operation',
    readDirSync: 'returns a synchronous iterator object (not an array) of the entries readDir gives',
    'FsWatcher.return': 'the iterator protocol\'s return(): close() ends the watcher',
    'UpgradeWebSocketOptions.socket': 'a node:net Socket (Deno\'s Node compatibility), for upgrading a Node HTTP request: Lasm.JS.Node\'s domain',
    'resolveDns(query: string, recordType: RecordType, options?: ResolveDnsOptions)': 'the per-record-type overloads (resolveDns, resolveDnsCaa, …) give every record type with its typed result',
    'Kv.commitVersionstamp': 'returns a Symbol placeholder for a versionstamp in a key, which Lean cannot hold as a key part (a KvKeyPart has no Symbol alternative here)',
    'PermissionStatus.addEventListener': 'typed with keyof PermissionStatusEventMap; the EventTarget parent\'s addEventListener (Lasm.JS.Web) is the same call',
    'PermissionStatus.removeEventListener': 'as addEventListener',
    'KvListIterator.next': 'the iterator protocol\'s next(): KvListIterator is an `async iterable` (values, iterator)',
  },
  /** Generic parameters whose declared default is a union of object types: the instantiation the plain name stands for. */
  defaults: { Addr: 'NetAddr' },
  as: {},
  /** Overloads whose parameter is a union of object types: one overload per alternative, the parameter renamed. */
  split: {
    'serve(options: ServeTcpOptions | ServeTcpOptions & TlsCertifiedKeyPem, handler: ServeHandler<Deno.NetAddr>)': { options: ['options', 'tlsOptions'] },
  },
  /** Overload names the mechanical rule would give twice (or badly). */
  names: {
    'listen(options: UnixListenOptions & {transport: "unix"})': 'listenUnix',
    'connect(options: UnixConnectOptions)': 'connectUnix',
    'resolveDns(query: string, recordType: "CAA", options?: ResolveDnsOptions)': 'resolveDnsCaa',
    'resolveDns(query: string, recordType: "MX", options?: ResolveDnsOptions)': 'resolveDnsMx',
    'resolveDns(query: string, recordType: "NAPTR", options?: ResolveDnsOptions)': 'resolveDnsNaptr',
    'resolveDns(query: string, recordType: "SOA", options?: ResolveDnsOptions)': 'resolveDnsSoa',
    'resolveDns(query: string, recordType: "SRV", options?: ResolveDnsOptions)': 'resolveDnsSrv',
    'resolveDns(query: string, recordType: "TXT", options?: ResolveDnsOptions)': 'resolveDnsTxt',
    'serve(options: ServeUnixOptions, handler: ServeHandler<Deno.UnixAddr>)': 'serveWithUnixOptions',
  },
  intersections: {
    'ServeTcpOptions & TlsCertifiedKeyPem': 'ServeTcpTlsOptions',
    'TcpListenOptions & {transport?: "tcp"}': 'ListenTcpOptions',
    'UnixListenOptions & {transport: "unix"}': 'ListenUnixOptions',
    'ListenTlsOptions & TlsCertifiedKeyPem': 'ListenTlsCertifiedOptions',
  },
  /** Member types the declarations state with computed types (mapped tuples), stated plainly, with why. */
  overrides: {
    'Kv.getMany': { params: { keys: 'KvKey[]' }, type: 'Promise<KvEntryMaybe<unknown>[]>', reason: 'the declared type maps a tuple of keys to a tuple of entries (a mapped type); an array of keys gives an array of entries in order' },
    'Kv.watch': { params: { keys: 'KvKey[]' }, type: 'ReadableStream<KvEntryMaybe<unknown>[]>', reason: 'as getMany: a stream of arrays of entries, one per key' },
  },
  instances: {},
  integers: {},
  /** Names the declarations use that are not Deno's: Lasm.JS.Web's (tier 1) interfaces. */
  typeNames: {
    Request: 'Request', Response: 'Response', URL: 'URL', AbortSignal: 'AbortSignal', ReadableStream: 'ReadableStream', WritableStream: 'WritableStream',
    WebSocket: 'WebSocket', Headers: 'Headers', Blob: 'Blob', EventTarget: 'EventTarget', ArrayBuffer: 'ArrayBuffer', Event: 'Event', HeadersInit: 'HeadersInit', 'NodeJS.Timeout': 'object',
  },
};
