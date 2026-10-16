#!/usr/bin/env node
// Copy a record-emcc.mjs run's comparable outputs into a relocatable directory
// for cross-machine comparison: objects, program.wasm and program.cjs verbatim,
// link maps with this machine's recorded roots replaced by placeholders (as
// compare.mjs does), plus hashes.json. compare.mjs compares two such directories
// per fixture as plain build directories.
//
//   node scripts/link-driver/collect-outputs.mjs RUN OUT
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { createHash } from 'node:crypto';

const [runArg, outArg] = process.argv.slice(2);
if (!runArg || !outArg) throw new Error('Usage: collect-outputs.mjs RUN OUT');
const run = resolve(runArg), out = resolve(outArg);
if (existsSync(out)) throw new Error('Use a new output directory');
const summary = JSON.parse(readFileSync(join(run, 'run.json'), 'utf8'));
const hashes = { platform: summary.platform, node: summary.node, linkDriver: summary.linkDriver, fixtures: {} };
const comparable = name => /\.o$/.test(name) || /\.map$/.test(name) || ['dist/program.wasm', 'dist/program.cjs'].includes(name);
for (const { name } of summary.fixtures) {
  const build = JSON.parse(readFileSync(join(run, name, 'build.json'), 'utf8'));
  const roots = Object.entries(build.paths).filter(([, value]) => typeof value === 'string')
    .map(([key, value]) => [key, value.replace(/[\\/]$/, '')]).filter(([, value]) => value.length > 1)
    .sort((x, y) => y[1].length - x[1].length);
  hashes.fixtures[name] = { requirements: build.requirements };
  // build.json names files with the recording host's separator.
  for (const recorded of Object.keys(build.build)) {
    const file = recorded.replaceAll('\\', '/');
    if (!comparable(file)) continue;
    const source = join(build.paths.build, recorded), target = join(out, name, ...file.split('/'));
    mkdirSync(dirname(target), { recursive: true });
    if (file.endsWith('.map')) {
      let text = readFileSync(source, 'utf8');
      for (const [key, value] of roots) text = text.replaceAll(value, `<${key}>`);
      writeFileSync(target, text);
    } else copyFileSync(source, target);
    const bytes = readFileSync(target);
    hashes.fixtures[name][file] = { bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
  }
}
writeFileSync(join(out, 'hashes.json'), JSON.stringify(hashes, null, 2) + '\n');
console.log(JSON.stringify(hashes, null, 2));
