# Local compiler release packaging (retired)

> **Historical.** This page used to describe the retired `0.1.0-experimental.3`
> packaging: Lean 4.32.0, a Zig-built target, `npm run package:release` and
> `npm run test:release`, and `platform-acceptance.yml`. Those scripts and that
> workflow were removed on 2026-11-03 and none of it applies to current Lasm.
> The old text is in the git history (`git show 590a923f:docs/RELEASE.md`).

Current documents:

- [RELEASING.md](RELEASING.md): how a release is cut and published.
- [README](../README.md): install, CLI and supported environments.
- [NODE_ACCEPTANCE.md](NODE_ACCEPTANCE.md): accepted candidates, built and
  accepted by [`node-linux-acceptance.yml`](../.github/workflows/node-linux-acceptance.yml).
- [INSTALLATION_HARDENING.md](INSTALLATION_HARDENING.md#candidate-inputs-and-release-gates):
  release gates.
- [DEPLOYMENT.md](DEPLOYMENT.md).
