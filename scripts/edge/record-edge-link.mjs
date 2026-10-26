// Records one edge link with emcc for scripts/edge/derive-edge-recipe.mjs:
// EMCC_DEBUG=1 with EMCC_TEMP_DIR=REC/temp (emcc keeps every intermediate
// there), the link's arguments in REC/out/link-args.json, and emcc's debug log
// in REC/emcc.log.
//   node scripts/edge/record-edge-link.mjs LINK_WORK EDGE_RUNTIME_DIR NODE_RUNTIME_BUNDLE REC [--suspend jspi|asyncify]
// LINK_WORK: a build's kept link directory (LASM_KEEP_LINK_WORK=1). Needs the
// managed Emscripten SDK (CI only: the recipe is derived in supabase-edge.yml).
import { readFileSync, writeFileSync, mkdirSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { createHash } from 'node:crypto';
import { parseArgs } from 'node:util';
import { linkEdgeProgram } from '../../src/edge/edge-link.mjs';
import { edgeRuntime } from '../../src/edge/edge-runtime.mjs';
import { applicationRuntime } from '../../src/application-runtime.mjs';
import { provisionSdk } from '../../src/managed-sdk.mjs';
import { toolchainCatalog } from '../../src/managed-lean.mjs';

const { values: options, positionals } = parseArgs({ allowPositionals: true, options: { suspend: { type: 'string', default: 'jspi' } } });
const [work, edgeDirectory, nodeBundle, rec] = positionals.map(p => resolve(p));
const manifest = JSON.parse(readFileSync(join(nodeBundle, 'target.json'), 'utf8'));
const nodeRuntime = await applicationRuntime({ version: manifest.lean, commit: toolchainCatalog.lean[manifest.lean].commit }, {
  directory: nodeBundle, catalog: { lean: { [manifest.lean]: { name: manifest.name, manifestSha256: createHash('sha256').update(readFileSync(join(nodeBundle, 'target.json'))).digest('hex') } } } });
const edge = await edgeRuntime(nodeRuntime, { directory: edgeDirectory });
rmSync(rec, { recursive: true, force: true });
mkdirSync(join(rec, 'temp'), { recursive: true });
const sdk = await provisionSdk({ log: () => {} });
const env = { ...sdk.env, EMCC_DEBUG: '1', EMCC_TEMP_DIR: join(rec, 'temp') };
// emcc's debug log goes to stderr: capture it from each run.
const logs = [];
const execute = (tool, args, settings = {}) => {
  try {
    const { spawnSync } = process.getBuiltinModule('node:child_process');
    const result = spawnSync(sdk.python.executable, ['-B', '-E', '-s', join(sdk.driver, tool + '.py'), ...args],
      { ...settings, env, stdio: ['ignore', 'pipe', 'pipe'], encoding: 'utf8', maxBuffer: 512 << 20 });
    logs.push(result.stderr);
    if (result.status !== 0) throw new Error(`${tool} failed (${result.status}):\n${result.stderr.slice(-4000)}`);
    return result.stdout;
  } finally { writeFileSync(join(rec, 'emcc.log'), logs.join('')); }
};
const started = Date.now();
linkEdgeProgram({ sdk: { ...sdk, env, execute }, nodeRuntime, edge, linkWork: work, out: join(rec, 'out'), driver: 'emcc', suspend: options.suspend });
console.log(JSON.stringify({ recording: rec, suspend: options.suspend, seconds: (Date.now() - started) / 1000 }));
