import { readFileSync } from 'node:fs';

/** Release candidates declare their tested contract; research checkouts do not. */
export function applicationSupport() {
  try { return JSON.parse(readFileSync(new URL('../application-support.json', import.meta.url), 'utf8')); }
  catch (error) { if (error.code === 'ENOENT') return undefined; throw error; }
}

export function requireApplicationSupport(support = applicationSupport(), host = process) {
  if (!support) return;
  if (!support.platforms.includes(`${host.platform}-${host.arch}`))
    throw new Error(`This Lasm candidate supports Linux x86-64 and ARM64. Your host is ${host.platform}-${host.arch}. Other platforms are planned separately.`);
  if (host.versions.node !== support.node)
    throw new Error(`This Lasm candidate requires Node ${support.node} with npm; you are running Node ${host.versions.node}. Install the supported Node release and retry.`);
  if (support.minimumGlibc) {
    const actual = host.report?.getReport().header.glibcVersionRuntime;
    if (!glibcAtLeast(actual, support.minimumGlibc))
      throw new Error(`This Lasm candidate requires glibc ${support.minimumGlibc} or newer (Ubuntu 24.04 is the tested distribution). Your host reports ${actual ? 'glibc ' + actual : 'no glibc; musl/Alpine is not supported'}. Use a supported Linux system.`);
  }
}

export function glibcAtLeast(actual, required) {
  if (!/^\d+\.\d+$/.test(actual ?? '') || !/^\d+\.\d+$/.test(required)) return false;
  const [major, minor] = actual.split('.').map(Number), [a, b] = required.split('.').map(Number);
  return major > a || major === a && minor >= b;
}
