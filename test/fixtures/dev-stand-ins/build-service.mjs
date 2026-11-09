// A stand-in for src/dev-build-service.mjs (test/dev-run.test.mjs): builds are
// answered by globalThis.__lasmDevStandIn.build(call), recorded in .calls.
const state = globalThis.__lasmDevStandIn ??= { calls: [], services: [], servers: [], watchers: [] };
export function createBuildService(options = {}) {
  const service = {
    options, workers: Math.max(1, options.workers ?? 1), closed: false,
    async build(file, buildOptions, extra = {}) {
      const call = { file, options: buildOptions, ...extra };
      state.calls.push(call);
      return state.build(call);
    },
    async close() { service.closed = true; },
  };
  state.services.push(service);
  return service;
}
