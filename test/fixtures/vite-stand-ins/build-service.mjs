// A stand-in for src/dev-build-service.mjs as the Vite plugin sees it (test/vite-plugin.test.mjs).
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
const state = globalThis.__lasmViteStandIn ??= { services: [], builds: [] };
export function createBuildService(options) {
  const service = { options, closed: false,
    async build(file, buildOptions, extra) {
      state.builds.push({ file, options: buildOptions, target: extra.target });
      extra.onLog('worker log');
      if (state.fail) throw state.fail;
      mkdirSync(buildOptions.output, { recursive: true });
      writeFileSync(join(buildOptions.output, 'app.0123456789ab.js'), 'export const name = "app";\n');
      writeFileSync(join(buildOptions.output, 'lasm-manifest.json'), JSON.stringify({ entry: 'app.0123456789ab.js' }));
    },
    close() { service.closed = true; } };
  state.services.push(service);
  return service;
}
