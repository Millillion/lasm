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
