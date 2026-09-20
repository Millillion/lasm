import { cpSync, copyFileSync, mkdirSync, writeFileSync, readFileSync, existsSync, constants } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { root, leanCommit } from '../../src/toolchain.mjs';

import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm64');
const output = process.argv[3] && resolve(process.argv[3]);
if (!output || existsSync(output)) throw new Error('Supply a new snapshot directory as the second argument');
for (const name of ['bin/lean.js', 'bin/lean.wasm']) if (!existsSync(join(build, name))) throw new Error('Compiler build is incomplete');
cpSync(build, output, { recursive: true, verbatimSymlinks: true, mode: constants.COPYFILE_FICLONE });
mkdirSync(join(output, 'host'), { recursive: true });
mkdirSync(join(output, 'runtime-support'), { recursive: true });
const files = ['bin/lean.js', 'bin/lean.wasm', 'lasm-wasm-exports.json'];
const provenanceFile = join(dirname(build), 'build-provenance.json');
const provenance = existsSync(provenanceFile) ? JSON.parse(readFileSync(provenanceFile)) : {};
const sdk = resolve(process.env.LASM_EMSDK ?? provenance.sdk ?? join(root, '.cache/emsdk-6.0.9'));
// A frozen runtime must also use a frozen external C compiler. Otherwise a
// development SDK repair changes the meaning of a test run halfway through it.
cpSync(sdk, join(output, 'sdk'), { recursive: true, verbatimSymlinks: true, mode: constants.COPYFILE_FICLONE });
const sanity = join(output, 'sdk/upstream/emscripten/cache/sanity.txt');
if (existsSync(sanity)) writeFileSync(sanity, readFileSync(sanity, 'utf8').replaceAll(sdk, join(output, 'sdk')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, sdk }, null, 2) + '\n');
files.push('build-provenance.json', 'sdk/.emscripten', 'sdk/upstream/emscripten/tools/link.py',
  'sdk/upstream/emscripten/src/lib/libdylink.js', 'sdk/upstream/emscripten/src/lib/libpthread.js');
for (const name of ['node-host.mjs', 'handle-table.mjs', 'node-network.mjs', 'node-process.mjs', 'node-udp.mjs', 'node-system.mjs', 'node-signal.mjs', 'thread-id.cjs', 'native-files.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-dns.mjs', 'native-interfaces.mjs']) {
  copyFileSync(join(root, 'src', name), join(output, 'host', name)); files.push('host/' + name);
}
for (const name of ['run-compiler.mjs', 'cc-driver.mjs', 'response-args.mjs', 'emscripten-pre.js', 'host-pre.js', 'host-library.js']) {
  copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name)); files.push('runtime-support/' + name);
}
writeFileSync(join(output, 'snapshot.json'), JSON.stringify({ leanCommit, sourceBuild: build, sdk: join(output, 'sdk'),
  createdAt: new Date().toISOString(), files: Object.fromEntries(files.map(name => [name,
    createHash('sha256').update(readFileSync(join(output, name))).digest('hex')])),
}, null, 2) + '\n');
console.log(JSON.stringify({ output, frozenFiles: files.length }));
