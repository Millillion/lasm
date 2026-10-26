// A small, exact ES-module bundler for the browser loader (src/browser/): it
// joins a fixed set of Lasm's own modules (the loader, the edge host, the
// Emscripten glue and Lasm's builtin modules) into one module, so a page loads
// one script. It understands only the import and export forms those modules
// use, each on a line of its own, and fails on anything else rather than
// guessing. Every module except the entry becomes a function scope; the entry
// stays at the top level and keeps its exports.

const importLine = /^import\s+(?:(\*\s+as\s+([A-Za-z_$][\w$]*))|([A-Za-z_$][\w$]*)|\{([^}]*)\})\s+from\s+(['"])([^'"]+)\5;?\s*$/;
const exportDeclaration = /^export\s+(?:async\s+)?(?:function\*?|class|const|let|var)\s+([A-Za-z_$][\w$]*)/;
const exportList = /^export\s*\{([^}]*)\}\s*;?\s*$/;
const exportDefault = /^export\s+default\s+/;

const binding = text => text.split(',').map(part => part.trim()).filter(Boolean).map(part => {
  const match = /^([A-Za-z_$][\w$]*)(?:\s+as\s+([A-Za-z_$][\w$]*))?$/.exec(part);
  if (!match) throw new Error(`Unsupported binding ${part}`);
  return { name: match[1], as: match[2] ?? match[1] };
});

/** Comment-only lines and indentation removed, for modules that have no
 * multi-line template literals (checked: every line has an even number of
 * backticks); others are kept as they are. */
export function compactModule(code) {
  const lines = code.split('\n');
  if (lines.some(line => (line.match(/`/g)?.length ?? 0) % 2)) return code;
  const out = [];
  let block = false;
  for (const raw of lines) {
    const line = raw.trim();
    if (block) { if (line.includes('*/')) { block = false; const rest = line.slice(line.indexOf('*/') + 2).trim(); if (rest) out.push(rest); } continue; }
    if (!line || line.startsWith('//')) continue;
    if (line.startsWith('/*')) { if (!line.includes('*/')) block = true; else { const rest = line.slice(line.indexOf('*/') + 2).trim(); if (rest) out.push(rest); } continue; }
    out.push(line);
  }
  return out.join('\n');
}

/** Rewrites one module's imports and exports. resolve(specifier) names the
 * bundled module (its variable) of an import. */
function transform(id, code, resolve, { entry }) {
  const lines = code.split('\n'), out = [], exported = [];
  let defaultName = null;
  for (let i = 0; i < lines.length; i++) {
    const line = lines[i];
    if (/^import[\s{*]/.test(line)) {
      const match = importLine.exec(line);
      if (!match) throw new Error(`${id}:${i + 1}: unsupported import: ${line}`);
      const variable = resolve(match[6]);
      if (match[2]) out.push(`const ${match[2]} = ${variable};`);
      else if (match[3]) out.push(`const ${match[3]} = ${variable}.default;`);
      else out.push(`const { ${binding(match[4]).map(b => b.name === b.as ? b.name : `${b.name}: ${b.as}`).join(', ')} } = ${variable};`);
      continue;
    }
    if (/^export\s/.test(line) && !entry) {
      let match;
      if ((match = exportDeclaration.exec(line))) { exported.push({ name: match[1], as: match[1] }); out.push(line.replace(/^export\s+/, '')); continue; }
      if ((match = exportList.exec(line))) { exported.push(...binding(match[1])); continue; }
      if (exportDefault.test(line)) { defaultName = '__default'; out.push(line.replace(exportDefault, 'const __default = ')); continue; }
      throw new Error(`${id}:${i + 1}: unsupported export: ${line}`);
    }
    out.push(line);
  }
  if (defaultName) exported.push({ name: defaultName, as: 'default' });
  return { code: out.join('\n'), exported };
}

/**
 * modules: { id: code } (ids are paths such as './loader.mjs'); entry: the id
 * whose exports the bundle exports. Imports name other modules by a path
 * relative to the importing module. Returns the bundle's text.
 */
export function bundleModules(modules, entry, { header = '', external = () => false } = {}) {
  const variables = new Map(), order = [], visiting = new Set();
  // Imports that stay imports of the bundle (bare npm specifiers, URLs), when allowed.
  const externals = new Map();
  const join = (from, specifier) => {
    if (!specifier.startsWith('./') && !specifier.startsWith('../')) throw new Error(`${from}: only relative imports can be bundled (${specifier})`);
    const parts = from.split('/').slice(0, -1);
    for (const part of specifier.split('/')) { if (part === '..') parts.pop(); else if (part !== '.') parts.push(part); }
    return parts.join('/');
  };
  const transformed = new Map();
  function visit(id) {
    if (transformed.has(id)) return;
    if (visiting.has(id)) throw new Error(`Cyclic import of ${id}`);
    if (!Object.hasOwn(modules, id)) throw new Error(`The bundle has no module ${id}`);
    visiting.add(id);
    const result = transform(id, modules[id], specifier => {
      if (!specifier.startsWith('./') && !specifier.startsWith('../') && external(specifier)) {
        if (!externals.has(specifier)) externals.set(specifier, `__lasmExternal${externals.size}`);
        return externals.get(specifier);
      }
      const target = join(id, specifier);
      visit(target);
      return variables.get(target);
    }, { entry: id === entry });
    visiting.delete(id);
    if (id !== entry) variables.set(id, `__lasm${variables.size}`);
    transformed.set(id, result);
    order.push(id);
  }
  // Variables are assigned in dependency order: visit assigns after its imports.
  visit(entry);
  const parts = [header, ...[...externals].map(([specifier, variable]) => `import * as ${variable} from ${JSON.stringify(specifier)};`)];
  for (const id of order) {
    const { code, exported } = transformed.get(id);
    if (id === entry) { parts.push(code); continue; }
    parts.push(`const ${variables.get(id)} = (() => {\n${code}\nreturn { ${exported.map(e => e.name === e.as ? e.name : `${JSON.stringify(e.as)}: ${e.name}`).join(', ')} };\n})();`);
  }
  return parts.filter(Boolean).join('\n');
}

/** Emscripten's MODULARIZE + EXPORT_ES6 output: one factory, exported last. */
export function emscriptenModule(code) {
  const match = /export\s+default\s+([A-Za-z_$][\w$]*)\s*;?\s*$/.exec(code);
  if (!match) throw new Error('Unexpected Emscripten glue: no final export default');
  const body = code.slice(0, match.index);
  if (/(?:^|[;}\s])export\s+(?:default|\{|const|function|let|var|class|async)/.test(body)) throw new Error('Unexpected Emscripten glue: more than one export');
  if (/(?:^|[;}])\s*import(?:\s+[\w$]|\s*[{*"'])/.test(body.replace(/import\.meta|import\(/g, ''))) throw new Error('Unexpected Emscripten glue: a static import');
  return `${body}\nexport default ${match[1]};`;
}
