// Cloudflare Workers entry of the pure-Lean prototype (Phase 7.1). Every
// request calls the Lean handler that `main` registered as globalThis.lasmFetch.
// START=global starts Lean at module evaluation (counted against the 1 s
// startup limit, not a request's CPU time); otherwise on the first request.
// An instance that stopped (stack exhaustion, …) is replaced on the next request.
import { env } from 'cloudflare:workers';
import wasmModule from '../build/program.wasm';
import createProgram from '../build/program.mjs';
import { startLean } from '../../../../src/edge/edge-start.mjs';

const strings = Object.fromEntries(Object.entries(env).filter(([, v]) => typeof v === 'string'));
const jspi = env.JSPI !== '0';
let ready, startupMs, instances = 0;
const start = () => {
  if (ready && globalThis.lasmModule?.lasmEdge.stopped) ready = undefined;
  return ready ??= (async () => {
    const t = performance.now();
    globalThis.lasmModule = await startLean({ createProgram, wasmModule, env: strings, jspi });
    startupMs = performance.now() - t; instances++;
  })();
};
if (env.START === 'global') await start();

export default {
  async fetch(request) {
    await start();
    const url = new URL(request.url);
    if (url.pathname === '/__startup')
      return Response.json({ startupMs, start: env.START ?? 'request', instances, wasmMemoryMiB: globalThis.lasmModule.HEAPU8.length / 1048576 });
    if (url.pathname === '/__bench') {
      const n = Number(url.searchParams.get('n') ?? 1000), path = url.searchParams.get('path') ?? '/';
      await globalThis.lasmFetch('GET', path, '');
      const t = performance.now();
      for (let i = 0; i < n; i++) await globalThis.lasmFetch('GET', path, '');
      return Response.json({ path, n, msPerCall: (performance.now() - t) / n });
    }
    const body = request.method === 'GET' || request.method === 'HEAD' ? '' : await request.text();
    try {
      const [status, text] = await globalThis.lasmFetch(request.method, url.pathname, body);
      return new Response(text, { status, headers: { 'content-type': 'application/json' } });
    } catch (error) {
      return Response.json({ error: String(error?.message ?? error), stopped: !!globalThis.lasmModule.lasmEdge.stopped }, { status: 500 });
    }
  },
};
