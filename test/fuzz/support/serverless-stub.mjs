// Stands in for src/serverless/lasm-server.mjs under the serverless-http fuzz
// target: the real helpers, a `forward` that records the request and answers
// with the reply the input chose, and no Lean server.
export { joinCookies, parseSetCookie, isTextual, azureReply } from '../../../src/serverless/lasm-server.mjs';
import { joinCookies } from '../../../src/serverless/lasm-server.mjs';

let reply, sent;
export function next(r) { reply = r; sent = undefined; }
export function last() { return sent; }
export async function startLeanServer() { return 0; }
export async function forward(request) {
  // What the real forward sends: the joined cookies, as http.request would.
  sent = { ...request, headers: joinCookies(request.headers) };
  return { ...reply, headers: reply.headers.map(([n, v]) => [n.toLowerCase(), v]) };
}
