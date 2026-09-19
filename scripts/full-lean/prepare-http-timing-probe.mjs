// A disclosed parallel derivative, never an edit to the upstream test tree.
// Scale every time interval uniformly; retain all HTTP payloads, assertions,
// polling counts, and the producer/consumer timing ratios.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { root, leanCommit } from '../../src/toolchain.mjs';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/http-timing');
const scale = Number(process.argv[3] ?? 10);
if (!Number.isInteger(scale) || scale < 1 || scale > 100) throw new Error('Timing scale must be an integer from 1 to 100');
mkdirSync(output);
const relativeSource = 'tests/elab/async_http_hang_regressions.lean';
const source = join(root, '.cache/lean4-4.32.0', relativeSource);
const original = readFileSync(source, 'utf8');
const hash = value => createHash('sha256').update(value).digest('hex');
const known = JSON.parse(readFileSync(join(root, '.work/full-suite-native/test-source-hashes.json')));
if (hash(original) !== known[relativeSource]) throw new Error('Original HTTP test does not match the native control source');
const changes = [];
const transformed = original.split('\n').map((line, index) => {
  const after = line
    .replace(/(timeoutMs : Nat := )(\d+)/, (_, prefix, n) => prefix + Number(n) * scale)
    .replace(/(runWithTimeout (?:"[^"]*"|name) )(\d+)/, (_, prefix, n) => prefix + Number(n) * scale)
    .replace(/((?:IO\.sleep|Sleep\.mk) )(\d+)/, (_, prefix, n) => prefix + Number(n) * scale)
    .replace(/(lingeringTimeout := )(\d+)/, (_, prefix, n) => prefix + Number(n) * scale)
    .replace(/(keepAliveTimeout := ⟨)(\d+)/, (_, prefix, n) => prefix + Number(n) * scale)
    .replace('let ticks := (timeoutMs + 9) / 10', `let ticks := (timeoutMs + ${10 * scale - 1}) / ${10 * scale}`);
  if (after !== line) changes.push({ line: index + 1, before: line, after });
  return after;
}).join('\n');
if (scale !== 1 && changes.length !== 36) throw new Error(`Unexpected timing-source drift: ${changes.length} changed lines`);
const file = join(output, 'HttpTiming.lean');
writeFileSync(file, transformed);
writeFileSync(join(output, 'derivation.json'), JSON.stringify({ leanCommit, source, sourceSha256: hash(original),
  output: file, outputSha256: hash(transformed), scale, changes,
  explanation: 'Multiply all millisecond intervals and deadlines by the same factor, including timeout polling cadence. Preserve every functional assertion, request/response byte, retry count, and relative streaming deadline. This is a parallel timing probe, not a pass of the unchanged upstream test.' }, null, 2) + '\n');
console.log(file);
