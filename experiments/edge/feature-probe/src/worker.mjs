import jspi from './jspi.wasm'; import mem64 from './mem64.wasm'; import legacyEH from './legacyEH.wasm'; import exnref from './exnref.wasm'; import shared from './shared.wasm';
import { probe } from './probe.mjs';
export default { async fetch() { return Response.json(await probe({ jspi, mem64, legacyEH, exnref, shared })); } };
