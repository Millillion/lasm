import { cpSync, copyFileSync, mkdirSync, writeFileSync, readFileSync, existsSync, constants } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { root, leanCommit } from '../../src/toolchain.mjs';

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm64');
const output = process.argv[3] && resolve(process.argv[3]);
if (!output || existsSync(output)) throw new Error('Supply a new snapshot directory as the second argument');
for (const name of ['bin/lean.js', 'bin/lean.wasm']) if (!existsSync(join(build, name))) throw new Error('Compiler build is incomplete');
cpSync(build, output, { recursive: true, verbatimSymlinks: true, mode: constants.COPYFILE_FICLONE });
mkdirSync(join(output, 'host'), { recursive: true });
mkdirSync(join(output, 'runtime-support'), { recursive: true });
const files = ['bin/lean.js', 'bin/lean.wasm', 'lasm-wasm-exports.json'];
for (const name of ['node-host.mjs', 'node-network.mjs', 'node-process.mjs', 'node-udp.mjs', 'native-files.mjs']) {
  copyFileSync(join(root, 'src', name), join(output, 'host', name)); files.push('host/' + name);
}
for (const name of ['run-compiler.mjs', 'cc-driver.mjs', 'emscripten-pre.js', 'host-pre.js', 'host-library.js']) {
  copyFileSync(join(root, 'scripts/full-lean', name), join(output, 'runtime-support', name)); files.push('runtime-support/' + name);
}
writeFileSync(join(output, 'snapshot.json'), JSON.stringify({ leanCommit, sourceBuild: build,
  createdAt: new Date().toISOString(), files: Object.fromEntries(files.map(name => [name,
    createHash('sha256').update(readFileSync(join(output, name))).digest('hex')])),
}, null, 2) + '\n');
console.log(JSON.stringify({ output, frozenFiles: files.length }));
