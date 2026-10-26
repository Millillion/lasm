import { readFileSync } from 'node:fs';
import { probe } from './probe.mjs';
const d = new URL('.', import.meta.url).pathname;
const mods = Object.fromEntries(['jspi','mem64','legacyEH','exnref','shared'].map(n => [n, readFileSync(d + n + '.wasm')]));
console.log(JSON.stringify(await probe(mods)));
