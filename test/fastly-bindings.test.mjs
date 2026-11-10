// Lasm.Fastly (docs/WASI_FASTLY_BINDINGS.md): the committed bindings are the
// generator's output for the pinned witx, the library ships every generated
// module in import order, and the Lean declarations, the C glue (with host
// imports for --target fastly, failing with $unsupported elsewhere) and the
// surface report agree. The host itself is checked under Viceroy by wasi.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { libraryModules } from '../src/lasm-library.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const read = file => readFileSync(join(root, file), 'utf8');

test('the committed Lasm.Fastly is the generator\'s output (generate-fastly.mjs --check)', () => {
  execFileSync(process.execPath, [join(root, 'scripts/bindings/generate-fastly.mjs'), '--check'], { stdio: 'pipe' });
});

test('the witx files are the pinned copies (scripts/fastly/witx/README.md)', () => {
  const readme = read('scripts/fastly/witx/README.md');
  const pins = [...readme.matchAll(/^\| (\S+) \| ([0-9a-f]{64}) \|$/gm)].map(m => [m[1], m[2]]);
  assert.deepEqual(pins.map(p => p[0]).sort(), readdirSync(join(root, 'scripts/fastly/witx')).filter(f => f !== 'README.md').sort());
  for (const [file, sha] of pins) assert.equal(createHash('sha256').update(readFileSync(join(root, 'scripts/fastly/witx', file))).digest('hex'), sha, file);
});

test('the library ships every generated module, each after the modules it imports', () => {
  const generated = readdirSync(join(root, 'library/Lasm/Fastly')).filter(f => f.endsWith('.lean')).map(f => `Lasm.Fastly.${f.slice(0, -5)}`);
  const shipped = libraryModules.filter(m => m.startsWith('Lasm.Fastly'));
  assert.deepEqual([...shipped].sort(), [...generated, 'Lasm.Fastly'].sort());
  for (const module of shipped) {
    const source = read(`library/${module.replaceAll('.', '/')}.lean`);
    for (const [, imported] of source.matchAll(/^import (\S+)$/gm))
      if (imported.startsWith('Lasm.')) assert.ok(libraryModules.indexOf(imported) < libraryModules.indexOf(module), `${module} imports ${imported}`);
  }
});

test('every extern has its C function with host imports and as an $unsupported stub, with the same parameters', () => {
  const glue = read('library/c/lasm_fastly.c');
  const [real, stub] = glue.split('\n#else\n');
  const signatures = text => new Map([...text.matchAll(/^LEAN_EXPORT lean_obj_res (lasm_fastly_\w+)\(([^)]*)\)/gm)].map(m => [m[1], m[2]]));
  const realFns = signatures(real.slice(real.indexOf('#ifdef LASM_WASI_FASTLY'))), stubFns = signatures(stub);
  assert.deepEqual([...realFns.keys()].sort(), [...stubFns.keys()].sort());
  for (const [name, params] of realFns) assert.equal(stubFns.get(name), params, name);
  for (const [name] of stubFns) assert.match(stub, new RegExp(`${name}\\([^)]*\\) \\{[^\\n]*return LASM_FASTLY_UNSUPPORTED; \\}`));
  const externs = readdirSync(join(root, 'library/Lasm/Fastly')).flatMap(f => [...read(`library/Lasm/Fastly/${f}`).matchAll(/@\[extern "(\w+)"\]/g)].map(m => m[1]));
  assert.deepEqual(externs.sort(), [...realFns.keys()].sort());
  // One host import per bound function, as the surface report counts them.
  const surface = JSON.parse(read('scripts/bindings/fastly-surface.json'));
  const imports = [...real.matchAll(/import_module\("(\w+)"\), import_name\("(\w+)"\)/g)].map(m => `${m[1]}.${m[2]}`);
  assert.equal(imports.length, surface.total.bound);
  assert.deepEqual(imports.sort(), surface.modules.flatMap(m => m.bound.map(f => `${m.witx}.${f}`)).sort());
  assert.equal(surface.total.functions, surface.total.bound + surface.modules.reduce((n, m) => n + m.unbound.length, 0));
  // $unsupported is the status the stubs return (its witx position).
  const statuses = /inductive FastlyStatus where\n((?:  \| \w+\n)+)/.exec(read('library/Lasm/Fastly/Types.lean'))[1].trim().split('\n').map(l => l.replace('  | ', '').trim());
  assert.equal(Number(/lean_box\((\d+)\)\)\n/.exec(glue.slice(glue.indexOf('#define LASM_FASTLY_UNSUPPORTED')))[1]), statuses.indexOf('unsupported'));
});

test('the HTTP, store and backend modules are bound in full', () => {
  const surface = JSON.parse(read('scripts/bindings/fastly-surface.json'));
  const byName = Object.fromEntries(surface.modules.map(m => [m.witx, m]));
  for (const module of ['fastly_http_body', 'fastly_http_resp', 'fastly_backend', 'fastly_kv_store', 'fastly_config_store', 'fastly_secret_store',
    'fastly_dictionary', 'fastly_geo', 'fastly_log', 'fastly_async_io', 'fastly_http_downstream', 'fastly_acl', 'fastly_erl', 'fastly_cache'])
    assert.deepEqual(byName[module].unbound, [], module);
  // fastly_http_req: only the variants that report a send error's detail on failure are left out.
  assert.deepEqual(byName.fastly_http_req.unbound.map(u => u.name), ['send_v2', 'send_v3', 'pending_req_poll_v2', 'pending_req_wait_v2', 'pending_req_select_v2']);
});
