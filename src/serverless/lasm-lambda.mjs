// AWS Lambda handler for a Lasm HTTP server (handler `lasm-lambda.handler`).
// Maps API Gateway REST (payload 1.0), API Gateway HTTP API (payload 2.0),
// Lambda function URL, Application Load Balancer and CloudFront (Lambda@Edge
// origin-request / viewer-request) events to HTTP requests for the Lean
// server, and its responses back to each event's response shape.
import { forward, isTextual, startLeanServer } from './lasm-server.mjs';

// Start the server during Lambda's init phase (top-level await), so its time
// counts as init rather than as the first invocation.
await startLeanServer();

const decode = (body, base64) => body == null || body === '' ? undefined : Buffer.from(body, base64 ? 'base64' : 'utf8');

function query(single, multi) {
  const search = new URLSearchParams();
  if (multi) for (const [name, values] of Object.entries(multi)) for (const value of values ?? []) search.append(name, value);
  else if (single) for (const [name, value] of Object.entries(single)) search.append(name, value);
  const text = search.toString();
  return text ? '?' + text : '';
}

function headerPairs(single, multi) {
  const pairs = [];
  if (multi) for (const [name, values] of Object.entries(multi)) for (const value of values ?? []) pairs.push([name, value]);
  else if (single) for (const [name, value] of Object.entries(single)) pairs.push([name, value]);
  return pairs;
}

function body(reply) {
  const text = isTextual(reply.headers);
  return { body: reply.body.toString(text ? 'utf8' : 'base64'), isBase64Encoded: !text };
}

/** CloudFront (Lambda@Edge): a generated response for the viewer. */
async function cloudFront(record) {
  const { request } = record.cf;
  const headers = [];
  for (const entries of Object.values(request.headers ?? {})) for (const { key, value } of entries) headers.push([key, value]);
  const reply = await forward({ method: request.method, path: request.uri + (request.querystring ? '?' + request.querystring : ''),
    headers, body: request.body?.data ? decode(request.body.data, request.body.encoding === 'base64') : undefined });
  const out = {};
  // CloudFront rejects or ignores these in generated responses.
  const refused = new Set(['content-length', 'via', 'x-cache', 'x-real-ip', 'x-forwarded-proto', 'expect', 'proxy-authenticate', 'proxy-authorization']);
  for (const [name, value] of reply.headers) {
    if (refused.has(name) || name.startsWith('x-amz-cf-') || name.startsWith('x-edge-') || name.startsWith('x-accel-')) continue;
    (out[name] ??= []).push({ key: name, value });
  }
  const text = isTextual(reply.headers);
  return { status: String(reply.status), statusDescription: reply.statusText, headers: out,
    body: reply.body.toString(text ? 'utf8' : 'base64'), bodyEncoding: text ? 'text' : 'base64' };
}

export async function handler(event) {
  if (event?.Records?.[0]?.cf) return cloudFront(event.Records[0]);
  // API Gateway HTTP API (payload 2.0) and Lambda function URLs.
  if (event?.version === '2.0') {
    const headers = Object.entries(event.headers ?? {});
    if (event.cookies?.length) headers.push(['cookie', event.cookies.join('; ')]);
    const reply = await forward({ method: event.requestContext.http.method,
      path: (event.rawPath || '/') + (event.rawQueryString ? '?' + event.rawQueryString : ''),
      headers, body: decode(event.body, event.isBase64Encoded) });
    const single = {}, cookies = [];
    for (const [name, value] of reply.headers) {
      if (name === 'set-cookie') cookies.push(value);
      else single[name] = single[name] === undefined ? value : `${single[name]}, ${value}`;
    }
    return { statusCode: reply.status, headers: single, ...(cookies.length ? { cookies } : {}), ...body(reply) };
  }
  if (event?.httpMethod) {
    // ALB query values arrive URL-encoded; API Gateway REST values are decoded.
    const alb = Boolean(event.requestContext?.elb);
    const unescape = values => values && Object.fromEntries(Object.entries(values).map(([name, value]) =>
      [decodeURIComponent(name.replace(/\+/g, ' ')), Array.isArray(value) ? value.map(v => decodeURIComponent(v.replace(/\+/g, ' '))) : decodeURIComponent(value.replace(/\+/g, ' '))]));
    const single = alb ? unescape(event.queryStringParameters) : event.queryStringParameters;
    const multi = alb ? unescape(event.multiValueQueryStringParameters) : event.multiValueQueryStringParameters;
    const reply = await forward({ method: event.httpMethod, path: (event.path || '/') + query(single, multi),
      headers: headerPairs(event.headers, event.multiValueHeaders), body: decode(event.body, event.isBase64Encoded) });
    const response = { statusCode: reply.status, ...body(reply) };
    if (alb) response.statusDescription = `${reply.status} ${reply.statusText}`;
    // API Gateway REST takes multiValueHeaders; an ALB takes the form the
    // request used (multi-value headers are a target group setting).
    if (!alb || event.multiValueHeaders) {
      response.multiValueHeaders = {};
      for (const [name, value] of reply.headers) (response.multiValueHeaders[name] ??= []).push(value);
    } else {
      // Single-value ALB responses hold one value per header: join repeats,
      // except Set-Cookie, which cannot be joined.
      response.headers = {};
      for (const [name, value] of reply.headers)
        response.headers[name] = response.headers[name] === undefined || name === 'set-cookie' ? value : `${response.headers[name]}, ${value}`;
    }
    return response;
  }
  throw new Error('Unsupported Lambda event: expected API Gateway, a function URL, an Application Load Balancer or CloudFront (Lambda@Edge).');
}
