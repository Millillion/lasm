# Releasing Lasm to npm

Lasm is published to npm only by the GitHub Actions workflow
[`release.yml`](../.github/workflows/release.yml), through **npm trusted
publishing** (OIDC) with **provenance**. There are no npm tokens or secrets, and
nobody publishes by hand (user decision 2026-10-24, [AGENTS.md](../AGENTS.md)).
A release is a version bump: a pull request that changes the root `package.json`
`version`, merged to `main` after its checks pass.

## How a release works

1. **Release PR.** It changes `version` in the root `package.json` (the version
   `@lasm/cli` and `@lasm/create` are published as) and adds
   `docs/release/<version>-notes.md` (the GitHub release body).
2. **`release-checks`** ([workflow](../.github/workflows/release-checks.yml)) runs on
   every pull request to `main` and every push to `main`. Its `detect` job compares
   the version with the base (pull request) or the pushed-over commit (push), and
   with npm and the tags. When the version is unchanged, the `release-checks`
   status passes at once. When it changed to a version that is not on npm and not
   tagged, and the notes exist, it runs for that exact commit:
   - the **candidate checks** ([node-linux-acceptance.yml](../.github/workflows/node-linux-acceptance.yml),
     called as a reusable workflow): candidate build, installed acceptance on the
     five platforms, platform-support, templates and js-interop-examples (about
     four hours);
   - the **npm rehearsal** ([npm-dist.yml](../.github/workflows/npm-dist.yml)): every
     package built from the accepted candidate with `version=<version> license=MIT`,
     published to a loopback Verdaccio on all five platforms and installed from it
     (`installed`, `lake`, `c-tier`, `edge`, `npx`, `init`, `create`, ...), with tool
     packages byte-identical across runners. `edge` builds `examples/edge-pure` for
     every edge target and for Bun and Deno from the edge runtime that `@lasm/cli`
     bundles. Then Bun 1.4.4 and Deno 2.9.6 install and run the same packages from
     the same registry with no Node or npm on `PATH`
     ([published-ci.mjs](../scripts/edge/published-ci.mjs) with
     `LASM_PUBLISHED_REQUIRE=1`, so nothing may be skipped): `bun add`, `bunx --bun`,
     `bun create @lasm`, `deno install`, `deno run -A npm:@lasm/cli`,
     `npm:@lasm/create`, the builds served by Bun and Deno;
   - since 0.3.0, the **launch workflows**, each called for this commit: the browser
     ([browser.yml](../.github/workflows/browser.yml)), Lasm.UI ([ui.yml](../.github/workflows/ui.yml)),
     WASI/wasi-http/Fastly ([wasi.yml](../.github/workflows/wasi.yml)), the fullstack
     template ([fullstack.yml](../.github/workflows/fullstack.yml)), the unit suite
     ([unit.yml](../.github/workflows/unit.yml)) and the dev loop, editor and cold
     start ([dx-dev-loop.yml](../.github/workflows/dx-dev-loop.yml)); the rehearsal's
     `launch-*` scenarios build and serve the web, fetch, fastify and fullstack
     templates, the WASI targets and a Vite build from the installed package;
   - the **edge and Bun/Deno checks** (since 0.2.0; [workers.yml](../.github/workflows/workers.yml),
     called with `release-check: true`): the edge runtime built and compared with
     its pin, the Hono template and `examples/edge-pure` served with `wrangler dev`
     (workerd), checked with `vercel build` and Vercel's `edge-runtime`, `netlify
     build`/`netlify dev` offline, Deno and Supabase's edge-runtime image; the
     compiler under Bun and Deno (Linux x64 and arm64); a candidate packed from the
     commit installed and run under Node, Bun and Deno on all five platforms, with
     the same program bytes everywhere. All local tools and images, no account.

   The single status **`release-checks`** passes only if all of them pass. It
   uploads a `release-checks` artifact (the manifest: commit, version, dist-tag,
   candidate, result). A version change that cannot be released (already on npm,
   tag exists, notes missing, not semver) fails it.
3. **Merge.** The push to `main` starts `release-checks` again for the merge commit
   (the commit that will be published) and `release.yml`.
4. **`release.yml`** proceeds only when the version changed, the release is not
   complete, and the `release-checks` run *for this exact commit*, from the push to
   `main`, succeeded with the full candidate checks. It verifies this through the
   API: the workflow run, its `release-checks` check run on the commit, and the
   manifest (which must record the edge job as passed). The checks take hours, so the push run usually stops with "still
   running"; the `workflow_run` trigger starts `release.yml` again when
   `release-checks` completes. Both share the concurrency group `npm-release`,
   which never cancels. Then, on Linux x64:
   - it downloads the accepted candidate and rebuilds every package exactly as the
     rehearsal did (`scripts/npm-dist/build-all.mjs --version <version> --license MIT`,
     Node 26.12.1 with npm 11.20.0), and checks every tarball's integrity against the
     rehearsal's `npm-dist-linux-x64` record ([compare.mjs](../scripts/release/compare.mjs));
   - it publishes, in order, the tool packages whose version is not on npm yet
     (existing ones are skipped), then `@lasm/cli`, then `@lasm/create`, with
     `npm publish --access public --provenance --tag <dist-tag>` ([publish.mjs](../scripts/release/publish.mjs)).
     The dist-tag is `latest` for a normal version and `next` for a prerelease
     (`0.2.0-rc.1`). If any existing version has other bytes, it stops before
     publishing anything;
   - it verifies from the public registry, in a clean directory with empty npm
     and Lasm caches: `npm create @lasm@<version> app -- --template hono`, `npm
     install`, `npm run build`, the server, and HTTP 200 with the expected bodies on
     `/`, `/hello/Ada` and `/health` ([verify-create.mjs](../scripts/release/verify-create.mjs));
   - it creates and pushes the annotated tag `v<version>` at that commit, and the
     GitHub release with the notes file as its body ([tag-release.mjs](../scripts/release/tag-release.mjs)).

Every step is idempotent: a re-run skips what is already published, tagged or
released, and never republishes, unpublishes or moves a tag.

**Trust configuration.** Every package trusts exactly: GitHub Actions, owner
`Millillion`, repository `lasm`, workflow file `release.yml`, no environment. The
release job has `permissions: id-token: write, contents: write` (and `actions:
read` for the artifacts); npm 11.20.0 and Node 26.12.1 meet trusted publishing's
npm 11.5.1+/Node 22.14+ and `npm trust`'s npm 11.15.0+. Every package's
`repository` is `git+https://github.com/Millillion/lasm.git`, which npm checks
against the provenance.

## One-time bootstrap (the package owner, once)

npm can attach a trusted publisher only to a package that already exists. The
bootstrap script reserves every name with a `0.0.0` placeholder, trusts
`release.yml` for each, and deprecates the placeholders. The package set comes
from [`scripts/npm-dist/packages.mjs`](../scripts/npm-dist/packages.mjs) (today 23:
21 tool packages, `@lasm/cli`, `@lasm/create`). Run it on your own machine, in a
checkout of `main`:

```sh
npm install -g npm@^11.15.0    # npm trust needs 11.15.0 or newer
npm login                      # the account that owns the lasm org; 2FA enabled
npm whoami
npm profile get                # "two-factor auth: auth-and-writes" (or auth-only)
npm ci --ignore-scripts        # the script reads the package set from this checkout

node scripts/release/bootstrap-npm.mjs --dry-run   # prints every command, changes nothing
node scripts/release/bootstrap-npm.mjs             # does it
```

npm requires two-factor for every trust command, reads (`npm trust list`) included,
and ignores the browser's "skip for 5 minutes" option for them, so the bootstrap's
trust step costs several prompts per package. After the placeholders exist, link
trust with one authenticator code for all packages instead:

```sh
node scripts/release/trust-all.mjs   # one code, reused until it expires; 409 = already trusted
```

What it does, per package (each step is skipped when already done, so it can be
re-run after an interruption):

1. **Placeholder** (only if the name does not exist): `npm publish` of a package
   with `version` `0.0.0`, a README "placeholder; use the latest version", `license`
   `MIT` with the LICENSE text, and `repository` pointing at
   github.com/Millillion/lasm; `@lasm/*` with `--access public`, `@lasm/create`
   included. npm asks for 2FA (browser or OTP) for each publish.
2. **Trust**: `npm trust github <pkg> --repository Millillion/lasm --file release.yml --allow-publish --yes`.
   npm asks for 2FA on the first call. **In the browser prompt, tick "skip
   two-factor authentication for the next 5 minutes"**: the following calls then
   run without asking again (npm documents about 80 packages per window with a
   2-second pause between calls, which the script makes). If the window closes,
   npm asks again. A package that already trusts a different publisher stops the
   script; inspect it with `npm trust list <pkg>` and remove it with
   `npm trust revoke <pkg> --id <id>` only if you mean to.
3. **Deprecate**: `npm deprecate <pkg>@0.0.0 "placeholder; use 0.1.0 or later"`.

Check afterwards: `npm trust list @lasm/cli`, `npm view @lasm/cli versions dist-tags`.
Options: `--only NAME[,NAME]`, `--skip-trust`, `--skip-deprecate`, `--registry URL`.
When a later release adds a package (a new platform or tool), run the script
again before that release: it handles only the new names.

**Tested:** `--dry-run` against the public registry (no credentials), and a real
run against a loopback Verdaccio with a test user: 23 placeholders published and
deprecated, a second run with nothing to do. `npm trust` works only against
registry.npmjs.org, so against a loopback registry the trust commands are printed,
not run; the trust step is untested until the real bootstrap.

## Cutting a release

1. Branch from `main`; set `"version"` in `package.json` (for example `0.1.0`, or
   `0.2.0-rc.1` for a prerelease on `next`); add `docs/release/<version>-notes.md`;
   update README and `docs/release/` as needed.
2. Open the PR. `release-checks` runs the candidate checks and the rehearsal (about
   five hours). Fix and push until it passes.
3. Merge (the agent may merge release PRs once green, except 0.1.0, which waits for
   the user's go-ahead). `release-checks` runs again for the merge commit, then
   `release.yml` publishes. Watch the `release` workflow; its summary lists every
   package as published or skipped.

The edge runtime is not a tool package: `build.mjs` extracts its archive into
`@lasm/cli` (`targets/<root>/`), downloading it from its release (`lean-4.35.0-edge-v2`,
pinned in `src/edge-runtimes.json`). `npm-dist.yml` and `release.yml` fetch that
archive with `gh release download`, which also works while the release is a draft
(`edge-runtime.yml` with `draft-release` attaches the reproduced archive to one), and
pass it to `build-all.mjs --seed`, which checks its SHA-256. Source checkouts
download the same archive over HTTPS, which needs the release to be public.

Tool packages keep their version across Lasm releases (it follows the immutable
release that published the archive, for example `4.35.0-lasm.1`), so a release
normally publishes only `@lasm/cli` and `@lasm/create`. A change to a tool package's
metadata or README changes its bytes; with the same version, `release.yml`
refuses ("on npm with different bytes"), so such a change needs a new tool release
revision (`...-lasm.2`).

## Dry runs

`release.yml` has `workflow_dispatch` with `dry_run` (default `true`): it runs the
plan and the whole release job against a loopback Verdaccio instead of npm
(publish, publish again to prove that everything is skipped, `npm create
lasm@<version>` from it, and the tag/release commands printed, not run). A dry run
accepts a partial `release-checks` run, which `release-checks`' own
`workflow_dispatch` makes from an already accepted candidate (a real release
refuses partial and overlaid runs):

```sh
git switch -c release-dry-run origin/main
# bump package.json "version" and add docs/release/<version>-notes.md, commit, push the branch
gh workflow run release-checks.yml --ref release-dry-run \
  -f candidate-release=node-linux-candidate-RUN -f candidate-sha256=SHA256
# a candidate older than the source (for example one that still downloads Git):
#   add -f overlay-source=true (the rehearsal uses this commit's bin/ and src/)
# when it has passed:
gh workflow run release.yml --ref release-dry-run -f dry_run=true
```

## Recovering from a partial failure

Re-run the failed `release` workflow run (or dispatch `release.yml` on `main` with
`dry_run=false`; it finds the same `release-checks` run). It skips every package
already on npm with the same bytes, publishes the rest, and continues with the
verification, the tag and the GitHub release.

- **A publish failed with E404/ENEEDAUTH/E403:** the package is not bootstrapped
  (no trust for `release.yml`, or the name is new). Run the bootstrap for it, then
  re-run.
- **"on npm with different bytes":** that version was published from other bytes;
  versions can never be reused. Bump the version in a new release PR (or, for a
  tool package, its release revision).
- **The verification failed after publishing:** the packages are public. Fix
  forward with a new patch release; deprecate the broken version if needed
  (`npm deprecate @lasm/cli@<version> "..."`, by the owner). Never unpublish.
- **"tag already points at …":** someone tagged another commit; resolve by hand
  (never move a release tag silently).
- **release-checks timed out or failed on main after the merge:** fix on `main` with
  a new release PR (a new version), or re-run the failed `release-checks` jobs; the
  `workflow_run` trigger then starts `release.yml` again.

## Making `release-checks` required

`release.yml` enforces the checks itself. To also block merging a release PR
without them, add `release-checks` as a required status check for `main` in the
repository rules (Settings, Rules). Agents that push directly to `main` then need a
bypass; this is a repository setting for the owner to decide.
