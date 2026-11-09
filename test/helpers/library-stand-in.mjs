// Mutation testing copies the repository without library/ (scripts/mutation/run.mjs
// ignorePatterns), so libraryIdentity() cannot read Lasm's Lean sources there. Where
// they are absent, src/lasm-library.mjs is loaded with a fixed stand-in identity and
// is otherwise the real module. Import this before any module that imports it
// (use dynamic imports after it: static imports are all loaded before it runs).
import { registerHooks } from 'node:module';
import { existsSync } from 'node:fs';

const library = new URL('../../library/Lasm/JS.lean', import.meta.url);
export const librarySourcesPresent = existsSync(library);

if (!librarySourcesPresent) {
  const real = new URL('../../src/lasm-library.mjs', import.meta.url).href;
  registerHooks({
    load(url, context, next) {
      if (url !== real) return next(url, context);
      return { format: 'module', shortCircuit: true,
        source: `export * from ${JSON.stringify(real + '?real')};\nexport function libraryIdentity() { return 'library-sources-absent'; }\n` };
    },
  });
}
