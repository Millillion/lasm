// Stands in for the koffi package in tests that load native adapters
// in-process: each property is read from globalThis.__lasmKoffiStandIn, which
// the test sets to a scripted libc before importing the adapter.
module.exports = new Proxy({}, {
  get(_, key) {
    const current = globalThis.__lasmKoffiStandIn;
    if (!current) throw new Error('No koffi stand-in installed');
    return current[key];
  },
});
