# create-lasm

Create a Lean-on-Node project with [Lasm](https://github.com/Millillion/lasm):

```sh
npm create lasm@latest my-app -- --template hono
cd my-app
npm install
npm run dev
```

This is exactly `npx @lasm/cli init my-app --template hono`: it runs `lasm init`
from the `@lasm/cli` version it depends on, with your arguments unchanged.
Templates: `plain` (default), `express`, `hono`, `std-http`; `--deploy lambda`
adds an AWS Lambda Dockerfile. Without a directory it asks for one (and for a
template) on an interactive terminal, and otherwise prints the usage line.

MIT licence, copyright Jordan Last.
