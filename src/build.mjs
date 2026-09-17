import { readFileSync, writeFileSync, mkdirSync, existsSync, copyFileSync, realpathSync } from 'node:fs';
import { resolve, dirname, join, relative, sep } from 'node:path';
import { createHash } from 'node:crypto';
import { buildRuntime, run, lean, zig, prefix, root, runtimeDir, targetFlags, env } from '../scripts/build-runtime.mjs';

const types = new Set(['Nat', 'Int', 'String', 'ByteArray', 'UInt32', 'Bool', 'Unit']);
const identifier = /^[A-Za-z][A-Za-z0-9_]*(?:\.[A-Za-z][A-Za-z0-9_]*)*$/;
export const mangle = name => name.replaceAll('_', '__').replaceAll('.', '_');
const hash = value => createHash('sha256').update(value).digest('hex');
const bridgeNames = ['runtime_initialize', 'alloc', 'free', 'release', 'string_new', 'string_data',
  'string_size', 'nat_new', 'nat_string', 'int_new', 'int_string', 'bytes_new', 'bytes_data',
  'bytes_size', 'io_is_error', 'io_value'].map(n => `lasm_${n}`);
export const allowedWasiImports = ['fd_close', 'environ_get', 'environ_sizes_get', 'clock_time_get',
  'fd_fdstat_get', 'fd_read', 'fd_seek', 'fd_write', 'proc_exit'];

export function validateSpec(spec) {
  if (!spec || !identifier.test(spec.module ?? '')) throw new Error('Expected an ASCII Lean module name');
  if (!spec.exports || typeof spec.exports !== 'object' || Array.isArray(spec.exports) || !Object.keys(spec.exports).length) {
    throw new Error('At least one export is required');
  }
  const exports = Object.entries(spec.exports).map(([name, value], i) => {
    if (!/^[A-Za-z][A-Za-z0-9_]*$/.test(name) || ['dispose', 'stats', 'then', 'constructor', 'prototype'].includes(name)) {
      throw new Error(`Invalid or reserved JavaScript export name: ${name}`);
    }
    if (!value || !identifier.test(value.declaration ?? '') || !Array.isArray(value.parameters)
        || !value.parameters.every(t => types.has(t)) || !types.has(value.result)) {
      throw new Error(`Invalid declaration or unsupported signature for ${name}`);
    }
    return { name, declaration: value.declaration, parameters: value.parameters, result: value.result, symbol: `lasm_export_${i}` };
  });
  return { module: spec.module, exports };
}

export async function build(configPath, outputPath) {
  const started = performance.now();
  const configFile = resolve(configPath);
  const sourceRoot = dirname(configFile);
  if (run(lean, ['--githash'], { cwd: sourceRoot }) !== '8c9756b28d64dab099da31a4c09229a9e6a2ef35') {
    throw new Error('Project Lean toolchain must match Lean 4.32.0');
  }
  const spec = validateSpec(JSON.parse(readFileSync(configFile, 'utf8')));
  const output = resolve(outputPath ?? join(sourceRoot, 'dist'));
  mkdirSync(output, { recursive: true });
  const buildDir = join(root, '.work/builds', hash(sourceRoot).slice(0, 16));
  mkdirSync(buildDir, { recursive: true });
  const standardRoot = realpathSync(join(prefix, 'src/lean'));
  const leanEnv = { ...env, LEAN_PATH: buildDir, LEAN_SRC_PATH: sourceRoot };
  const archive = buildRuntime();
  const compiled = new Map();
  const visiting = new Set();
  function compileSource(name) {
    if (compiled.has(name)) return compiled.get(name);
    if (visiting.has(name)) throw new Error(`Cyclic module import: ${name}`);
    if (!identifier.test(name)) throw new Error(`Unsupported module name: ${name}`);
    visiting.add(name);
    const local = join(sourceRoot, ...name.split('.')) + '.lean';
    const standard = join(standardRoot, ...name.split('.')) + '.lean';
    const isStandard = !existsSync(local);
    const source = isStandard ? standard : local;
    if (!existsSync(source)) throw new Error(`Source for ${name} is unavailable; Lake package resolution is not implemented yet`);
    const base = isStandard ? join(runtimeDir, 'stdlib', ...name.split('.')) : join(buildDir, ...name.split('.'));
    mkdirSync(dirname(base), { recursive: true });
    if (!isStandard) {
      // Ask Lean's parser for imports rather than parsing Lean source with a regex.
      const dependencies = run(lean, ['--src-deps', source], { cwd: sourceRoot, env: leanEnv });
      for (const dependency of dependencies.split('\n').filter(Boolean)) {
        const path = resolve(dependency);
        if (path.startsWith(sourceRoot + sep)) compileSource(relative(sourceRoot, path).slice(0, -5).split(sep).join('.'));
        else if (!path.startsWith(standardRoot + sep) && !realpathSync(path).startsWith(standardRoot + sep)) {
          throw new Error(`Unsupported dependency source: ${path}`);
        }
      }
    }
    const stamp = hash(readFileSync(source)) + '\n' + run(lean, ['--githash']);
    if (!isStandard || !existsSync(base + '.c') || !existsSync(base + '.source') || readFileSync(base + '.source', 'utf8') !== stamp) {
      console.log(`Generating ${name}`);
      run(lean, ['-R', isStandard ? standardRoot : sourceRoot, '-Dcompiler.postponeCompile=false',
        ...(!isStandard ? ['-o', base + '.olean'] : []), '-c', base + '.c', source], { cwd: sourceRoot, env: leanEnv });
      writeFileSync(base + '.source', stamp);
    }
    const c = readFileSync(base + '.c', 'utf8');
    const result = { name, source, c, base };
    compiled.set(name, result);
    visiting.delete(name);
    return result;
  }
  compileSource(spec.module);
  const entryName = 'LasmGeneratedEntry';
  if (existsSync(join(sourceRoot, `${entryName}.lean`))) throw new Error(`${entryName} is reserved for generated bindings`);
  const entrySource = `module\nprelude\npublic import ${spec.module}\npublic section\n` + spec.exports.map(e =>
    `@[export ${e.symbol}]\ndef lasmEntry${e.symbol.split('_').at(-1)} ${e.parameters.map((t, i) => `(a${i} : ${t})`).join(' ')} : ${e.result} := ${e.declaration} ${e.parameters.map((_, i) => `a${i}`).join(' ')}\n`).join('\n');
  writeFileSync(join(buildDir, `${entryName}.lean`), entrySource);
  const entryBase = join(buildDir, entryName);
  run(lean, ['-R', buildDir, '-Dcompiler.postponeCompile=false', '-c', entryBase + '.c', entryBase + '.lean'], { env: leanEnv });
  compiled.set(entryName, { name: entryName, base: entryBase, c: readFileSync(entryBase + '.c', 'utf8') });
  // Walk actual runtime initializer calls in compiler-generated C. Meta-only
  // elaborator modules are not required in the deployed runtime.
  const queue = [{ name: entryName, kind: 'runtime_initialize' }];
  const visited = new Set();
  const included = new Map();
  for (const current of queue) {
    const key = `${current.kind}_${mangle(current.name)}`;
    if (visited.has(key)) continue;
    visited.add(key);
    const unit = compiled.get(current.name) ?? compileSource(current.name);
    included.set(current.name, unit);
    const start = unit.c.indexOf(`LEAN_EXPORT lean_object* ${key}(uint8_t builtin) {`);
    if (start < 0) throw new Error(`Missing initializer ${key}. Use Lean's module system (a 'module' header).`);
    const body = unit.c.slice(start, unit.c.indexOf('\n}', start));
    const imports = [...unit.c.split('\n')[2].matchAll(/\bimport (?:all )?([A-Za-z0-9_.]+)/g)].map(m => m[1]);
    for (const call of body.matchAll(/res = ((?:runtime_|meta_)?initialize)_([A-Za-z0-9_]+)\(builtin\);/g)) {
      const name = imports.find(n => mangle(n) === call[2]);
      if (!name) {
        if (call[2] === mangle(current.name)) queue.push({ name: current.name, kind: call[1] });
        else throw new Error(`Cannot resolve initializer dependency ${call[0]}`);
      } else queue.push({ name, kind: call[1] });
    }
  }
  const objects = [];
  for (const unit of included.values()) {
    const stamp = hash(unit.c + readFileSync(join(runtimeDir, 'build-identity.json'), 'utf8'));
    if (!existsSync(unit.base + '.o') || !existsSync(unit.base + '.object-source') || readFileSync(unit.base + '.object-source', 'utf8') !== stamp) {
      console.log(`Compiling ${unit.name}`);
      run(zig, ['cc', ...targetFlags, '-c', unit.base + '.c', '-o', unit.base + '.o']);
      writeFileSync(unit.base + '.object-source', stamp);
    }
    objects.push(unit.base + '.o');
  }
  const initializer = `runtime_initialize_${mangle(entryName)}`;
  const wasmPath = join(output, 'module.wasm');
  run(zig, ['c++', ...targetFlags, '-fno-exceptions', '-mexec-model=reactor', ...objects, archive,
    ...[initializer, ...bridgeNames, ...spec.exports.map(e => e.symbol)].map(n => `-Wl,--export=${n}`),
    '-Wl,--strip-all', '-Wl,-z,stack-size=1048576', '-Wl,--max-memory=268435456', '-o', wasmPath]);
  const bytes = readFileSync(wasmPath);
  const wasmModule = await WebAssembly.compile(bytes);
  const imports = WebAssembly.Module.imports(wasmModule);
  for (const i of imports) {
    if (i.module !== 'wasi_snapshot_preview1' || i.kind !== 'function' || !allowedWasiImports.includes(i.name)) {
      throw new Error(`Unexpected Wasm import: ${i.module}.${i.name}`);
    }
  }
  const manifest = { abi: 1, lean: '4.32.0', initializer, exports: spec.exports, imports };
  writeFileSync(join(output, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
  copyFileSync(join(root, 'src/runtime.mjs'), join(output, 'runtime.mjs'));
  writeFileSync(join(output, 'index.mjs'), `import { readFile } from 'node:fs/promises';\nimport { instantiate } from './runtime.mjs';\nconst manifest = ${JSON.stringify(manifest)};\nexport default async function createModule(options) {\n  return instantiate(await readFile(new URL('./module.wasm', import.meta.url)), manifest, options);\n}\n`);
  const tsTypes = { Nat: 'bigint', Int: 'bigint', String: 'string', ByteArray: 'Uint8Array', UInt32: 'number', Bool: 'boolean', Unit: 'undefined' };
  writeFileSync(join(output, 'index.d.mts'), `export interface LasmModule {\n${spec.exports.map(e => `  ${e.name}(${e.parameters.map((t, i) => `a${i}: ${tsTypes[t]}`).join(', ')}): ${tsTypes[e.result]};`).join('\n')}\n  dispose(): void;\n  stats(): { memoryBytes: number; disposed: boolean };\n}\nexport default function createModule(): Promise<LasmModule>;\n`);
  const report = { module: spec.module, modules: [...included.keys()], wasmBytes: bytes.length, imports, elapsedMs: performance.now() - started };
  writeFileSync(join(output, 'build-report.json'), JSON.stringify(report, null, 2) + '\n');
  return { output, buildDir, ...report };
}
