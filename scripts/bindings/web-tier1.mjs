// Tier 1 of Lasm.JS.Web: the WinterTC Minimum Common Web API
// (https://min-common-api.proposal.wintertc.org/, draft of 31 July 2026; the
// 2025 snapshot is its first edition), the web APIs every JavaScript target
// Lasm supports has. scripts/bindings/generate-web.mjs reads this list and the
// WebIDL of the pinned @webref/idl, and writes library/Lasm/JS/Web/*.lean.
//
// Each module is one spec area. `interfaces` are taken whole (with their
// mixins and the partials of the specs listed here); `globals` are members of
// the WindowOrWorkerGlobalScope mixin; `namespaces` are taken whole;
// `extraTypes` are dictionaries and enums that no member names but that the
// spec's prose takes through `object` arguments (the algorithm dictionaries of
// Web Crypto, the underlying source, sink and transformer of Streams).
// Supporting types (dictionaries, enums, unions, callbacks) go to the first
// module (in this order) that uses them.

/** The specs (shortnames of @webref/idl files) whose IDL is read, with partials merged. */
export const specs = ['dom', 'html', 'webidl', 'fetch', 'xhr', 'FileAPI', 'compression', 'streams', 'encoding',
  'url', 'urlpattern', 'webcrypto', 'hr-time', 'wasm-js-api', 'wasm-web-api', 'console'];

export const modules = [
  { name: 'Dom', title: 'events and aborting', specs: 'DOM Standard; Web IDL (DOMException)',
    interfaces: ['EventTarget', 'Event', 'CustomEvent', 'AbortController', 'AbortSignal', 'DOMException'] },
  { name: 'Messaging', title: 'message channels and the HTML event interfaces', specs: 'HTML Standard',
    interfaces: ['MessageChannel', 'MessagePort', 'MessageEvent', 'ErrorEvent', 'PromiseRejectionEvent'] },
  { name: 'Streams', title: 'readable, writable and transform streams', specs: 'Streams Standard',
    interfaces: ['ReadableStream', 'ReadableStreamDefaultReader', 'ReadableStreamBYOBReader', 'ReadableStreamDefaultController',
      'ReadableByteStreamController', 'ReadableStreamBYOBRequest', 'WritableStream', 'WritableStreamDefaultWriter',
      'WritableStreamDefaultController', 'TransformStream', 'TransformStreamDefaultController',
      'ByteLengthQueuingStrategy', 'CountQueuingStrategy'],
    extraTypes: ['UnderlyingSource', 'UnderlyingSink', 'Transformer'] },
  { name: 'File', title: 'blobs and files', specs: 'File API', interfaces: ['Blob', 'File'] },
  { name: 'Encoding', title: 'text encoding and decoding', specs: 'Encoding Standard',
    interfaces: ['TextEncoder', 'TextDecoder', 'TextEncoderStream', 'TextDecoderStream'] },
  { name: 'Compression', title: 'compression streams', specs: 'Compression Standard',
    interfaces: ['CompressionStream', 'DecompressionStream'] },
  { name: 'Url', title: 'URLs, query strings and URL patterns', specs: 'URL Standard; URL Pattern Standard',
    interfaces: ['URL', 'URLSearchParams', 'URLPattern'] },
  { name: 'Fetch', title: 'fetch, requests, responses, headers and form data', specs: 'Fetch Standard; XMLHttpRequest Standard (FormData)',
    interfaces: ['Headers', 'Request', 'Response', 'FormData'], globals: ['fetch'] },
  { name: 'Crypto', title: 'random values and Web Crypto', specs: 'Web Cryptography API',
    interfaces: ['Crypto', 'CryptoKey', 'SubtleCrypto'], globals: ['crypto'],
    extraTypes: ['Algorithm', 'KeyAlgorithm', 'KeyFormat', 'KeyUsage', 'RsaKeyGenParams', 'RsaHashedKeyGenParams', 'RsaKeyAlgorithm',
      'RsaHashedKeyAlgorithm', 'RsaHashedImportParams', 'RsaPssParams', 'RsaOaepParams', 'EcdsaParams', 'EcKeyGenParams',
      'EcKeyAlgorithm', 'EcKeyImportParams', 'EcdhKeyDeriveParams', 'AesCtrParams', 'AesKeyAlgorithm', 'AesKeyGenParams',
      'AesDerivedKeyParams', 'AesCbcParams', 'AesGcmParams', 'HmacImportParams', 'HmacKeyAlgorithm', 'HmacKeyGenParams',
      'HkdfParams', 'Pbkdf2Params'] },
  { name: 'Performance', title: 'high-resolution time', specs: 'High Resolution Time',
    interfaces: ['Performance'], globals: ['performance'] },
  { name: 'Timers', title: 'timers and microtasks', specs: 'HTML Standard',
    globals: ['setTimeout', 'clearTimeout', 'setInterval', 'clearInterval', 'queueMicrotask'] },
  { name: 'Global', title: 'base64, structured cloning, error reporting and the user agent', specs: 'HTML Standard',
    interfaces: ['Navigator'], globals: ['atob', 'btoa', 'structuredClone', 'reportError', 'navigator'] },
  { name: 'Console', title: 'the console', specs: 'Console Standard', namespaces: ['console'] },
  { name: 'Wasm', title: 'the WebAssembly JavaScript interface', specs: 'WebAssembly JavaScript Interface; WebAssembly Web API',
    namespaces: ['WebAssembly'],
    interfaces: ['WebAssembly.Module', 'WebAssembly.Instance', 'WebAssembly.Memory', 'WebAssembly.Table', 'WebAssembly.Global',
      'WebAssembly.Tag', 'WebAssembly.Exception', 'WebAssembly.CompileError', 'WebAssembly.LinkError', 'WebAssembly.RuntimeError'] },
];

/** Interfaces whose members are restricted to this list (the Minimum Common API
 * names only `navigator.userAgent` of Navigator). */
export const memberFilter = { Navigator: ['userAgent'] };

/** IDL the specs leave to prose, written here (documented in docs/JS_BINDINGS.md):
 * the global `navigator` (on Window and WorkerGlobalScope rather than the mixin),
 * and WebAssembly's error classes (NativeError objects of the JS API spec). */
export const syntheticIdl = `
partial interface mixin WindowOrWorkerGlobalScope {
  readonly attribute Navigator navigator;
};
[LegacyNamespace=WebAssembly, Exposed=*]
interface CompileError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
[LegacyNamespace=WebAssembly, Exposed=*]
interface LinkError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
[LegacyNamespace=WebAssembly, Exposed=*]
interface RuntimeError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
`;

/** The Minimum Common API's global names that are not generated, and why (docs/JS_BINDINGS.md). */
export const notGenerated = {
  globalThis: 'Lasm.JS.global',
  self: 'Lasm.JS.global (self is the global object)',
  onerror: 'global event handler attributes; the global object is an EventTarget only in browsers',
  onunhandledrejection: 'global event handler attributes; the global object is an EventTarget only in browsers',
  onrejectionhandled: 'global event handler attributes; the global object is an EventTarget only in browsers',
};

/** WebIDL names that would collide with Lasm.JS or Lean names when opened. */
export const renames = { Function: 'JSFunction' };

/** Integer results that some runtimes return as objects with a primitive value
 * (Node's and Bun's timers return Timeout objects; clearTimeout takes their
 * number too): read through JavaScript's Number(…), one more host call. */
export const numberResults = ['setTimeout', 'setInterval'];
