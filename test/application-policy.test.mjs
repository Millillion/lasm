import test from 'node:test';
import assert from 'node:assert/strict';
import { applicationPolicy, requireAotApplication, requireAotDeployment } from '../src/application-policy.mjs';

const staticRequirements = () => ({ mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false });
test('ordinary compiled code is accepted without per-language-feature allowlists', () => {
  requireAotApplication(staticRequirements());
  requireAotDeployment({ applicationPolicy, linkRequirements: staticRequirements() });
});
for (const [name, extra] of [
  ['runtime interpreter', { mode: 'dynamic', dynamic: ['lasm_lookup_lean_symbol'] }],
  ['plugin loader', { mode: 'dynamic', dynamic: ['dlopen'] }],
  ['kernel state without a dynamic symbol', { mode: 'dynamic', cxxRuntime: ['type_checker.cpp.o'] }],
  ['module files without interpreter code', { moduleData: ['l_Lean_findSysroot'], requiresModuleData: true }],
  ['inconsistent metadata marker', { requiresModuleData: true }],
  ['inconsistent static classification', { cxxRuntime: ['environment.cpp.o'] }],
]) test(`build and deployment both reject ${name}`, () => {
  const linkRequirements = { ...staticRequirements(), ...extra };
  assert.throws(() => requireAotApplication(linkRequirements), { code: 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' });
  assert.throws(() => requireAotDeployment({ applicationPolicy, linkRequirements }), /unsupported runtime Lean/);
});
test('missing or malformed dependency evidence is not accepted as a small application', () => {
  for (const record of [undefined, {}, { ...staticRequirements(), dynamic: null },
    { ...staticRequirements(), mode: 'unexpected' }, { ...staticRequirements(), moduleData: [null] }])
    assert.throws(() => requireAotApplication(record), /invalid Lasm runtime dependency analysis/);
  for (const applicationPolicy of [undefined, {}, { schema: 0, mode: 'ahead-of-time' }, { schema: 1, mode: 'dynamic' }])
    assert.throws(() => requireAotDeployment({ applicationPolicy, linkRequirements: staticRequirements() }), /Rebuild/);
});

test('the policy is frozen ahead-of-time schema 1', () => {
  assert.deepEqual(applicationPolicy, { schema: 1, mode: 'ahead-of-time' });
  assert.ok(Object.isFrozen(applicationPolicy));
});

test('a rejection names at most five symbols of each kind, the explanation and the way forward', () => {
  const names = prefix => Array.from({ length: 7 }, (_, i) => `${prefix}${i}`);
  const requirements = { mode: 'dynamic', dynamic: names('d'), cxxRuntime: names('c'), moduleData: names('m'), requiresModuleData: true };
  assert.throws(() => requireAotApplication(requirements, { explanation: ['Required by: your code', 'second line'] }), error => {
    assert.equal(error.code, 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE');
    assert.equal(error.message, 'Lasm does not support runtime Lean compilation, evaluation, module-data access, or plugin loading in deployed applications.'
      + '\nDetected runtime evaluation or plugin loading: d0, d1, d2, d3, d4; Lean compiler/kernel state: c0, c1, c2, c3, c4; '
      + 'runtime Lean module-data access: m0, m1, m2, m3, m4.'
      + '\nRequired by: your code\nsecond line'
      + '\nMove this operation to build time or remove the dependency. Ordinary imports, tactics, macros and deriving during compilation remain supported. No deployment was produced.'
      + '\nSee "Lean support and restrictions" in the Lasm README.');
    return true;
  });
  // No detected symbol (only the classification): no "Detected" line.
  assert.throws(() => requireAotApplication({ ...staticRequirements(), mode: 'dynamic' }), error =>
    !error.message.includes('Detected') && error.message.startsWith('Lasm does not support') && error.message.includes('\nMove this operation'));
});

test('dependency evidence needs a boolean module-data marker and string lists of every kind', () => {
  for (const change of [{ requiresModuleData: 'no' }, { cxxRuntime: 'x' }, { moduleData: undefined }, { dynamic: [1] }, { cxxRuntime: [{}] }])
    assert.throws(() => requireAotApplication({ ...staticRequirements(), ...change }), { message: 'Missing or invalid Lasm runtime dependency analysis. Rebuild the application.' });
  requireAotApplication({ ...staticRequirements(), dynamic: [], cxxRuntime: [], moduleData: [] });
});

test('a deployment rejection keeps the analysis error as its cause', () => {
  const linkRequirements = { ...staticRequirements(), mode: 'dynamic', dynamic: ['dlopen'] };
  assert.throws(() => requireAotDeployment({ applicationPolicy, linkRequirements }), error =>
    error.message === 'This deployment requires unsupported runtime Lean compiler/interpreter features. Rebuild an ahead-of-time application.'
    && error.cause.code === 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE');
  assert.throws(() => requireAotDeployment(undefined), { message: 'This deployment is missing the current Lasm ahead-of-time policy. Rebuild it with the current Lasm compiler.' });
  assert.throws(() => requireAotDeployment({ applicationPolicy: { schema: 1 }, linkRequirements }), /missing the current Lasm ahead-of-time policy/);
});
