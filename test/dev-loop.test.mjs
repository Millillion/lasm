// The edit-loop caches (docs/BENCHMARKS.md "Edit loop"): Emscripten's JS steps
// reused by content, the Lake adapter's answer keyed by configuration and
// import header.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { jsStepCache } from '../src/link-driver/link.mjs';
import { lakeConfigurationKey, leanHeader } from '../src/application-sources.mjs';

test('JS step cache: build directories are placeholders in keys and stored text', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-js-steps-'));
  try {
    const store = new Map();
    const stepCache = { get: key => store.get(key), set: (key, text) => store.set(key, text) };
    const library = join(directory, 'library.js'); writeFileSync(library, 'mergeInto(LibraryManager.library, {});\n');
    const build = name => {
      const work = join(directory, name), pre = join(work, 'application-pre.js');
      mkdirSync(work, { recursive: true }); writeFileSync(pre, 'Module.lasmLeanVersion = "4.35.0";\n');
      return { work, pre, cache: jsStepCache({ recipe: { link: 1 }, sdk: { identity: 'tools', driver: '/sdk/emscripten' }, stepCache,
        volatile: [join(work, 'node-link-final-abc'), work], files: [pre, library] }) };
    };
    const entry = { kind: 'glue', program: 'node', args: ['<emscripten>/tools/compiler.mjs', '-'] };
    const a = build('.build-1'), b = build('.build-2');
    const settings = build => JSON.stringify({ PRE_JS_FILES: [build.pre], TARGET: join(build.work, 'node-link-final-abc', 'program.js') });
    const key = a.cache.key(entry, settings(a));
    assert.equal(key, b.cache.key(entry, settings(b)), 'only the per-build directory differs');
    a.cache.set(key, `// include: ${a.pre}\nvar x = 1;\n`);
    assert.equal(b.cache.get(key), `// include: ${b.pre}\nvar x = 1;\n`, 'restored with this build\'s paths');
    // Content of a pre-js file is part of the key.
    writeFileSync(b.pre, 'Module.lasmLeanVersion = "4.36.0";\n');
    const c = jsStepCache({ recipe: { link: 1 }, sdk: { identity: 'tools', driver: '/sdk/emscripten' }, stepCache,
      volatile: [b.work], files: [b.pre, library] });
    assert.notEqual(c.key(entry, settings(b)), key);
    // A different step or tool set never shares an entry.
    assert.notEqual(a.cache.key({ ...entry, kind: 'symbols' }, settings(a)), key);
    assert.equal(jsStepCache({ recipe: {}, sdk: {}, volatile: [], files: [] }), undefined, 'no store, no cache');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('Lean import header: comments, module system keywords, then the first command', () => {
  assert.equal(leanHeader('/-\nA program.\nimport Fake\n-/\nimport App\nimport Lasm.JS\nopen Lasm.JS\n\ndef main : IO Unit := pure ()'),
    '/-\nA program.\nimport Fake\n-/\nimport App\nimport Lasm.JS');
  assert.equal(leanHeader('module\n\npublic import A\n-- note\nmeta import B\n@[js "m" "f"] opaque f : IO Unit'),
    'module\n\npublic import A\n-- note\nmeta import B');
  assert.equal(leanHeader('def x := 1\nimport A'), '');
});

test('Lake adapter key: configuration, packages and imports count; bodies do not', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-lake-key-'));
  try {
    const lean = { identity: 'lean' };
    const main = join(directory, 'Main.lean');
    writeFileSync(join(directory, 'lakefile.toml'), 'name = "app"\n');
    writeFileSync(main, 'import App\n\ndef main : IO Unit := IO.println "a"\n');
    const first = lakeConfigurationKey(directory, main, lean);
    writeFileSync(main, 'import App\n\ndef main : IO Unit := IO.println "b"\n');
    assert.equal(lakeConfigurationKey(directory, main, lean), first, 'an edit below the imports keeps the key');
    writeFileSync(main, 'import App\nimport Std\n\ndef main : IO Unit := IO.println "b"\n');
    const imports = lakeConfigurationKey(directory, main, lean);
    assert.notEqual(imports, first);
    writeFileSync(join(directory, 'lakefile.toml'), 'name = "app"\n[[lean_lib]]\nname = "App"\n');
    assert.notEqual(lakeConfigurationKey(directory, main, lean), imports);
    // A dependency's configuration (through the manifest) is part of the key.
    mkdirSync(join(directory, 'dep'));
    writeFileSync(join(directory, 'dep', 'lakefile.toml'), 'name = "dep"\n');
    writeFileSync(join(directory, 'lake-manifest.json'), JSON.stringify({ packages: [{ type: 'path', name: 'dep', dir: 'dep' }] }));
    const withDep = lakeConfigurationKey(directory, main, lean);
    writeFileSync(join(directory, 'dep', 'lakefile.toml'), 'name = "dep"\nprecompileModules = true\n');
    assert.notEqual(lakeConfigurationKey(directory, main, lean), withDep);
    // A lakefile.lean that imports more than Lake is never reused.
    rmSync(join(directory, 'lakefile.toml'));
    writeFileSync(join(directory, 'lakefile.lean'), 'import Lake\nimport Config\nopen Lake DSL\npackage app\n');
    assert.equal(lakeConfigurationKey(directory, main, lean), undefined);
    writeFileSync(join(directory, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage app\n');
    assert.equal(typeof lakeConfigurationKey(directory, main, lean), 'string');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
