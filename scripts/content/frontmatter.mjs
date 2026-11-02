// Front matter of the content pages (content/README.md): the YAML subset they
// use, `key: value` (strings, quoted or not, integers, true/false) and lists of
// scalars (`key:` then `  - item` lines, or `key: []`).

/** Splits a Markdown file into { data, body }; data is null without front matter. */
export function splitFrontMatter(source) {
  const m = /^---\n([\s\S]*?)\n---\n?([\s\S]*)$/.exec(source.replace(/\r\n/g, '\n'));
  return m ? { data: parseFrontMatter(m[1]), body: m[2] } : { data: null, body: source };
}

export function parseFrontMatter(text) {
  const scalar = raw => {
    const v = raw.trim();
    if (v === 'true' || v === 'false') return v === 'true';
    if (v === '[]') return [];
    if (/^-?\d+$/.test(v)) return Number(v);
    if (/^".*"$/.test(v)) return JSON.parse(v);
    if (/^'.*'$/.test(v)) return v.slice(1, -1).replace(/''/g, "'");
    return v;
  };
  const data = {};
  let key = null;
  for (const [n, line] of text.split('\n').entries()) {
    if (!line.trim() || /^\s*#/.test(line)) continue;
    let m;
    if ((m = /^([A-Za-z_]+):(?:\s+(.*))?$/.exec(line))) {
      key = m[1];
      data[key] = m[2] === undefined || m[2].trim() === '' ? [] : scalar(m[2]);
    } else if ((m = /^\s+-\s+(.*)$/.exec(line)) && Array.isArray(data[key])) {
      data[key].push(scalar(m[1]));
    } else throw new Error(`front matter line ${n + 2}: cannot read ${JSON.stringify(line)}`);
  }
  return data;
}
