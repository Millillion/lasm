// The program side of a simulation whose world runs in another process
// (docs/TESTING.md#deterministic-simulation-of-the-example-apps): an app's
// Sim.lean built for Cloudflare Workers or a browser runs in that engine (local
// workerd, a headless browser), while its world (test/dst/world.mjs, on
// scripts/sim) runs in Node, where it has node:sqlite. remote-host.mjs is the
// Node side.
//
// `installRemoteWorld(send)` puts `globalThis.lasmSimWorld` in the engine: a
// stand-in for the world whose every method call is sent to Node as text
// (`send(text)` resolves with the answer) and returns a promise of the result;
// objects that are not plain data (the world's SQL store) come back as
// stand-ins too. Each answer carries the world's clock, which becomes
// `Date.now` in the engine, as `Date.now` is the world's clock on Node. The
// program awaits every call (`Obj.call` in Sim.lean), one at a time, so the
// world sees the same calls in the same order as on Node and a seed's trace
// is the same on every target.
//
// No imports: installRemoteWorld is also sent to browsers as source text, and
// the Worker bundles this file.

/** Installs `globalThis.lasmSimWorld`; `send(text)` is the transport to Node. */
export function installRemoteWorld(send) {
  const REF = Symbol('lasm.sim.ref');
  const plain = v => { const p = Object.getPrototypeOf(v); return p === Object.prototype || p === null; };
  const encode = v => {
    if (v === undefined) return { $: 'u' };
    if (typeof v === 'bigint') return { $: 'b', v: String(v) };
    if (typeof v === 'number') return Number.isFinite(v) && !Object.is(v, -0) ? v : { $: 'n', v: String(Object.is(v, -0) ? '-0' : v) };
    if (v === null || typeof v !== 'object') return v;
    if (v[REF] !== undefined) return { $: 'r', v: v[REF] };
    if (ArrayBuffer.isView(v)) return { $: 'y', v: Array.from(new Uint8Array(v.buffer, v.byteOffset, v.byteLength)) };
    if (Array.isArray(v)) return v.map(encode);
    if (!plain(v)) throw new Error(`the simulation cannot send ${Object.prototype.toString.call(v)} to the world`);
    return { $: 'o', v: Object.entries(v).map(([k, x]) => [k, encode(x)]) };
  };
  const proxies = new Map();
  const decode = v => {
    if (Array.isArray(v)) return v.map(decode);
    if (v === null || typeof v !== 'object') return v;
    switch (v.$) {
      case 'u': return undefined;
      case 'b': return BigInt(v.v);
      case 'n': return v.v === '-0' ? -0 : Number(v.v);
      case 'y': return Uint8Array.from(v.v);
      case 'r': return proxy(v.v);
      case 'o': return Object.fromEntries(v.v.map(([k, x]) => [k, decode(x)]));
      default: throw new Error(`unknown value from the world: ${JSON.stringify(v).slice(0, 80)}`);
    }
  };
  const call = async (id, name, args) => {
    const reply = JSON.parse(await send(JSON.stringify({ t: id, n: name, a: args.map(encode) })));
    const now = reply.now;
    Date.now = () => now;
    if (reply.e) {
      const error = new Error(reply.e.message);
      error.name = reply.e.name;
      throw error;
    }
    return decode(reply.v);
  };
  // `then` is undefined, so that a promise resolving to a stand-in does not
  // take it for a promise.
  const proxy = id => {
    if (!proxies.has(id)) proxies.set(id, new Proxy({}, {
      get: (_, key) => key === REF ? id : typeof key === 'string' && key !== 'then' ? (...args) => call(id, key, args) : undefined,
    }));
    return proxies.get(id);
  };
  globalThis.lasmSimWorld = proxy(0);
}

/**
The world's side (in Node): `answer(text)` runs one call of the program's
(`{t, n, a}`: the object's id, 0 being the world, the method and the
arguments) and resolves with `{v, now}` or `{e, now}` as text. Objects that
are not plain data go to the program as ids; `exitCode` is the world's exit
status once the program asked for it.
*/
export function worldHost(world) {
  const objects = [world];
  const ids = new Map([[world, 0]]);
  const plain = v => { const p = Object.getPrototypeOf(v); return p === Object.prototype || p === null; };
  const encode = v => {
    if (v === undefined) return { $: 'u' };
    if (typeof v === 'bigint') return { $: 'b', v: String(v) };
    if (typeof v === 'number') return Number.isFinite(v) && !Object.is(v, -0) ? v : { $: 'n', v: String(Object.is(v, -0) ? '-0' : v) };
    if (v === null || typeof v !== 'object' && typeof v !== 'function') return v;
    if (ArrayBuffer.isView(v)) return { $: 'y', v: Array.from(new Uint8Array(v.buffer, v.byteOffset, v.byteLength)) };
    if (Array.isArray(v)) return v.map(encode);
    if (typeof v === 'function' || !plain(v)) {
      if (!ids.has(v)) { ids.set(v, objects.length); objects.push(v); }
      return { $: 'r', v: ids.get(v) };
    }
    return { $: 'o', v: Object.entries(v).map(([k, x]) => [k, encode(x)]) };
  };
  const decode = v => {
    if (Array.isArray(v)) return v.map(decode);
    if (v === null || typeof v !== 'object') return v;
    switch (v.$) {
      case 'u': return undefined;
      case 'b': return BigInt(v.v);
      case 'n': return v.v === '-0' ? -0 : Number(v.v);
      case 'y': return Uint8Array.from(v.v);
      case 'r': return objects[v.v];
      case 'o': return Object.fromEntries(v.v.map(([k, x]) => [k, decode(x)]));
      default: throw new Error(`unknown value from the program: ${JSON.stringify(v).slice(0, 80)}`);
    }
  };
  const host = {
    exitCode: null,
    async answer(text) {
      const { t, n, a } = JSON.parse(text);
      try {
        const target = objects[t];
        if (typeof target?.[n] !== 'function') throw new TypeError(`the world has no method ${n}`);
        const v = await target[n](...a.map(decode));
        if (t === 0 && n === 'exitCode') host.exitCode = Number(v);
        return JSON.stringify({ v: encode(v), now: Date.now() });
      } catch (e) {
        return JSON.stringify({ e: { name: e?.name ?? 'Error', message: String(e?.message ?? e) }, now: Date.now() });
      }
    },
  };
  return host;
}

/**
The Worker that runs a simulation (remote-host.mjs writes an entry module
`export default serveRemoteWorld(lean)`, `lean` being Lasm's generated
worker.mjs): a WebSocket request connects the world; then the program's
handler (Sim.lean's `exportDefault`) runs every seed, its calls to the world
going over the socket as `{i, q}` and the answers coming back as `{i, r}`.
At the end it sends `{done: exit status}` (or `{error}`) and closes.
*/
export function serveRemoteWorld(lean) {
  return {
    async fetch(request, env, ctx) {
      if (request.headers.get('upgrade') !== 'websocket')
        return new Response('A simulation runs over a WebSocket (scripts/sim/remote-host.mjs).\n', { status: 426 });
      const [client, server] = Object.values(new WebSocketPair());
      server.accept();
      const pending = new Map();
      let next = 0;
      server.addEventListener('message', event => {
        const m = JSON.parse(event.data);
        const resolve = pending.get(m.i);
        pending.delete(m.i);
        resolve?.(m.r);
      });
      installRemoteWorld(text => new Promise(resolve => {
        const i = next++;
        pending.set(i, resolve);
        server.send(JSON.stringify({ i, q: text }));
      }));
      const run = Promise.resolve()
        .then(() => lean.fetch(new Request('https://sim.invalid/'), env, ctx))
        .then(code => server.send(JSON.stringify({ done: Number(code) })),
          e => server.send(JSON.stringify({ error: String(e?.stack ?? e) })))
        .finally(() => server.close(1000, 'done'));
      ctx.waitUntil(run);
      return new Response(null, { status: 101, webSocket: client });
    },
  };
}
