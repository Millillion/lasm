// Tier 2 of the standard bindings, first part: Lasm.JS.Node, the server-essential
// Node.js modules that Lasm.JS.Web (tier 1) does not cover. The source is Node's
// own API documentation in its machine-readable form (doc/api/<module>.json, as
// published at https://nodejs.org/dist/v<version>/docs/api/; MIT, the Node.js
// license), pinned below with SHA-256 hashes in node-api.lock.json.
// scripts/bindings/node-api.mjs lowers the members selected here to WebIDL
// (scripts/bindings/node.idl), which scripts/bindings/generate-web.mjs turns into
// library/Lasm/JS/Node/*.lean with the same mapping rules as Lasm.JS.Web
// (docs/JS_BINDINGS.md, "Lasm.JS.Node"). DECISIONS.md says why these docs and not
// @types/node.
//
// Selection. Each `containers` entry names a section of a module's docs by its
// heading (`Promises API`, `Class: \`FileHandle\``) and takes every member of it
// whose stability is 2 (Stable), minus `exclude` (each with the reason), or only
// the members in `only`. Members marked Experimental (1), Deprecated (0) or Legacy
// (3) are never taken. A member's types are the docs' own (`{string|Buffer|URL}`);
// where the docs give a result only in prose (`Fulfills with the contents of the
// file.`), `prose` states it in WebIDL and quotes the sentence it encodes: the
// lowering fails if that sentence is no longer in the member's documentation.

/** The Node.js version whose docs the bindings reflect (the oldest supported Node,
 * Node 24 LTS), and the newer LTS the lowering compares it with (node-api-26.json). */
export const version = '24.22.2';
export const compareVersion = '26.13.0';

/** The doc/api files read. */
export const docs = ['fs', 'path', 'os', 'process', 'buffer', 'crypto', 'child_process', 'events', 'stream', 'net', 'http', 'https'];

/**
 * Lean modules (Lasm.JS.Node.<name>), in import order. A container is
 *   { doc, heading, kind: 'namespace' | 'class', name (the IDL/Lean name: `fsPromises`,
 *     `fs.Stats`), jsModule (the `node:` module it is loaded from), path (the export,
 *     for classes), prefix (how the docs name members: `fsPromises.`, `filehandle.`),
 *     extends, statics: { heading, prefix } (static methods documented elsewhere),
 *     only | exclude }.
 */
export const modules = [
  { name: 'Events', title: 'event emitters', doc: 'events', containers: [
    { kind: 'namespace', heading: 'Events', name: 'events', jsModule: 'node:events', prefix: 'events.', only: ['once'] },
    { kind: 'class', heading: 'Class: `EventEmitter`', name: 'EventEmitter', jsModule: 'node:events', path: 'EventEmitter', prefix: 'emitter.',
      only: ['emit', 'eventNames', 'listenerCount', 'off', 'on', 'once', 'removeAllListeners'] },
  ] },
  { name: 'Stream', title: 'Node streams, as handles converted to and from web streams', doc: 'stream', containers: [
    // The stream classes' events (`'data'`, `'end'`) are the docs' `Class: stream.Readable`'s; every stream is an
    // EventEmitter ("All streams are instances of EventEmitter", stream.md: extendsQuote).
    { kind: 'class', heading: 'Class: `stream.Readable`', name: 'stream.Readable', jsModule: 'node:stream', path: 'Readable', prefix: 'readable.',
      extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' },
      statics: { heading: 'Stream', prefix: 'stream.Readable.' }, only: ['toWeb', 'fromWeb', 'pause', 'resume', 'isPaused', 'destroy', 'setEncoding'] },
    { kind: 'class', heading: 'Class: `stream.Writable`', name: 'stream.Writable', jsModule: 'node:stream', path: 'Writable', prefix: 'writable.',
      extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' },
      statics: { heading: 'Stream', prefix: 'stream.Writable.' }, only: ['toWeb', 'fromWeb', 'write', 'end', 'destroy'] },
    // A Duplex is both; a Lean structure has one parent, its Readable side (stream.Readable.toWeb takes it).
    { kind: 'class', heading: 'Class: `stream.Duplex`', name: 'stream.Duplex', jsModule: 'node:stream', path: 'Duplex', prefix: 'duplex.',
      extends: 'stream.Readable', extendsQuote: { doc: 'stream', quote: 'Duplex streams are streams that implement both the Readable and Writable interfaces.' },
      statics: { heading: 'Stream', prefix: 'stream.Duplex.' }, only: ['toWeb', 'fromWeb'] },
  ] },
  { name: 'Buffer', title: 'character encodings of bytes', doc: 'buffer', containers: [
    // A Buffer is a ByteArray in Lean (a copy, as every Uint8Array): the static
    // methods that make or measure bytes, and the instance methods as functions of
    // the bytes (`Buffer.toString bytes (some "hex")`; the docs: "All methods on the
    // Buffer prototype are callable with a Uint8Array instance").
    { kind: 'bytes', heading: 'Class: `Buffer`', name: 'Buffer', jsModule: 'node:buffer', path: 'Buffer', prefix: 'buf.',
      only: ['alloc', 'byteLength', 'compare', 'concat', 'from(string[, encoding])', 'isEncoding', 'toString', 'equals'] },
    { kind: 'namespace', heading: '`node:buffer` module APIs', name: 'buffer', jsModule: 'node:buffer', prefix: 'buffer.',
      exclude: { atob: 'Legacy (Lasm.JS.Web has atob)', btoa: 'Legacy (Lasm.JS.Web has btoa)',
        resolveObjectURL: 'returns a Blob registered by URL.createObjectURL; the File API binding is Lasm.JS.Web.File',
        INSPECT_MAX_BYTES: 'a setting of util.inspect (settable), not a property of bytes' } },
  ] },
  { name: 'Path', title: 'file paths', doc: 'path', containers: [
    { kind: 'namespace', heading: 'Path', name: 'path', jsModule: 'node:path', prefix: 'path.',
      exclude: { posix: 'the same functions with POSIX rules on every platform: deferred (a second namespace of the same members)',
        win32: 'the same functions with Windows rules on every platform: deferred (a second namespace of the same members)' } },
  ] },
  { name: 'Os', title: 'the operating system', doc: 'os', containers: [
    { kind: 'namespace', heading: 'OS', name: 'os', jsModule: 'node:os', prefix: 'os.', exclude: {} },
  ] },
  { name: 'Process', title: 'the current process', doc: 'process', containers: [
    { kind: 'namespace', heading: 'Process', name: 'process', jsModule: 'node:process', prefix: 'process.',
      only: ['arch', 'argv', 'chdir', 'cwd', 'env', 'execArgv', 'execPath', 'exit', 'exitCode', 'kill', 'memoryUsage', 'pid', 'platform',
        'ppid', 'title', 'uptime', 'version', 'versions'] },
  ] },
  { name: 'Fs', title: 'the file system (promises API)', doc: 'fs', containers: [
    { kind: 'class', heading: 'Class: `fs.Stats`', name: 'fs.Stats', jsModule: 'node:fs', path: 'Stats', prefix: 'stats.', exclude: {} },
    { kind: 'class', heading: 'Class: `fs.Dirent`', name: 'fs.Dirent', jsModule: 'node:fs', path: 'Dirent', prefix: 'dirent.', exclude: {} },
    { kind: 'class', heading: 'Class: `FileHandle`', name: 'FileHandle', jsModule: 'node:fs/promises', path: null, prefix: 'filehandle.',
      exclude: { createReadStream: 'returns an fs.ReadStream (a Node stream class outside this cut); readableWebStream gives a web ReadableStream',
        createWriteStream: 'returns an fs.WriteStream (a Node stream class outside this cut)',
        readLines: 'returns a readline.Interface (outside this cut)',
        readv: 'reads into the caller\'s buffers in place; Lean bytes are copies (use read)',
        writev: 'writes an array of buffers; use write' } },
    { kind: 'namespace', heading: 'Promises API', name: 'fsPromises', jsModule: 'node:fs/promises', prefix: 'fsPromises.',
      exclude: { glob: 'returns an AsyncIterator: async iteration is not mapped (as in Lasm.JS.Web)',
        watch: 'returns an AsyncIterator: async iteration is not mapped (as in Lasm.JS.Web)',
        opendir: 'returns an fs.Dir, iterated asynchronously: async iteration is not mapped (readdir lists a directory)',
        statfs: 'returns an fs.StatFs (outside this cut)',
        mkdtempDisposable: 'returns an async-disposable object (explicit resource management, await using); use mkdtemp and rm' } },
  ] },
  { name: 'Crypto', title: 'hashes, HMACs, random values and key derivation', doc: 'crypto', containers: [
    { kind: 'class', heading: 'Class: `Hash`', name: 'Hash', jsModule: 'node:crypto', path: 'Hash', prefix: 'hash.', exclude: {} },
    { kind: 'class', heading: 'Class: `Hmac`', name: 'Hmac', jsModule: 'node:crypto', path: 'Hmac', prefix: 'hmac.', exclude: {} },
    { kind: 'namespace', heading: '`node:crypto` module methods and properties', name: 'crypto', jsModule: 'node:crypto', prefix: 'crypto.',
      only: ['createHash', 'createHmac', 'getHashes', 'hash', 'hkdf', 'pbkdf2', 'randomBytes', 'randomInt', 'randomUUID', 'scrypt', 'timingSafeEqual'] },
  ] },
  { name: 'ChildProcess', title: 'child processes', doc: 'child_process', containers: [
    { kind: 'class', heading: 'Class: `ChildProcess`', name: 'ChildProcess', jsModule: 'node:child_process', path: 'ChildProcess', prefix: 'subprocess.',
      extends: 'EventEmitter', only: ['exitCode', 'kill', 'killed', 'pid', 'signalCode', 'stderr', 'stdin', 'stdout'] },
    { kind: 'namespace', heading: 'Asynchronous process creation', name: 'child_process', jsModule: 'node:child_process', prefix: 'child_process.',
      only: ['execFile', 'spawn'] },
  ] },
  // node:net, node:http and node:https (added 2026-11-11; DECISIONS.md). Servers, sockets and requests are event
  // emitters: their documented events are typed listeners (`server.onRequest`, docs/JS_BINDINGS.md "Events").
  // A constructor the docs show only as a heading (`new net.Socket([options])`, lost in the JSON) is stated in `ctor`
  // and checked against the class's documented parameters.
  { name: 'Net', title: 'TCP servers and sockets', doc: 'net', containers: [
    { kind: 'class', heading: 'Class: `net.SocketAddress`', name: 'net.SocketAddress', jsModule: 'node:net', path: 'SocketAddress', prefix: 'socketaddress.',
      ctor: 'new net.SocketAddress([options])', exclude: {} },
    { kind: 'class', heading: 'Class: `net.BlockList`', name: 'net.BlockList', jsModule: 'node:net', path: 'BlockList', prefix: 'blockList.',
      ctor: 'new net.BlockList()', exclude: {} },
    { kind: 'class', heading: 'Class: `net.BoundSocket`', name: 'net.BoundSocket', jsModule: 'node:net', path: 'BoundSocket', prefix: 'boundSocket.',
      ctor: 'new net.BoundSocket([options])', exclude: {} },
    { kind: 'class', heading: 'Class: `net.Server`', name: 'net.Server', jsModule: 'node:net', path: 'Server', prefix: 'server.', extends: 'EventEmitter',
      ctor: 'new net.Server([options][, connectionListener])',
      exclude: { 'listen(handle[, backlog][, callback])': 'listens on a libuv handle or file descriptor object ({Object}): the options, path and port forms cover TCP and IPC' } },
    { kind: 'class', heading: 'Class: `net.Socket`', name: 'net.Socket', jsModule: 'node:net', path: 'Socket', prefix: 'socket.', extends: 'stream.Duplex',
      ctor: 'new net.Socket([options])', exclude: {} },
    { kind: 'namespace', heading: 'Net', name: 'net', jsModule: 'node:net', prefix: 'net.', exclude: {} },
  ] },
  { name: 'Http', title: 'HTTP servers and clients', doc: 'http', containers: [
    { kind: 'class', heading: 'Class: `http.Agent`', name: 'http.Agent', jsModule: 'node:http', path: 'Agent', prefix: 'agent.', ctor: 'new Agent([options])', exclude: {} },
    // OutgoingMessage extends the legacy Stream (outside this cut), an EventEmitter; it is not a stream.Writable.
    { kind: 'class', heading: 'Class: `http.OutgoingMessage`', name: 'http.OutgoingMessage', jsModule: 'node:http', path: 'OutgoingMessage', prefix: 'outgoingMessage.',
      extends: 'EventEmitter', extendsQuote: { doc: 'stream', quote: 'All streams are instances of EventEmitter.' },
      exclude: { pipe: 'documented to throw (an OutgoingMessage is write-only)' } },
    { kind: 'class', heading: 'Class: `http.ClientRequest`', name: 'http.ClientRequest', jsModule: 'node:http', path: 'ClientRequest', prefix: 'request.',
      extends: 'http.OutgoingMessage', exclude: {} },
    { kind: 'class', heading: 'Class: `http.ServerResponse`', name: 'http.ServerResponse', jsModule: 'node:http', path: 'ServerResponse', prefix: 'response.',
      extends: 'http.OutgoingMessage', exclude: {} },
    { kind: 'class', heading: 'Class: `http.IncomingMessage`', name: 'http.IncomingMessage', jsModule: 'node:http', path: 'IncomingMessage', prefix: 'message.',
      extends: 'stream.Readable', exclude: {} },
    { kind: 'class', heading: 'Class: `http.Server`', name: 'http.Server', jsModule: 'node:http', path: 'Server', prefix: 'server.', extends: 'net.Server',
      exclude: { listen: 'documented as identical to net.Server\'s server.listen(), whose typed forms http.Server inherits' } },
    { kind: 'namespace', heading: 'HTTP', name: 'http', jsModule: 'node:http', prefix: 'http.', exclude: {} },
  ] },
  { name: 'Https', title: 'HTTPS servers and clients', doc: 'https', containers: [
    { kind: 'class', heading: 'Class: `https.Agent`', name: 'https.Agent', jsModule: 'node:https', path: 'Agent', prefix: 'agent.', ctor: 'new Agent([options])',
      extends: 'http.Agent', extendsQuote: { doc: 'https', quote: 'An Agent object for HTTPS similar to http.Agent.' }, exclude: {} },
    // https.Server extends tls.Server (outside this cut), which extends net.Server; the docs give it http.Server's API
    // ("See http.Server for more information"): its parent here is http.Server, so it has the request events.
    { kind: 'class', heading: 'Class: `https.Server`', name: 'https.Server', jsModule: 'node:https', path: 'Server', prefix: 'server.',
      extends: 'http.Server', extendsQuote: { doc: 'https', quote: 'See http.Server for more information.' },
      exclude: { listen: 'documented as the same as http.Server\'s server.listen(), net.Server\'s typed forms, inherited' } },
    { kind: 'namespace', heading: 'HTTPS', name: 'https', jsModule: 'node:https', prefix: 'https.', exclude: {} },
  ] },
];

/**
 * The docs' type names, as WebIDL. Node classes of this cut are interfaces;
 * Buffer and the typed arrays are bytes; web classes are Lasm.JS.Web's; classes
 * outside this cut are `object` (Data), as tier 1 does for types outside it.
 * A name that is not here fails the lowering.
 */
export const typeNames = {
  string: 'DOMString', integer: 'long long', number: 'double', boolean: 'boolean', bigint: 'bigint', any: 'any', symbol: 'symbol',
  Buffer: 'bytes', TypedArray: 'bytes', DataView: 'bytes', Uint8Array: 'bytes', SharedArrayBuffer: 'bytes', ArrayBuffer: 'ArrayBuffer',
  Function: 'Function', URL: 'URL', AbortSignal: 'AbortSignal', ReadableStream: 'ReadableStream', WritableStream: 'WritableStream',
  CryptoKey: 'CryptoKey', Blob: 'Blob', Headers: 'Headers', Map: 'object',
  FileHandle: 'FileHandle', 'fs.Stats': 'fs.Stats', 'fs.Dirent': 'fs.Dirent', Hash: 'Hash', Hmac: 'Hmac', ChildProcess: 'ChildProcess',
  EventEmitter: 'EventEmitter', 'stream.Readable': 'stream.Readable', 'stream.Writable': 'stream.Writable', 'stream.Duplex': 'stream.Duplex',
  'net.Server': 'net.Server', 'net.Socket': 'net.Socket', 'net.BlockList': 'net.BlockList', 'net.SocketAddress': 'net.SocketAddress', 'net.BoundSocket': 'net.BoundSocket',
  'http.Agent': 'http.Agent', 'http.ClientRequest': 'http.ClientRequest', 'http.IncomingMessage': 'http.IncomingMessage',
  'http.OutgoingMessage': 'http.OutgoingMessage', 'http.ServerResponse': 'http.ServerResponse', 'http.Server': 'http.Server',
  'https.Agent': 'https.Agent', 'https.Server': 'https.Server', Handle: 'object', 'tls.Server': 'object', 'tls.TLSSocket': 'object',
  Object: 'object', Array: 'sequence<any>', Error: 'any', Date: 'object', RegExp: 'object', Iterable: 'object', AsyncIterable: 'object',
  KeyObject: 'object', Stream: 'object', 'fs.ReadStream': 'object', 'fs.WriteStream': 'object', 'fs.Dir': 'object', 'fs.StatFs': 'object',
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
  'socket.connect': { params: { connectListener: 'net.Socket.ConnectListener' }, quote: 'will be added as a listener for the \'connect\' event once.' },
  'net.createConnection': { params: { connectListener: 'net.Socket.ConnectListener' }, quote: 'will be added as a listener for the \'connect\' event once.' },
  'net.connect': { params: { connectListener: 'net.Socket.ConnectListener' }, quoteDoc: true,
    quote: 'If supplied, will be added as a listener for the [\'connect\'][] event on the returned socket once.' },
  'server.address': { returns: '(net.AddressInfo or DOMString)?', quote: 'Returns the bound address, the address family name, and port of the server' },
  'socket.address': { returns: 'net.AddressInfo', quote: 'Returns the bound address, the address family name and port of the socket' },
  'BlockList.isBlockList': { returns: 'boolean', quote: 'Returns true if the value is a net.BlockList.' },
  'https.globalAgent': { returns: 'https.Agent', quote: 'Global instance of https.Agent for all HTTPS client requests.' },
  'server.getConnections': { returns: 'Promise<long long>', quote: 'Callback should take two arguments err and count.' },
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
