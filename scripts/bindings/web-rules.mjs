// Lasm.JS.Web is the whole web platform of the pinned @webref/idl, generated as it is by
// scripts/bindings/generate-web.mjs (docs/JS_BINDINGS.md, "Lasm.JS.Web"; docs/API_DECISIONS.md 0.3-1).
// There is no list of interfaces: this file holds only what the mapping cannot read from the IDL, and the
// few things it cannot generate. Each entry names its decision in docs/API_DECISIONS.md.

/** WebIDL names that would collide with Lasm.JS or Lean names when opened. */
export const renames = { Function: 'JSFunction' };

/** Lean module names that do not follow the mechanical rule (UpperCamel of the spec's shortname). None yet. */
export const moduleNames = {};

/** IDL the specs leave to prose, written here: WebAssembly's error classes (NativeError objects of the JS API spec). */
export const syntheticIdl = `
[LegacyNamespace=WebAssembly, Exposed=*]
interface CompileError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
[LegacyNamespace=WebAssembly, Exposed=*]
interface LinkError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
[LegacyNamespace=WebAssembly, Exposed=*]
interface RuntimeError { constructor(optional DOMString message); readonly attribute DOMString name; readonly attribute DOMString message; };
`;

/** Integer results that some runtimes return as objects with a primitive value (Node's and Bun's timers
 * return Timeout objects; clearTimeout takes their number too): read through JavaScript's Number(…). */
export const numberResults = ['setTimeout', 'setInterval'];

/** Types WebIDL names that are another type to JavaScript code: a WindowProxy is the Window it forwards to. */
export const aliases = { WindowProxy: 'Window' };

/** Operations the specs now type as returning a promise of a dictionary (CSSOM View's ScrollResult) that the
 * engines implement as returning undefined: read as Promise<undefined>, which awaits either (0.3-13). */
export const undefinedPromises = ['Element.scroll', 'Element.scrollTo', 'Element.scrollBy', 'Element.scrollIntoView',
  'Window.scroll', 'Window.scrollTo', 'Window.scrollBy'];

/** Specs not generated: what cannot work from Wasm or through the bridge (docs/API_DECISIONS.md). None. */
export const excludedSpecs = {};
/** Interfaces not generated, each with its reason and decision. None. */
export const excludedInterfaces = {};
/** Members not generated (`Interface.member`), each with its reason and decision. None. */
export const excludedMembers = {};
