import { readFileSync } from 'node:fs';
import { assertSupportedHost } from './platform.mjs';

/** Release candidates declare their tested contract; research checkouts do not. */
export function applicationSupport() {
  try { return JSON.parse(readFileSync(new URL('../application-support.json', import.meta.url), 'utf8')); }
  catch (error) { if (error.code === 'ENOENT') return undefined; throw error; }
}

export function requireApplicationSupport(support = applicationSupport(), host = process) {
  assertSupportedHost(host.platform, host.arch);
  if (!support) return;
  if (!support.platforms.includes(`${host.platform}-${host.arch}`))
    throw new Error(`This Lasm candidate supports ${support.platforms.join(', ')}. Your host is ${host.platform}-${host.arch}. Use a supported native platform.`);
  // Candidates since Phase 5.1 accept a Node range (minimumNode); older ones an exact release.
  const minimum = support.minimumNode ?? support.node;
  if (support.minimumNode ? !nodeAtLeast(host.versions.node, minimum) : host.versions.node !== support.node)
    throw new Error(`This Lasm candidate requires Node ${minimum}${support.minimumNode ? ' or newer' : ''} with npm${support.testedNode ? ` (tested on ${support.testedNode.join(' and ')})` : ''}; you are running Node ${host.versions.node}. Install a supported Node release and retry.`);
  if (host.platform === 'linux' && support.minimumGlibc) {
    const actual = host.report?.getReport().header.glibcVersionRuntime;
    if (!glibcAtLeast(actual, support.minimumGlibc))
      throw new Error(`This Lasm candidate requires glibc ${support.minimumGlibc} or newer (Ubuntu 24.04 is the tested build distribution). Your host reports ${actual ? 'glibc ' + actual : 'no glibc; musl/Alpine is not supported'}. Use a supported Linux system.`);
  }
}

export function glibcAtLeast(actual, required) {
  if (!/^\d+\.\d+$/.test(actual ?? '') || !/^\d+\.\d+$/.test(required)) return false;
  const [major, minor] = actual.split('.').map(Number), [a, b] = required.split('.').map(Number);
  return major > a || major === a && minor >= b;
}

/** Numeric comparison of dotted Node versions (`24.0.0`); a malformed version is never enough. */
export function nodeAtLeast(actual, required) {
  const parse = value => /^v?(\d+)\.(\d+)\.(\d+)$/.exec(value ?? '')?.slice(1).map(Number);
  const a = parse(actual), b = parse(required);
  if (!a || !b) return false;
  for (let i = 0; i < 3; i++) if (a[i] !== b[i]) return a[i] > b[i];
  return true;
}
