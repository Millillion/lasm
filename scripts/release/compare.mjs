// release.yml: the packages built for publication must be the rehearsed ones.
// Compares two npm-dist.json records (scripts/npm-dist/build.mjs): every package
// name, version, file name and integrity, the base candidate, and the npm that packed them.
//
//   node scripts/release/compare.mjs REHEARSAL/npm-dist.json BUILT/npm-dist.json
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { pathToFileURL } from 'node:url';
import { publicationOrder } from './lib.mjs';

/** Differences between two records; empty when they would publish the same bytes. Pure, for tests. */
export function differences(rehearsed, built) {
  const problems = [];
  if (rehearsed.base?.sha256 !== built.base?.sha256) problems.push(`base candidate ${built.base?.sha256} differs from the rehearsed ${rehearsed.base?.sha256}`);
  if (rehearsed.npm !== built.npm) problems.push(`packed with npm ${built.npm}, rehearsed with npm ${rehearsed.npm}`);
  const key = p => `${p.name}@${p.version}`;
  const a = new Map(publicationOrder(rehearsed).map(p => [key(p), p])), b = new Map(publicationOrder(built).map(p => [key(p), p]));
  for (const [name, p] of a) {
    const q = b.get(name);
    if (!q) problems.push(`${name} was rehearsed but not built`);
    else if (q.integrity !== p.integrity || q.filename !== p.filename) problems.push(`${name}: built ${q.integrity}, rehearsed ${p.integrity}`);
  }
  for (const name of b.keys()) if (!a.has(name)) problems.push(`${name} was built but not rehearsed`);
  if (publicationOrder(rehearsed).map(key).join() !== publicationOrder(built).map(key).join()) problems.push('the publication order differs');
  return problems;
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const [rehearsalFile, builtFile] = process.argv.slice(2);
  assert.ok(rehearsalFile && builtFile, 'Usage: compare.mjs REHEARSAL/npm-dist.json BUILT/npm-dist.json');
  const [rehearsed, built] = [rehearsalFile, builtFile].map(file => JSON.parse(readFileSync(file, 'utf8')));
  const problems = differences(rehearsed, built);
  for (const p of publicationOrder(built)) console.log(`${problems.some(x => x.startsWith(`${p.name}@`)) ? 'DIFFERENT' : 'identical'} ${p.name}@${p.version} ${p.integrity}`);
  if (problems.length) { console.error(problems.join('\n')); process.exit(1); }
  console.log(`All ${publicationOrder(built).length} packages are byte-identical to the rehearsal.`);
}
