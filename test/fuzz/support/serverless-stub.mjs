// Stands in for src/serverless/lasm-server.mjs under the serverless-http fuzz
// target: the real helpers, a `forward` that records the request and answers
// with the reply the input chose, and no Lean server.
export { joinCookies, parseSetCookie, isTextual, azureReply, requestTarget } from '../../../src/serverless/lasm-server.mjs';
import { outgoingHeaders } from '../../../src/serverless/lasm-server.mjs';

let reply, sent;
export function next(r) { reply = r; sent = undefined; }
export function last() { return sent; }
export async function startLeanServer() { return 0; }
export async function forward(request) {
  // The header fields the real forward sends (127.0.0.1:0 its default Host).
  sent = { ...request, headers: outgoingHeaders(request.headers, request.body?.length ?? 0, '127.0.0.1:0') };
  return { ...reply, headers: reply.headers.map(([n, v]) => [n.toLowerCase(), v]) };
}
