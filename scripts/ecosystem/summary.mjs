// Print one ecosystem result (scripts/ecosystem/run.mjs) for the CI log.
import { readFileSync } from 'node:fs';

const result = JSON.parse(readFileSync(process.argv[2], 'utf8'));
const { native = {}, lasm = {} } = result;
console.log(`${result.project} on ${result.platform}: ${result.result}`);
console.log(`native: build ${native.buildSeconds ?? '-'} s, exit ${native.exit ?? '-'}; lasm: build ${lasm.buildSeconds ?? '-'} s, exit ${lasm.exit ?? '-'}, wasm ${lasm.wasmBytes ?? '-'} bytes, initializers ${JSON.stringify(lasm.initializationPlan ?? null)}`);
for (const [label, text] of [['native build log', native.log], ['lasm build log', lasm.log], ['native stdout', native.stdout],
  ['lasm stdout', lasm.stdout], ['lasm stderr', lasm.stderrTail]])
  if (text) console.log(`--- ${label}\n${text}`);
