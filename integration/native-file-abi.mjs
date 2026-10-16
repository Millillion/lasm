// Small native host controls, shared verbatim with the Node regression tests.
// No compiler, Wasm runtime, toolchain downloads, or other engine runs here.
import assert from 'node:assert/strict';
import { posix, verifyFileCreation, verifyDescriptorInheritance, verifySocketFlags } from '../test/helpers/native-file-abi.mjs';
const [expectedVersion] = process.argv.slice(2);
assert.equal(process.versions.node, expectedVersion);
const platform = process.platform + '-' + process.arch;
assert.equal(platform, process.env.LASM_EXPECT_PLATFORM);
await verifyFileCreation(true);
await verifyFileCreation(false);
if (posix) { verifyDescriptorInheritance(); verifySocketFlags(); }
console.log(JSON.stringify({ scope: 'Native file ABI controls; full Lean application validation remains separate',
  node: process.versions.node, platform, checks: { directFileIO: 'passed', workerFileIO: 'passed',
    descriptorInheritance: posix ? 'passed' : 'POSIX-only', socketFlags: posix ? 'passed' : 'POSIX-only' } }));
