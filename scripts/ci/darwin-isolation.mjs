import { realpathSync } from 'node:fs';

// macOS sandbox-exec is a CI control, never a prerequisite of the npm product.
// Deny data/execute access to the checkout, Xcode and preinstalled developer
// tools. Allow ordinary OS libraries and the exact fresh consumer directories.
export function darwinSandbox({ reads = [], writes = [], executables = [], offline = false }) {
  const path = value => JSON.stringify(realpathSync(value));
  const subpaths = values => values.map(value => `(subpath ${path(value)})`).join(' ');
  return `(version 1)
(deny default)
(allow process-fork process-info* signal sysctl-read mach-lookup)
(allow file-read-metadata)
(allow file-read* file-map-executable (subpath "/System/Library") (subpath "/usr/lib")
  (subpath "/private/etc") (literal "/dev/null") (literal "/dev/urandom") (literal "/dev/random")
  ${subpaths([...reads, ...writes, ...executables])})
(allow file-write* (literal "/dev/null") ${subpaths(writes)})
(allow process-exec ${subpaths(executables)})
${offline ? '' : '(allow network*)'}
`;
}
