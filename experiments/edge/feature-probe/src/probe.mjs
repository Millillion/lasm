export async function probe(mods) {
  const out = { Suspending: typeof WebAssembly.Suspending, promising: typeof WebAssembly.promising, SAB: typeof SharedArrayBuffer, Tag: typeof WebAssembly.Tag };
  for (const [n, mod] of Object.entries(mods)) {
    try {
      const m = mod instanceof WebAssembly.Module ? mod : await WebAssembly.compile(mod);
      if (n === 'jspi') {
        if (typeof WebAssembly.Suspending !== 'function') { out[n] = 'compiled; no Suspending'; continue; }
        const inst = await WebAssembly.instantiate(m, { m: { f: new WebAssembly.Suspending(async () => { await new Promise(r => setTimeout(r, 5)); return 42; }) } });
        out[n] = 'result ' + await WebAssembly.promising(inst.exports.g)();
      } else if (n === 'shared') { out[n] = 'compiled'; await WebAssembly.instantiate(m); out[n]='instantiated'; }
      else out[n] = 'compiled';
    } catch (e) { out[n] = 'ERR ' + e.message; }
  }
  return out;
}
