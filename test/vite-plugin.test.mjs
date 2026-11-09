// The Vite plugin (src/vite/index.mjs) driven as Vite drives it, without Vite:
// configResolved, resolveId, load, generateBundle, handleHotUpdate. Builds go to
// a stand-in CLI process (options.cli) or, in development with the plugin's own
// CLI, to a stand-in build service (test/fixtures/vite-stand-ins/).
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { mkdirSync, mkdtempSync, readFileSync, rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { registerHooks } from 'node:module';
import { tmpdir } from 'node:os';
import { dirname, join, relative, sep } from 'node:path';
import { fileURLToPath } from 'node:url';

const standIns = new URL('./fixtures/vite-stand-ins/', import.meta.url);
registerHooks({
  resolve(specifier, context, next) {
    if ((context.parentURL ?? '').includes('/src/vite/index.mjs') && specifier === '../dev-build-service.mjs')
      return { url: new URL('build-service.mjs', standIns).href, shortCircuit: true };
    return next(specifier, context);
  },
});
const { default: lasm, lasm: named } = await import('../src/vite/index.mjs');
const state = globalThis.__lasmViteStandIn ??= { services: [], builds: [] };
const cli = fileURLToPath(new URL('cli.mjs', standIns));

function project() {
  const root = mkdtempSync(join(tmpdir(), 'lasm-vite-'));
  mkdirSync(join(root, 'src', 'deep'), { recursive: true });
  mkdirSync(join(root, 'node_modules', 'pkg'), { recursive: true });
  mkdirSync(join(root, '.lake'), { recursive: true });
  for (const file of ['src/Main.lean', 'src/deep/Util.lean', 'src/notes.md', 'node_modules/pkg/X.lean', '.lake/Y.lean', 'src/.hidden.lean']) writeFileSync(join(root, file), '');
  return root;
}
function plugin(root, options, command = 'build', cacheDir = join(root, 'node_modules', '.vite')) {
  const p = lasm(options);
  p.configResolved({ root, command, cacheDir });
  return p;
}
const context = () => { const watched = []; return { watched, addWatchFile: file => watched.push(file) }; };

test('Vite plugin: its shape and the ?lasm ids it resolves', async () => {
  assert.equal(named, lasm);
  const root = project();
  try {
    const p = plugin(root, { cli });
    assert.equal(p.name, 'lasm');
    assert.equal(p.enforce, 'pre');
    assert.equal(await p.resolveId('./x.js', join(root, 'src', 'main.js')), null);
    assert.equal(await p.resolveId('./Main.lean?lasm', join(root, 'src', 'main.js')), '\0lasm:' + join(root, 'src', 'Main.lean'));
    assert.equal(await p.resolveId('src/Main.lean?lasm'), '\0lasm:' + join(root, 'src', 'Main.lean'), 'without an importer: from the root');
    await assert.rejects(p.resolveId('./main.js?lasm', join(root, 'src', 'x.js')), { message: './main.js?lasm: ?lasm imports a Lean source file (Main.lean?lasm)' });
    await assert.rejects(p.resolveId('./Nope.lean?lasm', join(root, 'src', 'x.js')), { message: `./Nope.lean?lasm: ${join(root, 'src', 'Nope.lean')} does not exist` });
    assert.equal(await p.load.call(context(), '/src/main.js'), null);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('Vite plugin, production build: the CLI builds the app once; the module re-exports the loader; notices are emitted', async () => {
  const root = project();
  const source = join(root, 'src', 'Main.lean');
  try {
    const p = plugin(root, { cli: relative(root, cli), suspend: 'jspi' });
    const ctx = context();
    const code = await p.load.call(ctx, '\0lasm:' + source + '?import');
    const output = join(root, 'node_modules', '.vite', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16));
    const entry = join(output, 'app.0123456789ab.js');
    const loader = JSON.stringify(entry.split(sep).join('/'));
    assert.equal(code, `export * from ${loader};\nexport { default } from ${loader};\n`);
    const ran = JSON.parse(readFileSync(join(output, 'ran.json'), 'utf8'));
    assert.deepEqual(ran.args, ['build', source, '--target', 'browser', '--bundler', '--output', output, '--suspend', 'jspi']);
    assert.equal(ran.cwd, dirname(source));
    assert.equal(ran.BROWSER, 'none');
    assert.equal(ran.CI, process.env.CI ?? '');
    assert.deepEqual(ctx.watched.sort(), [join(root, 'src', 'Main.lean'), join(root, 'src', 'deep', 'Util.lean')]);
    // A second load reuses the build.
    writeFileSync(join(output, 'ran.json'), '"reused"');
    await p.load.call(context(), '\0lasm:' + source);
    assert.equal(readFileSync(join(output, 'ran.json'), 'utf8'), '"reused"');

    // generateBundle: the banner goes back on the chunk that has the loader, before its source map comment.
    const emitted = [];
    const real = join(root, 'linked.js');
    symlinkSync(entry, real);
    const bundle = {
      'a.js': { type: 'chunk', moduleIds: [real], code: 'minified();\n//# sourceMappingURL=a.js.map\n' },
      'b.js': { type: 'chunk', modules: { [entry]: {} }, code: 'other()' },
      'c.js': { type: 'chunk', moduleIds: ['/elsewhere.js'], code: 'unrelated();' },
      'd.js': { type: 'chunk', moduleIds: [entry], code: 'kept();\n/*! The app web app, built by Lasm. */\n' },
      'style.css': { type: 'asset', source: 'p{}' },
    };
    p.generateBundle.call({ emitFile: file => emitted.push(file) }, {}, bundle);
    assert.equal(bundle['a.js'].code, 'minified();\n/*! The app web app, built by Lasm. */\n//# sourceMappingURL=a.js.map\n');
    assert.equal(bundle['b.js'].code, 'other()\n/*! The app web app, built by Lasm. */\n');
    assert.equal(bundle['c.js'].code, 'unrelated();');
    assert.equal(bundle['d.js'].code, 'kept();\n/*! The app web app, built by Lasm. */\n');
    assert.deepEqual(emitted, [{ type: 'asset', fileName: 'THIRD_PARTY_NOTICES.lasm.txt', source: 'notices text\n' }]);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('Vite plugin: two apps\' notices are joined; a manifest without a notices name; a failing build', async () => {
  const root = project();
  writeFileSync(join(root, 'Other.lean'), '');
  try {
    const p = plugin(root, { cli });
    await p.load.call(context(), '\0lasm:' + join(root, 'src', 'Main.lean'));
    process.env.LASM_TEST_NOTICES = 'second\n';
    process.env.LASM_TEST_NO_NOTICES_FIELD = '1';
    try { await p.load.call(context(), '\0lasm:' + join(root, 'Other.lean')); }
    finally { delete process.env.LASM_TEST_NOTICES; delete process.env.LASM_TEST_NO_NOTICES_FIELD; }
    const emitted = [];
    p.generateBundle.call({ emitFile: file => emitted.push(file) }, {}, {});
    assert.equal(emitted[0].source, 'notices text\n\n\n=============================== next Lean app ===============================\n\nsecond\n');
    // The same notices twice are emitted once.
    const same = plugin(root, { cli });
    await same.load.call(context(), '\0lasm:' + join(root, 'src', 'Main.lean'));
    await same.load.call(context(), '\0lasm:' + join(root, 'Other.lean'));
    const once = [];
    same.generateBundle.call({ emitFile: file => once.push(file) }, {}, {});
    assert.equal(once[0].source, 'notices text\n');
    // Nothing loaded: nothing emitted.
    const none = [];
    plugin(root, { cli }).generateBundle.call({ emitFile: file => none.push(file) }, {}, {});
    assert.deepEqual(none, []);

    process.env.LASM_TEST_CLI_FAIL = '1';
    try {
      await assert.rejects(plugin(root, { cli }).load.call(context(), '\0lasm:' + join(root, 'src', 'Main.lean')), error => {
        assert.ok(error.message.startsWith(`lasm build ${join('src', 'Main.lean')} failed:\n`), error.message.slice(0, 100));
        assert.ok(error.message.endsWith('Main.lean:1:0: error: broken\n'));
        assert.equal(error.message.length, `lasm build ${join('src', 'Main.lean')} failed:\n`.length + 8000);
        return true;
      });
    } finally { delete process.env.LASM_TEST_CLI_FAIL; }
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('Vite plugin, development: builds in a long-lived worker, hot updates, errors to the overlay', async () => {
  const root = project();
  const source = join(root, 'src', 'Main.lean');
  state.services = []; state.builds = []; state.fail = null;
  const stderr = [];
  const write = process.stderr.write;
  process.stderr.write = chunk => { stderr.push(String(chunk)); return true; };
  try {
    const p = plugin(root, { suspend: 'jspi' }, 'serve');
    let closeServer;
    p.configureServer({ httpServer: { once: (event, fn) => { assert.equal(event, 'close'); closeServer = fn; } } });
    p.configureServer({});
    const code = await p.load.call(context(), '\0lasm:' + source);
    assert.equal(state.services.length, 1);
    assert.deepEqual(state.services[0].options, { unref: true });
    assert.deepEqual(state.builds[0], { file: source, options: { profile: 'dev', output: state.builds[0].options.output, bundler: true, suspend: 'jspi' }, target: 'browser' });
    assert.ok(stderr.includes('worker log\n'));
    // The development module: a stable handle per app, remounted on lasm:update for this source.
    assert.match(code, /^import \* as initial from "[^"]+\/app\.0123456789ab\.js";\nlet current = initial;/);
    assert.ok(code.includes(`if (id !== ${JSON.stringify(source)}) return;`));
    assert.ok(code.includes(`console.info('[lasm] ' + ${JSON.stringify(join('src', 'Main.lean'))} + ' updated');`));
    assert.match(code, /export default \{ name, mount, mountAll, preload, appOf \};/);

    // A save of a .lean file in the app's directory rebuilds it and sends the update.
    const sent = [];
    const server = { ws: { send: message => sent.push(message) } };
    assert.equal(await p.handleHotUpdate({ file: join(root, 'src', 'style.css'), server }), undefined);
    assert.equal(await p.handleHotUpdate({ file: join(root, 'Elsewhere.lean'), server }), undefined, 'outside every app: Vite handles it');
    assert.deepEqual(await p.handleHotUpdate({ file: join(root, 'src', 'deep', 'Util.lean'), server }), []);
    assert.equal(state.builds.length, 2);
    assert.equal(state.services.length, 1, 'one worker for every build');
    assert.equal(sent.length, 1);
    assert.equal(sent[0].type, 'custom');
    assert.equal(sent[0].event, 'lasm:update');
    assert.equal(sent[0].data.id, source);
    assert.match(sent[0].data.url, /^\/@fs\/[^?]*\/app\.0123456789ab\.js\?t=\d+$/);
    assert.ok(!sent[0].data.url.startsWith('/@fs//'));
    // A failing rebuild goes to Vite's error overlay.
    state.fail = Object.assign(new Error('worker message'), { stdout: 'out', stderr: 'Main.lean:1:0: error: oops' });
    assert.deepEqual(await p.handleHotUpdate({ file: source, server }), []);
    assert.deepEqual(sent[1], { type: 'error', err: { message: `lasm build ${join('src', 'Main.lean')} failed:\nout\nMain.lean:1:0: error: oops`, stack: '', plugin: 'lasm' } });
    state.fail = new Error('only a message');
    await p.handleHotUpdate({ file: source, server });
    assert.equal(sent[2].err.message, `lasm build ${join('src', 'Main.lean')} failed:\nonly a message`);
    state.fail = null;
    // The dev server's close stops the worker; the next build starts a new one.
    closeServer();
    assert.equal(state.services[0].closed, true);
    await p.handleHotUpdate({ file: source, server });
    assert.equal(state.services.length, 2);
    // release: true builds the release profile in development too.
    const release = plugin(root, { release: true }, 'serve');
    await release.load.call(context(), '\0lasm:' + source);
    assert.equal(state.builds.at(-1).options.profile, 'release');
    assert.equal(state.builds.at(-1).options.suspend, undefined);
  } finally { process.stderr.write = write; rmSync(root, { recursive: true, force: true }); }
});

test('Vite plugin, development with a configured CLI: a process per build with --dev; LASM_CLI', async () => {
  const root = project();
  const source = join(root, 'src', 'Main.lean');
  try {
    const p = plugin(root, { cli }, 'serve');
    await p.load.call(context(), '\0lasm:' + source);
    const output = JSON.parse(readFileSync(join(root, 'node_modules', '.vite', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16), 'ran.json'), 'utf8'));
    assert.deepEqual(output.args.slice(-1), ['--dev']);
    assert.ok(!output.args.includes('--suspend'));
    process.env.LASM_CLI = cli;
    const builds = state.builds.length;
    try {
      const viaEnv = plugin(root, {}, 'serve', join(root, 'cache'));
      const code = await viaEnv.load.call(context(), '\0lasm:' + source);
      assert.match(code, /cache\/lasm\/[0-9a-f]{16}\/app\.0123456789ab\.js/);
      assert.equal(state.builds.length, builds, 'LASM_CLI runs the CLI, not the worker');
      // The output directory under the root is not watched.
      const inside = plugin(root, {}, 'build', join(root, 'src', 'deep'));
      const own = join(root, 'src', 'deep', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16));
      mkdirSync(own, { recursive: true });
      writeFileSync(join(own, 'Copied.lean'), '');
      writeFileSync(join(root, 'src', 'deep', 'lasm', 'Beside.lean'), '');
      const ctx = context();
      await inside.load.call(ctx, '\0lasm:' + source);
      assert.deepEqual(ctx.watched.sort(), [join(root, 'src', 'Main.lean'), join(root, 'src', 'deep', 'Util.lean'), join(root, 'src', 'deep', 'lasm', 'Beside.lean')].sort());
    } finally { delete process.env.LASM_CLI; }
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('Vite plugin: details: the CLI\'s exact arguments and environment, its stderr, a loader without a banner, source map positions', async () => {
  const root = project();
  mkdirSync(join(root, 'src', 'node_modules'), { recursive: true });
  writeFileSync(join(root, 'src', 'node_modules', 'Dep.lean'), '');
  const source = join(root, 'src', 'Main.lean');
  const savedCI = process.env.CI;
  delete process.env.CI;
  try {
    const p = plugin(root, { cli }, 'serve');
    const ctx = context();
    await p.load.call(ctx, '\0lasm:' + source);
    assert.deepEqual(ctx.watched.sort(), [join(root, 'src', 'Main.lean'), join(root, 'src', 'deep', 'Util.lean')], 'node_modules is not watched');
    const output = join(root, 'node_modules', '.vite', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16));
    const ran = JSON.parse(readFileSync(join(output, 'ran.json'), 'utf8'));
    assert.deepEqual(ran.args, ['build', source, '--target', 'browser', '--bundler', '--output', output, '--dev']);
    assert.equal(ran.CI, '');
  } finally { if (savedCI === undefined) delete process.env.CI; else process.env.CI = savedCI; }
  // A failing CLI: its stderr is shown as it comes and ends the error message.
  const shown = [];
  const write = process.stderr.write;
  process.stderr.write = chunk => { shown.push(String(chunk)); return true; };
  process.env.LASM_TEST_CLI_FAIL = 'short';
  try {
    await assert.rejects(plugin(root, { cli }).load.call(context(), '\0lasm:' + source), { message: `lasm build ${join('src', 'Main.lean')} failed:\nMain.lean:1:0: error: broken\n` });
  } finally { delete process.env.LASM_TEST_CLI_FAIL; process.stderr.write = write; }
  assert.equal(shown.join(''), 'Main.lean:1:0: error: broken\n');
  // A loader without a licence banner: nothing is added to the chunks.
  process.env.LASM_TEST_NO_BANNER = '1';
  try {
    const p = plugin(root, { cli });
    await p.load.call(context(), '\0lasm:' + source);
    const entry = join(root, 'node_modules', '.vite', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16), 'app.0123456789ab.js');
    const bundle = { 'a.js': { type: 'chunk', moduleIds: [entry], code: 'x();' } };
    p.generateBundle.call({ emitFile() {} }, {}, bundle);
    assert.equal(bundle['a.js'].code, 'x();');
  } finally { delete process.env.LASM_TEST_NO_BANNER; }
  // Where the banner goes: before a final source map comment only, keeping one newline.
  const p = plugin(root, { cli });
  await p.load.call(context(), '\0lasm:' + source);
  const entry = join(root, 'node_modules', '.vite', 'lasm', (await import('node:crypto')).createHash('sha256').update(source).digest('hex').slice(0, 16), 'app.0123456789ab.js');
  const banner = '/*! The app web app, built by Lasm. */\n';
  const cases = {
    'tail();\n': 'tail();\n' + banner,
    'a();\n\n//# sourceMappingURL=a.map\n': 'a();\n' + banner + '//# sourceMappingURL=a.map\n',
    'b();\n//# sourceMappingURL=b.map': 'b();\n' + banner + '//# sourceMappingURL=b.map',
    '//# sourceMappingURL=c.map': '\n' + banner + '//# sourceMappingURL=c.map',
    'd();\n//# sourceMappingURL=d.map\nmore();': 'd();\n//# sourceMappingURL=d.map\nmore();\n' + banner,
  };
  const bundle = Object.fromEntries(Object.keys(cases).map((code, i) => [`${i}.js`, { type: 'chunk', moduleIds: [entry], code }]));
  p.generateBundle.call({ emitFile() {} }, {}, bundle);
  assert.deepEqual(Object.values(bundle).map(chunk => chunk.code), Object.values(cases));
  // An entry that no longer exists is compared by its path, not matched with every unknown module.
  rmSync(entry);
  const unknown = { 'u.js': { type: 'chunk', moduleIds: ['/nonexistent/module.js'], code: 'u();' } };
  p.generateBundle.call({ emitFile() {} }, {}, unknown);
  assert.equal(unknown['u.js'].code, 'u();');
  rmSync(root, { recursive: true, force: true });
});

test('Vite plugin, development: worker failures (trimmed, at most 8000 characters), the update URL, closing before any build', async () => {
  const root = project();
  const source = join(root, 'src', 'Main.lean');
  state.services = []; state.builds = []; state.fail = null;
  const write = process.stderr.write;
  process.stderr.write = () => true;
  try {
    const p = plugin(root, {}, 'serve');
    let closeServer;
    p.configureServer({ httpServer: { once: (event, fn) => { closeServer = fn; } } });
    assert.doesNotThrow(() => closeServer(), 'no worker yet');
    state.fail = Object.assign(new Error('m'), { stdout: '  out  ', stderr: undefined });
    await assert.rejects(p.load.call(context(), '\0lasm:' + source), { message: `lasm build ${join('src', 'Main.lean')} failed:\nout` });
    state.fail = Object.assign(new Error('m'), { stderr: 'y'.repeat(9000) + 'END' });
    const p2 = plugin(root, {}, 'serve');
    await assert.rejects(p2.load.call(context(), '\0lasm:' + source), error => error.message === `lasm build ${join('src', 'Main.lean')} failed:\n` + ('y'.repeat(9000) + 'END').slice(-8000));
    state.fail = null;
    const p3 = plugin(root, {}, 'serve');
    await p3.load.call(context(), '\0lasm:' + source);
    const sent = [];
    await p3.handleHotUpdate({ file: source, server: { ws: { send: m => sent.push(m) } } });
    const entry = join(state.builds.at(-1).options.output, 'app.0123456789ab.js');
    assert.match(sent[0].data.url, new RegExp(`^/@fs/${entry.slice(1).replace(/[.]/g, '\\.')}\\?t=\\d+$`));
  } finally { process.stderr.write = write; rmSync(root, { recursive: true, force: true }); }
});
