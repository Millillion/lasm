// Stands in for src/serverless/lasm-function.mjs under the serverless-http
// fuzz target: the real helpers, a `forward` that records the request (and the
// web Request the real one would hand the handler) and answers with the reply
// the input chose, and no Lean program.
export { joinCookies, parseSetCookie, isTextual, azureReply, requestTarget } from '../../../src/serverless/lasm-function.mjs';
import { eventRequest, outgoingHeaders } from '../../../src/serverless/lasm-function.mjs';

let reply, sent;
export function next(r) { reply = r; sent = undefined; }
export function last() { return sent; }
export async function loadHandler() { return () => {}; }
export async function forward(request) {
  // The header fields the real forward gives the Request (the Lean model's default Host, 127.0.0.1:0).
  sent = { ...request, headers: outgoingHeaders(request.headers, request.body?.length ?? 0, '127.0.0.1:0'), web: eventRequest(request) };
  return { ...reply, headers: reply.headers.map(([n, v]) => [n.toLowerCase(), v]) };
}
