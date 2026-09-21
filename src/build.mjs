import { readFileSync, writeFileSync, mkdirSync, existsSync, copyFileSync, realpathSync, renameSync } from 'node:fs';
import { resolve, dirname, join, relative, sep, delimiter } from 'node:path';
import { createHash, randomUUID } from 'node:crypto';
import { getToolchain, optimizeWasm, run, root, env } from './toolchain.mjs';
import { findLakeProject, loadLake } from './lake.mjs';
import { referenceNotices } from './notices.mjs';
import { insideDirectory } from './platform.mjs';
import { copyNativeBundle } from './native-bundle.mjs';

const types = new Set(['Nat', 'Int', 'String', 'ByteArray', 'UInt32', 'Bool', 'Unit']);
const identifier = /^[A-Za-z][A-Za-z0-9_]*(?:\.[A-Za-z][A-Za-z0-9_]*)*$/;
export const mangle = name => name.replaceAll('_', '__').replaceAll('.', '_');
const hash = value => createHash('sha256').update(value).digest('hex');
const bridgeNames = ['runtime_initialize', 'runtime_finish_initialization', 'alloc', 'free', 'release', 'string_new', 'string_data',
  'string_size', 'nat_new', 'nat_string', 'int_new', 'int_string', 'bytes_new', 'bytes_data',
  'bytes_size', 'io_is_error', 'io_value', 'unbox_u32', 'unbox_scalar', 'task_execute', 'stack_bounds', 'release_fiber_context'].map(n => `lasm_${n}`);
export const allowedWasiImports = ['fd_close', 'environ_get', 'environ_sizes_get', 'clock_time_get',
  'fd_fdstat_get', 'fd_read', 'fd_seek', 'fd_write', 'proc_exit'];

export function validateSpec(spec) {
  if (!spec || !identifier.test(spec.module ?? '')) throw new Error('Expected an ASCII Lean module name');
  if (spec.main === true) spec = { ...spec, exports: { runMain: { declaration: 'main', parameters: [], result: 'UInt32', effect: 'io' } } };
  if (spec.module === 'LasmGeneratedEntry') throw new Error('LasmGeneratedEntry is reserved for generated bindings');
  if (!spec.exports || typeof spec.exports !== 'object' || Array.isArray(spec.exports) || !Object.keys(spec.exports).length) {
    throw new Error('At least one export is required');
  }
  const exports = Object.entries(spec.exports).map(([name, value], i) => {
    if (!/^[A-Za-z][A-Za-z0-9_]*$/.test(name) || ['dispose', 'stats', 'then', 'constructor', 'prototype'].includes(name)) {
      throw new Error(`Invalid or reserved JavaScript export name: ${name}`);
    }
    if (!value || !identifier.test(value.declaration ?? '') || !Array.isArray(value.parameters)
        || !value.parameters.every(t => types.has(t)) || !types.has(value.result)
        || ![undefined, 'pure', 'io'].includes(value.effect)) {
      throw new Error(`Invalid declaration or unsupported signature for ${name}`);
    }
    return { name, declaration: value.declaration, parameters: value.parameters, result: value.result,
      effect: value.effect ?? 'pure', symbol: `lasm_export_${i}` };
  });
  const asyncMode = spec.async ?? (exports.some(e => e.effect === 'io') ? 'asyncify' : 'sync');
  if (!['sync', 'asyncify', 'jspi'].includes(asyncMode) || (asyncMode === 'sync' && exports.some(e => e.effect === 'io'))) {
    throw new Error('IO exports require asyncify or jspi');
  }
  return { module: spec.module, exports, asyncMode };
}

export async function build(configPath, outputPath, { asyncMode, log = console.log } = {}) {
  const started = performance.now();
  const configFile = resolve(configPath);
  const inputSpec = JSON.parse(readFileSync(configFile, 'utf8'));
  const sourceRoot = resolve(dirname(configFile), inputSpec.sourceRoot ?? '.');
  const spec = validateSpec(asyncMode === undefined ? inputSpec : { ...inputSpec, async: asyncMode });
  const toolchain = await getToolchain(findLakeProject(configFile, inputSpec) ?? sourceRoot, { log });
  const { prefix, hostCommit, lean } = toolchain;
  const output = resolve(outputPath ?? join(sourceRoot, 'dist'));
  mkdirSync(output, { recursive: true });
  const cache = resolve(process.env.LASM_CACHE_DIR ?? join(sourceRoot, '.lake/lasm'));
  const buildDir = join(cache, 'builds', hash(configFile).slice(0, 16));
  mkdirSync(buildDir, { recursive: true });
  const standardRoot = realpathSync(join(prefix, 'src/lean'));
  const libraryRoot = join(root, 'lean');
  const lake = loadLake(configFile, inputSpec, { run, lean, env, hostCommit });
  const leanEnv = lake ? lake.env
    : { ...env, LEAN_PATH: buildDir, LEAN_SRC_PATH: [sourceRoot, libraryRoot].join(delimiter) };
  const compiled = new Map();
  const visiting = new Set();
  function initializerStem(unit) {
    const match = unit.c.match(/LEAN_EXPORT lean_object\* (?:runtime_)?initialize_([A-Za-z0-9_]+)\(uint8_t builtin\) \{/);
    if (!match) throw new Error(`No supported initializer in ${unit.name}`);
    return match[1];
  }
  function compileSource(name) {
    if (compiled.has(name)) return compiled.get(name);
    if (visiting.has(name)) throw new Error(`Cyclic module import: ${name}`);
    if (!identifier.test(name)) throw new Error(`Unsupported module name: ${name}`);
    visiting.add(name);
    if (lake && !existsSync(join(standardRoot, ...name.split('.')) + '.lean')) {
      const { path, c } = lake.cSource(name);
      const base = join(buildDir, ...name.split('.'));
      mkdirSync(dirname(base), { recursive: true });
      writeFileSync(base + '.c', c);
      const result = { name, source: path, base, c };
      compiled.set(name, result);
      visiting.delete(name);
      return result;
    }
    const standalone = !lake && inputSpec.sourceFile && name === spec.module;
    const local = standalone ? join(buildDir, 'source', `${name}.lean`) : join(sourceRoot, ...name.split('.')) + '.lean';
    if (standalone) {
      mkdirSync(dirname(local), { recursive: true });
      writeFileSync(local, readFileSync(resolve(sourceRoot, inputSpec.sourceFile)));
    }
    const library = join(libraryRoot, ...name.split('.')) + '.lean';
    const standard = join(standardRoot, ...name.split('.')) + '.lean';
    const moduleRoot = standalone ? dirname(local) : existsSync(local) ? sourceRoot : existsSync(library) ? libraryRoot : standardRoot;
    const isStandard = moduleRoot === standardRoot;
    const source = standalone || moduleRoot === sourceRoot ? local : moduleRoot === libraryRoot ? library : standard;
    if (!existsSync(source)) throw new Error(`Source for ${name} is unavailable; declare its dependency in a Lake project`);
    const stamp = hash(readFileSync(source)) + '\n' + hostCommit;
    if (isStandard && toolchain.standardDirectory) {
      const prebuilt = join(toolchain.standardDirectory, ...name.split('.'));
      if (existsSync(prebuilt + '.c')) {
        if (!existsSync(prebuilt + '.source') || readFileSync(prebuilt + '.source', 'utf8') !== stamp) {
          throw new Error(`Installed Lean source does not match the packaged target: ${name}`);
        }
        const result = { name, source, base: prebuilt, c: readFileSync(prebuilt + '.c', 'utf8'), prebuilt: true };
        compiled.set(name, result); visiting.delete(name); return result;
      }
    }
    const base = isStandard ? join(toolchain.standardCache ?? join(cache, 'stdlib'), ...name.split('.')) : join(buildDir, ...name.split('.'));
    mkdirSync(dirname(base), { recursive: true });
    if (!isStandard) {
      // Ask Lean's parser for imports rather than parsing Lean source with a regex.
      const dependencies = run(lean, ['--src-deps', source], { cwd: sourceRoot, env: leanEnv });
      for (const dependency of dependencies.split(/\r?\n/).filter(Boolean)) {
        const path = resolve(dependency);
        if (insideDirectory(sourceRoot, path)) compileSource(relative(sourceRoot, path).slice(0, -5).split(sep).join('.'));
        else if (insideDirectory(libraryRoot, path)) compileSource(relative(libraryRoot, path).slice(0, -5).split(sep).join('.'));
        else if (!insideDirectory(standardRoot, path) && !insideDirectory(standardRoot, realpathSync(path))) {
          throw new Error(`Unsupported dependency source: ${path}`);
        }
      }
    }
    if (!isStandard || !existsSync(base + '.c') || !existsSync(base + '.source') || readFileSync(base + '.source', 'utf8') !== stamp) {
      log(`Generating ${name}`);
      const temporary = base + '.' + randomUUID() + '.c';
      run(lean, ['-R', moduleRoot, '-Dcompiler.postponeCompile=false',
        ...(!isStandard ? ['-o', base + '.olean'] : []), '-c', temporary, source], { cwd: sourceRoot, env: leanEnv });
      renameSync(temporary, base + '.c');
      writeFileSync(base + '.source', stamp);
    }
    const c = readFileSync(base + '.c', 'utf8');
    const result = { name, source, c, base };
    compiled.set(name, result);
    visiting.delete(name);
    return result;
  }
  const userModule = compileSource(spec.module);
  const modular = /LEAN_EXPORT lean_object\* runtime_initialize_[A-Za-z0-9_]+\(uint8_t builtin\) \{/.test(userModule.c);
  const entryName = 'LasmGeneratedEntry';
  if (existsSync(join(sourceRoot, `${entryName}.lean`))) throw new Error(`${entryName} is reserved for generated bindings`);
  const mainSupport = inputSpec.main ? `
private class «MainProgram» (α : Type) where
  «run» : α → List String → IO UInt32
private instance : «MainProgram» (IO Unit) where
  «run» action _ := do action; pure 0
private instance : «MainProgram» (IO UInt32) where
  «run» action _ := action
private instance : «MainProgram» (List String → IO Unit) where
  «run» action args := do action args; pure 0
private instance : «MainProgram» (List String → IO UInt32) where
  «run» action args := action args
@[extern "lasm_main_args"] private opaque mainArgs : IO (List String)
private unsafe def «runProgram» : IO UInt32 := do
  «MainProgram».«run» «main» (← mainArgs)
` : '';
  const entrySource = (modular ? `module\nprelude\npublic import ${spec.module}\npublic section\n` : `import ${spec.module}\n`) + mainSupport + spec.exports.map(e => {
    const args = e.parameters.map((t, i) => `(a${i} : ${t})`).join(' ') || '(_lasmUnit : Unit)';
    const call = inputSpec.main ? '«runProgram»' : `${e.declaration} ${e.parameters.map((_, i) => `a${i}`).join(' ')}`;
    const result = e.effect === 'io' ? `EIO String ${e.result}` : e.result;
    const body = e.effect === 'io' ? `((${call}) : IO ${e.result}).toEIO IO.Error.toString` : call;
    return `@[export ${e.symbol}]\nunsafe def lasmEntry${e.symbol.split('_').at(-1)} ${args} : ${result} := ${body}\n`;
  }).join('\n');
  writeFileSync(join(buildDir, `${entryName}.lean`), entrySource);
  const entryBase = join(buildDir, entryName);
  run(lean, ['-R', buildDir, '-Dcompiler.postponeCompile=false', '-c', entryBase + '.c', entryBase + '.lean'], { cwd: sourceRoot, env: leanEnv });
  compiled.set(entryName, { name: entryName, base: entryBase, c: readFileSync(entryBase + '.c', 'utf8') });
  // Walk actual runtime initializer calls in compiler-generated C. Meta-only
  // elaborator modules are not required in the deployed runtime.
  const entryKind = modular ? 'runtime_initialize' : 'initialize';
  const queue = [{ name: entryName, kind: entryKind }];
  const visited = new Set();
  const included = new Map();
  for (const current of queue) {
    const unit = compiled.get(current.name) ?? compileSource(current.name);
    const stem = initializerStem(unit);
    const key = `${current.kind}_${stem}`;
    if (visited.has(key)) continue;
    visited.add(key);
    included.set(current.name, unit);
    const start = unit.c.indexOf(`LEAN_EXPORT lean_object* ${key}(uint8_t builtin) {`);
    if (start < 0) throw new Error(`Missing initializer ${key}`);
    const body = unit.c.slice(start, unit.c.indexOf('\n}', start));
    const imports = [...new Set([...unit.c.split('\n')[2].matchAll(/\bimport (?:all )?([A-Za-z0-9_.]+)/g)].map(m => m[1]))];
    for (const call of body.matchAll(/res = ((?:runtime_|meta_)?initialize)_([A-Za-z0-9_]+)\(builtin\);/g)) {
      if (call[2] === stem) { queue.push({ name: current.name, kind: call[1] }); continue; }
      const candidates = imports.filter(n => call[2] === mangle(n) || call[2].endsWith('_' + mangle(n)))
        .filter(n => initializerStem(compiled.get(n) ?? compileSource(n)) === call[2]);
      if (candidates.length !== 1) throw new Error(`Cannot resolve initializer dependency in ${current.name}: ${call[0]}`);
      queue.push({ name: candidates[0], kind: call[1] });
    }
  }
  const objects = [];
  for (const unit of included.values()) {
    if (unit.prebuilt) continue;
    const stamp = hash(unit.c + (toolchain.compileIdentity ?? toolchain.identity));
    if (!existsSync(unit.base + '.o') || !existsSync(unit.base + '.object-source') || readFileSync(unit.base + '.object-source', 'utf8') !== stamp) {
      log(`Compiling ${unit.name}`);
      const temporary = unit.base + '.' + randomUUID() + '.o';
      toolchain.compileC(unit.base + '.c', temporary);
      renameSync(temporary, unit.base + '.o');
      writeFileSync(unit.base + '.object-source', stamp);
    }
    objects.push(unit.base + '.o');
  }
  const initializer = `${entryKind}_${mangle(entryName)}`;
  const wasmPath = join(output, 'module.wasm');
  const linkPath = spec.asyncMode === 'asyncify' ? join(buildDir, 'module.raw.wasm') : wasmPath;
  toolchain.link(objects, ['__stack_pointer', initializer, ...bridgeNames, ...spec.exports.map(e => e.symbol)], linkPath);
  if (spec.asyncMode === 'asyncify') {
    log('Instrumenting real Lean calls with Asyncify');
    optimizeWasm(linkPath, wasmPath);
  }
  const bytes = readFileSync(wasmPath);
  const wasmModule = await WebAssembly.compile(bytes);
  const imports = WebAssembly.Module.imports(wasmModule);
  for (const i of imports) {
    const allowed = i.module === 'wasi_snapshot_preview1' && allowedWasiImports.includes(i.name)
      || i.module === 'lasm' && (['platform', 'task_enqueue', 'task_resolve', 'task_drop', 'task_wait', 'task_wait_any', 'task_current', 'fiber_current', 'node_call', 'node_copy', 'node_release', 'node_start'].includes(i.name)
        || spec.asyncMode !== 'sync' && ['request', 'copy_response'].includes(i.name));
    if (i.kind !== 'function' || !allowed) {
      throw new Error(`Unexpected Wasm import: ${i.module}.${i.name}`);
    }
  }
  const manifest = { abi: 1, lean: '4.32.0', asyncMode: spec.asyncMode, ...(inputSpec.main ? { main: true } : {}), initializer, exports: spec.exports, imports };
  writeFileSync(join(output, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
  copyFileSync(join(root, 'src/runtime.mjs'), join(output, 'runtime.mjs'));
  copyFileSync(join(root, 'src/scheduler.mjs'), join(output, 'scheduler.mjs'));
  copyFileSync(join(root, 'src/node-host.mjs'), join(output, 'node-host.mjs'));
  copyFileSync(join(root, 'src/handle-table.mjs'), join(output, 'handle-table.mjs'));
  copyFileSync(join(root, 'src/native-files.mjs'), join(output, 'native-files.mjs'));
  copyFileSync(join(root, 'src/native-file-worker.mjs'), join(output, 'native-file-worker.mjs'));
  copyFileSync(join(root, 'src/native-file-worker-pool.mjs'), join(output, 'native-file-worker-pool.mjs'));
  copyFileSync(join(root, 'src/native-file-worker-deno.mjs'), join(output, 'native-file-worker-deno.mjs'));
  copyFileSync(join(root, 'src/native-worker-cwd.cjs'), join(output, 'native-worker-cwd.cjs'));
  copyNativeBundle(root, output);
  copyFileSync(join(root, 'src/node-network.mjs'), join(output, 'node-network.mjs'));
  copyFileSync(join(root, 'src/native-tcp.mjs'), join(output, 'native-tcp.mjs'));
  copyFileSync(join(root, 'src/node-udp.mjs'), join(output, 'node-udp.mjs'));
  copyFileSync(join(root, 'src/native-dns.mjs'), join(output, 'native-dns.mjs'));
  copyFileSync(join(root, 'src/native-interfaces.mjs'), join(output, 'native-interfaces.mjs'));
  copyFileSync(join(root, 'src/node-system.mjs'), join(output, 'node-system.mjs'));
  copyFileSync(join(root, 'src/node-signal.mjs'), join(output, 'node-signal.mjs'));
  copyFileSync(join(root, 'src/thread-id.cjs'), join(output, 'thread-id.cjs'));
  copyFileSync(join(root, 'src/node-process.mjs'), join(output, 'node-process.mjs'));
  copyFileSync(join(root, 'src/native-process.mjs'), join(output, 'native-process.mjs'));
  copyFileSync(join(root, 'src/process-launcher.mjs'), join(output, 'process-launcher.mjs'));
  copyFileSync(join(root, 'src/working-directory.mjs'), join(output, 'working-directory.mjs'));
  copyFileSync(join(root, 'src/process-exec.mjs'), join(output, 'process-exec.mjs'));
  copyFileSync(join(root, 'src/host.mjs'), join(output, 'host.mjs'));
  copyFileSync(join(root, 'src/wasi.mjs'), join(output, 'wasi.mjs'));
  copyFileSync(join(root, 'src/web-host.mjs'), join(output, 'web-host.mjs'));
  writeFileSync(join(output, 'THIRD_PARTY_NOTICES.txt'),
    toolchain.noticeFile ? readFileSync(toolchain.noticeFile, 'utf8') : referenceNotices(toolchain.reference));
  writeFileSync(join(output, 'index.mjs'), `import { readFile } from 'node:fs/promises';\nimport { instantiate } from './runtime.mjs';\nimport { createNodeRuntimeHost } from './node-host.mjs';\nconst manifest = ${JSON.stringify(manifest)};\nexport default async function createModule(options = {}) {\n  const stdio = {stdout: bytes => process.stdout.write(bytes), stderr: bytes => process.stderr.write(bytes), ...options.stdio};\n  const nodeRuntime = createNodeRuntimeHost(options);\n  return instantiate(await readFile(new URL('./module.wasm', import.meta.url)), manifest, {...options, stdio, nodeRuntime});\n}\n`);
  writeFileSync(join(output, 'browser.mjs'), `import { instantiate } from './runtime.mjs';\nconst manifest = ${JSON.stringify(manifest)};\nexport default async function createModule({source = new URL('./module.wasm', import.meta.url), ...options} = {}) {\n  if (!(source instanceof WebAssembly.Module) && !(source instanceof ArrayBuffer) && !ArrayBuffer.isView(source)) {\n    const response = source instanceof Response ? source : await fetch(source);\n    if (!response.ok) throw new Error('Cannot load Lasm Wasm: HTTP ' + response.status);\n    source = await response.arrayBuffer();\n  }\n  return instantiate(source, manifest, options);\n}\n`);
  writeFileSync(join(output, 'worker.mjs'), `import source from './module.wasm';\nimport createModule from './browser.mjs';\nexport default function createWorkerModule(options) { return createModule({...options, source}); }\n`);
  const tsTypes = { Nat: 'bigint', Int: 'bigint', String: 'string', ByteArray: 'Uint8Array', UInt32: 'number', Bool: 'boolean', Unit: 'undefined' };
  writeFileSync(join(output, 'index.d.mts'), `export interface LasmHost {\n  readBytes?(path: string, options: {signal: AbortSignal}): Promise<Uint8Array>;\n  writeBytes?(path: string, bytes: Uint8Array, options: {signal: AbortSignal}): Promise<void>;\n  fetchBytes?(url: string, options: {signal: AbortSignal}): Promise<Uint8Array>;\n}\nexport interface LasmModule {\n${spec.exports.map(e => `  ${e.name}(${[...e.parameters.map((t, i) => `a${i}: ${tsTypes[t]}`), ...(e.effect === 'io' ? ['options?: {signal?: AbortSignal}'] : [])].join(', ')}): ${e.effect === 'io' ? `Promise<${tsTypes[e.result]}>` : tsTypes[e.result]};`).join('\n')}\n  dispose(): void;\n  stats(): { memoryBytes: number; disposed: boolean; busy: boolean; fibers: number; waitingTasks: number; queued: number; resources?: number };\n}\nexport default function createModule(options?: {host?: LasmHost; args?: string[]; cwd?: string; stdio?: {stdout?: (bytes: Uint8Array) => void | Promise<void>; stderr?: (bytes: Uint8Array) => void | Promise<void>}}): Promise<LasmModule>;\n`);
  writeFileSync(join(output, 'browser.d.mts'), `import type {LasmHost, LasmModule} from './index.mjs';\nexport interface PortableOptions {\n  source?: WebAssembly.Module | ArrayBuffer | ArrayBufferView | Response | URL | string;\n  host?: LasmHost;\n  stdio?: {stdout?: (bytes: Uint8Array) => void; stderr?: (bytes: Uint8Array) => void};\n}\nexport default function createModule(options?: PortableOptions): Promise<LasmModule>;\n`);
  writeFileSync(join(output, 'worker.d.mts'), `import type {LasmModule} from './index.mjs';\nimport type {PortableOptions} from './browser.mjs';\nexport default function createModule(options?: Omit<PortableOptions, 'source'>): Promise<LasmModule>;\n`);
  writeFileSync(join(output, 'host.d.mts'), `import type {LasmHost} from './index.mjs';\nexport function createNodeHost(options?: {directory?: string; fetch?: typeof fetch; maxBytes?: number; timeoutMs?: number}): Promise<LasmHost>;\n`);
  writeFileSync(join(output, 'web-host.d.mts'), `import type {LasmHost} from './index.mjs';\nexport interface ByteStorage {\n  get(key: string, options: {signal: AbortSignal}): Promise<Uint8Array | null>;\n  put(key: string, bytes: Uint8Array, options: {signal: AbortSignal}): Promise<void>;\n}\nexport interface WebHostOptions {storage?: ByteStorage; fetch?: typeof fetch; maxBytes?: number; timeoutMs?: number;}\nexport function createWebHost(options?: WebHostOptions): LasmHost;\nexport function createIndexedDbStorage(options?: {name?: string}): Promise<ByteStorage & {close(): void}>;\nexport function createWorkerHost(options?: Omit<WebHostOptions, 'storage'> & {kv?: {get(key: string, type: 'arrayBuffer'): Promise<ArrayBuffer | null>; put(key: string, value: Uint8Array): Promise<unknown>}}): LasmHost;\n`);
  const report = { module: spec.module, asyncMode: spec.asyncMode, toolchain: toolchain.kind, lakeProject: lake?.directory ?? null,
    prebuiltModules: [...included.values()].filter(unit => unit.prebuilt).length,
    modules: [...included.keys()], wasmBytes: bytes.length, imports, elapsedMs: performance.now() - started };
  writeFileSync(join(output, 'build-report.json'), JSON.stringify(report, null, 2) + '\n');
  return { output, buildDir, ...report };
}
