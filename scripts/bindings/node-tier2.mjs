// Lasm.JS.Node: every Node.js core module, generated from Node's own API
// documentation in its machine-readable form (doc/api/<module>.json, as published
// at https://nodejs.org/dist/v<version>/docs/api/; MIT, the Node.js license),
// pinned below with SHA-256 hashes in node-api.lock.json, as it is (Jordan,
// 2026-11-16). scripts/bindings/node-api.mjs lowers each documentation file listed
// in `modules` to WebIDL (scripts/bindings/node.idl), finding its classes and
// namespaces itself, and scripts/bindings/generate-web.mjs turns that into
// library/Lasm/JS/Node/*.lean with the mapping rules of Lasm.JS.Web
// (docs/JS_BINDINGS.md, "Lasm.JS.Node"; API_DECISIONS.md A17, 0.4-4 to 0.4-9).
//
// This file holds only what the docs do not say in their structure: the JavaScript
// module of a name (`jsModules`), what a class's heading or prose says about it
// (`classes`), objects described without a `Class:` heading (`instances`), Node
// classes that share a web standard's name (`notWeb`), the docs' type names
// (`typeNames`), types stated in prose with the sentence quoted (`prose`,
// `proseIdl`, `eventProse`: the lowering fails if the sentence is gone),
// corrections of the docs against Node, and the members that cannot work from Wasm
// (`exclude`, each with its reason). Every member is generated whatever its
// stability; node-coverage.json lists everything not taken exactly as documented.

/** The Node.js version whose docs the bindings reflect (the oldest supported Node,
 * Node 24 LTS), and the newer LTS the lowering compares it with (node-api-26.json). */
export const version = '24.22.2';
export const compareVersion = '26.13.0';

/**
 * Lean modules (Lasm.JS.Node.<name>), one per documentation file, each the whole
 * of what that file documents (Jordan, 2026-11-16: the source as it is). node-api.mjs
 * finds the containers itself: every `Class:` section is a class, and every
 * documented member owned by a module-level name (`fs.readFile`, `fsPromises.open`,
 * `dnsPromises.lookup`) belongs to that name's namespace. Classes that are web
 * standards (`URL`, `EventTarget`, `Blob`, `MessagePort`, …: interfaces of the
 * pinned @webref/idl) are Lasm.JS.Web's and are not generated again. The order
 * here is only the starting order: node-api.mjs orders the modules so that each
 * comes after the modules whose types it uses (node-modules.json).
 */
export const modules = [
  { name: 'Events', doc: 'events', title: 'event emitters' },
  { name: 'Stream', doc: 'stream', title: 'Node streams' },
  { name: 'Buffer', doc: 'buffer', title: 'Buffer and binary data' },
  { name: 'StringDecoder', doc: 'string_decoder', title: 'decoding bytes to strings' },
  { name: 'Path', doc: 'path', title: 'file paths' },
  { name: 'Os', doc: 'os', title: 'the operating system' },
  { name: 'Process', doc: 'process', title: 'the current process' },
  { name: 'Fs', doc: 'fs', title: 'the file system' },
  { name: 'Crypto', doc: 'crypto', title: 'cryptography' },
  { name: 'Dns', doc: 'dns', title: 'name resolution' },
  { name: 'Net', doc: 'net', title: 'TCP and IPC servers and sockets' },
  { name: 'Tls', doc: 'tls', title: 'TLS servers and sockets' },
  { name: 'Dgram', doc: 'dgram', title: 'UDP sockets' },
  { name: 'Http', doc: 'http', title: 'HTTP servers and clients' },
  { name: 'Https', doc: 'https', title: 'HTTPS servers and clients' },
  { name: 'Http2', doc: 'http2', title: 'HTTP/2' },
  { name: 'ChildProcess', doc: 'child_process', title: 'child processes' },
  { name: 'Cluster', doc: 'cluster', title: 'process clusters' },
  { name: 'WorkerThreads', doc: 'worker_threads', title: 'worker threads' },
  { name: 'Zlib', doc: 'zlib', title: 'compression' },
  { name: 'Util', doc: 'util', title: 'utilities' },
  { name: 'Url', doc: 'url', title: 'URL utilities (the legacy API and Node\'s helpers)' },
  { name: 'Querystring', doc: 'querystring', title: 'query strings' },
  { name: 'Punycode', doc: 'punycode', title: 'Punycode' },
  { name: 'Timers', doc: 'timers', title: 'timers' },
  { name: 'Readline', doc: 'readline', title: 'line input' },
  { name: 'Repl', doc: 'repl', title: 'read-eval-print loops' },
  { name: 'Tty', doc: 'tty', title: 'terminals' },
  { name: 'Console', doc: 'console', title: 'the console' },
  { name: 'Assert', doc: 'assert', title: 'assertions' },
  { name: 'AsyncHooks', doc: 'async_hooks', title: 'async hooks' },
  { name: 'AsyncContext', doc: 'async_context', title: 'asynchronous context tracking' },
  { name: 'DiagnosticsChannel', doc: 'diagnostics_channel', title: 'diagnostics channels' },
  { name: 'Domain', doc: 'domain', title: 'domains' },
  { name: 'PerfHooks', doc: 'perf_hooks', title: 'performance measurement (Node\'s own APIs)' },
  { name: 'TraceEvents', doc: 'tracing', title: 'trace events' },
  { name: 'Inspector', doc: 'inspector', title: 'the inspector' },
  { name: 'Module', doc: 'module', title: 'the module system' },
  { name: 'V8', doc: 'v8', title: 'the V8 engine' },
  { name: 'Vm', doc: 'vm', title: 'JavaScript contexts' },
  { name: 'Wasi', doc: 'wasi', title: 'WASI' },
  { name: 'Sqlite', doc: 'sqlite', title: 'SQLite' },
  { name: 'Test', doc: 'test', title: 'the test runner' },
  { name: 'Sea', doc: 'single-executable-applications', title: 'single executable applications' },
  { name: 'StreamIter', doc: 'stream_iter', title: 'iterable streams' },
];

/** The doc/api files read. */
export const docs = modules.map(m => m.doc);

/**
 * The JavaScript module of a namespace or class (by the owner name the docs use),
 * where it is not the documentation file's own `node:<doc>`.
 */
export const jsModules = {
  docs: { async_context: 'node:async_hooks', tracing: 'node:trace_events', 'single-executable-applications': 'node:sea',
    stream_iter: 'node:stream/iter', test: 'node:test', perf_hooks: 'node:perf_hooks' },
  owners: { fsPromises: 'node:fs/promises', dnsPromises: 'node:dns/promises', readlinePromises: 'node:readline/promises',
    timersPromises: 'node:timers/promises', streamPromises: 'node:stream/promises', assert: 'node:assert', 'assert.strict': 'node:assert/strict' },
};

/**
 * What the docs give only in a heading or in prose about a class: its constructor
 * signature (`ctor`, checked against the documented parameters), a stated parent
 * with the sentence that gives it (`extends`, `extendsQuote`), and static members
 * documented in another section (`statics`).
 */
export const classes = {
  'stream.Readable': { extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' } },
  'stream.Writable': { extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' } },
  // A Duplex is both; a Lean structure has one parent, its Readable side (stream.Readable.toWeb takes it).
  'stream.Duplex': { extends: 'stream.Readable', extendsQuote: { doc: 'stream', quote: 'Duplex streams are streams that implement both the Readable and Writable interfaces.' } },
  'net.SocketAddress': { ctor: 'new net.SocketAddress([options])' },
  'net.BlockList': { ctor: 'new net.BlockList()' },
  'net.BoundSocket': { ctor: 'new net.BoundSocket([options])' },
  'net.Server': { extends: 'EventEmitter', ctor: 'new net.Server([options][, connectionListener])' },
  'net.Socket': { extends: 'stream.Duplex', ctor: 'new net.Socket([options])' },
  'http.Agent': { ctor: 'new Agent([options])' },
  // OutgoingMessage extends the legacy Stream, an EventEmitter; it is not a stream.Writable.
  'http.OutgoingMessage': { extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' } },
  'https.Agent': { ctor: 'new Agent([options])', extends: 'http.Agent', extendsQuote: { doc: 'https', quote: 'An Agent object for HTTPS similar to http.Agent.' } },
  // https.Server extends tls.Server, which extends net.Server; the docs give it http.Server's API ("See http.Server for
  // more information"): its parent here is http.Server, so it has the request events.
  'https.Server': { extends: 'http.Server', extendsQuote: { doc: 'https', quote: 'See http.Server for more information.' } },
  ChildProcess: { extends: 'EventEmitter' },
  // A Buffer is a ByteArray in Lean (a copy, as every Uint8Array): the static methods that make or measure bytes, and the
  // instance methods as functions of the bytes (`Buffer.toString bytes (some "hex")`; the docs: "All methods on the Buffer
  // prototype are callable with a Uint8Array instance").
  Buffer: { kind: 'bytes' },
  // Not exported by node:fs/promises (made by fsPromises.open).
  FileHandle: { path: null },
};

/**
 * Members not generated, each with why it cannot work from Lean compiled to Wasm
 * (an API_DECISIONS.md entry, milestone 0.4). Keyed by the documented name
 * (`fs.readSync`, `filehandle.readv`) or with its parameters
 * (`fs.read(fd, buffer, offset, length, position, callback)`).
 */
export const exclude = {
};

/**
 * The docs' type names, as WebIDL. Node classes of this cut are interfaces;
 * Buffer and the typed arrays are bytes; web classes are Lasm.JS.Web's; classes
 * outside this cut are `object` (Data), as tier 1 does for types outside it.
 * A name that is not here fails the lowering.
 */
export const typeNames = {
  string: 'DOMString', integer: 'long long', number: 'double', boolean: 'boolean', bigint: 'bigint', any: 'any', symbol: 'symbol',
  Buffer: 'bytes', TypedArray: 'bytes', DataView: 'bytes', Uint8Array: 'bytes', SharedArrayBuffer: 'bytes', ArrayBuffer: 'ArrayBuffer',
  ArrayBufferView: 'bytes', Function: 'Function', Map: 'object', Set: 'object', Object: 'object', Array: 'sequence<any>', Error: 'any',
  Date: 'object', RegExp: 'object', Iterable: 'object', AsyncIterable: 'object', Iterator: 'object', AsyncIterator: 'object',
  Promise: 'Promise<any>', null: 'any', undefined: 'undefined', Handle: 'object', Stream: 'EventEmitter',
  // The docs' names for kinds of values, not classes: functions, plain objects and constants.
  AsyncFunction: 'Function', AsyncGeneratorFunction: 'Function', EventListener: 'Function', Proxy: 'object', Disposable: 'object',
  'HTTP/2 Headers Object': 'object', 'HTTP/2 Settings Object': 'object', 'HTTP/2 Raw Headers': 'sequence<any>',
  'zlib options': 'object', 'brotli options': 'object', 'zstd options': 'object', 'tls.SecureContext': 'object',
  'vm.constants.USE_MAIN_CONTEXT_DEFAULT_LOADER': 'any', 'vm.constants.DONT_CONTEXTIFY': 'any', 'crypto.constants': 'object',
  'os.constants.dlopen': 'object', ModuleRequest: 'object', require: 'Function',
};

/**
 * Objects the docs describe by their members without a `Class:` heading, keyed
 * `<doc>:<owner>` (`tracing.enable()`): the Lean name of their type (generated as a
 * class without an export), or null where the owner is not an object at all.
 */
export const instances = {
  'tracing:tracing': 'Tracing', 'stream_iter:writer': 'Writer', 'stream_iter:broadcast': 'Broadcast', 'url:urlObject': 'url.UrlObject',
  'child_process:options': null,
};
export const instancesWhy = {
  'child_process:options': 'two of child_process.spawn\'s options (`options.detached`, `options.stdio`) documented under their own headings: they are members of child_process.SpawnOptions',
};

/**
 * Classes whose name is also a web standard's but which are Node's own, not that standard
 * (keyed `<doc>:<documented name>`): generated in Lasm.JS.Node.
 */
export const notWeb = {
  'cluster:Worker': 'a cluster worker process (cluster.Worker), not the HTML Worker',
  'worker_threads:Worker': 'Node\'s worker thread (node:worker_threads), not the HTML Worker',
  'vm:vm.Module': 'a vm module record, not WebAssembly.Module',
};

/**
 * What the docs state only in prose, in WebIDL: `returns` (the result; for a
 * promise, `Promise<T>`), `params` (an argument or option member: `options.env`),
 * `promisify` (the member is called through util.promisify, as the docs describe
 * for it), `name` (the Lean name of a dictionary made from an options object).
 * `quote` must occur in the member's documentation.
 */
export const prose = {
  'events.once': { returns: 'Promise<sequence<any>>', quote: 'The Promise will resolve with an array of all the arguments emitted to the given event.' },
  'fsPromises.mkdir': { returns: 'Promise<DOMString?>', quote: 'Upon success, fulfills with undefined if recursive is false, or the first directory path created if recursive is true.' },
  'fsPromises.mkdtemp': { returns: 'Promise<(DOMString or bytes)>', quote: 'Fulfills with the created directory path.' },
  'fsPromises.readdir': { returns: 'Promise<sequence<(DOMString or bytes or fs.Dirent)>>', quote: 'Fulfills with an array of the names of the files in the directory' },
  'fsPromises.readFile': { returns: 'Promise<(bytes or DOMString)>', quote: 'Fulfills with the contents of the file.' },
  'fsPromises.readlink': { returns: 'Promise<(DOMString or bytes)>', quote: 'Fulfills with the linkString upon success.' },
  'fsPromises.realpath': { returns: 'Promise<(DOMString or bytes)>', quote: 'Fulfills with the resolved path upon success.' },
  'filehandle.read(buffer, offset, length, position)': { returns: 'Promise<FileHandle.ReadResult>', quote: 'Fulfills upon success with an object with two properties:' },
  'filehandle.read([options])': { returns: 'Promise<FileHandle.ReadResult>', quote: 'Fulfills upon success with an object with two properties:' },
  'filehandle.read(buffer[, options])': { returns: 'Promise<FileHandle.ReadResult>', quote: 'Fulfills upon success with an object with two properties:' },
  'filehandle.readFile': { returns: 'Promise<(bytes or DOMString)>', quote: 'Fulfills upon a successful read with the contents of the file.' },
  'filehandle.utimes': { returns: 'Promise<undefined>', quote: 'Change the file system timestamps of the object referenced by the <FileHandle> then fulfills the promise with no arguments upon success.' },
  'filehandle.write(buffer, offset[, length[, position]])': { returns: 'Promise<FileHandle.WriteResult>', quote: 'The promise is fulfilled with an object containing two properties:' },
  'filehandle.write(buffer[, options])': { returns: 'Promise<FileHandle.WriteResult>', quote: 'Write buffer to the file.' },
  'filehandle.write(string[, position[, encoding]])': { returns: 'Promise<FileHandle.WriteStringResult>', quote: 'The promise is fulfilled with an object containing two properties:' },
  'filehandle.writeFile': { returns: 'Promise<undefined>', quote: 'The promise is fulfilled with no arguments upon success.' },
  'path.format': { name: { pathObject: 'PathObject' }, quote: 'returns a path string from an object' },
  'path.parse': { returns: 'path.PathObject', quote: 'The returned object will have the following properties:' },
  'process.env': { returns: 'record<DOMString, DOMString>', quote: 'Assigning a property on process.env will implicitly convert the value to a string.' },
  'process.versions': { returns: 'record<DOMString, DOMString>', quote: 'property returns an object listing the version strings of Node.js and its dependencies.' },
  'process.exitCode': { returns: '(long long or DOMString)?', quote: 'A number which will be the process exit code' },
  'subprocess.exitCode': { returns: 'long long?', quote: 'If the child process is still running, the field will be null.' },
  'crypto.randomInt': { returns: 'long long', quote: 'Return a random integer n such that min <= n < max.' },
  'child_process.execFile': { promisify: true, returns: 'Promise<child_process.ExecFileResult>',
    quote: 'returns a Promise for an Object with stdout and stderr properties.' },
  'net.setDefaultAutoSelectFamily': { params: { value: 'boolean' }, quote: 'value <boolean> The new default value.' },
  'net.setDefaultAutoSelectFamilyAttemptTimeout': { params: { value: 'double' }, quote: 'value <number> The new default value, which must be a positive number.' },
  'http.createServer': { params: { requestListener: 'http.Server.RequestListener' },
    quote: 'The requestListener is a function which is automatically added to the \'request\' event.' },
  'https.createServer': { params: { requestListener: 'http.Server.RequestListener' }, quote: 'A listener to be added to the \'request\' event.' },
  'net.createServer': { params: { connectionListener: 'net.Server.ConnectionListener' }, quote: 'Automatically set as a listener for the [\'connection\'][] event.' },
  'net.Server.constructor': { params: { connectionListener: 'net.Server.ConnectionListener' }, quote: 'Automatically set as a listener for the [\'connection\'][] event.' },
  'socket.connect': { in: 'net.Socket', params: { connectListener: 'net.Socket.ConnectListener' }, quote: 'will be added as a listener for the \'connect\' event once.' },
  'net.createConnection': { params: { connectListener: 'net.Socket.ConnectListener' }, quote: 'will be added as a listener for the \'connect\' event once.' },
  'net.connect': { params: { connectListener: 'net.Socket.ConnectListener' }, quoteDoc: true,
    quote: 'If supplied, will be added as a listener for the [\'connect\'][] event on the returned socket once.' },
  'server.address': { in: 'net.Server', returns: '(net.AddressInfo or DOMString)?', quote: 'Returns the bound address, the address family name, and port of the server' },
  'socket.address': { in: 'net.Socket', returns: 'net.AddressInfo', quote: 'Returns the bound address, the address family name and port of the socket' },
  'BlockList.isBlockList': { returns: 'boolean', quote: 'Returns true if the value is a net.BlockList.' },
  'https.globalAgent': { returns: 'https.Agent', quote: 'Global instance of https.Agent for all HTTPS client requests.' },
  'server.getConnections': { in: 'net.Server', returns: 'Promise<long long>', quote: 'Callback should take two arguments err and count.' },
  'child_process.spawn': { params: { 'options.env': 'record<DOMString, DOMString>' }, quote: 'Environment key-value pairs.' },
};
/**
 * Where the docs' type is not what Node returns, the type Node returns, with the
 * measurement (each checked by test/fixtures/js-node) and the docs' type: the
 * lowering fails once the docs change, so a correction is dropped when the docs
 * are fixed.
 */
export const corrections = {
  'os.uptime': { returns: 'double', docType: 'integer',
    reason: 'Node returns fractional seconds on Linux (126817.4 from Node 24.22 on Ubuntu 24.04); the docs say {integer}' },
};

/** child_process.execFile: the env option, as for spawn. */
prose['child_process.execFile'].params = { 'options.env': 'record<DOMString, DOMString>' };

/** Dictionaries the prose above names (WebIDL), each with the sentence of the docs it encodes. */
export const proseIdl = [
  { doc: 'fs', quote: 'bytesRead {integer} The number of bytes read',
    idl: '[LasmNamespace="FileHandle"] dictionary ReadResult { required long long bytesRead; required bytes buffer; };' },
  { doc: 'fs', quote: 'bytesWritten <integer> the number of bytes written buffer <Buffer>',
    idl: '[LasmNamespace="FileHandle"] dictionary WriteResult { required long long bytesWritten; required bytes buffer; };' },
  { doc: 'fs', quote: 'bytesWritten <integer> the number of bytes written buffer <string>',
    idl: '[LasmNamespace="FileHandle"] dictionary WriteStringResult { required long long bytesWritten; required DOMString buffer; };' },
  { doc: 'child_process', quote: 'returns a Promise for an Object with stdout and stderr properties.',
    idl: '[LasmNamespace="child_process"] dictionary ExecFileResult { required (DOMString or bytes) stdout; required (DOMString or bytes) stderr; };' },
  { doc: 'net', quote: "{ port: 12346, family: 'IPv4', address: '127.0.0.1' }",
    idl: '[LasmNamespace="net"] dictionary AddressInfo { required long long port; required DOMString family; required DOMString address; };' },
  { doc: 'net', quote: 'data <Object> The argument passed to event listener. localAddress <string> Local address.',
    idl: '[LasmNamespace="net.Server"] dictionary DropData { DOMString localAddress; double localPort; DOMString localFamily; DOMString remoteAddress; double remotePort; DOMString remoteFamily; };' },
];

/**
 * Events whose arguments the docs list only in prose (`Event: 'lookup'`: "err <Error> | <null> The error object…"),
 * in WebIDL, keyed `<class>#<event>`, with a sentence of the event's documentation (the lowering fails without it).
 */
export const eventProse = {
  'ChildProcess#close': { args: [{ type: 'long long?', name: 'code' }, { type: 'DOMString?', name: 'signal' }],
    quote: 'or null if the child process terminated due to a signal.' },
  'ChildProcess#exit': { args: [{ type: 'long long?', name: 'code' }, { type: 'DOMString?', name: 'signal' }],
    quote: 'or null if the child process terminated due to a signal.' },
  'net.Server#drop': { args: [{ type: 'net.Server.DropData?', name: 'data' }],
    quote: 'If it is a TCP server, the argument is as follows, otherwise the argument is undefined.' },
  'net.Socket#lookup': { args: [{ type: 'any', name: 'err' }, { type: 'DOMString', name: 'address' }, { type: 'double?', name: 'family' }, { type: 'DOMString', name: 'host' }],
    quote: 'Emitted after resolving the host name but before connecting.' },
};

/** zlib's convenience methods: the docs give their results once for all, in the section's prose. */
for (const n of ['brotliCompress', 'brotliDecompress', 'deflate', 'deflateRaw', 'gunzip', 'gzip', 'inflate', 'inflateRaw', 'unzip', 'zstdCompress', 'zstdDecompress']) {
  prose[`zlib.${n}`] = { promisify: true, returns: 'Promise<bytes>', quote: 'will call the supplied callback with callback(error, result).' };
  prose[`zlib.${n}Sync`] = { returns: 'bytes', quote: 'Every method has a *Sync counterpart, which accept the same arguments, but without a callback.' };
}
