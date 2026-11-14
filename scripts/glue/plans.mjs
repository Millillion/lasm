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
