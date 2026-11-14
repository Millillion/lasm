// Synthetic initialization plans for the glue's measurements and smoke test.

/** A plan shaped like a real one: `n` initializers, each calling up to 10 later ones, `k` kept. */
export function syntheticPlan(n, k) {
  const closure = Array.from({ length: n }, (_, i) => `initialize_Mod${i}_X`), calls = {};
  for (let i = 0; i < n; i++) {
    const called = [];
    for (let j = 0; j < 10; j++) { const t = i + 1 + (j * 7919 + i * 31) % n; if (t < n) called.push(closure[t]); }
    calls[closure[i]] = called;
  }
  return { schema: 1, closure, keep: Array.from({ length: k }, (_, i) => closure[i * Math.floor(n / k)]), calls };
}

/** A core module of `size` bytes or so: the header and one custom section of bytes. */
export function syntheticCore(size) {
  const payload = Math.max(0, size - 8 - 6), leb = [];
  for (let n = payload + 2; ; ) { const b = n & 0x7f; n = Math.floor(n / 128); leb.push(n ? b | 0x80 : b); if (!n) break; }
  const core = new Uint8Array(8 + 1 + leb.length + 2 + payload);
  core.set([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, 0, ...leb, 1, 0x70], 0);
  for (let i = 8 + 1 + leb.length + 2; i < core.length; i++) core[i] = (i * 31) & 0xff;
  return core;
}
