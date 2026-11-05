import assert from 'node:assert/strict';
import test from 'node:test';
import { relabelPreJs, lasmJsLinkFlags } from '../src/application-link.mjs';
import { glueLinkFlags } from '../src/lasm-library.mjs';

const glue = files => ['// include: shell.js', ...files.flatMap(file => [`// include: ${file}`, 'code();', `// end include: ${file}`]),
  '// end include: shell.js', ''].join('\n');

test('pre-js labels name files without absolute or build-directory paths', () => {
  const files = ['/opt/lasm/scripts/full-lean/emscripten-pre.js', '/p/.lake/lasm/applications/x/.build-1234/application-pre.js',
    '/opt/lasm/scripts/full-lean/host-pre.js'];
  const output = relabelPreJs(glue(files), files);
  assert.equal(output, glue(['emscripten-pre.js', 'application-pre.js', 'host-pre.js']));
  // Independent of where the package and build directory live.
  const moved = files.map(file => file.replace('/opt/lasm', '/home/u/lasm').replace('.build-1234', '.build-5678'));
  assert.equal(relabelPreJs(glue(moved), moved), output);
});

test('pre-js labels compare Windows separators portably', () => {
  const files = ['C:\\lasm\\emscripten-pre.js'];
  assert.equal(relabelPreJs(glue(['C:/lasm/emscripten-pre.js']), files), glue(['emscripten-pre.js']));
});

test('missing or repeated pre-js labels are rejected', () => {
  assert.throws(() => relabelPreJs(glue([]), ['/a/host-pre.js']), /pre-js labels/);
  const twice = glue(['/a/host-pre.js', '/a/host-pre.js']);
  assert.throws(() => relabelPreJs(twice, ['/a/host-pre.js']), /pre-js labels/);
});

test('programs with Lasm.JS\'s Node glue link with its wait wraps; others do not', () => {
  const flags = ['-Wl,--wrap=lean_task_get', '-Wl,--wrap=lean_io_wait_any_core', '-Wl,--wrap=emscripten_futex_wait'];
  assert.deepEqual(glueLinkFlags, flags);
  assert.deepEqual(lasmJsLinkFlags(['/w/Main.c', '/pkg/library/c/lasm_js.c', '/pkg/library/c/lasm_fetch.c']), flags);
  assert.deepEqual(lasmJsLinkFlags(['C:\\pkg\\library\\c\\lasm_js.c']), flags);
  assert.deepEqual(lasmJsLinkFlags(['lasm_js.c']), flags);
  // A copy is returned (the link appends to it).
  assert.notEqual(lasmJsLinkFlags(['lasm_js.c']), glueLinkFlags);
  assert.deepEqual(lasmJsLinkFlags(['/w/Main.c', '/w/xlasm_js.c', '/w/lasm_js.c.o', '/w/lasm_fetch.c']), []);
});
