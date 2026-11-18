// The names of lasm's targets, commands and templates, and the "did you mean"
// hints every command gives (src/cli-arguments.mjs re-exports them). No
// imports: src/package.mjs, src/init.mjs and src/dev.mjs use it while
// src/cli-arguments.mjs is still loading them.

// Names people try for a target, and the target they mean.
export const targetAliases = { cloudflare: 'workers', 'cloudflare-workers': 'workers', worker: 'workers', aws: 'lambda', 'aws-lambda': 'lambda',
  cloudfront: 'lambda-edge', supabase: 'supabase-edge', 'deno-deploy-edge': 'deno-deploy', spin: 'wasi-http', wasmtime: 'wasi', web: 'browser',
  vite: 'browser', azure: 'azure-functions', gcf: 'cloud-functions', 'google-cloud-functions': 'cloud-functions', 'cloud-run-functions': 'cloud-functions', 'vercel-functions': 'vercel', 'netlify-functions': 'netlify', 'lambda-zip': 'lambda' };
/** ASCII letters lowercased, every other character kept: command and target
 * names are ASCII (and Unicode case mapping would match the Kelvin sign K to k). */
export const asciiLower = text => text.replace(/[A-Z]/g, c => c.toLowerCase());

/** Levenshtein distance between the code points of two words (so an astral
 * character such as an emoji is one edit, not two UTF-16 units), for "did
 * you mean" suggestions. */
export function editDistance(a, b) {
  a = [...a]; b = [...b];
  const row = Array.from({ length: b.length + 1 }, (_, j) => j);
  for (let i = 1; i <= a.length; i++) {
    let previous = row[0]; row[0] = i;
    for (let j = 1; j <= b.length; j++) {
      const current = row[j];
      row[j] = Math.min(row[j] + 1, row[j - 1] + 1, previous + (a[i - 1] === b[j - 1] ? 0 : 1));
      previous = current;
    }
  }
  return row[b.length];
}

/** The closest candidate (ignoring ASCII case) within a third of its length
 * in code points (at least 2 edits), or undefined. */
export function closest(word, candidates) {
  let best, distance = Infinity;
  for (const candidate of candidates) {
    const d = editDistance(asciiLower(word), asciiLower(candidate));
    if (d < distance) { best = candidate; distance = d; }
  }
  return distance <= Math.max(2, Math.floor((best === undefined ? 0 : [...best].length) / 3)) ? best : undefined;
}

/** The same hint among `candidates` only (lasm dev's targets, lasm package's,
 * lasm init's --deploy targets): an alias that names one of them, else the
 * closest of them. */
export function targetHintAmong(value, candidates, option = '--target') {
  const alias = asciiLower(value);
  const named = Object.hasOwn(targetAliases, alias) ? targetAliases[alias] : undefined;
  const guess = named !== undefined && candidates.includes(named) ? named : closest(value, candidates);
  return guess ? ` (did you mean ${option} ${guess}?)` : '';
}
