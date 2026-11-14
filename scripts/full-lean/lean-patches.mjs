// Lasm's patches to Lean's sources, per Lean release (docs/LEAN_UPGRADE.md).
import { readdirSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

const directory = fileURLToPath(new URL('./patches/', import.meta.url));
// Each Lasm patch to Lean, from the Lean release that needs it on. Its file is
// the newest scripts/full-lean/patches/lean-<X>-<name>.patch with X at most this
// Lean version (a patch is ported by adding a file for the release whose
// sources it no longer applies to; docs/LEAN_UPGRADE.md). Ports so far: 4.35
// moved mimalloc into the runtime, added LEANC_DEPS and fixed declarations the
// 4.32 build patch touched (wasm-build, sdk-mimalloc, c-inputs); 4.36 throws for
// an unreachable interpreter body itself (wasm-build) and moved the runtime's
// source list (sdk-mimalloc).
//   host-linux: getIsLinux was added after the original host-platform patch.
//   nonlinear-environment: Lean 4.35 added LEAN_ABORT_ON_NONLINEAR behind a
//     LEAN_EMSCRIPTEN guard that always returns false; Lasm's C runtime sees the
//     host environment (Emscripten NODE_HOST_ENV), as LEAN_ABORT_ON_PANIC does.
//   node-threads (Node profile): `main` runs on the PROXY_TO_PTHREAD main thread
//     instead of a further lthread (docs/DECISIONS.md, 2026-10-26).
//   edge (edge profile): Lean's runtime single-threaded (docs/EDGE.md).
export const versionKey = text => text.split('-')[0].split('.').map(Number);
export const atMost = (a, b) => { const x = versionKey(a), y = versionKey(b); for (let i = 0; i < 3; i++) if (x[i] !== y[i]) return x[i] < y[i]; return true; };
const patchFiles = () => readdirSync(directory)
  .map(file => /^lean-(\d+\.\d+\.\d+)-(.+)\.patch$/.exec(file)).filter(Boolean);
const patchFor = (name, version) => {
  const found = patchFiles().filter(([, release, patch]) => patch === name && atMost(release, version))
    .sort(([, a], [, b]) => atMost(a, b) ? 1 : -1)[0];
  if (!found) throw new Error(`No ${name} patch for Lean ${version}`);
  return { name, file: found[0] };
};
/** The patches applied to Lean `version`'s sources: [{ name, file }], in order. */
export function leanPatchInputs(version, { edge = false } = {}) {
  const patchSet = [['wasm-build', '4.32.0'], ['compact-alignment', '4.32.0'], ['thread-runtime', '4.32.0'], ['sdk-mimalloc', '4.32.0'],
    ['c-inputs', '4.32.0'], ['region-allocation', '4.32.0'], ['host-platform', '4.32.0'], ['host-linux', '4.34.0'], ['host-backtrace', '4.34.0'],
    ['libuv-source', '4.34.0'], ['nonlinear-environment', '4.35.0'], ...(edge ? [['edge', '4.35.0']] : [['node-threads', '4.35.0']])];
  if (edge && !atMost('4.35.0', version)) throw new Error('The edge profile needs Lean 4.35.0 or newer');
  const patchInputs = patchSet.filter(([, since]) => atMost(since, version)).map(([name]) => patchFor(name, version));
  return patchInputs;
}
