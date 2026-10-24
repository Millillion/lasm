// Cloudflare Workers entry of the Hono prototype (Phase 7.1): a Hono app whose
// routes are Lean functions (Lasm.JS). Lean starts once per isolate at module
// evaluation; `main` builds the app and publishes it as globalThis.lasmApp, and
// the Worker's fetch is the app's. JavaScript modules the Lean code uses are
// imported statically here (Workers cannot load modules at run time).
import { env } from 'cloudflare:workers';
import * as hono from 'hono';
import wasmModule from '../build/program.wasm';
import createProgram from '../build/program.mjs';
import { startLean } from '../../../runtime/edge-start.mjs';

const strings = Object.fromEntries(Object.entries(env).filter(([, v]) => typeof v === 'string'));
await startLean({ createProgram, wasmModule, env: strings, modules: { hono } });
const app = globalThis.lasmApp;

export default {
  async fetch(request, env, ctx) {
    const url = new URL(request.url);
    if (url.pathname === '/__bench') {
      const n = Number(url.searchParams.get('n') ?? 1000), path = url.searchParams.get('path') ?? '/';
      const make = () => new Request('http://local' + path);
      await (await app.fetch(make(), env, ctx)).text();
      const t = performance.now();
      for (let i = 0; i < n; i++) await (await app.fetch(make(), env, ctx)).text();
      return Response.json({ path, n, msPerRequest: (performance.now() - t) / n });
    }
    return app.fetch(request, env, ctx);
  },
};
