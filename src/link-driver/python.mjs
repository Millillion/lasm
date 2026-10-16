// Python semantics that Emscripten's driver output depends on, reproduced in
// JavaScript for the Phase 2 Node link driver (docs/TOOLCHAIN_SLIMMING.md).
// Each helper names the Python behavior it reproduces; byte equality of the
// settings files, DCE graph and glue with emcc's output depends on them.

/** Python's json.dumps string escaping with ensure_ascii=True: '"', '\\',
 * \b \f \n \r \t, every other character outside ' '..'~' as lowercase \uXXXX
 * (UTF-16 code units, so astral characters become surrogate pairs). */
export function pythonJsonString(value) {
  let result = '"';
  for (let index = 0; index < value.length; index++) {
    const code = value.charCodeAt(index), char = value[index];
    if (char === '"') result += '\\"';
    else if (char === '\\') result += '\\\\';
    else if (char === '\n') result += '\\n';
    else if (char === '\r') result += '\\r';
    else if (char === '\t') result += '\\t';
    else if (char === '\b') result += '\\b';
    else if (char === '\f') result += '\\f';
    else if (code < 0x20 || code > 0x7e) result += '\\u' + code.toString(16).padStart(4, '0');
    else result += char;
  }
  return result + '"';
}

/** json.dumps(value, indent=?, sort_keys=?, separators=?) for JSON-shaped data.
 * Integers only: a float that Python would print as 1.0 cannot be represented
 * after JSON.parse, so non-integral or unsafe numbers are rejected. */
export function pythonJsonDumps(value, { indent = null, sortKeys = false } = {}) {
  const itemSeparator = indent === null ? ', ' : ',', keySeparator = ': ';
  const encode = (item, level) => {
    if (item === null) return 'null';
    if (item === true) return 'true';
    if (item === false) return 'false';
    if (typeof item === 'number') {
      if (!Number.isSafeInteger(item)) throw new Error(`Unsupported number in Python JSON output: ${item}`);
      return String(item);
    }
    if (typeof item === 'string') return pythonJsonString(item);
    const newline = indent === null ? '' : '\n' + ' '.repeat(indent * (level + 1));
    const close = indent === null ? '' : '\n' + ' '.repeat(indent * level);
    if (Array.isArray(item)) {
      if (!item.length) return '[]';
      return '[' + newline + item.map(element => encode(element, level + 1)).join(itemSeparator + newline) + close + ']';
    }
    if (typeof item === 'object') {
      let keys = Object.keys(item);
      if (!keys.length) return '{}';
      if (sortKeys) keys = keys.sort(comparePythonStrings);
      return '{' + newline + keys.map(key => pythonJsonString(key) + keySeparator + encode(item[key], level + 1))
        .join(itemSeparator + newline) + close + '}';
    }
    throw new Error(`Unsupported value in Python JSON output: ${typeof item}`);
  };
  return encode(value, 0);
}

/** Python sorts str by code point; JavaScript's default sort uses UTF-16 units. */
export function comparePythonStrings(a, b) {
  const x = [...a], y = [...b];
  for (let index = 0; index < Math.min(x.length, y.length); index++) {
    const difference = x[index].codePointAt(0) - y[index].codePointAt(0);
    if (difference) return difference;
  }
  return x.length - y.length;
}

/** Python's sorted() of a list of str. */
export const pythonSorted = values => [...values].sort(comparePythonStrings);

/** Python == for JSON-shaped values: True == 1 and False == 0. */
export function pythonEquals(a, b) {
  const scalar = value => typeof value === 'boolean' ? Number(value) : value;
  if (Array.isArray(a) || Array.isArray(b)) {
    return Array.isArray(a) && Array.isArray(b) && a.length === b.length && a.every((item, index) => pythonEquals(item, b[index]));
  }
  if (a && b && typeof a === 'object' && typeof b === 'object') {
    const keys = Object.keys(a);
    return keys.length === Object.keys(b).length && keys.every(key => Object.hasOwn(b, key) && pythonEquals(a[key], b[key]));
  }
  return scalar(a) === scalar(b);
}

/** Python truthiness for setting values ('' [] {} 0 False None are false). */
export function truthy(value) {
  if (Array.isArray(value)) return value.length > 0;
  if (value && typeof value === 'object') return Object.keys(value).length > 0;
  return Boolean(value);
}

/** Text read by Python in text mode (open() or subprocess text=True): universal
 * newlines turn '\r\n' and lone '\r' into '\n'. */
export const universalNewlines = text => text.replace(/\r\n?/g, '\n');

/** str.isidentifier() as used by js_manipulation.isidentifier ('$' counts as '_'). */
export function isIdentifier(name) {
  return /^[\p{XID_Start}_][\p{XID_Continue}]*$/u.test(name.replaceAll('$', '_'));
}

/** str.strip() with no arguments (Unicode whitespace as Python defines it). */
const pythonWhitespace = '\\t\\n\\v\\f\\r\\x1c-\\x20\\x85\\xa0\\u1680\\u2000-\\u200a\\u2028\\u2029\\u202f\\u205f\\u3000';
const stripPattern = new RegExp(`^[${pythonWhitespace}]+|[${pythonWhitespace}]+$`, 'g');
export const pythonStrip = text => text.replace(stripPattern, '');
/** str.split() with no arguments. */
const splitPattern = new RegExp(`[${pythonWhitespace}]+`);
export const pythonSplit = text => pythonStrip(text).split(splitPattern).filter(Boolean);

/** Remove duplicates keeping the first occurrence (tools/link.py dedup_list). */
export const dedupList = list => [...new Set(list)];
