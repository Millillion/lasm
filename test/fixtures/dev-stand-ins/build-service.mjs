// A stand-in for src/dev-build-service.mjs (test/dev-run.test.mjs): builds are
// answered by globalThis.__lasmDevStandIn.build(call), recorded in .calls.
const state = globalThis.__lasmDevStandIn ??= { calls: [], services: [], servers: [], watchers: [] };
export function createBuildService(options = {}) {
  const service = {
    options, workers: Math.max(1, options.workers ?? 1), closed: false,
    async build(file, buildOptions, extra = {}) {
      const call = { file, options: buildOptions, ...extra, started: performance.now() };
      state.calls.push(call);
      try { return await state.build(call); } finally { call.finished = performance.now(); }
    },
    async close() { service.closed = true; },
  };
  state.services.push(service);
  return service;
}
