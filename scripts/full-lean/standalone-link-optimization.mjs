import { runtimeLinkInputs } from './application-link-mode.mjs';

export function standaloneOptimizationPlan(args, runtimePaths, options) {
  if (options.level !== 1) throw new Error('Standalone link optimization currently supports only level 1');
  if (args.some(arg => /^(?:-M|-save-temps|-gsplit-dwarf|-gsource-map|-ftime-trace|-fprofile|-fcoverage|-fsanitize|--coverage)/.test(arg)))
    return { mode: 'unchanged', reason: 'Explicit auxiliary compiler outputs or instrumentation' };
  const inputs = runtimeLinkInputs(args, runtimePaths, options);
  if (!inputs.eligible) return { mode: 'unchanged', reason: inputs.reason };
  if (inputs.sources.length !== 1)
    return { mode: 'unchanged', reason: 'Split optimization currently requires exactly one generated Lean C source' };
  return { mode: 'split', source: inputs.sources[0], level: options.level,
    reason: 'Preserve original C compilation flags; optimize the standalone final link separately' };
}

export function standaloneOptimizationCommands(compileArgs, linkArgs, plan, object) {
  if (plan.mode !== 'split' || !compileArgs.includes(plan.source) || !linkArgs.includes(plan.source))
    throw new Error('Split optimization needs the selected generated source in both stages');
  // The caller supplies the same arguments its ordinary compile-only branch
  // uses. Do not change -O, -D, include paths, language, or target flags here.
  return {
    compile: [...compileArgs, '-c', '-o', object],
    link: [...linkArgs.map(arg => arg === plan.source ? object : arg), '-O1'],
  };
}
