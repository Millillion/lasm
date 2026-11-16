// A project file of test/fixtures/js-core, bound with @[js "./ffi/files.mjs" …].
import { greet } from './lib/helper.mjs';

export function twice(n) { return 2 * n; }

export function greeting(name) { return greet(name); }

export class Box {
  constructor(value) { this.value = value; }
}

// Lasm.JS.Class.define's class, used as JavaScript code would.
export function useClass(C) {
  const c = new C('boom', 5);
  c.increment();
  c.increment(2);
  return [C.name, C.kind, c instanceof C, c instanceof Error, c.message, c.count, c.double];
}
