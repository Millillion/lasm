import assert from 'node:assert/strict';
import test from 'node:test';
import { relabelPreJs } from '../src/application-link.mjs';

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
