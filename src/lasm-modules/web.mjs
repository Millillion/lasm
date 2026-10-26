// lasm:web — the JavaScript side of Lasm.Web (library/Lasm/Web/): helpers that
// turn several web-platform calls into one Lean → JavaScript crossing, and
// per-app bookkeeping (event listeners, timers, animation frames and sockets
// that an app's unmount removes). Web-standard APIs only; outside a browser the
// DOM helpers fail with a message naming the missing global.

const need = (name, what = name) => {
  const value = globalThis[name];
  if (value === undefined) throw new Error(`Lasm.Web: ${what} needs a browser (${name} is not defined here)`);
  return value;
};
const pairs = list => Array.isArray(list) ? list.map(([k, v]) => [String(k), String(v)]) : [];

// Globals
export const window = () => need('window');
export const document = () => need('document');
export const localStorage = () => need('localStorage');
export const sessionStorage = () => need('sessionStorage');
export const location = () => need('location');
export const history = () => need('history');
export const navigator = () => need('navigator');
export const now = () => performance.now();
export const nextFrame = () => new Promise(resolve => need('requestAnimationFrame')(resolve));

// DOM
export const createElement = tag => document().createElement(tag);
export const createElementNS = (ns, tag) => document().createElementNS(ns, tag);
export const createTextNode = text => document().createTextNode(text);
export const createFragment = () => document().createDocumentFragment();
export const getElementById = id => document().getElementById(id);
export const querySelector = (selector, root) => (root ?? document()).querySelector(selector);
export const querySelectorAll = (selector, root) => [...(root ?? document()).querySelectorAll(selector)];
export const children = element => [...element.children];
export const childNodes = node => [...node.childNodes];
export function setAttributes(element, attributes) { for (const [k, v] of pairs(attributes)) element.setAttribute(k, v); }
export function setStyles(element, styles) { for (const [k, v] of pairs(styles)) element.style.setProperty(k, v); }
export const removeStyle = (element, name) => { element.style.removeProperty(name); };
export const classAdd = (element, names) => { element.classList.add(...names); };
export const classRemove = (element, names) => { element.classList.remove(...names); };
export const classToggle = (element, name, force) => force === undefined || force === null ? element.classList.toggle(name) : element.classList.toggle(name, force);
export const classContains = (element, name) => element.classList.contains(name);
export function rect(element) {
  const r = element.getBoundingClientRect();
  return { x: r.x, y: r.y, width: r.width, height: r.height, top: r.top, right: r.right, bottom: r.bottom, left: r.left };
}
export const replaceChildren = (parent, nodes) => { parent.replaceChildren(...nodes); };
export const append = (parent, nodes) => { parent.append(...nodes); };
export const isConnected = node => !!node.isConnected;
// Node and element operations that answer nothing (no handle crosses back).
export const appendChild = (parent, child) => { parent.appendChild(child); };
export const insertBefore = (parent, child, reference) => { parent.insertBefore(child, reference ?? null); };
export const removeChild = (parent, child) => { parent.removeChild(child); };
export const removeNode = node => { node.remove(); };
export const replaceNode = (node, replacement) => { node.replaceWith(replacement); };
export const getText = node => node.textContent ?? '';
export const setText = (node, text) => { node.textContent = text; };
export const parentNode = node => node.parentNode;
export const parentElement = node => node.parentElement;
export const firstChild = node => node.firstChild;
export const lastChild = node => node.lastChild;
export const nextSibling = node => node.nextSibling;
export const previousSibling = node => node.previousSibling;
export const contains = (node, other) => node.contains(other);
export const cloneNode = (node, deep) => node.cloneNode(!!deep);
export const getAttribute = (element, name) => element.getAttribute(name);
export const setAttribute = (element, name, value) => { element.setAttribute(name, value); };
export const removeAttribute = (element, name) => { element.removeAttribute(name); };
export const hasAttribute = (element, name) => element.hasAttribute(name);
export const toggleAttribute = (element, name, force) => force === undefined || force === null ? element.toggleAttribute(name) : element.toggleAttribute(name, force);
export const getProp = (object, name) => object[name];
export const setProp = (object, name, value) => { object[name] = value; };
export const getInnerHTML = element => element.innerHTML;
export const setInnerHTML = (element, html) => { element.innerHTML = html; };
export const getValue = element => typeof element.value === 'string' ? element.value : String(element.value ?? '');
export const setValue = (element, value) => { element.value = value; };
export const getChecked = element => !!element.checked;
export const setChecked = (element, checked) => { element.checked = checked; };
export const focus = element => { element.focus(); };
export const blur = element => { element.blur(); };
export const click = element => { element.click(); };
export const scrollIntoView = (element, smooth) => { element.scrollIntoView(smooth ? { behavior: 'smooth' } : undefined); };
export const style = (element, name) => element.style.getPropertyValue(name);
export const nodeName = node => node.nodeName;
export const tagName = element => element.tagName;

// Events: one crossing for the fields a handler usually reads.
export function eventInfo(event) {
  const t = event.target;
  return {
    type: event.type, key: event.key ?? '', code: event.code ?? '', keyRepeat: !!event.repeat,
    altKey: !!event.altKey, ctrlKey: !!event.ctrlKey, metaKey: !!event.metaKey, shiftKey: !!event.shiftKey,
    clientX: event.clientX ?? 0, clientY: event.clientY ?? 0, pageX: event.pageX ?? 0, pageY: event.pageY ?? 0,
    offsetX: event.offsetX ?? 0, offsetY: event.offsetY ?? 0, button: event.button ?? 0, buttons: event.buttons ?? 0,
    deltaX: event.deltaX ?? 0, deltaY: event.deltaY ?? 0,
    value: t && 'value' in t && typeof t.value === 'string' ? t.value : '', checked: !!(t && t.checked),
    timeStamp: event.timeStamp ?? 0,
  };
}
export const targetValue = event => { const t = event.target; return t && typeof t.value === 'string' ? t.value : ''; };
export const targetChecked = event => !!event.target?.checked;
export const createEvent = (type, bubbles, cancelable) => new Event(type, { bubbles, cancelable });
export const createCustomEvent = (type, detail, bubbles, cancelable) => new CustomEvent(type, { detail, bubbles, cancelable });
export const dispatchEvent = (target, event) => target.dispatchEvent(event);

// Fetch
function requestInit(init) {
  if (!init || typeof init !== 'object') return {};
  const result = {};
  for (const key of ['method', 'mode', 'credentials', 'cache', 'redirect', 'referrer', 'referrerPolicy', 'integrity', 'priority'])
    if (typeof init[key] === 'string' && init[key]) result[key] = init[key];
  if (typeof init.keepalive === 'boolean') result.keepalive = init.keepalive;
  if (Array.isArray(init.headers)) result.headers = pairs(init.headers);
  if (init.body !== undefined && init.body !== null) result.body = init.body;
  if (init.signal) result.signal = init.signal;
  return result;
}
export const fetch = (url, init) => globalThis.fetch(url, requestInit(init));
export function responseInfo(response) {
  return { status: response.status, statusText: response.statusText, ok: response.ok, url: response.url,
    redirected: response.redirected, type: response.type, headers: [...response.headers] };
}
export const responseText = response => response.text();
export const responseJson = response => response.json();
export const responseBytes = async response => new Uint8Array(await response.arrayBuffer());
export const abortController = () => new AbortController();
export const abortSignal = controller => controller.signal;
export const abort = (controller, reason) => { controller.abort(reason ?? undefined); };
export const timeoutSignal = ms => AbortSignal.timeout(ms);

// URL
export function parseUrl(url, base) {
  let u;
  try { u = base ? new URL(url, base) : new URL(url); } catch { return null; }
  return { href: u.href, origin: u.origin, protocol: u.protocol, username: u.username, password: u.password, host: u.host,
    hostname: u.hostname, port: u.port, pathname: u.pathname, search: u.search, hash: u.hash, params: [...u.searchParams] };
}
export const searchParams = init => new URLSearchParams(typeof init === 'string' ? init : pairs(init));
export const paramsEntries = params => [...params];
export const encodeURIComponent = text => globalThis.encodeURIComponent(text);
export const decodeURIComponent = text => globalThis.decodeURIComponent(text);

// FormData
export const formData = form => form ? new FormData(form) : new FormData();
export function formEntries(data) {
  return [...data].map(([k, v]) => [k, typeof v === 'string' ? v : { name: v.name, size: v.size, type: v.type, file: v }]);
}
export const formAppend = (data, name, value) => { data.append(name, value); };
export const formAppendBytes = (data, name, bytes, filename, type) => { data.append(name, new Blob([bytes], { type: type || 'application/octet-stream' }), filename); };
export const blobBytes = async blob => new Uint8Array(await blob.arrayBuffer());

// Crypto
export function randomBytes(n) {
  const out = new Uint8Array(n);
  for (let i = 0; i < n; i += 65536) crypto.getRandomValues(out.subarray(i, Math.min(n, i + 65536)));
  return out;
}
export const randomUUID = () => crypto.randomUUID();
export const digest = async (algorithm, bytes) => new Uint8Array(await crypto.subtle.digest(algorithm, bytes));

// Console
export function log(level, args) {
  const method = ['log', 'info', 'warn', 'error', 'debug'].includes(level) ? level : 'log';
  console[method](...args);
}

// Canvas 2D
export const context2d = (canvas, alpha) => canvas.getContext('2d', alpha === false ? { alpha: false } : undefined);
const drawOps = {
  fillStyle: (c, v) => { c.fillStyle = v; }, strokeStyle: (c, v) => { c.strokeStyle = v; }, lineWidth: (c, v) => { c.lineWidth = v; },
  font: (c, v) => { c.font = v; }, textAlign: (c, v) => { c.textAlign = v; }, textBaseline: (c, v) => { c.textBaseline = v; },
  globalAlpha: (c, v) => { c.globalAlpha = v; }, lineCap: (c, v) => { c.lineCap = v; }, lineJoin: (c, v) => { c.lineJoin = v; },
  fillRect: (c, x, y, w, h) => c.fillRect(x, y, w, h), strokeRect: (c, x, y, w, h) => c.strokeRect(x, y, w, h),
  clearRect: (c, x, y, w, h) => c.clearRect(x, y, w, h), beginPath: c => c.beginPath(), closePath: c => c.closePath(),
  moveTo: (c, x, y) => c.moveTo(x, y), lineTo: (c, x, y) => c.lineTo(x, y), rect: (c, x, y, w, h) => c.rect(x, y, w, h),
  arc: (c, x, y, r, a, b, ccw) => c.arc(x, y, r, a, b, !!ccw), quadraticCurveTo: (c, a, b, x, y) => c.quadraticCurveTo(a, b, x, y),
  bezierCurveTo: (c, a, b, d, e, x, y) => c.bezierCurveTo(a, b, d, e, x, y), fill: c => c.fill(), stroke: c => c.stroke(),
  fillText: (c, t, x, y) => c.fillText(t, x, y), strokeText: (c, t, x, y) => c.strokeText(t, x, y),
  save: c => c.save(), restore: c => c.restore(), translate: (c, x, y) => c.translate(x, y), rotate: (c, a) => c.rotate(a),
  scale: (c, x, y) => c.scale(x, y), setTransform: (c, a, b, d, e, f, g) => c.setTransform(a, b, d, e, f, g), resetTransform: c => c.resetTransform(),
  drawImage: (c, image, x, y) => c.drawImage(image, x, y), drawImageScaled: (c, image, x, y, w, h) => c.drawImage(image, x, y, w, h),
};
/** Runs drawing commands [name, ...arguments] in one crossing. */
export function draw(context, commands) {
  for (const [name, ...args] of commands) {
    const op = drawOps[name];
    if (!op) throw new Error(`Lasm.Web.Canvas: unknown drawing command ${JSON.stringify(name)}`);
    op(context, ...args);
  }
}
export const measureText = (context, text) => { const m = context.measureText(text); return { width: m.width, ascent: m.actualBoundingBoxAscent ?? 0, descent: m.actualBoundingBoxDescent ?? 0 }; };
export const imageData = (context, x, y, w, h) => new Uint8Array(context.getImageData(x, y, w, h).data.buffer);
export const putImageData = (context, bytes, x, y, w, h) => { context.putImageData(new ImageData(new Uint8ClampedArray(bytes.buffer, bytes.byteOffset, bytes.length), w, h), x, y); };

// WebSocket message data: text, or bytes for binary frames.
export const messageData = event => typeof event.data === 'string' ? event.data : event.data instanceof ArrayBuffer ? new Uint8Array(event.data) : event.data;
export const closeInfo = event => ({ code: event.code ?? 0, reason: event.reason ?? '', wasClean: !!event.wasClean });

// Per-app bookkeeping. The stand-ins below act globally (no app to unmount).
const shared = createTracking({ onDispose() {} });
export const listen = shared.listen;
export const unlisten = shared.unlisten;
export const setTimeout = shared.setTimeout;
export const clearTimeout = shared.clearTimeout;
export const setInterval = shared.setInterval;
export const clearInterval = shared.clearInterval;
export const requestAnimationFrame = shared.requestAnimationFrame;
export const cancelAnimationFrame = shared.cancelAnimationFrame;
export const queueMicrotask = shared.queueMicrotask;
export const webSocket = shared.webSocket;

function createTracking(context) {
  const listeners = new Set(), timeouts = new Map(), intervals = new Map(), frames = new Set(), sockets = new Set();
  let nextTimer = 1;
  let disposed = false;
  const report = error => (context.report ?? console.error)(error);
  // A Lean callback throwing must not break the page's own dispatch: report it.
  const guarded = fn => (...args) => {
    if (disposed) return undefined;
    try {
      const result = fn(...args);
      if (result && typeof result.then === 'function') result.then(undefined, report);
      return result;
    } catch (error) { report(error); return undefined; }
  };
  context.onDispose(() => {
    disposed = true;
    for (const l of listeners) l.target.removeEventListener(l.type, l.handler, l.options);
    for (const handle of timeouts.values()) globalThis.clearTimeout(handle);
    for (const handle of intervals.values()) globalThis.clearInterval(handle);
    for (const id of frames) globalThis.cancelAnimationFrame?.(id);
    for (const socket of sockets) { try { socket.close(1001, 'app unmounted'); } catch { /* already closed */ } }
    listeners.clear(); timeouts.clear(); intervals.clear(); frames.clear(); sockets.clear();
  });
  return {
    listen(target, type, fn, options) {
      const opts = options && typeof options === 'object' ? { capture: !!options.capture, passive: !!options.passive, once: !!options.once } : undefined;
      const entry = { target, type, options: opts };
      entry.handler = guarded(event => { if (opts?.once) listeners.delete(entry); return fn(event); });
      target.addEventListener(type, entry.handler, opts);
      listeners.add(entry);
      return { remove() { if (listeners.delete(entry)) target.removeEventListener(type, entry.handler, opts); } };
    },
    unlisten(handle) { handle?.remove?.(); },
    // Timers get numeric ids of their own on every host (Node's setTimeout returns an object).
    setTimeout(fn, ms) {
      const id = nextTimer++;
      timeouts.set(id, globalThis.setTimeout(() => { timeouts.delete(id); guarded(fn)(); }, ms));
      return id;
    },
    clearTimeout(id) { globalThis.clearTimeout(timeouts.get(id)); timeouts.delete(id); },
    setInterval(fn, ms) { const id = nextTimer++; intervals.set(id, globalThis.setInterval(guarded(fn), ms)); return id; },
    clearInterval(id) { globalThis.clearInterval(intervals.get(id)); intervals.delete(id); },
    requestAnimationFrame(fn) {
      const raf = need('requestAnimationFrame', 'requestAnimationFrame');
      const id = raf(time => { frames.delete(id); guarded(fn)(time); });
      frames.add(id); return id;
    },
    cancelAnimationFrame(id) { frames.delete(id); globalThis.cancelAnimationFrame?.(id); },
    queueMicrotask(fn) { globalThis.queueMicrotask(guarded(fn)); },
    webSocket(url, protocols, binaryType) {
      const socket = protocols && protocols.length ? new WebSocket(url, protocols) : new WebSocket(url);
      socket.binaryType = binaryType || 'arraybuffer';
      sockets.add(socket);
      socket.addEventListener('close', () => sockets.delete(socket));
      return socket;
    },
  };
}

/** Each mounted app gets its own bookkeeping, removed when it unmounts. */
export function lasmInstance(context) {
  const self = { ...helpers, ...createTracking(context) };
  delete self.lasmInstance;
  return self;
}
const helpers = {
  window, document, localStorage, sessionStorage, location, history, navigator, now, nextFrame, createElement, createElementNS, createTextNode,
  createFragment, getElementById, querySelector, querySelectorAll, children, childNodes, setAttributes, setStyles, removeStyle, classAdd,
  classRemove, classToggle, classContains, rect, replaceChildren, append, isConnected, appendChild, insertBefore, removeChild, removeNode,
  replaceNode, getText, setText, parentNode, parentElement, firstChild, lastChild, nextSibling, previousSibling, contains, cloneNode,
  getAttribute, setAttribute, removeAttribute, hasAttribute, toggleAttribute, getProp, setProp, getInnerHTML, setInnerHTML, getValue,
  setValue, getChecked, setChecked, focus, blur, click, scrollIntoView, style, nodeName, tagName, eventInfo, targetValue,
  targetChecked, createEvent, createCustomEvent, dispatchEvent, fetch, responseInfo, responseText, responseJson, responseBytes,
  abortController, abortSignal, abort, timeoutSignal, parseUrl, searchParams, paramsEntries, encodeURIComponent, decodeURIComponent,
  formData, formEntries, formAppend, formAppendBytes, blobBytes, randomBytes, randomUUID, digest, log, context2d, draw, measureText,
  imageData, putImageData, messageData, closeInfo,
};
