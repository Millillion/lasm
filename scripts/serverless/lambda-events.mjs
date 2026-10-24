// Lambda event payloads for tests: the documented sample events in events/
// (API Gateway REST and HTTP API, function URL, ALB single- and multi-value,
// CloudFront origin request), changed to carry one test request, and readers
// for each event type's response shape.
import { readFileSync } from 'node:fs';

export const eventKinds = ['apigw-v2-http', 'function-url', 'apigw-v1-rest', 'alb', 'alb-multi-value', 'cloudfront-origin-request'];
const fixture = kind => JSON.parse(readFileSync(new URL(`./events/${kind}.json`, import.meta.url), 'utf8'));

/** request: { method, path, query: [[name, value]], headers: {name: value}, body: Buffer|string } */
export function makeEvent(kind, { method = 'GET', path = '/', query = [], headers = {}, body } = {}) {
  const event = fixture(kind);
  const bytes = body === undefined ? undefined : Buffer.from(body);
  const base64 = bytes !== undefined && kind !== 'alb';
  const search = new URLSearchParams(query).toString();
  if (kind === 'cloudfront-origin-request') {
    const request = event.Records[0].cf.request;
    Object.assign(request, { method, uri: path, querystring: search });
    for (const [name, value] of Object.entries(headers)) request.headers[name.toLowerCase()] = [{ key: name, value }];
    if (bytes) request.body = { action: 'read-only', data: bytes.toString('base64'), encoding: 'base64', inputTruncated: false };
    return event;
  }
  if (kind.startsWith('apigw-v2') || kind === 'function-url') {
    Object.assign(event, { rawPath: path, rawQueryString: search });
    event.requestContext.http.method = method; event.requestContext.http.path = path;
    event.queryStringParameters = query.length ? Object.fromEntries(query) : undefined;
    for (const [name, value] of Object.entries(headers)) event.headers[name.toLowerCase()] = value;
    delete event.headers['content-length'];
    if (bytes) Object.assign(event, { body: bytes.toString('base64'), isBase64Encoded: true });
    return event;
  }
  Object.assign(event, { httpMethod: method, path });
  if (event.requestContext.httpMethod) event.requestContext.httpMethod = method;
  // ALB passes query values URL-encoded, API Gateway REST decoded.
  const encode = kind.startsWith('alb') ? encodeURIComponent : value => value;
  const multi = {};
  for (const [name, value] of query) (multi[encode(name)] ??= []).push(encode(value));
  if (event.multiValueQueryStringParameters !== undefined || kind === 'alb-multi-value') event.multiValueQueryStringParameters = query.length ? multi : null;
  if (event.queryStringParameters !== undefined || kind === 'alb')
    event.queryStringParameters = query.length ? Object.fromEntries(Object.entries(multi).map(([name, values]) => [name, values.at(-1)])) : null;
  for (const [name, value] of Object.entries(headers)) {
    if (event.headers) event.headers[name] = value;
    if (event.multiValueHeaders) event.multiValueHeaders[name] = [value];
  }
  if (bytes) Object.assign(event, base64 ? { body: bytes.toString('base64'), isBase64Encoded: true } : { body: bytes.toString(), isBase64Encoded: false });
  return event;
}

/** Reads a handler's response: { status, headers: {name: [values]}, body: Buffer }. */
export function readReply(kind, reply) {
  const headers = {};
  if (kind === 'cloudfront-origin-request') {
    for (const [name, entries] of Object.entries(reply.headers ?? {})) headers[name] = entries.map(entry => entry.value);
    return { status: Number(reply.status), headers, body: Buffer.from(reply.body ?? '', reply.bodyEncoding === 'base64' ? 'base64' : 'utf8') };
  }
  for (const [name, value] of Object.entries(reply.headers ?? {})) headers[name.toLowerCase()] = [value];
  for (const [name, values] of Object.entries(reply.multiValueHeaders ?? {})) headers[name.toLowerCase()] = values;
  if (reply.cookies?.length) headers['set-cookie'] = reply.cookies;
  return { status: reply.statusCode, headers, body: Buffer.from(reply.body ?? '', reply.isBase64Encoded ? 'base64' : 'utf8') };
}
