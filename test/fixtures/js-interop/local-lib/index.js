// A local npm package for the Lasm.JS fixture (CommonJS, no registry access).
class Counter {
  constructor(start) { this.value = start; }
  add(n) { this.value += n; return this.value; }
}
module.exports = {
  greet: name => `hello, ${name}`,
  sum: (...xs) => xs.reduce((a, b) => a + b, 0),
  later: (value, ms) => new Promise(resolve => setTimeout(() => resolve(value), ms)),
  fail: async message => { throw new RangeError(message); },
  Counter,
  nested: { deep: { answer: () => 42 } },
  config: { name: 'fixture', tags: ['a', 'b'], limits: { max: 3 } },
  // Calls a Lean callback synchronously n times and collects the results.
  mapSync: (xs, f) => xs.map(x => f(x)),
  // Calls an asynchronous Lean callback and awaits it.
  applyAsync: async (f, x) => await f(x),
};
