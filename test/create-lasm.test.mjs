import test from 'node:test';
import assert from 'node:assert/strict';
import { PassThrough } from 'node:stream';
import { fileURLToPath } from 'node:url';
import { hasDirectory, hasTemplate, main, prompt, usage } from '../packages/create-lasm/create.mjs';
import { parseInitArguments } from '../src/init.mjs';

const cli = { directory: fileURLToPath(new URL('..', import.meta.url)), bin: '/nowhere/lasm.mjs', version: '0.1.0' };

test('a directory is detected exactly as lasm init parses its arguments', () => {
  for (const args of [['app'], ['app', '--template', 'hono'], ['--template', 'hono', 'app'], ['-t=hono', 'app'], ['--deploy', 'lambda', 'x', '-t', 'hono']]) {
    assert.ok(hasDirectory(args), args.join(' '));
    assert.ok(parseInitArguments(args).directory);
  }
  for (const args of [[], ['--template', 'hono'], ['-t', 'plain'], ['--template=hono'], ['--deploy', 'lambda']]) assert.ok(!hasDirectory(args), args.join(' '));
  assert.ok(hasDirectory(['--help']));
  assert.ok(hasTemplate(['-t', 'x']) && hasTemplate(['--template=x']) && !hasTemplate(['--templates']));
});

test('arguments reach lasm init unchanged', async () => {
  const calls = [];
  const run = async (target, args) => { calls.push([target, args]); return 7; };
  assert.equal(await main(['my app', '--template', 'hono', '--deploy=lambda'], { cli, run, stdin: {} }), 7);
  assert.deepEqual(calls, [[cli, ['init', 'my app', '--template', 'hono', '--deploy=lambda']]]);
});

test('without a directory: the usage line unless stdin is a terminal', async () => {
  let written = '';
  const code = await main(['--template', 'hono'], { cli, stdin: { isTTY: false }, stderr: { write: text => { written += text; } },
    run: () => assert.fail('must not run') });
  assert.equal(code, 1);
  assert.equal(written, usage + '\n');
});

test('the interactive prompt asks for the directory and a template', async () => {
  const input = new PassThrough(), output = new PassThrough();
  output.resume();
  const answered = prompt(['--deploy', 'lambda'], { cli, input, output });
  for (const line of ['', 'my-app', 'nope', 'hono']) { await new Promise(resolve => setImmediate(resolve)); input.write(line + '\n'); }
  assert.deepEqual(await answered, ['my-app', '--template', 'hono', '--deploy', 'lambda']);
  // Only the directory is asked when a template was given.
  const second = new PassThrough();
  const keptAgain = prompt(['-t', 'express'], { cli, input: second, output });
  await new Promise(resolve => setImmediate(resolve)); second.write('x\n');
  assert.deepEqual(await keptAgain, ['x', '-t', 'express']);
});
