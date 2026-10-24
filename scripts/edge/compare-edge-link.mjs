// The edge recipe's acceptance check (Phase 7, docs/EDGE.md): link the same
// Node build's objects for the edge with emcc (the managed SDK) and with the
// Node link driver (the link toolchain, recipe-emscripten-<version>-edge.json),
// and require byte-identical program.wasm and program.mjs.
//   node scripts/edge/compare-edge-link.mjs LINK_WORK EDGE_RUNTIME_DIR NODE_RUNTIME_BUNDLE OUT
//     [--sysroot-cache EM_CACHE]   (system libraries from an Emscripten cache instead of the edge runtime's)
// LINK_WORK: a build's kept link directory (LASM_KEEP_LINK_WORK=1).
import { readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve, basename } from 'node:path';
import { createHash } from 'node:crypto';
import { parseArgs } from 'node:util';
import { linkEdgeProgram } from '../../src/edge/edge-link.mjs';
import { edgeRuntime } from '../../src/edge/edge-runtime.mjs';
import { applicationRuntime } from '../../src/application-runtime.mjs';
import { provisionSdk } from '../../src/managed-sdk.mjs';
import { provisionLinkToolchain } from '../../src/managed-link-toolchain.mjs';
import { toolchainCatalog } from '../../src/managed-lean.mjs';

const { values: options, positionals } = parseArgs({ allowPositionals: true, options: { 'sysroot-cache': { type: 'string' }, 'skip-emcc': { type: 'boolean' } } });
const [work, edgeDirectory, nodeBundle, out] = positionals.map(p => resolve(p));
const manifest = JSON.parse(readFileSync(join(nodeBundle, 'target.json'), 'utf8'));
const nodeRuntime = await applicationRuntime({ version: manifest.lean, commit: toolchainCatalog.lean[manifest.lean].commit }, {
  directory: nodeBundle, catalog: { lean: { [manifest.lean]: { name: basename(nodeBundle), manifestSha256: createHash('sha256').update(readFileSync(join(nodeBundle, 'target.json'))).digest('hex') } } } });
const edge = await edgeRuntime(nodeRuntime, { directory: edgeDirectory });
if (options['sysroot-cache']) edge.sysroot = { cache: resolve(options['sysroot-cache']), directory: 'wasm64-emscripten' };
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const result = { files: {} };
const timed = (name, run) => { const t = Date.now(); run(); result[name + 'Seconds'] = (Date.now() - t) / 1000; };
if (!options['skip-emcc']) {
  const sdk = await provisionSdk({ log: () => {} });
  timed('emcc', () => linkEdgeProgram({ sdk, nodeRuntime, edge, linkWork: work, out: join(out, 'emcc'), driver: 'emcc' }));
}
const toolchain = await provisionLinkToolchain({ log: () => {} });
timed('node', () => linkEdgeProgram({ sdk: toolchain, nodeRuntime, edge, linkWork: work, out: join(out, 'node'), driver: 'node' }));
for (const file of ['program.wasm', 'program.mjs']) {
  const a = join(out, 'emcc', file), b = join(out, 'node', file);
  result.files[file] = { emcc: existsSync(a) ? sha256(a) : null, node: sha256(b) };
}
result.identical = Object.values(result.files).every(f => f.emcc === f.node);
writeFileSync(join(out, 'compare.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
if (!result.identical) process.exitCode = 1;
