// Lasm.target (library/Lasm/Target.lean, docs/api/decisions/0.6.md 0.6-33): its
// constructors are the CLI's targets (src/cli-names.mjs buildTargets) in order,
// lowerCamelCase, and Target.name gives each target's CLI name; the build's stamp
// (src/target-stamp.mjs) returns that order's index. Fails on any drift.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { buildTargets } from '../src/cli-names.mjs';
import { buildTargets as cliTargets } from '../src/cli-arguments.mjs';
import { targetStampObject, targetStampSource } from '../src/target-stamp.mjs';

const source = readFileSync(new URL('../library/Lasm/Target.lean', import.meta.url), 'utf8');
const camel = name => name.replace(/-([a-z])/g, (_, c) => c.toUpperCase());

test('Lasm.Target has one constructor per CLI target, in the CLI order', () => {
  const block = /inductive Target where\n((?:  \| \w+\n)+)/.exec(source);
  assert.ok(block, 'the Target inductive');
  const constructors = [...block[1].matchAll(/\| (\w+)/g)].map(m => m[1]);
  assert.deepEqual(constructors, buildTargets.map(camel));
  assert.equal(cliTargets, buildTargets, 'lasm build --target accepts exactly these');
});

test('Target.name is the CLI name of each constructor', () => {
  const names = Object.fromEntries([...source.matchAll(/^  \| \.(\w+) => "([^"]+)"$/gm)].map(m => [m[1], m[2]]));
  assert.deepEqual(names, Object.fromEntries(buildTargets.map(t => [camel(t), t])));
});

test('the stamp returns the target\'s index, and refuses an unknown target', () => {
  assert.equal(targetStampObject, 'lasm-target.o');
  buildTargets.forEach((target, index) => {
    const text = targetStampSource(target);
    assert.match(text, new RegExp(`^uint8_t lasm_target\\(void \\*unit\\) \\{ \\(void\\)unit; return ${index}; \\}$`, 'm'));
    assert.ok(text.includes(`--target ${target} `));
  });
  assert.throws(() => targetStampSource('cloudflare'), /Unknown target "cloudflare"/);
  assert.throws(() => targetStampSource(undefined), /Unknown target/);
  assert.ok(/@\[extern "lasm_target"\] private opaque stamped : Unit → Target/.test(source), 'Lean reads the stamp');
});
