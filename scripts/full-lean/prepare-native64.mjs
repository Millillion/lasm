// Reuse only C generated from the exact pinned native Lean source. No tests or
// native executable implementations are substituted into the Wasm compiler.
import { readdirSync, readFileSync, writeFileSync, mkdirSync, existsSync, symlinkSync } from 'node:fs';
import { join, resolve, dirname, relative } from 'node:path';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm64');
const source = resolve(process.argv[3] ?? '.work/lean-full/lean4-4.32.0');
const native = resolveLean(root);
const generated = join(build, 'generated-c');
const cached = join(root, '.cache/lasm-runtime/stdlib');
const nativeSources = join(native.prefix, 'src/lean');
const hash = data => createHash('sha256').update(data).digest('hex');
const files = dir => readdirSync(dir, { withFileTypes: true }).flatMap(e => e.isDirectory() ? files(join(dir, e.name)) : [join(dir, e.name)]);
const modules = ['Init', 'Std', 'Lean', 'Lake'].flatMap(pkg => {
  const moduleRoot = pkg === 'Lake' ? join(nativeSources, 'lake') : nativeSources;
  return [...files(join(moduleRoot, pkg)).filter(f => f.endsWith('.lean')), join(moduleRoot, pkg + '.lean')]
    .map(path => ({ path, moduleRoot }));
});
const audit = [];
for (const { path, moduleRoot } of modules) {
  const module = relative(moduleRoot, path).slice(0, -5);
  const stamp = hash(readFileSync(path)) + '\n' + leanCommit;
  const c = join(cached, module + '.c');
  const destination = join(generated, module + '.c');
  mkdirSync(dirname(destination), { recursive: true });
  if (existsSync(c) && existsSync(join(cached, module + '.source')) && readFileSync(join(cached, module + '.source'), 'utf8') === stamp) {
    if (!existsSync(destination)) symlinkSync(c, destination);
  } else if (!existsSync(destination) || !existsSync(destination + '.source') || readFileSync(destination + '.source', 'utf8') !== stamp) {
    execFileSync(native.lean, ['-R', moduleRoot, '-Dcompiler.postponeCompile=false', '-c', destination, path], { stdio: 'inherit' });
    writeFileSync(destination + '.source', stamp);
  }
  audit.push({ module, sourceSha256: stamp.split('\n')[0], cSha256: hash(readFileSync(destination)) });
}
const toolModules = [['LeanIR', join(source, 'src/LeanIR.lean')], ['Leanc', join(build, 'leanc/Leanc.lean')],
  ['LakeMain', join(source, 'src/lake/LakeMain.lean')], ['LeanChecker', join(source, 'src/LeanChecker.lean')]];
for (const [module, path] of toolModules) {
  const destination = join(generated, module + '.c');
  execFileSync(native.lean, ['-R', dirname(path), '-Dcompiler.postponeCompile=false', '-c', destination, path], { stdio: 'inherit' });
  audit.push({ module, sourceSha256: hash(readFileSync(path)), cSha256: hash(readFileSync(destination)) });
  // Preserve each generated program's real main and initialization sequence.
  // Namespacing its local exported declarations allows all tools to share one
  // Wasm binary without colliding on their generated `_lean_main` symbols.
  const tool = { LeanIR: 'leanir', Leanc: 'leanc', LakeMain: 'lake', LeanChecker: 'leanchecker' }[module];
  const globals = [...readFileSync(destination, 'utf8').matchAll(/^LEAN_EXPORT\s+(?:const\s+)?(?:lean_object\s*\*|uint\d+_t|size_t|double|float|void)\s+((?:l_|_lean_main)[A-Za-z0-9_]*)/gm)]
    .map(match => match[1]);
  const wrapper = [`// Generated tool entry from ${module}; original generated C is unchanged.`,
    `#define main lasm_tool_${tool}_main`,
    `#define run_main lasm_tool_${tool}_run_main`,
    ...[...new Set(globals)].map(name => `#define ${name} lasm_tool_${tool}_${name}`),
    `#include ${JSON.stringify(destination)}`, ''].join('\n');
  const toolDirectory = join(build, 'generated-tool-c'); mkdirSync(toolDirectory, { recursive: true });
  const wrapperPath = join(toolDirectory, module + '.c');
  if (!existsSync(wrapperPath) || readFileSync(wrapperPath, 'utf8') !== wrapper) writeFileSync(wrapperPath, wrapper);
}
// Keep compiler data and generated Wasm archives separate. Individual symlinks
// leave all writes in this build directory; installed native files stay intact.
let serializedFiles = 0;
for (const path of files(join(native.prefix, 'lib/lean'))) {
  if (!/\.(olean(?:\.private|\.server)?|ilean|ir)$/.test(path)) continue;
  const destination = join(build, 'lib/lean', relative(join(native.prefix, 'lib/lean'), path));
  mkdirSync(dirname(destination), { recursive: true });
  if (!existsSync(destination)) symlinkSync(path, destination);
  serializedFiles++;
}
writeFileSync(join(build, 'native64-source-audit.json'), JSON.stringify({ leanCommit, nativePrefix: native.prefix, serializedFiles, modules: audit }, null, 2) + '\n');
console.log(JSON.stringify({ generated, verifiedModules: audit.length, serializedFiles }));
