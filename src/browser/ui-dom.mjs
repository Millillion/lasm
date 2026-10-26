// lasm:ui-dom — the browser side of Lasm.UI (docs/UI.md, docs/BROWSER.md
// "Patch protocol"). It applies the binary patches Lean's diff writes
// (library/Lasm/UI/Encode.lean), keeps the id → node table, delegates events to
// the mount root (one synchronous call into Lean per event, carrying only the
// fields each handler's decoder declared), batches renders on animation
// frames, adopts server-rendered DOM (hydrate), and performs the commands and
// subscriptions Lean asks for. One instance per mounted app:
//
//   const ui = createUi({ root, flags, hydrate })
//   modules['lasm:ui-dom'] = ui.module      // what Lean's App.run requires
//   ui.ready                                // resolves after the first frame
//   ui.ports.name.send(v) / .subscribe(f)   ui.send(v)   ui.unmount()
const NS = [, 'http://www.w3.org/1999/xhtml', 'http://www.w3.org/2000/svg', 'http://www.w3.org/1998/Math/MathML'];
const decoder = new TextDecoder();

export function createUi({ root, flags = null, hydrate = false, window: win = root.ownerDocument.defaultView ?? globalThis } = {}) {
  const doc = root.ownerDocument;
  const nodes = new Map([[0, root]]);
  const names = [], decoders = [];
  const listening = new Set();
  const subs = new Map();
  const portSubscribers = new Map(), portIn = new Map();
  let lean = null, pending = false, stopped = false, hydrating = hydrate, focusQueue = [];
  let readyResolve, readyReject;
  const ready = new Promise((resolve, reject) => { readyResolve = resolve; readyReject = reject; });
  const raf = win.requestAnimationFrame ? f => win.requestAnimationFrame(f) : f => setTimeout(() => f(performance.now()), 16);
  const cancelRaf = win.cancelAnimationFrame ? h => win.cancelAnimationFrame(h) : h => clearTimeout(h);

  // ---- patches ----
  let bytes = null, p = 0;
  function v() {
    let x = bytes[p++];
    if (x < 128) return x;
    x &= 127;
    for (let shift = 128; ; shift *= 128) {
      const b = bytes[p++];
      x += (b & 127) * shift;
      if (b < 128) return x;
    }
  }
  function str() {
    const n = v(), end = p + n;
    if (n < 24) {
      let s = '';
      for (let i = p; i < end; i++) {
        const c = bytes[i];
        if (c > 127) { s = decoder.decode(bytes.subarray(p, end)); break; }
        s += String.fromCharCode(c);
      }
      p = end;
      return s;
    }
    const s = decoder.decode(bytes.subarray(p, end));
    p = end;
    return s;
  }
  function name() {
    const x = v();
    if (x > 1) return names[x - 2];
    const s = str();
    if (x === 0) names.push(s);
    return s;
  }
  // Attribute ops 0–5 (set) and 8–11 (remove) on element n.
  function attr(n, k) {
    switch (k) {
    case 0: { const a = name(); n.setAttribute(a, str()); return; }
    case 1: { const a = name(), s = str(); if (n[a] !== s) n[a] = s; return; }
    case 2: { const a = name(); if (n[a] !== false) n[a] = false; return; }
    case 3: { const a = name(); if (n[a] !== true) n[a] = true; return; }
    case 4: { const a = name(); n.style.setProperty(a, str()); return; }
    case 5: { const e = name(), d = v(), f = v(); (n.$l ??= Object.create(null))[e] = d * 4 + f; listen(e); return; }
    case 8: n.removeAttribute(name()); return;
    case 9: { const a = name(), t = typeof n[a]; n[a] = t === 'boolean' ? false : t === 'number' ? 0 : ''; return; }
    case 10: n.style.removeProperty(name()); return;
    case 11: { const e = name(); if (n.$l) delete n.$l[e]; return; }
    default: throw new Error(`Lasm.UI: bad attribute op ${k}`);
    }
  }
  // A node from the stream (created, or adopted from `existing` when hydrating).
  function node(existing) {
    const kind = bytes[p++], id = v();
    let n;
    if (kind === 0) {
      const s = str();
      if (existing && existing.nodeType === 3) { n = existing; if (n.data !== s) n.data = s; }
      else n = doc.createTextNode(s);
    } else {
      const tag = name();
      const adopt = existing && existing.nodeType === 1 && existing.localName === tag && existing.namespaceURI === NS[kind];
      n = adopt ? existing : kind === 1 ? doc.createElement(tag) : doc.createElementNS(NS[kind], tag);
      for (let c = v(); c > 0; c--) attr(n, bytes[p++]);
      let count = v();
      if (adopt) {
        let cur = n.firstChild;
        for (; count > 0; count--) {
          while (cur && cur.nodeType === 8) { const next = cur.nextSibling; cur.remove(); cur = next; }
          const c = node(cur);
          if (c === cur) cur = cur.nextSibling;
          else n.insertBefore(c, cur);
        }
        while (cur) { const next = cur.nextSibling; cur.remove(); cur = next; }
      } else for (; count > 0; count--) n.appendChild(node(null));
    }
    n.$i = id;
    nodes.set(id, n);
    return n;
  }
  function forget(n) {
    nodes.delete(n.$i);
    for (let c = n.firstChild; c; c = c.nextSibling) forget(c);
  }
  const at = id => { const n = nodes.get(id); if (!n) throw new Error(`Lasm.UI: no node ${id}`); return n; };
  function apply(frame) {
    bytes = frame; p = 0;
    // Hydration: the first frame's inserts under the root adopt its children in order.
    let cursor = hydrating ? root.firstChild : null;
    while (p < bytes.length) {
      switch (bytes[p++]) {
      case 1: {
        const parent = at(v()), b = v();
        if (hydrating && parent === root && b === 0) {
          while (cursor && cursor.nodeType === 8) { const next = cursor.nextSibling; cursor.remove(); cursor = next; }
          const n = node(cursor);
          if (n === cursor) cursor = cursor.nextSibling; else root.insertBefore(n, cursor);
        } else {
          const n = node(null);
          parent.insertBefore(n, b ? at(b - 1) : null);
        }
        break;
      }
      case 2: { const parent = at(v()), n = at(v()), b = v(); parent.insertBefore(n, b ? at(b - 1) : null); break; }
      case 3: { const n = at(v()); forget(n); n.remove(); break; }
      case 4: { const parent = at(v()); for (let c = parent.firstChild; c; c = c.nextSibling) forget(c); parent.textContent = ''; break; }
      case 5: { const n = at(v()); n.data = str(); break; }
      case 6: { const n = at(v()); for (let c = v(); c > 0; c--) attr(n, bytes[p++]); break; }
      case 7: {
        const d = v(), paths = [];
        for (let c = v(); c > 0; c--) { const path = []; for (let k = v(); k > 0; k--) path.push(str()); paths.push(path); }
        decoders[d] = paths;
        break;
      }
      default: throw new Error(`Lasm.UI: bad patch op ${bytes[p - 1]} at byte ${p - 1}`);
      }
    }
    if (hydrating) {
      while (cursor) { const next = cursor.nextSibling; cursor.remove(); cursor = next; }
      hydrating = false;
    }
    bytes = null;
    if (focusQueue.length) {
      const queue = focusQueue; focusQueue = [];
      for (const [id, blur] of queue) { const el = doc.getElementById(id); if (el) blur ? el.blur() : el.focus(); }
    }
  }

  // ---- frames ----
  function frame() {
    pending = false;
    if (stopped) return;
    const patch = lean.frame();
    if (patch.length) apply(patch);
  }
  function schedule() { if (!pending && !stopped) { pending = true; raf(frame); } }
  const after = needsFrame => { if (needsFrame) schedule(); };

  // ---- events ----
  const prim = x => x === null || typeof x === 'string' || typeof x === 'number' || typeof x === 'boolean' ? x : undefined;
  function read(event, current, paths) {
    const out = new Array(paths.length);
    for (let i = 0; i < paths.length; i++) {
      const path = paths[i];
      let x = path[0] === 'currentTarget' ? current : event[path[0]];
      for (let j = 1; j < path.length && x != null; j++) x = x[path[j]];
      out[i] = prim(x);
    }
    return out;
  }
  function onEvent(event) {
    if (stopped || !lean) return;
    const chain = [];
    let n = event.target;
    for (; n && n !== root; n = n.parentNode) if (n.$i !== undefined) chain.push(n);
    if (n !== root || !chain.length) return;
    const type = event.type, calls = [];
    const limit = event.bubbles ? chain.length : chain[0] === event.target ? 1 : 0;
    for (let i = 0; i < limit; i++) {
      const el = chain[i], l = el.$l && el.$l[type];
      if (l === undefined) continue;
      if (l & 1) event.preventDefault();
      calls.push(chain.length - 1 - i, read(event, el, decoders[l >> 2]));
      if (l & 2) { event.stopPropagation(); break; }
    }
    if (!calls.length) return;
    const path = new Array(chain.length);
    for (let i = 0; i < chain.length; i++) path[i] = chain[chain.length - 1 - i].$i;
    after(lean.event(path, type, calls));
  }
  function listen(type) {
    if (listening.has(type)) return;
    listening.add(type);
    root.addEventListener(type, onEvent, true);
  }

  // ---- navigation ----
  const urlChanged = () => { if (lean) after(lean.url(win.location.href)); };
  function onLinkClick(event) {
    if (event.defaultPrevented || event.button !== 0 || event.metaKey || event.ctrlKey || event.shiftKey || event.altKey) return;
    const a = event.target.closest?.('a[href]');
    if (!a || !root.contains(a) || (a.target && a.target !== '_self') || a.hasAttribute('download')) return;
    const url = new URL(a.href, win.location.href);
    if (url.origin !== win.location.origin) return;
    event.preventDefault();
    if (url.href !== win.location.href) { win.history.pushState(null, '', url.href); urlChanged(); }
  }

  // ---- ports ----
  const port = portName => {
    let pt = portIn.get(portName);
    if (!pt) {
      pt = {
        send(value) { const ids = [...subs].filter(([, s]) => s.port === portName).map(([id]) => id); for (const id of ids) fire(id, [value]); },
        subscribe(f) { (portSubscribers.get(portName) ?? portSubscribers.set(portName, new Set()).get(portName)).add(f); },
        unsubscribe(f) { portSubscribers.get(portName)?.delete(f); },
      };
      portIn.set(portName, pt);
    }
    return pt;
  };
  const ports = new Proxy({}, { get: (_, key) => typeof key === 'string' ? port(key) : undefined });

  // ---- subscriptions ----
  const fire = (id, values) => { if (!stopped && lean && subs.has(id)) after(lean.sub(id, values)); };
  function subscribe(id, spec) {
    const [kind] = spec;
    const sub = { stop: () => {} };
    switch (kind) {
    case 'every': { const t = setInterval(() => fire(id, [Date.now()]), spec[1]); sub.stop = () => clearInterval(t); break; }
    case 'frame': {
      let h;
      const loop = ts => { h = raf(loop); fire(id, [ts]); };
      h = raf(loop);
      sub.stop = () => cancelRaf(h);
      break;
    }
    case 'window': case 'document': {
      const target = kind === 'window' ? win : doc, [, type, paths, pd, sp] = spec;
      const handler = event => { if (pd) event.preventDefault(); if (sp) event.stopPropagation(); fire(id, read(event, target, paths)); };
      target.addEventListener(type, handler);
      sub.stop = () => target.removeEventListener(type, handler);
      break;
    }
    case 'port': sub.port = spec[1]; break;
    default: throw new Error(`Lasm.UI: unknown subscription ${kind}`);
    }
    subs.set(id, sub);
  }

  const storage = which => which === 'session' ? win.sessionStorage : win.localStorage;
  const module = {
    options: () => ({ flags, url: win.location?.href ?? 'http://localhost/', hydrate }),
    connect(callbacks) {
      lean = callbacks;
      if (callbacks.application) {
        root.addEventListener('click', onLinkClick);
        win.addEventListener('popstate', urlChanged);
      }
    },
    apply(frameBytes) { if (frameBytes.length) apply(frameBytes); readyResolve(); },
    schedule,
    error(message) { console.error(`[lasm:ui] ${message}`); },
    sub: subscribe,
    unsub(id) { subs.get(id)?.stop(); subs.delete(id); },
    timeout(ms, f) { setTimeout(() => { if (!stopped) after(f()); }, ms); },
    http(method, url, headers, body, credentials, f) {
      win.fetch(url, { method, headers, body: body ?? undefined, credentials })
        .then(async r => [true, r.status, r.statusText, [...r.headers], await r.text()], e => [false, String(e?.message ?? e)])
        .then(result => { if (!stopped) after(f(...result)); });
    },
    now: () => Date.now(),
    navigate(url, replace) {
      win.history[replace ? 'replaceState' : 'pushState'](null, '', new URL(url, win.location.href).href);
      urlChanged();
    },
    go(n) { win.history.go(n); },
    load(url) { win.location.assign(url); },
    storageSet(which, key, value) { try { storage(which).setItem(key, value); } catch { /* storage unavailable */ } },
    storageRemove(which, key) { try { storage(which).removeItem(key); } catch { /* storage unavailable */ } },
    storageGet(which, key) { try { return storage(which).getItem(key); } catch { return null; } },
    focus(id, blur) { if (pending) focusQueue.push([id, blur]); else { const el = doc.getElementById(id); if (el) blur ? el.blur() : el.focus(); } },
    portOut(portName, value) { for (const f of portSubscribers.get(portName) ?? []) f(value); },
    title(t) { doc.title = t; },
  };
  return {
    module, ready, ports,
    fail: readyReject,
    send(value) { if (lean) after(lean.receive(value)); },
    unmount() {
      stopped = true;
      for (const s of subs.values()) s.stop();
      subs.clear();
      for (const type of listening) root.removeEventListener(type, onEvent, true);
      root.removeEventListener('click', onLinkClick);
      win.removeEventListener('popstate', urlChanged);
      for (let c = root.firstChild; c; c = c.nextSibling) forget(c);
      root.textContent = '';
    },
    // For tests and tools.
    stats: () => ({ nodes: nodes.size - 1, names: names.length, decoders: decoders.length }),
    applyForTest: apply,
  };
}
