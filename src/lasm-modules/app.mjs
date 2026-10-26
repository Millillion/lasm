// lasm:app — the app instance a Lean program runs as (Lasm.Web.App). The
// browser loader (lasm build --target browser) gives every mounted app its own
// instance (lasmInstance): the element it is mounted on, the flags passed to
// mount, its ports and its message handler. Builds for other targets get one
// instance with no element. Web-standard JavaScript only.

const unavailable = what => () => { throw new Error(`Lasm.Web.App: ${what} is only available in an app mounted by the browser loader (lasm build --target browser)`); };
// The stand-in that Lasm's binding check (and a direct import) sees: the same exports.
export const root = unavailable('the root element');
export const flags = () => undefined;
export const hydrating = () => false;
export const target = () => 'none';
export const port = unavailable('ports');
export const onMessage = unavailable('messages');
export const onUnmount = unavailable('onUnmount');
export const report = error => console.error(error);
export const hotState = () => undefined;
export const onHotSave = () => {};

/** One app instance. context (src/edge/edge-start.mjs): { target, root, flags,
 * hydrate, onDispose(fn), report(error) }; it also receives `app`, the
 * embedder's side (deliver, ports) that mount() returns to JavaScript. */
export function lasmInstance(context) {
  let handler = null, hotSave = null;
  const inbox = [];
  const unmountHandlers = [];
  const ports = new Map();
  let disposed = false;
  const settle = (value) => Promise.resolve(value);
  function makePort(name) {
    let port = ports.get(name);
    if (port) return port;
    // Lean → JavaScript: subscribers. JavaScript → Lean: Lean handlers (queued until one exists).
    const subscribers = new Set(), handlers = [], queued = [];
    port = {
      name,
      // Lean side
      emit(value) { for (const fn of [...subscribers]) { try { fn(value); } catch (error) { context.report?.(error); } } },
      listen(fn) { handlers.push(fn); for (const value of queued.splice(0)) fn(value); },
      // JavaScript side
      js: Object.freeze({
        send(value) {
          if (disposed) throw new Error(`Lasm app port ${name}: the app is unmounted`);
          if (!handlers.length) { queued.push(value); return settle(undefined); }
          return Promise.all(handlers.map(fn => fn(value))).then(() => undefined);
        },
        subscribe(fn) {
          if (typeof fn !== 'function') throw new TypeError(`Lasm app port ${name}: subscribe needs a function`);
          subscribers.add(fn);
          return () => subscribers.delete(fn);
        },
        unsubscribe(fn) { subscribers.delete(fn); },
      }),
    };
    ports.set(name, port);
    return port;
  }
  context.onDispose?.(() => {
    disposed = true;
    for (const fn of unmountHandlers.splice(0).reverse()) { try { fn(); } catch (error) { context.report?.(error); } }
  });
  const app = {
    // What mount() hands to JavaScript.
    /** The state Lean saves for a hot reload (Lasm.Web.App.onHotSave), if any. */
    hotSave() { return hotSave ? hotSave() : undefined; },
    deliver(message) {
      if (disposed) return Promise.reject(new Error('The Lasm app is unmounted'));
      if (!handler) { return new Promise((resolve, reject) => inbox.push({ message, resolve, reject })); }
      return settle(handler(message)).then(() => undefined);
    },
    ports: new Proxy({}, {
      get: (_, name) => typeof name === 'string' ? makePort(name).js : undefined,
      has: (_, name) => ports.has(name),
      ownKeys: () => [...ports.keys()],
      getOwnPropertyDescriptor: (_, name) => ports.has(name) ? { enumerable: true, configurable: true, value: ports.get(name).js } : undefined,
    }),
  };
  context.app = app;
  return {
    root: () => {
      if (!context.root) throw new Error('Lasm.Web.App.root: this app has no root element (it was not started by mount in a browser)');
      return context.root;
    },
    flags: () => context.flags,
    hydrating: () => !!context.hydrate,
    target: () => context.target ?? 'none',
    port: name => { const p = makePort(String(name)); return { emit: value => p.emit(value), listen: fn => p.listen(fn) }; },
    onMessage: fn => {
      handler = fn;
      for (const { message, resolve, reject } of inbox.splice(0)) settle(fn(message)).then(() => resolve(undefined), reject);
    },
    onUnmount: fn => { unmountHandlers.push(fn); },
    report: error => (context.report ?? console.error)(error),
    // Hot reload (@lasm/vite): the state the previous instance saved, and the saver.
    hotState: () => context.hotState,
    onHotSave: fn => { hotSave = fn; },
  };
}
