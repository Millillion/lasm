// This is a release support boundary, not a sandbox for adversarial Wasm/JS.
export const applicationPolicy = Object.freeze({ schema: 1, mode: 'ahead-of-time' });

export function requireAotApplication(requirements) {
  if (!requirements || !['static', 'dynamic'].includes(requirements.mode)
      || typeof requirements.requiresModuleData !== 'boolean'
      || ['dynamic', 'cxxRuntime', 'moduleData'].some(key => !Array.isArray(requirements[key])
        || requirements[key].some(value => typeof value !== 'string')))
    throw new Error('Missing or invalid Lasm runtime dependency analysis. Rebuild the application.');
  const reasons = [];
  if (requirements.dynamic.length) reasons.push('runtime evaluation or plugin loading: ' + requirements.dynamic.slice(0, 5).join(', '));
  if (requirements.cxxRuntime.length) reasons.push('Lean compiler/kernel state: ' + requirements.cxxRuntime.slice(0, 5).join(', '));
  if (requirements.moduleData.length) reasons.push('runtime Lean module-data access: ' + requirements.moduleData.slice(0, 5).join(', '));
  if (requirements.mode !== 'static' || requirements.requiresModuleData || reasons.length) {
    const error = new Error('Lasm does not support runtime Lean compilation, evaluation, module-data access, or plugin loading in deployed applications.'
      + (reasons.length ? '\nDetected ' + reasons.join('; ') + '.' : '')
      + '\nMove this operation to build time or remove the dependency. Ordinary imports, tactics, macros and deriving during compilation remain supported. No deployment was produced.');
    error.code = 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE';
    throw error;
  }
}

export function requireAotDeployment(info) {
  if (info?.applicationPolicy?.schema !== applicationPolicy.schema
      || info.applicationPolicy.mode !== applicationPolicy.mode)
    throw new Error('This deployment is missing the current Lasm ahead-of-time policy. Rebuild it with the current Lasm compiler.');
  try { requireAotApplication(info.linkRequirements); }
  catch (cause) {
    throw new Error('This deployment requires unsupported runtime Lean compiler/interpreter features. Rebuild an ahead-of-time application.', { cause });
  }
}
