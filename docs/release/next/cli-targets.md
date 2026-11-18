## The CLI (Stage 0, milestone 0.7)

- **Breaking: the Azure and Google targets are named after the platforms**
  (docs/api/decisions/0.7.md, 0.7-24): `--target azure` is now
  `--target azure-functions`, and `--target gcf` is now `--target cloud-functions`,
  whose default output is `cloud-functions/` (was `gcf/`). The same names apply to
  `lasm package --target`, `lasm init --deploy` and the `npm run build:<target>`
  scripts `lasm init` writes. The old names are refused with the new one
  (`did you mean --target cloud-functions?`). Migration: in `package.json`
  scripts, CI and deploy commands, `azure` → `azure-functions`, `gcf` →
  `cloud-functions`, and `gcf/` → `cloud-functions/` (for example
  `gcloud functions deploy … --source cloud-functions`).

- `lasm package` names the closest target for an unknown one, as the other
  commands do (0.7-24).
