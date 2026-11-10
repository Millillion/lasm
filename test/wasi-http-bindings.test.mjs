// Lasm.WASI.Http (docs/WASI_FASTLY_BINDINGS.md): the committed bindings are the
// generator's output for the pinned WIT, the library ships every generated
// module in import order, the Lean declarations and the C glue (with host
// imports for --target wasi-http, failing elsewhere) agree, and the canonical
// ABI's core signatures are those wit-bindgen 0.63 gives the same functions
// (the 45 the hand-written Lasm.Fetch glue declared before the generator).
// The host itself is checked under wasmtime serve by wasi.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { libraryModules } from '../src/lasm-library.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const read = file => readFileSync(join(root, file), 'utf8');
const leanFiles = dir => readdirSync(join(root, dir), { withFileTypes: true })
  .flatMap(e => e.isDirectory() ? leanFiles(join(dir, e.name)) : e.name.endsWith('.lean') ? [join(dir, e.name)] : []);

test('the committed Lasm.WASI.Http is the generator\'s output (generate-wasi-http.mjs --check)', () => {
  execFileSync(process.execPath, [join(root, 'scripts/bindings/generate-wasi-http.mjs'), '--check'], { stdio: 'pipe' });
});

test('the library ships every generated module, each after the modules it imports', () => {
  const generated = leanFiles('library/Lasm/WASI').map(f => f.slice('library/'.length, -'.lean'.length).replaceAll('/', '.'));
  const shipped = libraryModules.filter(m => m.startsWith('Lasm.WASI.'));
  assert.deepEqual([...shipped].sort(), [...generated].sort());
  for (const module of shipped) {
    const source = read(`library/${module.replaceAll('.', '/')}.lean`);
    for (const [, imported] of source.matchAll(/^import (\S+)$/gm))
      if (imported.startsWith('Lasm.')) assert.ok(libraryModules.indexOf(imported) < libraryModules.indexOf(module), `${module} imports ${imported}`);
  }
});

test('every extern has its C function with host imports and as a failing stub, with the same parameters', () => {
  const glue = read('library/c/lasm_wasi_http_bindings.c');
  const [real, stub] = glue.split('\n#else\n');
  const signatures = text => new Map([...text.matchAll(/^LEAN_EXPORT lean_obj_res (lasm_wasi_\w+)\(([^)]*)\)/gm)].map(m => [m[1], m[2]]));
  const realFns = signatures(real), stubFns = signatures(stub);
  assert.deepEqual([...realFns.keys()].sort(), [...stubFns.keys()].sort());
  for (const [name, params] of realFns) assert.equal(stubFns.get(name), params, name);
  const externs = leanFiles('library/Lasm/WASI').flatMap(f => [...read(f).matchAll(/@\[extern "(\w+)"\]/g)].map(m => m[1]));
  assert.deepEqual(externs.sort(), [...realFns.keys()].sort());
  // One host import per bound function, as the surface report counts them, all referenced.
  const surface = JSON.parse(read('scripts/bindings/wasi-http-surface.json'));
  const imports = [...real.matchAll(/import_module\("([^"]+)"\), import_name\("([^"]+)"\)/g)].map(m => `${m[1]} ${m[2]}`);
  assert.equal(imports.length, surface.total.bound);
  assert.deepEqual(imports.sort(), surface.interfaces.flatMap(i => i.bound.map(f => `${i.wit} ${f}`)).sort());
  const used = /lasm_wasi_http_bound_imports\[\] = \{([^}]*)\}/.exec(real)[1].match(/\w+/g).filter(w => w.startsWith('lasm_wit_'));
  assert.equal(used.length, surface.total.bound);
  // The hand-written Lasm.Fetch glue declares the same imports through the generated header.
  assert.equal(read('src/wasi/lasm_wasi_http_imports.h').match(/import_module/g).length, surface.total.bound);
  assert.doesNotMatch(read('src/wasi/lasm_wasi_http.c'), /import_module/);
});

test('the bound interfaces are bound in full (only @unstable members are left out)', () => {
  const surface = JSON.parse(read('scripts/bindings/wasi-http-surface.json'));
  assert.deepEqual(surface.interfaces.map(i => i.wit), ['wasi:io/error@0.2.12', 'wasi:io/poll@0.2.12', 'wasi:io/streams@0.2.12',
    'wasi:clocks/monotonic-clock@0.2.12', 'wasi:http/types@0.2.12', 'wasi:http/outgoing-handler@0.2.12']);
  assert.deepEqual(surface.interfaces.flatMap(i => i.unstableNotBound), ['response-outparam.send-informational']);
});

// wit-bindgen 0.63's core signatures (wasi:http@0.2.12, 32-bit memory): module, name, parameters, result.
const witBindgen = [
  ['wasi:http/types@0.2.12', '[method]incoming-request.method', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-request.path-with-query', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-request.scheme', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-request.authority', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-request.headers', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]incoming-request.consume', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]incoming-request', 'i32', ''],
  ['wasi:http/types@0.2.12', '[constructor]fields', '', 'i32'],
  ['wasi:http/types@0.2.12', '[method]fields.entries', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]fields.append', 'i32,i32,i32,i32,i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]fields', 'i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-body.stream', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[static]incoming-body.finish', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[resource-drop]incoming-body', 'i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]future-trailers', 'i32', ''],
  ['wasi:http/types@0.2.12', '[constructor]outgoing-response', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-response.set-status-code', 'i32,i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-response.body', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[method]outgoing-body.write', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[static]outgoing-body.finish', 'i32,i32,i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]outgoing-body', 'i32', ''],
  ['wasi:http/types@0.2.12', '[static]response-outparam.set', 'i32,i32,i32,i32,i64,i32,i32,i32,i32', ''],
  ['wasi:http/types@0.2.12', '[constructor]outgoing-request', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-request.set-method', 'i32,i32,i32,i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-request.set-path-with-query', 'i32,i32,i32,i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-request.set-scheme', 'i32,i32,i32,i32,i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-request.set-authority', 'i32,i32,i32,i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]outgoing-request.body', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]outgoing-request', 'i32', ''],
  ['wasi:http/types@0.2.12', '[method]future-incoming-response.subscribe', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]future-incoming-response.get', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]future-incoming-response', 'i32', ''],
  ['wasi:http/types@0.2.12', '[method]incoming-response.status', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]incoming-response.headers', 'i32', 'i32'],
  ['wasi:http/types@0.2.12', '[method]incoming-response.consume', 'i32,i32', ''],
  ['wasi:http/types@0.2.12', '[resource-drop]incoming-response', 'i32', ''],
  ['wasi:http/outgoing-handler@0.2.12', 'handle', 'i32,i32,i32,i32', ''],
  ['wasi:io/streams@0.2.12', '[method]input-stream.blocking-read', 'i32,i64,i32', ''],
  ['wasi:io/streams@0.2.12', '[method]output-stream.blocking-write-and-flush', 'i32,i32,i32,i32', ''],
  ['wasi:io/streams@0.2.12', '[resource-drop]input-stream', 'i32', ''],
  ['wasi:io/streams@0.2.12', '[resource-drop]output-stream', 'i32', ''],
  ['wasi:io/error@0.2.12', '[resource-drop]error', 'i32', ''],
  ['wasi:io/poll@0.2.12', 'poll', 'i32,i32,i32', ''],
  ['wasi:io/poll@0.2.12', '[resource-drop]pollable', 'i32', ''],
  ['wasi:clocks/monotonic-clock@0.2.12', 'subscribe-duration', 'i64', 'i32'],
];
test('the canonical ABI lowering gives wit-bindgen\'s core signatures', () => {
  const header = read('src/wasi/lasm_wasi_http_imports.h');
  const generated = new Map([...header.matchAll(/import_module\("([^"]+)"\), import_name\("([^"]+)"\)\)\) (\w+) \w+\(([^)]*)\);/g)].map(m => {
    const kind = t => /64/.test(t) ? 'i64' : 'i32';
    const params = m[4] === 'void' ? '' : m[4].split(',').map(t => kind(t.trim())).join(',');
    return [`${m[1]} ${m[2]}`, [params, m[3] === 'void' ? '' : kind(m[3])]];
  }));
  for (const [module, name, params, result] of witBindgen) assert.deepEqual(generated.get(`${module} ${name}`), [params, result], `${module} ${name}`);
});
