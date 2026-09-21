import { cpSync, copyFileSync, mkdirSync, writeFileSync, readFileSync, existsSync, createReadStream, constants } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { root, leanCommit } from '../../src/toolchain.mjs';
import { indexFunctionTable } from './function-table-index.mjs';
import { optimizeMainTableGrowth } from './table-growth.mjs';
import { preserveWebWorker } from './preserve-web-worker.mjs';
import { copyProcessLauncherBundle } from '../../src/native-bundle.mjs';

import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm64');
const output = process.argv[3] && resolve(process.argv[3]);
if (!output || existsSync(output)) throw new Error('Supply a new snapshot directory as the second argument');
for (const name of ['bin/lean.js', 'bin/lean.wasm']) if (!existsSync(join(build, name))) throw new Error('Compiler build is incomplete');
cpSync(build, output, { recursive: true, verbatimSymlinks: true, mode: constants.COPYFILE_FICLONE });
mkdirSync(join(output, 'host'), { recursive: true });
mkdirSync(join(output, 'runtime-support'), { recursive: true });
const functionTableIndex = await indexFunctionTable(join(output, 'bin/lean.wasm'), join(output, 'bin/lean.js'));
writeFileSync(join(output, 'bin/lean.js'), optimizeMainTableGrowth(readFileSync(join(output, 'bin/lean.js'), 'utf8')));
preserveWebWorker(join(output, 'bin/lean.js'));
copyFileSync(join(output, 'bin/lean.js'), join(output, 'bin/lean.cjs'));
writeFileSync(join(output, 'function-table-index.json'), JSON.stringify(functionTableIndex, null, 2) + '\n');
const files = ['bin/lean.js', 'bin/lean.cjs', 'bin/lean.wasm', 'lasm-wasm-exports.json', 'function-table-index.json'];
const provenanceFile = join(dirname(build), 'build-provenance.json');
const provenance = existsSync(provenanceFile) ? JSON.parse(readFileSync(provenanceFile)) : {};
const sdk = resolve(process.env.LASM_EMSDK ?? provenance.sdk ?? join(root, '.cache/emsdk-6.0.9'));
// A frozen runtime must also use a frozen external C compiler. Otherwise a
// development SDK repair changes the meaning of a test run halfway through it.
cpSync(sdk, join(output, 'sdk'), { recursive: true, verbatimSymlinks: true, mode: constants.COPYFILE_FICLONE });
const sanity = join(output, 'sdk/upstream/emscripten/cache/sanity.txt');
if (existsSync(sanity)) writeFileSync(sanity, readFileSync(sanity, 'utf8').replaceAll(sdk, join(output, 'sdk')));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ ...provenance, sdk,
  mainTableGrowth: { scope: 'One exact initial-main function-table reservation; original slot order and growth-failure fallback retained.',
    implementationSha256: createHash('sha256').update(readFileSync(new URL('./table-growth.mjs', import.meta.url))).digest('hex') },
  functionTableIndex: { scope: 'Known function addresses from verified Wasm metadata; complete-scan fallback retained.',
    wasmSha256: functionTableIndex.wasmSha256, initialTableEntries: functionTableIndex.initialTableEntries,
    exportSeeds: functionTableIndex.exportSeeds.length, importSeeds: functionTableIndex.importSeeds.length },
}, null, 2) + '\n');
files.push('build-provenance.json', 'sdk/.emscripten', 'sdk/upstream/emscripten/tools/link.py',
  'sdk/upstream/emscripten/src/lib/libdylink.js', 'sdk/upstream/emscripten/src/lib/libpthread.js');
for (const name of ['node-host.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs', 'node-process.mjs', 'native-process.mjs', 'process-launcher.mjs', 'process-exec.mjs', 'node-udp.mjs', 'node-system.mjs', 'node-signal.mjs', 'thread-id.cjs', 'native-pthread-factory.cjs', 'native-files.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-worker-deno.mjs', 'native-worker-cwd.cjs', 'worker-stdio.cjs', 'native-dns.mjs', 'native-interfaces.mjs']) {
  copyFileSync(join(root, 'src', name), join(output, 'host', name)); files.push('host/' + name);
}
for (const name of copyProcessLauncherBundle(root, join(output, 'host'))) files.push('host/' + name);
for (const name of ['run-compiler.mjs', 'cc-driver.mjs', 'response-args.mjs', 'preserve-web-worker.mjs', 'emscripten-pre.js', 'host-pre.js', 'host-library.js']) {
  copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name)); files.push('runtime-support/' + name);
}
const hashes = {};
for (const name of files) {
  const hash = createHash('sha256');
  for await (const bytes of createReadStream(join(output, name))) hash.update(bytes);
  hashes[name] = hash.digest('hex');
}
writeFileSync(join(output, 'snapshot.json'), JSON.stringify({ leanCommit, sourceBuild: build, sdk: join(output, 'sdk'),
  createdAt: new Date().toISOString(), files: hashes,
}, null, 2) + '\n');
console.log(JSON.stringify({ output, frozenFiles: files.length }));
