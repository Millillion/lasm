/** Identify the engine actually executing this process, not its Node compatibility version. */
export function engineName(versions = process.versions) {
  return versions.deno ? 'deno' : versions.bun ? 'bun' : 'node';
}

/** Run compiler helpers in the same engine as the caller. */
export function scriptArguments(file, args = [], { commonJS = false, versions = process.versions } = {}) {
  return engineName(versions) === 'deno'
    ? ['run', '--allow-all', ...(commonJS ? ['--ext=cjs'] : []), file, ...args] : [file, ...args];
}
