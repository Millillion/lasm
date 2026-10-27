import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { applicationNotices, leanRuntimeChanges, runtimeLinksGmp } from '../src/notices.mjs';

const read = path => readFileSync(new URL(path, import.meta.url), 'utf8');

test("the copy of Lasm's licence in built applications is the repository LICENSE", () => {
  assert.equal(read('../src/notices/LASM-LICENSE.txt'), read('../LICENSE'));
});

const runtimeLibraries = ['Init', 'Std', 'Lean', 'LeanExport', 'Lake', 'leancpp', 'leanrt', 'lasmhost', 'uv', 'lasmsymbols']
  .map(name => `lib/lib${name}.a`);
const runtimeManifest = libraries => ({ name: 'lean-4.35.0-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
  libraries, patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) });

test('application notices name Lasm, every Lean change and the added licence texts, and no GNU MP', () => {
  const manifest = runtimeManifest(runtimeLibraries);
  const text = applicationNotices(manifest, '=== Lean ===\nruntime notices\n');
  for (const heading of ['Lasm', 'Changes to Lean (Apache-2.0 section 4(b))', 'LLVM compiler-rt', 'LLVM libunwind', 'libuv LICENSE-extra'])
    assert.ok(text.includes(`=== ${heading} ===`), heading);
  // Decision 5: runtimes built with USE_GMP=OFF link no GNU MP.
  assert.equal(runtimeLinksGmp(manifest), false);
  assert.doesNotMatch(text, /GNU MP|GMP|LGPL/);
  assert.match(text, /Copyright \(c\) 2026 Jordan Last/);
  for (const name of Object.keys(leanRuntimeChanges)) assert.match(text, new RegExp(`  - ${name}: `));
  assert.ok(text.endsWith('=== Lean ===\nruntime notices\n'));
  assert.match(applicationNotices(manifest, '', { cli: true }), /This is the Lasm compiler package/);
});

test('a runtime that still links libgmp.a keeps the GNU MP notice', () => {
  const manifest = runtimeManifest([...runtimeLibraries.slice(0, 8), 'lib/libgmp.a', ...runtimeLibraries.slice(8)]);
  assert.equal(runtimeLinksGmp(manifest), true);
  const text = applicationNotices(manifest, '');
  assert.ok(text.includes('=== GNU MP ===')); assert.match(text, /  - GNU MP 6\.3\.0 \(LGPL-3\.0-or-later OR GPL-2\.0-or-later/);
});

test('licence files of compiled Lake dependencies are collected, the project and toolchain excluded', async () => {
  const { mkdtempSync, mkdirSync, writeFileSync, rmSync } = await import('node:fs');
  const { join } = await import('node:path');
  const { tmpdir } = await import('node:os');
  const { lakeDependencyLicenses, dependencyNotices } = await import('../src/notices.mjs');
  const root = mkdtempSync(join(tmpdir(), 'lasm-dependency-licenses-'));
  try {
    const put = (path, text) => { mkdirSync(join(root, path, '..'), { recursive: true }); writeFileSync(join(root, path), text); };
    put('app/lakefile.toml', 'name = "app"\n'); put('app/Main.lean', ''); put('app/LICENSE', 'own licence');
    put('app/.lake/packages/zip/lakefile.lean', 'import Lake\nopen Lake DSL\npackage «lean-zip»\n');
    put('app/.lake/packages/zip/Zip/Basic.lean', ''); put('app/.lake/packages/zip/c/io_ffi.c', '');
    put('app/.lake/packages/zip/LICENSE', 'Apache zip'); put('app/.lake/packages/zip/NOTICE.md', 'zip notice');
    put('app/.lake/packages/bare/lakefile.toml', 'name = "bare"\n'); put('app/.lake/packages/bare/B.lean', '');
    put('toolchain/src/lean/Init.lean', '');
    const files = ['app/Main.lean', 'app/.lake/packages/zip/Zip/Basic.lean', 'app/.lake/packages/zip/c/io_ffi.c',
      'app/.lake/packages/bare/B.lean', 'toolchain/src/lean/Init.lean'].map(path => join(root, path));
    const packages = lakeDependencyLicenses(join(root, 'app'), files, { exclude: [join(root, 'toolchain')] });
    assert.deepEqual(packages.map(pkg => [pkg.name, pkg.files.map(file => file.name)]), [['bare', []], ['lean-zip', ['LICENSE', 'NOTICE.md']]]);
    const text = dependencyNotices(packages);
    assert.match(text, /- bare: no licence file found/);
    assert.match(text, /=== Lake dependency lean-zip: LICENSE ===\nApache zip/);
    assert.equal(dependencyNotices([]), '');
  } finally { rmSync(root, { recursive: true, force: true }); }
});

// ---- Every target's output (docs/LICENSE_AUDIT.md §11, scripts/license/check-outputs.mjs) ----
const notices = await import('../src/notices.mjs');
const { checkOutput, findOutputs } = await import('../scripts/license/check-outputs.mjs');
const runtimeNoticesFixture = ['Lean', 'Lean bundled dependencies', 'Emscripten', 'LLVM libc++', 'LLVM libc++abi', 'musl', 'mimalloc', 'libuv']
  .map(name => `=== ${name} ===\n${name === 'Lean' ? 'Apache License\nVersion 2.0' : name === 'Lean bundled dependencies'
    ? 'The binary releases of Lean bundle…\n                  GNU LESSER GENERAL PUBLIC LICENSE\nThe GNU MP library is distributed under the GNU LGPL license v3:\n' : name + ' licence text'}\n`).join('\n');
const nodeNotices = () => notices.applicationNotices(runtimeManifest(runtimeLibraries), runtimeNoticesFixture);

test("applications carry a note instead of Lean's LICENSES (Lean's native releases), the CLI package keeps it", () => {
  const app = nodeNotices();
  assert.ok(app.includes('=== Lean bundled dependencies ===\nLean\'s LICENSES file lists'));
  assert.doesNotMatch(app, /GNU LESSER GENERAL PUBLIC LICENSE|GNU LGPL/);
  assert.match(app, /=== Emscripten ===\nEmscripten licence text/);
  assert.match(notices.applicationNotices(runtimeManifest(runtimeLibraries), runtimeNoticesFixture, { cli: true }), /GNU LESSER GENERAL PUBLIC LICENSE/);
  assert.equal(notices.withoutLeanReleaseLicenses('=== Lean ===\nx\n'), '=== Lean ===\nx\n');
});

test('every target gets notices that name its files, with Lasm\'s MIT licence and no GNU licence', () => {
  const node = nodeNotices() + notices.dependencyNotices([]);
  for (const kind of notices.noticeKinds) {
    const text = notices.targetNotices(node, kind, { label: `the ${kind} target` });
    assert.ok(text.startsWith('THIRD-PARTY AND LASM NOTICES\n'), kind);
    assert.match(text, /\n=== Lasm ===\nMIT License\n\nCopyright \(c\) 2026 Jordan Last\n/, kind);
    assert.match(text, /\n=== Changes to Lean \(Apache-2\.0 section 4\(b\)\) ===\n/, kind);
    assert.doesNotMatch(text, /GNU (LESSER )?GENERAL PUBLIC LICENSE|=== GNU MP ===/i, kind);
    assert.deepEqual(notices.noticeVersions(text), { lean: '4.35.0', emscripten: '6.0.9' }, kind);
    if (kind !== 'node') assert.match(text, new RegExp(`This the ${kind} target output was compiled by Lasm`), kind);
    assert.equal(text.includes('\n=== Wasmtime proxy adapter ===\n'), kind === 'wasi-http', kind);
  }
  const http = notices.targetNotices(node, 'wasi-http');
  assert.ok(http.endsWith(read('../src/wasi/component/LICENSE')), 'the adapter\'s licence text, verbatim');
  assert.match(notices.targetNotices(node, 'edge'), /lasm\/program\.mjs: Emscripten 6\.0\.9's JavaScript runtime/);
  assert.throws(() => notices.targetNotices('not ours', 'edge'), /not written by this Lasm/);
});

test('Apache-2.0 4(b): Node outputs list the node-threads patch; outputs on the edge runtime list its own patches', () => {
  const node = applicationNotices(runtimeManifest(runtimeLibraries), '');
  assert.match(node, /\n  - node-threads: src\/runtime\/thread\.cpp \(run main on the program's main thread/);
  const patches = Object.keys(leanRuntimeChanges).filter(name => name !== 'edge');
  const real = applicationNotices({ ...runtimeManifest(runtimeLibraries), patches: Object.fromEntries(patches.map(name => [name, '0'.repeat(64)])) }, '');
  for (const kind of notices.noticeKinds.filter(kind => kind !== 'node')) {
    const text = notices.targetNotices(real, kind);
    assert.doesNotMatch(text, /\n  - node-threads: /, kind);
    assert.match(text, /\n  - edge: src\/CMakeLists\.txt, src\/runtime\/mutex\.cpp, src\/runtime\/object\.cpp \(build the runtime single-threaded/, kind);
    for (const name of patches.filter(name => !notices.nodeOnlyLeanPatches.includes(name))) assert.match(text, new RegExp(`\\n  - ${name}: `), `${kind} ${name}`);
  }
  assert.deepEqual(notices.edgeLeanPatches(['wasm-build', 'node-threads', 'nonlinear-environment']), ['wasm-build', 'nonlinear-environment', 'edge']);
  // Every patch file under scripts/full-lean/patches that a runtime applies has notice text.
  const build = read('../scripts/full-lean/build-application-runtime.mjs');
  for (const [, name] of build.matchAll(/name: '([a-z-]+)', file: 'lean-/g)) assert.ok(leanRuntimeChanges[name], name);
});

test('the edge runtime archive carries the Lasm MIT text and its own list of Lean changes', () => {
  const script = read('../scripts/edge/package-edge-runtime.mjs');
  assert.match(script, /=== Lasm ===\n\$\{noticeText\('LASM-LICENSE\.txt'\)\}/);
  assert.match(script, /=== Changes to Lean \(Apache-2\.0 section 4\(b\)\) ===/);
  assert.match(script, /edgeLeanPatches\(Object\.keys\(nodeManifest\.patches\)\)/);
});

test('the Wasmtime licence copies are identical (component template, WIT files, notices)', () => {
  const text = read('../src/notices/wasmtime-LICENSE.txt');
  assert.match(text, /--- LLVM Exceptions to the Apache 2\.0 License ----/);
  assert.equal(read('../src/wasi/component/LICENSE'), text);
  assert.equal(read('../scripts/wasi/wit/deps/LICENSE'), text);
});

test('the legal banner is one /*! comment naming every licence and the notices file', () => {
  const banner = notices.noticeBanner(nodeNotices(), 'Cloudflare Workers');
  assert.ok(banner.startsWith('/*! Cloudflare Workers, built by Lasm.'));
  assert.equal(banner.indexOf('*/'), banner.length - 3);
  for (const name of ['Apache-2.0', '(MIT OR NCSA)', 'Apache-2.0 WITH LLVM-exception', 'Copyright (c) 2026 Jordan Last', 'THIRD_PARTY_NOTICES.txt'])
    assert.ok(banner.includes(name), name);
});

const emptyModule = Buffer.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0]);
test('lasm.notices custom sections: added, replaced, read and removed, on modules and on the wasi-http component', async () => {
  const text = 'notices é\n'.repeat(200);
  const once = notices.withCustomSection(emptyModule, notices.noticesSectionName, text);
  const twice = notices.withCustomSection(once, notices.noticesSectionName, 'other');
  assert.deepEqual(notices.customSections(once).map(s => [s.name, Buffer.from(s.payload).toString()]), [['lasm.notices', text]]);
  assert.deepEqual(notices.customSections(twice).map(s => s.name), ['lasm.notices']);
  assert.deepEqual(notices.withoutCustomSection(once, notices.noticesSectionName), emptyModule);
  assert.ok(WebAssembly.validate(once));
  assert.equal(WebAssembly.Module.customSections(new WebAssembly.Module(once), 'lasm.notices').length, 1);
  // A component keeps its core module: the spliced program can still be extracted.
  const { componentize, extractCore } = await import('../src/wasi/wasi-component.mjs');
  const core = notices.withCustomSection(emptyModule, 'name-me', 'x');
  const component = notices.withCustomSection(componentize(core), notices.noticesSectionName, text);
  assert.deepEqual(Buffer.from(extractCore(component)), core);
  assert.equal(Buffer.from(notices.customSections(component).at(-1).payload).toString(), text);
});

test('copyleft markers are found in code, not in the embedded notices', () => {
  assert.deepEqual(notices.copyleftFindings(Buffer.from('call __gmpz_init')), ['__gmpz_']);
  assert.deepEqual(notices.copyleftFindings(Buffer.concat([emptyModule, Buffer.from('__gmpn_add_n GNU MP 6.3.0')])), ['__gmpn_', 'GNU MP']);
  assert.deepEqual(notices.copyleftFindings(notices.withCustomSection(emptyModule, notices.noticesSectionName, 'GNU MP, GNU General Public License')), []);
  assert.deepEqual(notices.copyleftFindings(Buffer.from('lean::mpz_to_nat_core gnu_get_libc_version')), []);
  assert.deepEqual(notices.copyleftFindings(Buffer.from('GLIBC_2.34')), ['GLIBC_2.']);
});

test('scripts/license/check-outputs.mjs: compliant outputs of every kind pass, broken ones fail', async () => {
  const { mkdtempSync, mkdirSync, writeFileSync, rmSync, readFileSync: readBytes } = await import('node:fs');
  const { join } = await import('node:path');
  const { tmpdir } = await import('node:os');
  const { gzipSync } = await import('node:zlib');
  const root = mkdtempSync(join(tmpdir(), 'lasm-license-check-'));
  try {
    const node = nodeNotices() + notices.dependencyNotices([]);
    const put = (path, data) => { mkdirSync(join(root, path, '..'), { recursive: true }); writeFileSync(join(root, path), data); };
    // Node dist/
    put('app/dist/build-info.json', JSON.stringify({ target: 'node', profile: 'release' }));
    put('app/dist/THIRD_PARTY_NOTICES.txt', node); put('app/dist/program.cjs', '// glue'); put('app/dist/program.wasm', emptyModule);
    // edge
    const edge = notices.targetNotices(node, 'edge');
    put('app/workers/build-info.json', JSON.stringify({ target: 'workers', profile: 'edge' }));
    put('app/workers/THIRD_PARTY_NOTICES.txt', edge);
    put('app/workers/lasm/program.mjs', notices.noticeBanner(edge, 'Workers') + 'async function Module(){}');
    put('app/workers/lasm/program.wasm', notices.withCustomSection(emptyModule, notices.noticesSectionName, edge));
    // edge, Wasm inlined
    put('app/netlify/lasm/build-info.json', JSON.stringify({ target: 'netlify-edge', profile: 'edge' }));
    put('app/netlify/lasm/THIRD_PARTY_NOTICES.txt', edge);
    put('app/netlify/lasm/lasm/program.mjs', notices.noticeBanner(edge, 'Netlify') + 'x');
    const { inlineWasmModule } = await import('../src/edge/edge-build.mjs');
    put('app/netlify/lasm/lasm/program.wasm.mjs', inlineWasmModule(notices.withCustomSection(emptyModule, notices.noticesSectionName, edge)));
    // browser
    const browser = notices.targetNotices(node, 'browser');
    put('app/web/lasm-manifest.json', JSON.stringify({ target: 'browser', entry: 'app.0123456789ab.js' }));
    put('app/web/THIRD_PARTY_NOTICES.txt', browser);
    put('app/web/app.0123456789ab.js', '// Generated by Lasm\n' + notices.noticeBanner(browser, 'web') + 'export {}');
    // a Vite build (CI marks it): the plugin's notices file and the banner in a chunk
    put('app/vite/lasm-manifest.json', JSON.stringify({ generator: 'vite', target: 'browser' }));
    put('app/vite/THIRD_PARTY_NOTICES.lasm.txt', browser);
    put('app/vite/assets/index-abc.js', 'x();\n' + notices.noticeBanner(browser, 'The app web app', 'THIRD_PARTY_NOTICES.lasm.txt (emitted by the Lasm Vite plugin)'));
    // WASI kinds
    for (const kind of ['wasi', 'fastly', 'wasi-http']) {
      const text = notices.targetNotices(node, kind);
      put(`app/${kind}/out/build-info.json`, JSON.stringify({ target: kind, profile: 'wasi' }));
      put(`app/${kind}/out/THIRD_PARTY_NOTICES.txt`, text);
      put(`app/${kind}/out/main.wasm`, notices.withCustomSection(emptyModule, notices.noticesSectionName, text));
    }
    put('app/fastly/pkg/app.tar.gz', gzipSync(Buffer.from('app/THIRD_PARTY_NOTICES.txt\0\0\0')));
    const outputs = findOutputs(join(root, 'app'));
    assert.deepEqual(outputs.map(o => o.kind).sort(), ['browser', 'edge', 'edge', 'fastly', 'node', 'vite', 'wasi', 'wasi-http']);
    for (const output of outputs) assert.deepEqual(checkOutput(output), [], output.directory);
    // Broken: GNU MP in the Wasm, no banner, no section, notices that list GMP, a package without notices.
    put('app/dist/program.wasm', Buffer.concat([emptyModule, Buffer.from('__gmpz_init')]));
    put('app/workers/lasm/program.mjs', 'async function Module(){}');
    put('app/wasi/out/main.wasm', emptyModule);
    put('app/web/THIRD_PARTY_NOTICES.txt', browser.replace('=== musl ===', '=== GNU MP ===\nGNU LESSER GENERAL PUBLIC LICENSE\n=== musl ==='));
    put('app/fastly/pkg/app.tar.gz', gzipSync(Buffer.from('app/bin/main.wasm\0')));
    put('app/vite/assets/index-abc.js', 'x();');
    const problems = Object.fromEntries(findOutputs(join(root, 'app')).map(o => [o.kind + ':' + o.directory.split(/[\\/]app[\\/]/)[1], checkOutput(o)]));
    assert.match(problems['node:dist'].join(), /program\.wasm contains copyleft markers: __gmpz_/);
    assert.match(problems['edge:workers'].join(), /no legal banner/);
    assert.match(problems['wasi:wasi/out'].join(), /no lasm\.notices section/);
    assert.match(problems['browser:web'].join(), /names a GNU-licensed component/);
    assert.match(problems['fastly:fastly/out'].join(), /has no THIRD_PARTY_NOTICES\.txt/);
    assert.deepEqual(problems['wasi-http:wasi-http/out'], []);
    assert.match(problems['vite:vite'].join(), /no JavaScript chunk carries the Lasm licence banner/);
    assert.ok(readBytes(join(root, 'app/dist/program.cjs')));
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('the CLI licence field covers the wasi-http template\'s Wasmtime adapter', async () => {
  const { cliLicense, cliNoticeSections } = await import('../scripts/npm-dist/packages.mjs');
  assert.equal(cliNoticeSections['Wasmtime proxy adapter'], 'Apache-2.0 WITH LLVM-exception');
  assert.equal(cliLicense('MIT', ['Lasm', 'Wasmtime proxy adapter']), 'MIT AND Apache-2.0 WITH LLVM-exception');
  const heading = notices.wasmtimeAdapterNotice('x').split('\n')[0];
  assert.equal(heading, '=== Wasmtime proxy adapter ===');
});

test("Lasm's own licence is MIT everywhere", async () => {
  assert.match(read('../LICENSE'), /^MIT License\n\nCopyright \(c\) 2026 Jordan Last\n/);
  assert.equal(JSON.parse(read('../package.json')).license, 'MIT');
  const { createPackageJson } = await import('../scripts/npm-dist/packages.mjs');
  assert.equal(createPackageJson({ name: '@lasm/cli', version: '0.3.0' }, {}).license, 'MIT');
});

// ---- Starter code under MIT-0 (LICENSE-MIT-0, docs/LICENSE_AUDIT.md §16) ----
test('templates/ and examples/ carry the MIT-0 text, and LICENSE-MIT-0 states the grant', () => {
  const mit0 = read('../src/notices/MIT-0.txt');
  assert.match(mit0, /^MIT No Attribution\n\nCopyright 2026 Jordan Last\n/);
  assert.doesNotMatch(mit0, /shall be included/);
  assert.equal(read('../templates/LICENSE'), mit0);
  assert.equal(read('../examples/LICENSE'), mit0);
  const grant = read('../LICENSE-MIT-0');
  assert.ok(grant.endsWith(mit0));
  for (const phrase of ['templates/', 'lasm init', 'npm create @lasm', 'examples/', 'README.md and in docs/', 'past and future', '0.1.0, 0.2.0 and 0.3.0', 'MIT License only'])
    assert.ok(grant.includes(phrase), phrase);
  // The root LICENSE stays the plain MIT text (licence detection, the copy in every output's notices).
  assert.equal(read('../LICENSE'), read('../src/notices/LASM-LICENSE.txt'));
});

test("the CLI's SPDX expression adds MIT-0 when it carries the starter code; @lasm/create stays MIT", async () => {
  const { cliLicense, createPackageJson, mainPackageJson } = await import('../scripts/npm-dist/packages.mjs');
  assert.equal(cliLicense('MIT', ['Lasm', 'Lean'], [], { starter: true }), 'MIT AND MIT-0 AND Apache-2.0');
  assert.equal(cliLicense('MIT', ['Lasm', 'Lean']), 'MIT AND Apache-2.0');
  assert.equal(createPackageJson({ name: '@lasm/cli', version: '0.3.1' }, {}).license, 'MIT');
  const main = mainPackageJson({ files: ['bin'], dependencies: {} }, [], { name: '@lasm/cli', version: '0.3.1', license: 'MIT AND MIT-0', licenseFiles: true, starterLicense: true });
  assert.deepEqual(main.files, ['bin', 'LICENSE', 'LICENSE-MIT-0', 'licenses']);
});

test('lasm init writes no licence file, header or license field into a project', async () => {
  const { mkdtempSync, rmSync, readdirSync, readFileSync: readText, statSync } = await import('node:fs');
  const { join } = await import('node:path');
  const { tmpdir } = await import('node:os');
  const { initProject, templates, deployTargets } = await import('../src/init.mjs');
  const root = mkdtempSync(join(tmpdir(), 'lasm-init-licence-'));
  const walk = directory => readdirSync(directory).flatMap(name => statSync(join(directory, name)).isDirectory() ? walk(join(directory, name)) : [join(directory, name)]);
  let projects = 0;
  try {
    for (const template of Object.keys(templates)) {
      const deploys = [[], ...Object.entries(deployTargets).filter(([, t]) => !t.templates || t.templates.includes(template)).map(([name]) => [name])];
      for (const deploy of deploys) {
        const directory = join(root, `${template}-${deploy[0] ?? 'none'}`);
        try { initProject({ directory, template, deploy }); } catch (error) { if (/not (?:available|supported)|only|cannot|does not/i.test(error.message)) continue; throw error; }
        projects++;
        for (const file of walk(directory)) {
          const name = file.slice(directory.length + 1);
          assert.doesNotMatch(name, /(?:^|\/)(?:licen[cs]e|copying)(?:[.-]|$)/i, `${template} ${deploy}: ${name}`);
          const text = readText(file, 'utf8');
          assert.doesNotMatch(text, /MIT License|MIT No Attribution|SPDX-License-Identifier|Copyright \(c\)|Jordan Last/, `${template} ${deploy}: ${name}`);
          if (name.endsWith('package.json')) assert.equal(Object.hasOwn(JSON.parse(text), 'license'), false, `${template} ${deploy}: ${name}`);
        }
      }
    }
  } finally { rmSync(root, { recursive: true, force: true }); }
  assert.ok(projects >= Object.keys(templates).length);
});
