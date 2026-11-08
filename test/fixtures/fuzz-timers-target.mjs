// A fuzz target that queues a timer per run, as ui-patch's decoder does
// (test/fuzz-replay.test.mjs): it fails once timers from earlier runs pile up,
// which they did while the worker never let the event loop turn (issue #160).
export const sources = [];
let pending = 0;
export function run() {
  if (pending > 100) throw new Error(`${pending} timers from earlier runs never fired`);
  pending++;
  setTimeout(() => { pending--; }, 0);
}
