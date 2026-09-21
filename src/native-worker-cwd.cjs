// Node's worker bootstrap formats process.cwd() in a diagnostic before loading
// the worker file, even with debugging disabled. A removed cwd must not stop
// private FILE operations. This changes only the worker's JS lookup fallback;
// libc and the main thread retain the actual OS working directory.
const original = process.cwd;
process.cwd = function () {
  try { return original(); }
  catch (error) {
    if (error.code !== 'ENOENT') throw error;
    return __dirname;
  }
};
