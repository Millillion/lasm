// The simulated world of Porter's deterministic simulation (Sim.lean drives
// it; test/dst.mjs starts it), on scripts/sim: one seed decides the users
// and relying parties, the network, the database's faults, the server's
// crashes, its instances' clocks and every random value the server draws.
//
// One seed is one run:
//   - Porter with test/config.mjs's clients and users; 1 to 4 agents, each a
//     browser (with its cookies) and a relying party (one of the clients:
//     client_secret_basic, client_secret_post, public with PKCE only, one
//     without offline_access), signing in with the authorization code flow
//     and PKCE, calling userinfo, refreshing, signing in again (the session
//     cookie), logging out; and attacking: redeeming a code twice, reusing a
//     rotated refresh token;
//   - requests served alone or racing others (each reading before any
//     commits, at its own instance's clock);
//   - clocks: every instance skewed, the server's clock stepping back and
//     forth by seconds to hours (past the code's, the access token's, the
//     session's lifetimes);
//   - faults: lost and duplicated requests (a duplicated token request is
//     a code redeemed twice at once), lost answers, partitions, server
//     crash-restarts (also after a commit, before the answer), failed reads
//     and commits, commits whose outcome is unknown, database outages;
//   - then everything heals, and every agent must sign in once more.
//
// Invariants (each failure names its seed; `--seed N` replays it). "Now" is
// the clock reading the world gave the request that Porter answered, so
// expiry is checked exactly, whatever the skew between instances:
//   - a code yields tokens at most once (Spec.code_once), only before it
//     expires (now < issued + 60 s); a code redeemed twice revokes what it
//     issued (Spec.code_reuse_revokes);
//   - a refresh token is rotated at most once (Spec.refresh_rotates); reusing a
//     rotated one revokes its family: every access and refresh token of it
//     then fails (Spec.reuse_revokes_family);
//   - an access token works at userinfo exactly while now < issued + 600 s
//     and its family is not revoked; a refresh token likewise within its
//     lifetime;
//   - every ID token is the session's and the client's: iss, aud, sub,
//     nonce, iat = now at issue, exp = iat + 600, and its signature verifies
//     against /jwks (Spec.id_token_claims);
//   - a sign-in with a live session cookie needs no password; the session
//     ends after 8 hours of the server's clock;
//   - a token request whose commit landed and then threw (an ambiguous
//     commit) keeps its first reply (its commit receipt, #138): a fresh code
//     or a live refresh token is never refused because of it. The one
//     exception is the documented one: the receipt itself could not be read
//     (a failed read right after), then the server decides as before
//     receipts and may refuse, but revokes nothing (counted, not failed);
//   - after the heal, every agent signs in, redeems its code and calls
//     userinfo successfully.
import { createHash, createPublicKey, verify as verifySignature } from 'node:crypto';
import { Rng, Scheduler, Network, SqlStore, Trace, SeedLoop, Checks, HttpSim, faultProfile, options } from '../../../../scripts/sim/index.mjs';
import { testConfig, clients, users, cb } from '../config.mjs';

const opts = options(process.argv.slice(2));
const loop = new SeedLoop({
  name: 'porter dst', opts,
  repro: seed => `cd examples/porter && npm run build:sim && node test/dst.mjs --seed ${seed}${opts.level !== 'normal' ? ` --faults ${opts.level}` : ''}`,
});
if (opts.determinism && loop.queue) loop.queue = loop.queue.flatMap(s => [s, s]);
const digests = new Map();
const ISSUER = 'http://porter.test';
const TTL = { code: 60, access: 600, idToken: 600, session: 8 * 3600 };
const HEAL = 120_000;
const EPOCH = Math.floor(Date.UTC(2026, 0, 1) / 1000);
const CLIENTS = [clients.basic, clients.post, clients.pub, clients.noOffline];
const USERS = Object.entries(users).map(([username, u]) => ({ username, ...u }));
const b64url = b => Buffer.from(b).toString('base64url');

let W = null;

class World {
  constructor(seed) {
    this.seed = seed;
    const rng = this.rng = new Rng(seed);
    this.sched = new Scheduler();
    this.trace = new Trace({ scheduler: this.sched, echo: opts.verbose });
    this.checks = new Checks(() => this.trace.tail(120));
    const p = this.profile = faultProfile(rng.fork('profile'), opts.level);
    this.chaos = rng.fork('chaos'); this.work = rng.fork('work'); this.fresh = rng.fork('fresh');
    this.agents = 1 + rng.int(4);
    this.raceWindow = rng.chance(0.5) ? rng.range(1, 40) : 0;
    this.active = rng.range(60_000, 240_000);
    this.net = new Network({ rng: rng.fork('net'), scheduler: this.sched, trace: this.trace, latency: [1, rng.range(5, 80)],
      spike: p.spike, drop: p.drop, duplicate: p.duplicate });
    this.http = new HttpSim({ net: this.net, scheduler: this.sched, rng: rng.fork('http'), trace: this.trace, timeout: [500, 8000] });
    this.store = new SqlStore({ rng: rng.fork('sql'), trace: this.trace, profile: this.raceWindow ? 'd1' : 'sqlite' });
    this.storeFaults = { readFail: p.readFail, writeFail: p.writeFail, ambiguous: p.ambiguous };
    // A request whose commit receipt could not be read after an ambiguous commit
    // (the read of `commits` failed): the documented case, decided by the version alone.
    const all = this.store.all.bind(this.store);
    this.store.all = (sql, params) => {
      try { return all(sql, params); } catch (error) {
        if (/\bFROM commits\b/.test(sql) && this.store.stats.ambiguous > this.lastAmbiguous) this.uncheckedPending = true;
        throw error;
      }
    };
    // Seconds of offset of the server's clock (jumps), and of each racing instance.
    this.offset = 0;
    this.instanceSkew = [0, 1, 2, 3].map(() => (p.skew ? this.chaos.range(-30, 30) : 0));
    this.serverQueue = [];
    this.requestNow = new Map();     // request id -> the clock reading it was served with
    this.ambiguousIds = new Set();   // requests during which a commit's outcome was unknown
    this.lastAmbiguous = 0;
    this.uncheckedIds = new Set();   // requests whose receipt could not be read after an ambiguous commit
    this.uncheckedPending = false;
    this.codes = new Map();          // code -> { issued, redeemed: [], family }
    this.families = new Map();       // family key -> { revoked: bool, since }
    this.refreshes = new Map();      // refresh token -> { issued, family, rotations }
    this.uncheckedRefused = 0;
    this.events = 0; this.flows = 0; this.signIns = 0; this.tokenCalls = 0; this.attacks = 0;
    this.healed = false;
    this.done = new Set();
    this.trace.log(`seed ${seed}: ${this.agents} agents, race window ${this.raceWindow} ms, ${this.active} ms; ` +
      `faults ${JSON.stringify(Object.fromEntries(Object.entries(p).map(([k, v]) => [k, +v.toFixed(3)])))}`);
  }

  begin() {
    this.jwks = null;
    this.sched.at(0, { type: 'jwks' });
    for (let a = 0; a < this.agents; a++) {
      const agent = { a, node: `agent${a}`, client: this.work.pick(CLIENTS), user: this.work.pick(USERS), cookies: new Map(), session: null, tokens: null };
      (this.agentList ??= []).push(agent);
      this.sched.at(this.work.range(100, 2000), { type: 'flow', a });
    }
    const minute = 60_000, p = this.profile;
    if (p.partitions) for (const ag of this.agentList) this.sched.at(this.chaos.exp(minute / p.partitions), { type: 'isolate', node: ag.node });
    if (p.crashes) {
      this.sched.at(this.chaos.exp(minute / p.crashes), { type: 'serverCrash' });
      this.sched.at(this.chaos.exp(2 * minute / p.crashes), { type: 'dbOutage' });
    }
    if (p.skew || this.chaos.chance(0.5)) this.sched.at(this.chaos.exp(30_000), { type: 'clockJump' });
    this.sched.at(this.active, { type: 'heal' });
    this.sched.at(this.active + HEAL, { type: 'final' });
  }

  /** The server's clock (seconds), for racing instance `i` (0: the main one). */
  now(i = 0) { return EPOCH + Math.floor(this.sched.now / 1000) + this.offset + this.instanceSkew[i]; }

  freshValues() { return { a: b64url(this.fresh.bytes(32)), b: b64url(this.fresh.bytes(32)), c: b64url(this.fresh.bytes(32)), d: b64url(this.fresh.bytes(32)) }; }

  serverEvent(r, i = 0) {
    const now = this.now(i);
    if (!r.duplicate) this.requestNow.set(r.id, now);
    else if (!this.requestNow.has(r.id)) this.requestNow.set(r.id, now);
    return { id: r.id, method: r.method, url: r.url, body: r.body, headers: r.headers, now, ...this.freshValues() };
  }

  next() {
    for (;;) {
      if (this.serverQueue.length && this.serveAt === undefined) {
        const batch = this.serverQueue.splice(0, this.raceWindow ? 4 : 1);
        if (batch.length === 1) return { k: 'request', ...this.serverEvent(batch[0]) };
        const order = this.chaos.shuffle([...batch.keys()]);
        this.trace.log(`race: ${batch.map(r => `#${r.id}`).join(', ')}, commits in order ${order.join(', ')}`);
        return { k: 'race', reqs: batch.map((r, i) => this.serverEvent(r, i)), order };
      }
      const item = this.sched.next();
      if (!item) return { k: 'end' };
      if (++this.events > 3_000_000) { this.checks.fail('more than 3,000,000 events: the run does not settle'); return { k: 'end' }; }
      const out = this.handle(item.event);
      if (out) return out;
    }
  }

  handle(ev) {
    if (this.http.handleUp(ev)) return null;
    if (this.http.handle(ev)) {
      for (const r of this.http.take()) {
        r.headers = this.headersOf.get(r.id) ?? [];
        this.serverQueue.push(r);
        if (this.raceWindow && this.serveAt === undefined) { this.serveAt = this.sched.now + this.chaos.int(this.raceWindow); this.sched.at(this.serveAt, { type: 'serve' }); }
      }
      return null;
    }
    switch (ev.type) {
      case 'serve': this.serveAt = undefined; return null;
      case 'jwks':
        this.get(null, '/jwks', {}, res => {
          if (res.ok && res.status === 200) this.jwks = JSON.parse(res.body).keys;
          else this.sched.after(500, { type: 'jwks' });
        });
        return null;
      case 'flow': this.flow(this.agentList[ev.a]); return null;
      case 'step': ev.run(); return null;
      case 'isolate':
        if (this.healed) return null;
        this.net.isolate(ev.node);
        this.sched.after(this.chaos.range(500, 20_000), { type: 'rejoin', node: ev.node });
        return null;
      case 'rejoin':
        this.net.rejoin(ev.node);
        if (!this.healed) this.sched.after(this.chaos.exp(60_000 / this.profile.partitions), { type: 'isolate', node: ev.node });
        return null;
      case 'serverCrash':
        if (this.healed) return null;
        this.sched.after(this.chaos.exp(60_000 / this.profile.crashes), { type: 'serverCrash' });
        this.crash();
        return null;
      case 'dbOutage':
        if (this.healed) return null;
        this.store.down();
        this.sched.after(this.chaos.range(200, 8000), { type: 'dbUp' });
        this.sched.after(this.chaos.exp(120_000 / this.profile.crashes), { type: 'dbOutage' });
        return null;
      case 'dbUp': if (!this.healed) this.store.up(); return null;
      case 'clockJump': {
        if (this.healed) return null;
        const jump = this.chaos.pick([-30, 30, -300, 300, 700, -700, 2 * 3600, 9 * 3600, -3600]);
        this.offset += jump;
        this.trace.log(`the server's clock jumps ${jump} s`);
        this.sched.after(this.chaos.exp(30_000), { type: 'clockJump' });
        return null;
      }
      case 'heal':
        this.healed = true;
        this.net.heal(); this.store.heal(); this.http.up = true;
        this.trace.log('everything heals');
        return null;
      case 'final':
        // Every agent signs in once more, on a healed system.
        for (const ag of this.agentList) { ag.final = true; ag.busy = false; this.sched.after(this.work.range(0, 1000), { type: 'flow', a: ag.a }); }
        this.sched.after(HEAL, { type: 'end' });
        return null;
      case 'end':
        this.sched = new Scheduler();
        return { k: 'end' };
      default: throw new Error(`unknown event ${ev.type}`);
    }
  }

  later(ms, run) { this.sched.after(ms, { type: 'step', run }); }

  /* ---- HTTP, as a browser or a relying party ---- */

  send(ag, method, path, { form, headers = [] } = {}, done) {
    const hs = [...headers];
    if (ag) {
      const cookie = [...ag.cookies.values()].filter(c => path.startsWith(c.path)).map(c => `${c.name}=${c.value}`).join('; ');
      if (cookie) hs.push(['cookie', cookie]);
    }
    const body = form ? new URLSearchParams(form).toString() : '';
    if (form) hs.push(['content-type', 'application/x-www-form-urlencoded']);
    this.headersOf ??= new Map();
    const id = this.http.request(ag?.node ?? 'agent0', { method, url: path, body }, res => {
      this.headersOf.delete(id);
      res.ambiguous = this.ambiguousIds.delete(id);
      res.unchecked = this.uncheckedIds.delete(id);
      if (res.ok) {
        res.headers = res.body.headers; res.status = res.body.status; res.now = this.requestNow.get(id); res.body = res.body.text;
        if (ag) this.remember(ag, res.headers);
        const error = res.status >= 400 ? /"error":"([^"]+)"/.exec(res.body)?.[1] : null;
        this.trace.log(`  #${id} was ${res.status}${error ? ` ${error}` : ''} at ${res.now}${res.duplicated ? ' (duplicated)' : ''}${res.ambiguous ? ' (its commit was ambiguous)' : ''}`);
      }
      this.requestNow.delete(id);
      done(res);
    });
    this.headersOf.set(id, hs);
  }
  get(ag, path, o, done) { this.send(ag, 'GET', path, o, done); }
  post(ag, path, o, done) { this.send(ag, 'POST', path, o, done); }

  remember(ag, headers) {
    for (const [k, line] of headers) {
      if (k !== 'set-cookie') continue;
      const [pair, ...attrs] = line.split(';').map(s => s.trim());
      const eq = pair.indexOf('=');
      const name = pair.slice(0, eq), value = pair.slice(eq + 1);
      const path = attrs.find(a => /^path=/i.test(a))?.slice(5) ?? '/';
      const maxAge = attrs.find(a => /^max-age=/i.test(a));
      if (maxAge && Number(maxAge.slice(8)) <= 0) ag.cookies.delete(name);
      else ag.cookies.set(name, { name, value, path });
    }
  }

  clientAuth(c, form) {
    if (!c.client_secret) return { form: { ...form, client_id: c.client_id }, headers: [] };
    if (c === clients.post) return { form: { ...form, client_id: c.client_id, client_secret: c.client_secret }, headers: [] };
    return { form, headers: [['authorization', 'Basic ' + Buffer.from(`${encodeURIComponent(c.client_id)}:${encodeURIComponent(c.client_secret)}`).toString('base64')]] };
  }

  /* ---- the agents ---- */

  /** One sign-in: authorize, sign in if asked, consent if asked, redeem the code. */
  flow(ag) {
    if (ag.busy || (this.healed && !ag.final) || this.done.has(ag.a)) return;
    ag.busy = true;
    this.flows++;
    const w = this.work;
    const verifier = b64url(w.bytes(32)), challenge = b64url(createHash('sha256').update(verifier).digest());
    const state = b64url(w.bytes(8)), nonce = b64url(w.bytes(8));
    const scope = ag.client === clients.noOffline ? 'openid profile' : 'openid profile offline_access';
    const q = new URLSearchParams({ client_id: ag.client.client_id, redirect_uri: cb, response_type: 'code', scope, state, nonce,
      code_challenge: challenge, code_challenge_method: 'S256' });
    const hadSession = ag.session && this.now() < ag.session.expires;
    const retry = why => {
      this.trace.log(`agent${ag.a}: sign-in failed (${why}); again later`);
      ag.busy = false;
      this.later(w.range(500, 5000), () => this.flow(ag));
    };
    const follow = (res, passwordAsked) => {
      if (!res.ok) return retry('network');
      if (res.status === 503) return retry('503');
      if (res.status === 303) {
        const loc = res.headers.find(([k]) => k === 'location')?.[1] ?? '';
        if (loc.startsWith(ISSUER)) return this.get(ag, loc.slice(ISSUER.length), {}, r => follow(r, passwordAsked));
        if (!loc.startsWith(cb)) return this.checks.fail(`agent${ag.a}: redirected to ${loc}, not the client's redirect URI`), retry('bad redirect');
        const u = new URL(loc);
        if (u.searchParams.get('error')) return retry(`error ${u.searchParams.get('error')}`);
        this.checks.that(u.searchParams.get('state') === state, `agent${ag.a}: the redirect's state is not the request's`);
        this.checks.that(u.searchParams.get('iss') === ISSUER, `agent${ag.a}: the redirect's iss is ${u.searchParams.get('iss')}`);
        const code = u.searchParams.get('code');
        this.codes.set(code, { issued: res.now, redeemed: [], family: null, agent: ag.a });
        return this.redeem(ag, code, verifier, nonce);
      }
      if (res.status === 200 && res.body.includes('name="password"')) {
        const s = ag.session;
        if (hadSession && s && !s.unsure && res.now >= s.created && res.now < s.expires)
          this.checks.fail(`agent${ag.a}: asked for the password with a live session (created at ${s.created}, now ${res.now})`);
        const action = /<form method="post" action="([^"]+)"/.exec(res.body)?.[1].replaceAll('&amp;', '&');
        const loginAt = res.now;
        return this.post(ag, action, { form: { username: ag.user.username, password: ag.user.password } }, r => {
          if (r.ok && r.status === 303) {
            this.signIns++;
            // The session (its cookie) starts with this answer, at its clock.
            ag.session = { created: r.now, expires: r.now + TTL.session, unsure: false };
          } else if (!r.ok) { if (ag.session) ag.session.unsure = true; }
          follow(r, true);
        });
      }
      if (res.status === 200 && res.body.includes('name="decision"')) {
        const action = /<form method="post" action="([^"]+)"/.exec(res.body)?.[1].replaceAll('&amp;', '&');
        return this.post(ag, action, { form: { decision: 'allow' } }, r => follow(r, passwordAsked));
      }
      if (res.status === 200 && /expired|unknown|no longer/i.test(res.body)) return retry('the interaction expired');
      return retry(`unexpected ${res.status}`);
    };
    this.get(ag, `/authorize?${q}`, {}, r => follow(r, false));
  }

  redeem(ag, code, verifier, nonce, attempt = 0) {
    const c = ag.client;
    const { form, headers } = this.clientAuth(c, { grant_type: 'authorization_code', code, redirect_uri: cb, code_verifier: verifier });
    this.tokenCalls++;
    this.post(ag, '/token', { form, headers }, res => {
      const k = this.codes.get(code);
      if (!res.ok || res.status === 503) {
        // Lost: send the same code again (the first may have been redeemed: then this fails, and revokes it).
        if (attempt < 2) return this.later(this.work.range(100, 2000), () => this.redeem(ag, code, verifier, nonce, attempt + 1));
        ag.busy = false; return this.later(this.work.range(500, 3000), () => this.flow(ag));
      }
      // A duplicated request is a second redemption: it may have revoked what the first issued.
      if (res.duplicated) this.families.set(`code:${code}`, { ...(this.families.get(`code:${code}`) ?? { revoked: false }), unsure: true });
      if (res.status === 200) {
        const t = JSON.parse(res.body);
        k.redeemed.push(res.now);
        this.checks.that(k.redeemed.length === 1, () => `code ${code.slice(0, 8)}… yielded tokens ${k.redeemed.length} times (Spec.code_once)`);
        this.checks.that(res.now < k.issued + TTL.code, () => `code ${code.slice(0, 8)}… was redeemed at ${res.now}, ${res.now - k.issued} s after it was issued (lifetime ${TTL.code} s)`);
        const family = `code:${code}`;
        k.family = family;
        this.families.set(family, { revoked: false, unsure: !!res.duplicated });
        this.checkIdToken(ag, t.id_token, res.now, nonce);
        ag.tokens = { access: t.access_token, refresh: t.refresh_token ?? null, issued: res.now, family, code, verifier, nonce };
        if (t.refresh_token) this.refreshes.set(t.refresh_token, { issued: res.now, family, rotated: 0 });
        this.checks.that((c === clients.noOffline) === !t.refresh_token, `agent${ag.a}: ${c.client_id} got ${t.refresh_token ? 'a' : 'no'} refresh token`);
        if (ag.final) { this.done.add(ag.a); return this.useAccess(ag, true); }
        ag.busy = false;
        return this.later(this.work.range(100, 3000), () => this.act(ag));
      }
      // A code redeemed twice (ours, by a lost answer) revokes what it issued.
      if (k?.redeemed.length || attempt > 0) this.families.set(`code:${code}`, { revoked: true });
      else if (res.status === 400 && res.unchecked) {
        // Its commit landed, then threw, and its receipt could not be read: the server ran it
        // again, found the code used and refused, but that rerun's commit failed (one receipt
        // per request), so what it issued is not revoked; the agent never got it.
        this.uncheckedRefused++;
        this.families.set(`code:${code}`, { revoked: false, unsure: true });
      } else if (res.status === 400 && !res.duplicated && res.now < k.issued + TTL.code)
        this.checks.fail(`agent${ag.a}: a fresh code, redeemed once, ${res.now - k.issued} s after it was issued, was refused: ${res.body.slice(0, 100)}`);
      if (ag.final && attempt === 0) this.checks.fail(`agent${ag.a}: after the heal, redeeming a fresh code failed: ${res.status} ${res.body.slice(0, 120)}`);
      ag.busy = false;
      this.later(this.work.range(500, 3000), () => this.flow(ag));
    });
  }

  /** What a signed-in agent does next. */
  act(ag) {
    if (this.healed || ag.busy || !ag.tokens) return;
    const r = this.work.next();
    if (r < 0.35) this.useAccess(ag);
    else if (r < 0.6 && ag.tokens.refresh) this.refresh(ag);
    else if (r < 0.7) this.replayCode(ag);
    else if (r < 0.78 && ag.oldRefresh) this.reuseRefresh(ag);
    else if (r < 0.92) this.flow(ag);
    else this.logout(ag);
    if (!ag.busy) this.later(this.work.range(200, 20_000), () => this.act(ag));
  }

  familyRevoked(f) { return this.families.get(f)?.revoked ?? false; }
  /** A request that may revoke family `f` is in flight (until `done`). */
  revoking(f) { const fam = this.families.get(f); if (fam) fam.busy = (fam.busy ?? 0) + 1; return () => { if (fam) fam.busy--; }; }
  busy(f) { return (this.families.get(f)?.busy ?? 0) > 0; }

  useAccess(ag, final = false) {
    const t = ag.tokens;
    this.trace.log(`agent${ag.a}: userinfo with an access token of family ${t.family.slice(5, 13)}, issued at ${t.issued}`);
    const busyAtSend = this.busy(t.family);
    this.get(ag, '/userinfo', { headers: [['authorization', `Bearer ${t.access}`]] }, res => {
      if (!res.ok || res.status === 503) { if (final) this.later(1000, () => this.useAccess(ag, true)); return; }
      const racing = busyAtSend || this.busy(t.family);
      const live = res.now < t.issued + TTL.access;
      const revoked = this.familyRevoked(t.family);
      const unsure = this.families.get(t.family)?.unsure ?? false;
      if (res.status === 200) {
        this.checks.that(live, () => `agent${ag.a}: an access token worked at ${res.now}, ${res.now - t.issued} s after it was issued (lifetime ${TTL.access} s)`);
        this.checks.that(!revoked, () => `agent${ag.a}: an access token of a revoked family still works (Spec.reuse_revokes_family)`);
        const u = JSON.parse(res.body);
        this.checks.that(u.sub === ag.user.sub, `agent${ag.a}: userinfo says sub ${u.sub}, not ${ag.user.sub}`);
      } else if (res.status === 401) {
        if (live && !revoked && !unsure && !racing) this.checks.fail(`agent${ag.a}: a live access token was refused at ${res.now} (issued ${t.issued})${final ? ' after the heal' : ''}`);
      } else this.checks.fail(`agent${ag.a}: userinfo answered ${res.status}`);
    });
  }

  refresh(ag) {
    const t = ag.tokens;
    const old = t.refresh;
    const { form, headers } = this.clientAuth(ag.client, { grant_type: 'refresh_token', refresh_token: old });
    ag.busy = true;
    const done = this.revoking(t.family);
    this.post(ag, '/token', { form, headers }, res => {
      ag.busy = false;
      done();
      const info = this.refreshes.get(old);
      if (!res.ok || res.status === 503) {
        // The rotation may have happened: our refresh token is now possibly rotated.
        if (info) info.unsure = true;
        return this.later(this.work.range(200, 20_000), () => this.act(ag));
      }
      if (res.duplicated) this.families.get(t.family).unsure = true;
      if (res.status === 200) {
        info.rotated++;
        this.checks.that(info.rotated === 1, () => `agent${ag.a}: a refresh token was rotated ${info.rotated} times (Spec.refresh_rotates)`);
        this.checks.that(!this.familyRevoked(t.family), () => `agent${ag.a}: a refresh token of a revoked family still works (Spec.reuse_revokes_family)`);
        const n = JSON.parse(res.body);
        if (n.id_token) this.checkIdToken(ag, n.id_token, res.now, null);
        ag.oldRefresh = { token: old, family: t.family };
        ag.tokens = { ...t, access: n.access_token, refresh: n.refresh_token, issued: res.now };
        this.refreshes.set(n.refresh_token, { issued: res.now, family: t.family, rotated: 0 });
      } else if (res.status === 400) {
        const e = JSON.parse(res.body).error;
        this.checks.that(e === 'invalid_grant', `agent${ag.a}: refresh answered ${e}`);
        // A refresh token that may have been rotated by a lost answer is reused here: that revokes the family.
        if (info?.unsure || info?.rotated || res.duplicated) this.families.get(t.family).revoked = true;
        else if (res.unchecked) {
          // As in `redeem`: the receipt could not be read; the rotation landed, the rerun's revocation did not.
          this.uncheckedRefused++;
          this.families.get(t.family).unsure = true;
          if (info) info.unsure = true;
        }
        else if (!this.familyRevoked(t.family) && !this.families.get(t.family).unsure) this.checks.fail(`agent${ag.a}: a live refresh token of a live family was refused at ${res.now}`);
        ag.tokens = null;
        return this.later(this.work.range(500, 3000), () => this.flow(ag));
      }
      this.later(this.work.range(200, 20_000), () => this.act(ag));
    });
  }

  replayCode(ag) {
    const t = ag.tokens;
    this.attacks++;
    const { form, headers } = this.clientAuth(ag.client, { grant_type: 'authorization_code', code: t.code, redirect_uri: cb, code_verifier: t.verifier });
    const done = this.revoking(t.family);
    this.post(ag, '/token', { form, headers }, res => {
      done();
      if (!res.ok || res.status === 503) { this.families.get(t.family).unsure = true; return; }
      this.checks.that(res.status === 400, () => `agent${ag.a}: a code redeemed again answered ${res.status} (Spec.code_once)`);
      if (res.status === 400) {
        this.families.get(t.family).revoked = true;
        this.trace.log(`agent${ag.a}: family ${t.family.slice(5, 13)} is revoked (its code was redeemed again)`);
        this.later(this.work.range(10, 500), () => this.useAccess(ag));
      }
    });
  }

  reuseRefresh(ag) {
    const t = ag.tokens;
    this.attacks++;
    const old = ag.oldRefresh;
    const { form, headers } = this.clientAuth(ag.client, { grant_type: 'refresh_token', refresh_token: old.token });
    const done = this.revoking(old.family);
    this.post(ag, '/token', { form, headers }, res => {
      done();
      if (!res.ok || res.status === 503) { this.families.get(old.family).unsure = true; return; }
      this.checks.that(res.status === 400, () => `agent${ag.a}: a rotated refresh token was accepted (Spec.reuse_detected)`);
      if (res.status === 400) {
        this.families.get(old.family).revoked = true;
        this.trace.log(`agent${ag.a}: reuse detected; family ${old.family.slice(5, 13)} is revoked`);
        this.later(this.work.range(10, 500), () => this.useAccess(ag));
      }
    });
  }

  logout(ag) {
    this.get(ag, '/logout', {}, res => {
      if (res.ok && res.status === 200) {
        const action = /<form method="post" action="([^"]+)"/.exec(res.body)?.[1]?.replaceAll('&amp;', '&');
        if (action) this.post(ag, action, { form: Object.fromEntries([...res.body.matchAll(/name="([^"]+)" value="([^"]*)"/g)].map(m => [m[1], m[2]])) }, r => {
          if (r.ok && r.status < 400) ag.session = null;
        });
      }
    });
  }

  checkIdToken(ag, jwt, now, nonce) {
    if (!this.checks.that(typeof jwt === 'string', `agent${ag.a}: no ID token`)) return;
    const [h, p, s] = jwt.split('.');
    const header = JSON.parse(Buffer.from(h, 'base64url')), claims = JSON.parse(Buffer.from(p, 'base64url'));
    const c = ag.client;
    this.checks.that(claims.iss === ISSUER && claims.aud === c.client_id && claims.sub === ag.user.sub,
      () => `agent${ag.a}: the ID token says iss ${claims.iss}, aud ${claims.aud}, sub ${claims.sub} (Spec.id_token_claims)`);
    this.checks.that(claims.iat === now && claims.exp === now + TTL.idToken, () => `agent${ag.a}: the ID token's iat ${claims.iat} / exp ${claims.exp}, issued at ${now}`);
    if (nonce !== null) this.checks.that(claims.nonce === nonce, `agent${ag.a}: the ID token's nonce is not the request's`);
    this.checks.that(header.alg === c.alg, `agent${ag.a}: the ID token is signed with ${header.alg}, not ${c.alg}`);
    if (!this.jwks) return;   // not fetched yet
    const jwk = this.jwks.find(k => k.kid === header.kid);
    if (!this.checks.that(jwk, `agent${ag.a}: the ID token's kid ${header.kid} is not in /jwks`)) return;
    const key = createPublicKey({ key: jwk, format: 'jwk' });
    const ok = header.alg === 'ES256'
      ? verifySignature('sha256', Buffer.from(`${h}.${p}`), { key, dsaEncoding: 'ieee-p1363' }, Buffer.from(s, 'base64url'))
      : verifySignature(null, Buffer.from(`${h}.${p}`), key, Buffer.from(s, 'base64url'));
    this.checks.that(ok, `agent${ag.a}: the ID token's ${header.alg} signature does not verify against /jwks`);
  }

  crash() {
    this.http.crash();
    this.store.crash();
    for (const r of this.serverQueue) this.http.fail(r.id, [1, 50]);
    this.serverQueue = [];
  }

  /* ---- calls from Sim.lean ---- */

  env(key) {
    if (key === 'PORTER_CONFIG') return JSON.stringify(testConfig);
    if (key === 'ISSUER') return ISSUER;
    return null;
  }

  ready(issuer) {
    this.checks.that(issuer === ISSUER, `the issuer is ${issuer}`);
    Object.assign(this.store, this.storeFaults); this.storeFaults = null;
    this.begin();
  }

  reply(id, status, headers, body) {
    if (this.store.stats.ambiguous > this.lastAmbiguous) { this.lastAmbiguous = this.store.stats.ambiguous; this.ambiguousIds.add(id); }
    if (this.uncheckedPending) { this.uncheckedPending = false; this.uncheckedIds.add(id); }
    if (!this.healed && this.chaos.chance(this.profile.crashes / 100)) {
      this.trace.log('the server crashes after handling the request, before answering');
      this.crash();
      return;
    }
    this.http.respond(id, 200, { status, headers, text: body });
  }

  fail(message) { this.checks.fail(message); this.trace.log(`VIOLATION ${message}`); this.context ??= this.trace.tail(120); }

  summary() {
    const n = this.net.stats, d = this.store.stats, h = this.http.stats;
    return `(${this.agents} agents, race ${this.raceWindow} ms, ${this.flows} flows, ${this.signIns} sign-ins, ${this.tokenCalls} code redemptions, ` +
      `${this.attacks} attacks, ${this.events} events, ${h.requests} requests/${h.failed} failed/${h.duplicates} dup/${h.crashes} crashes, ` +
      `db ${d.commits} commits/${d.writeFailed + d.readFailed} failed/${d.ambiguous} ambiguous, clock offset ${this.offset} s` +
      `${this.uncheckedRefused ? `; ${this.uncheckedRefused} sign-in(s) or refresh(es) refused after an ambiguous commit whose receipt could not be read (documented; nothing revoked)` : ''})`;
  }
}

function finishSeed() {
  if (!W) return;
  for (const ag of W.agentList ?? []) W.checks.that(W.done.has(ag.a), `agent${ag.a} did not sign in after the heal`);
  if (W.storeFaults !== null) W.checks.fail('the server never finished its setup');
  let failures = W.checks.failures;
  if (opts.determinism) {
    const prev = digests.get(W.seed);
    if (prev === undefined) digests.set(W.seed, W.trace.digest);
    else if (prev !== W.trace.digest) failures = [...failures, `seed ${W.seed} did not replay: trace ${prev} then ${W.trace.digest}`];
  }
  loop.report(W.seed, { failures, trace: W.trace, summary: W.summary(), context: W.context ?? W.checks.context });
  W.store.close();
  W = null;
}

export function begin() {
  finishSeed();
  const seed = loop.next();
  if (seed === null) return null;
  W = new World(seed);
  return { seed };
}
export const store = () => W.store;
export const env = k => W.env(k);
export const ready = i => W.ready(i);
export const next = () => W.next();
export const reply = (...a) => W.reply(...a);
export const fail = m => W.fail(m);
export const exitCode = () => { finishSeed(); return loop.finish(); };
