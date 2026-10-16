// Maintainer audit (Phase 3 npm validation): record every outgoing HTTP(S) request
// a Node process (and its worker threads) makes, and block every non-loopback one.
// Preload with --require (ESM --import preloads do not run in worker threads):
//   LASM_NETWORK_AUDIT=FILE NODE_OPTIONS="--require /abs/network-audit.cjs" ...
// Each line of FILE is JSON: { pid, thread, api, host, blocked }.
'use strict';
const { appendFileSync } = require('node:fs');
const { isMainThread, threadId } = require('node:worker_threads');
const file = process.env.LASM_NETWORK_AUDIT;
if (!file) throw new Error('Set LASM_NETWORK_AUDIT to the audit log file');
const loopback = host => ['127.0.0.1', 'localhost', '[::1]', '::1'].includes(String(host).replace(/:\d+$/, '').toLowerCase())
  || /^\[::1\]:\d+$/.test(host);
function record(api, target) {
  let host;
  try {
    if (typeof target === 'string' || target instanceof URL) host = new URL(target).host;
    else if (target && typeof target.url === 'string') host = new URL(target.url).host;
    else host = target?.host ?? target?.hostname ?? 'localhost';
  } catch { host = 'unparsed'; }
  const blocked = !loopback(host);
  appendFileSync(file, JSON.stringify({ pid: process.pid, thread: isMainThread ? 0 : threadId, api, host, blocked }) + '\n');
  if (blocked) throw new Error(`Network audit: blocked request to ${host}`);
}
const original = globalThis.fetch;
if (original) globalThis.fetch = function auditedFetch(input, init) {
  try { record('fetch', input); } catch (error) { return Promise.reject(new TypeError('fetch failed', { cause: error })); }
  return original.call(this, input, init);
};
for (const name of ['http', 'https']) {
  const module = require('node:' + name);
  for (const method of ['request', 'get']) {
    const fn = module[method];
    module[method] = function audited(target, ...rest) {
      record(`${name}.${method}`, typeof target === 'object' && !(target instanceof URL) ? target : target);
      return fn.call(this, target, ...rest);
    };
  }
}
