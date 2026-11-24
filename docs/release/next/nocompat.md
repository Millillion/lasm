## CLI

- **No hints for Lasm's own earlier names** (decision 0.7-24, 0.7-9). `--target
  azure`, `--target gcf` and `--deploy lambda-zip` are refused like any unknown
  name, with the list of targets. **Migration:** use `azure-functions`,
  `cloud-functions` and `--deploy lambda`.
