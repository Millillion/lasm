// The edge targets' request mapping: the code Lasm generates in front of the
// Lean program's handler (src/edge/edge-build.mjs). Supabase hands a function
// /NAME/PATH, and its entry's `route` gives the handler /PATH; Vercel's edge
// runtime drops a response's Content-Encoding, so its entry's `identity`
// removes Accept-Encoding. Both are taken from the generated entries' text
// and run on Node's Request (undici, the WHATWG Fetch standard's).
// Input: structure read field by field (test/fuzz/input.mjs): the function's
// name (as package.json would give it), the method, a path under the name or
// not, a query, headers and a body.
// Oracle: `route` keeps the method, headers and body, and the origin, query
// and fragment; it removes exactly the function's name from a path that is
// the name or starts with it and a `/` (the name alone becomes `/`), and
// leaves any other request as it is. `identity` keeps everything but
// Accept-Encoding.
// Proposition: Lasm.Cli.Candidates.supabase_route_strips_name
//   ∀ (name origin path rest : String) (r : HttpRequest), urlParts r.target = some (origin, path, rest) →
//     (supabaseRoute name r).method = r.method ∧ (supabaseRoute name r).headers = r.headers ∧
//     (supabaseRoute name r).body = r.body ∧
//     (path = "/" ++ name → urlParts (supabaseRoute name r).target = some (origin, "/", rest)) ∧
//     (∀ p, path = "/" ++ name ++ "/" ++ p → urlParts (supabaseRoute name r).target = some (origin, "/" ++ p, rest)) ∧
//     (path ≠ "/" ++ name → (∀ p, path ≠ "/" ++ name ++ "/" ++ p) → (supabaseRoute name r).target = r.target)
// Proposition: Lasm.Cli.Candidates.vercel_identity_drops_encoding
//   ∀ r : HttpRequest, vercelIdentity r = { r with headers := r.headers.filter (·.1 ≠ "accept-encoding") }
import { Input } from '../input.mjs';
import { supabaseEntry, vercelEdgeEntry } from '../../../src/edge/edge-build.mjs';
import { supabaseFunctionNameOf } from '../../../src/init.mjs';

// The generated functions run as `new Function` scripts, which have no URL: every script's
// blocks count (Node's own URL and Request code too), not only edge-build.mjs's.
export const sources = [];
export const maxLength = 1024;
export const dictionary = ['/', '//', '..', '%2F', '%2f', '%2e%2e', '.', '?', '#', '&', '=', '%', ';', '\\', '@', ':', 'fn', 'my-app', '/fn',
  '/fn/', '/fnx', 'accept-encoding', 'gzip, br', 'content-type', 'cookie', 'é', '\u{1F600}', ' '];

const fail = (message, detail) => { throw Object.assign(new Error(`${message}\n${JSON.stringify(detail, null, 1)?.slice(0, 3000)}`), { name: 'OracleFailure' }); };
/** A function of the generated entry, by its `const NAME = …;` text. */
function generated(source, pattern, name) {
  const text = pattern.exec(source)?.[0];
  if (!text) throw new Error(`the generated entry has no ${name}`);
  return text;
}
const routeFor = new Map();
function route(name) {
  if (!routeFor.has(name)) {
    const text = generated(supabaseEntry([], name), /const prefix = [\s\S]*?\n};\n/, 'route');
    routeFor.set(name, new Function(`${text}return route;`)());
  }
  return routeFor.get(name);
}
const identity = new Function(`${generated(vercelEdgeEntry([]), /const identity = [\s\S]*?\n};\n/, 'identity')}return identity;`)();

const tokenChars = "!#$%&'*+-.^_`|~0123456789abcdefghijklmnopqrstuvwxyz";
const token = s => [...s.toLowerCase()].filter(c => tokenChars.includes(c)).join('') || 'x-h';
const value = s => [...s].filter(c => c >= ' ' && c !== '\x7f' && c <= '\xff').join('').trim();
const parts = url => { const u = new URL(url); return { origin: u.origin, path: u.pathname, rest: u.search + u.hash }; };
const view = async r => ({ method: r.method, url: r.url, headers: [...r.headers], body: r.body ? Buffer.from(await r.arrayBuffer()).toString('latin1') : null });

export async function run(bytes) {
  const input = new Input(bytes);
  const name = supabaseFunctionNameOf(input.text() || 'app');
  const method = input.pick(['GET', 'POST', 'PUT', 'DELETE', 'HEAD', 'PATCH', 'OPTIONS']);
  const under = input.int(3); // 0: /name/…, 1: /name, 2: anything
  const tail = input.text();
  const path = under === 0 ? `/${name}/${tail}` : under === 1 ? `/${name}` : `/${tail}`;
  const query = input.bool() ? '?' + input.text() : '';
  let url;
  // The platform's own origin and the path as the client sent it (`//x@y/` stays a path).
  try { url = new URL('https://project.supabase.co' + path + query).href; } catch { return; }
  if (new URL(url).host !== 'project.supabase.co') return;
  const headers = new Headers();
  for (let n = input.int(5); n > 0; n--) {
    const field = input.bool() ? 'accept-encoding' : token(input.text());
    try { headers.append(field, value(input.text())); } catch { /* a value Headers refuses */ }
  }
  const body = ['GET', 'HEAD'].includes(method) ? undefined : input.field();
  const make = () => new Request(url, { method, headers, body, duplex: 'half' });
  // supabase_route_strips_name
  const before = await view(make());
  const after = await view(route(name)(make()));
  const detail = { name, before, after };
  if (after.method !== before.method || JSON.stringify(after.headers) !== JSON.stringify(before.headers) || after.body !== before.body)
    fail('route changed the request beyond its path', detail);
  const a = parts(before.url), b = parts(after.url);
  if (a.path === `/${name}` || a.path.startsWith(`/${name}/`)) {
    const expected = a.path.slice(name.length + 1) || '/';
    if (b.origin !== a.origin || b.rest !== a.rest || b.path !== expected) fail(`route gave ${b.path} for ${a.path}, not ${expected}`, detail);
  } else if (after.url !== before.url) fail('route changed a request outside the function\'s path', detail);
  // vercel_identity_drops_encoding
  const out = await view(identity(make()));
  const kept = before.headers.filter(([k]) => k !== 'accept-encoding');
  if (out.method !== before.method || out.url !== before.url || out.body !== before.body || JSON.stringify(out.headers) !== JSON.stringify(kept))
    fail('identity changed more than Accept-Encoding', { before, out });
}

export function seeds() {
  const seed = (...p) => Uint8Array.from(p.flatMap(x => typeof x === 'number' ? [x] : [...Buffer.from(x, 'utf8'), 0]));
  return [
    seed('my-app', 0, 0, 'users/1', 1, 'a=1', 2, 1, 'gzip', 0, 'cookie', 'a=1'),
    seed('fn', 1, 1, '', 0, 0, 'payload'),
    seed('fn', 0, 2, 'fnx/a', 0, 0),
    seed('fn', 0, 0, 'a%2Fb/../c', 1, 'q=%E9#f', 0),
    seed('@scope/Fn', 2, 0, '/evil.com/x', 0, 1, 1, 'br', 'body'),
    seed('fn', 0, 2, 'fn', 0, 0),
  ];
}
