const r = {};
try { r.math = Math.random(); } catch (e) { r.math = 'ERR ' + e.message; }
try { r.crypto = crypto.getRandomValues(new Uint8Array(2)).join(','); } catch (e) { r.crypto = 'ERR ' + e.message.slice(0, 40); }
try { r.uuid = crypto.randomUUID(); } catch (e) { r.uuid = 'ERR ' + e.message.slice(0, 40); }
r.now = Date.now(); r.perf = performance.now();
export default { async fetch() { return Response.json({ global: r, request: { math: Math.random(), now: Date.now(), perf: performance.now() } }); } };
