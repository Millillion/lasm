// Stand-ins for the build workers' imports (test/build-workers.test.mjs):
// node:worker_threads, the build, managed artifacts, the edge targets and the CLI.
export const state = globalThis.__lasmWorkerStandIn ??= { trusted: 0 };
// node:worker_threads (live bindings: each test sets its own port and data).
export let parentPort = null;
export let workerData = null;
export function reset(data) {
  const port = { messages: [], handlers: [], closed: false,
    on(event, fn) { if (event === 'message') port.handlers.push(fn); },
    postMessage(message) { port.messages.push(structuredClone(message)); },
    send(message) { return Promise.all(port.handlers.map(fn => fn(message))); } };
  parentPort = port;
  workerData = data;
  return port;
}
// src/application-build.mjs
export const buildApplication = (input, options) => state.buildApplication(input, options);
// src/managed-artifacts.mjs
export function trustVerifiedTreesForSession() { state.trusted++; }
// src/edge/edge-build.mjs
export const edgeTargets = { workers: { label: 'Cloudflare Workers' } };
// src/application-cli.mjs
export const buildEdge = (...args) => state.buildEdge(...args);
