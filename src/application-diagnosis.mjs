// Explain an ahead-of-time rejection in terms of the program's own code: which
// reference first pulled Lean compiler/kernel code into the link, and, when an
// import's initialization is responsible (typically `import Lean`), which
// narrower modules the program actually uses. Diagnostics only: the policy
// decision itself is made by application-policy.mjs from the linker map.

/** wasm-ld --why-extract rows: reference, extracted archive member, symbol. */
export function parseWhyExtract(text) {
  const lines = text.split(/\r?\n/);
  if (lines[0] !== 'reference\textracted\tsymbol') throw new Error('Unrecognized --why-extract header');
  return lines.slice(1).filter(Boolean).map(line => {
    const [reference, extracted, symbol = ''] = line.split('\t');
    return { reference, extracted, symbol };
  });
}

const isMember = name => /\.a\([^()]+\)$/.test(name);

/** Lean's C name escaping (Name.mangle): components are joined by `_`, an `_` inside
 * a component is `__`, and `_xHH`/`_uHHHH`/`_UHHHHHHHH` escape other characters.
 * A run of n underscores is a separator (n odd) followed by ⌊n/2⌋ underscores. */
export function demangleName(text) {
  let out = '';
  for (let i = 0; i < text.length;) {
    if (text[i] !== '_') { out += text[i++]; continue; }
    let n = 0;
    while (text[i + n] === '_') n++;
    const escape = { x: 2, u: 4, U: 8 }[text[i + n]], digits = escape && text.slice(i + n + 1, i + n + 1 + escape);
    if (n % 2 === 1 && escape && digits.length === escape && /^[0-9a-f]+$/.test(digits)) {
      out += '_'.repeat((n - 1) / 2) + String.fromCodePoint(parseInt(digits, 16)); i += n + 1 + escape;
      continue;
    }
    out += (n % 2 ? '.' : '') + '_'.repeat(Math.floor(n / 2)); i += n;
  }
  return out;
}
export function mangleName(name) {
  return name.split('.').map(part => [...part].map(char => {
    if (/[A-Za-z0-9]/.test(char)) return char;
    if (char === '_') return '__';
    const code = char.codePointAt(0);
    return code < 0x100 ? '_x' + code.toString(16).padStart(2, '0')
      : code < 0x10000 ? '_u' + code.toString(16).padStart(4, '0') : '_U' + code.toString(16).padStart(8, '0');
  }).join('')).join('_');
}
/** A module name from its initializer symbol, or undefined when it does not round-trip. */
export function initializerModule(symbol) {
  const match = /^(?:runtime_)?initialize_(.+)$/.exec(symbol);
  if (!match) return undefined;
  const name = demangleName(match[1]);
  return mangleName(name) === match[1] ? name : undefined;
}
/** A readable declaration name for a compiled Lean symbol (auxiliary suffixes removed). */
export function declarationName(symbol) {
  const match = /^l_(.+)$/.exec(symbol) ?? /^lp_[A-Za-z0-9]+(?:__[A-Za-z0-9]+)*_(.+)$/.exec(symbol);
  if (!match) return symbol;
  return demangleName(match[1]).replace(/^_private\.(?:[^.]+\.)*?0\./, '').replace(/\._.*$/, '');
}
/** A specialization (`f._at_…`, `f._spec_…`) compiled in another module. Imports that
 * provide one let the compiler reuse it; with narrower imports it is generated locally. */
export const isImportedSpecialization = symbol => /^lp?_.*___(?:at|spec)(?:_|$)/.test(symbol);
function hop(symbol) {
  const module = initializerModule(symbol);
  if (module) return `import ${module}`;
  if (/^lp?_/.test(symbol)) return declarationName(symbol);
  return symbol;
}

/** Archive members from one archive's plain `llvm-nm` listing: a `member:` line, then
 * its symbols. Labels repeat when members share a basename; order is archive order. */
export function archiveMembers(path, nmText) {
  const members = [];
  let member;
  for (const line of nmText.split(/\r?\n/)) {
    const header = /^(\S+):(?: no symbols)?$/.exec(line);
    if (header) { member = { label: `${path}(${header[1]})`, defined: new Set(), undefined: new Set() }; members.push(member); continue; }
    const symbol = /^\s*(?:[0-9a-f]+\s+)?([A-Za-z])\s+(\S+)$/.exec(line);
    if (!symbol || !member) continue;
    if (symbol[1] === 'U') member.undefined.add(symbol[2]);
    else {
      member.defined.add(symbol[2]);
      if (symbol[2].startsWith('initialize_') && !member.module) member.module = initializerModule(symbol[2]);
    }
  }
  return members;
}

/** Undefined symbols of the program's objects from `llvm-nm --undefined-only`. */
export const undefinedSymbols = nmText => [...nmText.matchAll(/^\s*U\s+(\S+)$/gm)].map(match => match[1]);

// A --why-extract row names the reference and the extracted member only by
// `archive(basename)`, and many Lean modules share a basename (`Basic.o`). The
// extracted member is the one defining the row's symbol; the referencing member
// is an extracted one that leaves that symbol undefined. Walk to an input object.
function extractionChains(rows, members) {
  const byLabel = new Map();
  for (const member of members) { if (!byLabel.has(member.label)) byLabel.set(member.label, []); byLabel.get(member.label).push(member); }
  const extractedBy = new Map();
  for (const row of rows) {
    const candidates = byLabel.get(row.extracted) ?? [];
    const member = candidates.length === 1 ? candidates[0] : candidates.find(item => item.defined.has(row.symbol));
    if (member && !extractedBy.has(member)) extractedBy.set(member, row);
  }
  return row => {
    const chain = [row], seen = new Set([row]);
    while (isMember(row.reference)) {
      const symbol = row.symbol;
      const referrer = (byLabel.get(row.reference) ?? []).find(item => item.undefined.has(symbol) && extractedBy.has(item));
      const next = referrer && extractedBy.get(referrer);
      if (!next || seen.has(next)) return undefined;
      seen.add(next); chain.push(next); row = next;
    }
    return chain.reverse();
  };
}

/**
 * Explanation lines for a rejected link. `rows` from parseWhyExtract, `members`
 * from archiveMembers over the linked runtime archives, `userObjects` the
 * program's own object paths and `userSymbols` their undefined symbols.
 */
export function explainRejection({ rows, userObjects, requirements, members, userSymbols = [] }) {
  userObjects = new Set(userObjects);
  const targets = [
    ...requirements.cxxRuntime.map(name => ({ label: `${name.replace(/\.o$/, '')} (Lean C++ compiler/kernel)`,
      find: row => row.extracted.endsWith(`libleancpp.a(${name})`) })),
    ...requirements.moduleData.map(name => ({ label: `${hop(name)} (module-data access)`, find: row => row.symbol === name })),
    ...requirements.dynamic.map(name => ({ label: `${name} (dynamic symbol lookup)`, find: row => row.symbol === name })),
  ];
  const chains = new Map(), chainOf = extractionChains(rows, members);
  for (const target of targets) {
    const row = rows.find(target.find);
    const chain = row && chainOf(row);
    if (!chain || !userObjects.has(chain[0].reference)) continue;
    const key = chain[0].symbol;
    if (!chains.has(key)) chains.set(key, { boundary: chain[0].symbol, chain, target: target.label });
  }
  const lines = [];
  for (const { chain, target } of [...chains.values()].slice(0, 3)) {
    let hops = chain.map(row => hop(row.symbol)).filter((label, index, all) => label && label !== all[index - 1]);
    if (hops.length > 6) hops = [...hops.slice(0, 3), '…', ...hops.slice(-2)];
    lines.push(`Required by: your code → ${[...hops, target].join(' → ')}`);
  }
  const entries = [...chains.values()];
  const initializers = [...new Set(entries.map(entry => initializerModule(entry.boundary)).filter(Boolean))];
  const specializations = entries.filter(entry => isImportedSpecialization(entry.boundary));
  const calls = entries.filter(entry => !initializerModule(entry.boundary) && !isImportedSpecialization(entry.boundary));
  if (calls.length) {
    const names = [...new Set(calls.map(entry => declarationName(entry.boundary)))].slice(0, 5);
    lines.push(`Your code calls ${names.map(name => '`' + name + '`').join(', ')}, which needs this code at run time; narrower imports cannot remove it.`);
  }
  if (initializers.length || specializations.length) {
    const symbolModule = new Map();
    for (const member of members) if (member.module) for (const symbol of member.defined) if (!symbolModule.has(symbol)) symbolModule.set(symbol, member.module);
    const used = usedModules(userSymbols, symbolModule), direct = directImports(userSymbols);
    // A reused specialization comes from whichever broad import provided it.
    const broad = initializers.length ? initializers
      : direct.filter(module => !/^(?:Init|Std)(?:\.|$)/.test(module));
    const list = broad.map(name => '`import ' + name + '`').join(', ') || 'Your imports';
    if (specializations.length) {
      const names = [...new Set(specializations.map(entry => declarationName(entry.boundary)))].slice(0, 3);
      lines.push(`Your code reuses ${names.map(name => '`' + name + '`').join(', ')} as specialized inside Lean's compiler, because the imported compiler modules provide that specialization.`);
    }
    lines.push(`${list} brings Lean's compiler and kernel into your program, even if you only use its data types.`);
    const replacements = used.filter(module => !broad.includes(module));
    const them = broad.length > 1 ? 'them' : 'it';
    if (replacements.length) {
      lines.push(`Replace ${them} with the modules your code uses:`);
      for (const module of replacements.slice(0, 12)) lines.push(`  import ${module}`);
      if (replacements.length > 12) lines.push(`  … and ${replacements.length - 12} more`);
    } else if (broad.length) lines.push(`Your compiled code uses nothing else from ${them}: remove ${them}.`);
    lines.push('Use `meta import` for modules needed only by macros or tactics. For example, `import Lean.Data.Json` instead of `import Lean` keeps JSON at run time.');
  }
  return lines;
}

/** Modules (outside Init) defining the program's undefined compiled-Lean symbols, in first-use order. */
export function usedModules(userSymbols, symbolModule) {
  const modules = [];
  for (const symbol of userSymbols) {
    if (!/^lp?_/.test(symbol) || isImportedSpecialization(symbol)) continue;
    const module = symbolModule.get(symbol);
    if (module && module !== 'Init' && !module.startsWith('Init.') && !modules.includes(module)) modules.push(module);
  }
  return modules;
}

/** The program's direct imports outside Init, from its references to module initializers. */
export const directImports = userSymbols => [...new Set(userSymbols.filter(symbol => symbol.startsWith('initialize_'))
  .map(initializerModule).filter(module => module && !/^Init(?:\.|$)/.test(module)))];
