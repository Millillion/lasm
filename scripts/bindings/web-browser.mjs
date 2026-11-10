// The browser tier of Lasm.JS.Web: the web APIs of a page (the DOM, the HTML
// elements Lasm programs use, the window, location, history and storage,
// user-interface events, canvas 2D and WebSocket), generated from the same
// pinned @webref/idl as tier 1 (scripts/bindings/web-tier1.mjs) by
// scripts/bindings/generate-web.mjs. They replace the hand-written Lasm.Web
// (docs/JS_BINDINGS.md, "The browser tier").
//
// The modules come after tier 1's and may use its types (EventTarget, Event,
// Blob, File, FormData, AbortSignal); tier 1 never sees a browser type (a
// browser interface named by a tier-1 member stays `Value`/`Data` there, so a
// server program importing tier 1 links nothing of the DOM). Members are those
// exposed to `Window` (tier 1 takes those exposed to workers). Supporting types
// go to the first module (in this order) that uses them; an interface's parent
// interface must be selected too (`structure HTMLInputElement extends HTMLElement`).

/** The specs (shortnames of @webref/idl files) read whole for this tier, beside tier 1's. */
export const specs = ['cssom', 'cssom-view', 'geometry', 'uievents', 'pointerevents', 'websockets'];

export const modules = [
  { name: 'Geometry', title: 'rectangles', specs: 'Geometry Interfaces',
    interfaces: ['DOMRectReadOnly', 'DOMRect', 'DOMRectList'] },
  { name: 'Css', title: 'style declarations and media queries', specs: 'CSSOM; CSSOM View',
    interfaces: ['CSSStyleDeclaration', 'CSSStyleProperties', 'MediaQueryList', 'MediaQueryListEvent'] },
  { name: 'Html', title: 'the document, its nodes and elements, and the window', specs: 'DOM Standard; HTML Standard; CSSOM View; File API (FileList)',
    interfaces: ['Node', 'Document', 'DocumentType', 'DocumentFragment', 'ShadowRoot', 'Element', 'Attr', 'NamedNodeMap',
      'CharacterData', 'Text', 'Comment', 'NodeList', 'HTMLCollection', 'DOMTokenList', 'DOMStringMap',
      'MutationObserver', 'MutationRecord',
      'HTMLElement', 'HTMLAnchorElement', 'HTMLButtonElement', 'HTMLDialogElement', 'HTMLDivElement', 'HTMLFormElement', 'HTMLHeadElement',
      'HTMLImageElement', 'HTMLInputElement', 'HTMLLabelElement', 'HTMLOptionElement', 'HTMLSelectElement',
      'HTMLTemplateElement', 'HTMLTextAreaElement', 'HTMLFormControlsCollection', 'HTMLOptionsCollection', 'RadioNodeList',
      'ValidityState', 'FileList',
      'Window', 'Location', 'History', 'Storage'],
    windowGlobals: ['window', 'document', 'location', 'history', 'localStorage', 'sessionStorage',
      'requestAnimationFrame', 'cancelAnimationFrame', 'getComputedStyle', 'matchMedia'] },
  { name: 'UiEvents', title: 'user-interface and page events', specs: 'UI Events; Pointer Events; CSSOM View; HTML Standard',
    interfaces: ['UIEvent', 'MouseEvent', 'WheelEvent', 'KeyboardEvent', 'InputEvent', 'FocusEvent', 'CompositionEvent', 'PointerEvent',
      'SubmitEvent', 'HashChangeEvent', 'PopStateEvent', 'StorageEvent'] },
  { name: 'Canvas', title: 'the canvas element and its 2D context', specs: 'HTML Standard',
    interfaces: ['HTMLCanvasElement', 'CanvasRenderingContext2D', 'CanvasGradient', 'CanvasPattern', 'Path2D', 'TextMetrics', 'ImageData'] },
  { name: 'WebSocket', title: 'WebSocket connections', specs: 'WebSockets Standard',
    interfaces: ['WebSocket', 'CloseEvent'] },
];

/** Mixins whose members tier 1 already generates as globals (`setTimeout`, `fetch`, `crypto`): not repeated on Window. */
export const excludeMixins = { Window: ['WindowOrWorkerGlobalScope'] };

/** Types WebIDL names that are another type to JavaScript code: a WindowProxy is the Window it forwards to. */
export const aliases = { WindowProxy: 'Window' };

/** Event handler IDL attributes (`onclick`, `onmessage`) are not generated in this tier: `addEventListener` does the same. */
export const eventHandlerTypes = ['EventHandler', 'OnErrorEventHandler', 'OnBeforeUnloadEventHandler'];
