// Cloudflare Workers entry of the pure-Lean prototype (Phase 7.1). Every
// request calls the Lean handler that `main` registered as globalThis.lasmFetch.
// START=global starts Lean at module evaluation (counted against the 1 s startup
// limit); otherwise it starts on the first request.
import { env } from 'cloudflare:workers';
import wasmModule from '../build/program.wasm';
import createProgram from '../build/program.mjs';
import { startLean } from '../../../runtime/edge-start.mjs';

const strings = Object.fromEntries(Object.entries(env).filter(([, v]) => typeof v === 'string'));
const jspi = env.JSPI !== '0';
let ready, startupMs;
const start = () => ready ??= (async () => {
  const t = Date.now();
  await startLean({ createProgram, wasmModule, env: strings, jspi });
  startupMs = Date.now() - t;
})();
if (env.START === 'global') {
  await start();
}

export default {
  async fetch(request) {
    await start();
    const url = new URL(request.url);
    if (url.pathname === '/__startup') return Response.json({ startupMs, start: env.START ?? 'request' });
    // Measurement: run the Lean handler n times for `path` inside this isolate
    // (local workerd advances its clock during a request; production does not).
    if (url.pathname === '/__bench') {
      const n = Number(url.searchParams.get('n') ?? 1000), path = url.searchParams.get('path') ?? '/';
      const method = url.searchParams.get('method') ?? 'GET', body = url.searchParams.get('body') ?? '';
      await globalThis.lasmFetch(method, path, body);
      const t = performance.now();
      for (let i = 0; i < n; i++) await globalThis.lasmFetch(method, path, body);
      return Response.json({ path, n, msPerCall: (performance.now() - t) / n });
    }
    const body = request.method === 'GET' || request.method === 'HEAD' ? '' : await request.text();
    const [status, text] = await globalThis.lasmFetch(request.method, url.pathname, body);
    return new Response(text, { status, headers: { 'content-type': 'application/json' } });
  },
};
