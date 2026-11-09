// src/dev.mjs as browser-dev.mjs sees it in test/dev-run.test.mjs: the real
// module, with a watcher the test triggers itself (state.watchers).
const state = globalThis.__lasmDevStandIn ??= { calls: [], services: [], servers: [], watchers: [] };
export * from '../../../src/dev.mjs';
export function watchProject(directory, onEvent) {
  const watcher = { directory, onEvent, closed: false, mode: 'events', close() { watcher.closed = true; } };
  state.watchers.push(watcher);
  return watcher;
}
