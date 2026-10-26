// `lasm dev`'s build service (src/dev-build-service.mjs): one long-lived
// worker builds every change, so loaded modules, verified tools and in-memory
// caches carry over between rebuilds. One build at a time.
import { parentPort } from 'node:worker_threads';
import { buildApplication } from './application-build.mjs';
import { trustVerifiedTreesForSession } from './managed-artifacts.mjs';

trustVerifiedTreesForSession();
parentPort.on('message', async ({ id, file, options, target }) => {
  const progress = event => parentPort.postMessage({ id, type: 'progress', event });
  const log = text => parentPort.postMessage({ id, type: 'log', text });
  const build = (input, buildOptions) => buildApplication(input, { ...buildOptions, log, progress });
  try {
    let result;
    const { edgeTargets } = await import('./edge/edge-build.mjs');
    if (edgeTargets[target] || target === 'browser') {
      const { buildEdge } = await import('./application-cli.mjs');
      let node;
      const { suspend, bundler, ...buildOptions } = options;
      const output = await buildEdge(file, target, buildOptions, options.verbose, { build: async (input, nodeOptions) => (node = await build(input, nodeOptions)), log,
        browserSuspend: suspend ?? 'none', bundler: !!bundler });
      result = { ...node, edgeOutput: output, linkWork: undefined };
    } else result = await build(file, options);
    parentPort.postMessage({ id, type: 'result', result });
  } catch (error) {
    parentPort.postMessage({ id, type: 'failure', error: {
      name: error.name, message: error.message, stack: error.stack, code: error.code,
      stderr: error.stderr?.toString(), stdout: error.stdout?.toString(),
    } });
  }
});
