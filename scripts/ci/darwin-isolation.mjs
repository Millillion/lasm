import { realpathSync } from 'node:fs';

// macOS sandbox-exec is a CI control, never a prerequisite of the npm product.
// Deny data/execute access to the checkout, Xcode and preinstalled developer
// tools. Allow ordinary OS libraries and the exact fresh consumer directories.
export function darwinSandbox({ reads = [], writes = [], executables = [], offline = false }) {
  return darwinSandboxRules({ reads, writes, executables, offline }).join('\n') + '\n';
}

export function darwinSandboxRules({ reads = [], writes = [], executables = [], offline = false }) {
  const path = value => JSON.stringify(realpathSync(value));
  const subpaths = values => values.map(value => `(subpath ${path(value)})`).join(' ');
  // Restrict the capabilities this test proves, while preserving normal OS IPC,
  // JIT and process services. A deny-default OS sandbox was aborting stock Node
  // before JS startup. Anonymous pipes/local sockets are needed by spawnSync.
  const ipc = '(vnode-type CHARACTER-DEVICE) (vnode-type FIFO) (vnode-type SOCKET)';
  return ['(version 1)', '(allow default)', `(deny file-read-data file-map-executable (require-not (require-any
  (subpath "/System/Library") (subpath "/usr/lib")
  (subpath "/System/Volumes/Preboot/Cryptexes/OS/System/Library")
  (subpath "/System/Volumes/Preboot/Cryptexes/OS/usr/lib")
  (subpath "/Library/Apple/System/Library") (subpath "/usr/share")
  (subpath "/private/etc") (literal "/dev/null") (literal "/dev/urandom") (literal "/dev/random")
  ${ipc} ${subpaths([...reads, ...writes, ...executables])})))`,
    `(deny file-write* (require-not (require-any ${ipc} ${subpaths(writes)})))`,
    `(deny process-exec (require-not (require-any ${subpaths(executables)})))`,
    ...(offline ? ['(deny network-outbound (remote ip "*:*"))', '(deny network-inbound (local ip "*:*"))'] : [])];
}
