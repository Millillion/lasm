// The Worker of test/fixtures/js-cloudflare: Lasm's generated entry (workers/worker.mjs,
// `lasm build Main.lean --target workers`), whose default export serves the Lean
// program's handler (fetch, scheduled and queue), and a Durable Object class. Lean
// does not define JavaScript classes, so the class is written here and its methods
// call Lean functions that Main.lean publishes on globalThis (docs/JS_BINDINGS.md,
// "Cloudflare Workers: Lasm.JS.Cloudflare").
import { DurableObject } from 'cloudflare:workers';
import worker from './workers/worker.mjs';

export default worker;

const lean = name => {
  const f = globalThis[name];
  if (typeof f !== 'function') throw new Error(`the Lean program did not publish ${name}`);
  return f;
};

export class LeanObject extends DurableObject {
  async fetch(request) {
    return lean('lasmDurableObjectFetch')(request, this.ctx, this.env);
  }
  // setAlarm needs an alarm handler on the class.
  async alarm() {
    return lean('lasmDurableObjectAlarm')(this.ctx, this.env);
  }
}
