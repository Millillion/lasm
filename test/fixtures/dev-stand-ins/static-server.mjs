// src/browser/static-server.mjs as browser-dev.mjs sees it in test/dev-run.test.mjs:
// the real server, recorded so that the test can close it; a requested port is
// recorded and replaced by `state.port` when set (0: any free port).
import * as real from '../../../src/browser/static-server.mjs';
const state = globalThis.__lasmDevStandIn ??= { calls: [], services: [], servers: [], watchers: [] };
export * from '../../../src/browser/static-server.mjs';
export async function startStaticServer(root, options) {
  state.serverOptions = options;
  const server = await real.startStaticServer(root, { ...options, ...(state.port !== undefined ? { port: state.port } : {}) });
  state.servers.push(server);
  return server;
}
