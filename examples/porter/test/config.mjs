// The configuration the tests run Porter with (PORTER_CONFIG): one client per
// combination the oracles exercise, and two users. Redirect URIs point at a
// port nothing listens on: the tests read the redirect, they never follow it.
export const cb = 'http://127.0.0.1:9/cb';

export const users = {
  alice: { password: 'wonderland', sub: '248289761001' },
  bob: { password: 'builder', sub: '248289761002' },
};

export const clients = {
  // Confidential, client_secret_basic, ES256.
  basic: { client_id: 'basic-es256', client_secret: 'basic-es256-secret', alg: 'ES256' },
  // Confidential, client_secret_post, EdDSA.
  post: { client_id: 'post-eddsa', client_secret: 'post-eddsa-secret', alg: 'EdDSA' },
  // Public (PKCE only), EdDSA.
  pub: { client_id: 'public-eddsa', alg: 'EdDSA' },
  // Public, ES256, may not have offline_access (no refresh tokens).
  noOffline: { client_id: 'no-offline', alg: 'ES256' },
  // A second confidential client, for cross-client attacks.
  other: { client_id: 'other-client', client_secret: 'other-client-secret', alg: 'ES256' },
};

export const testConfig = {
  clients: [
    { client_id: 'basic-es256', client_name: 'Basic ES256', client_secret: 'basic-es256-secret',
      redirect_uris: [cb, 'http://127.0.0.1:9/cb?existing=1'], post_logout_redirect_uris: ['http://127.0.0.1:9/bye'],
      id_token_signed_response_alg: 'ES256' },
    { client_id: 'post-eddsa', client_name: 'Post EdDSA', client_secret: 'post-eddsa-secret', redirect_uris: [cb],
      id_token_signed_response_alg: 'EdDSA' },
    { client_id: 'public-eddsa', client_name: 'Public EdDSA', redirect_uris: [cb],
      post_logout_redirect_uris: ['http://127.0.0.1:9/bye'], id_token_signed_response_alg: 'EdDSA' },
    { client_id: 'no-offline', client_name: 'No Offline', redirect_uris: [cb], scope: 'openid profile email',
      id_token_signed_response_alg: 'ES256' },
    { client_id: 'other-client', client_name: 'Other <b>Client</b>', client_secret: 'other-client-secret',
      redirect_uris: ['http://127.0.0.1:9/other'], id_token_signed_response_alg: 'ES256' },
  ],
  users: [
    { sub: '248289761001', username: 'alice', name: 'Alice Liddell', email: 'alice@example.com',
      password_hash: 'pbkdf2_sha256$100000$Z9Lb39PVjc0XhXF4-rCgZw$D3IvWcDmUaqRUX7Dp3NEV7KplZFT8_ABf_fPgeYtqK8' },
    { sub: '248289761002', username: 'bob', name: 'Bob Builder', email: 'bob@example.com', email_verified: false,
      password_hash: 'pbkdf2_sha256$100000$teh7M6LbD8Vsr4TVhzv2HQ$nd45VSmQAxdnU-tD8LDY6Fgjz_yL7fnzc-GmdqYzf_A' },
  ],
};
