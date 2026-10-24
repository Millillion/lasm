# Azure Functions (Node.js v4 programming model)

A Lasm server runs as one anonymous HTTP
function on every route of an Azure Functions app (Node.js 22 or 24 on Linux).

```sh
npx lasm init my-app --template hono --deploy azure   # adds @azure/functions to package.json
cd my-app && npm install
npm run build:azure                                   # lasm build --target azure: dist/ and azure-functions/
cd azure-functions && func start                      # local, with Azure's own Core Tools
func azure functionapp publish APP_NAME --no-build    # deploy, as built
```

`lasm build --target azure` (or `lasm package --target azure` for an existing build) writes a function app directory: `dist/` (with its
production `node_modules`, which must include `@azure/functions`), a `host.json`
with `routePrefix: ""` (the server's own paths, no `/api`), a `package.json`
whose `main` is the handler `lasm-azure.mjs` and whose `dependencies` pin every
deployed npm package, `.funcignore` and `local.settings.json`. The handler
registers one function, `lasm`, on route `{*path}` for every method, and
starts the Lean server while the worker loads the app.

- **Plan:** Flex Consumption or Premium on Linux, Node.js 24. Give instances at
  least 512 MB (Flex: 512 MB, 2 GB or 4 GB instances; prefer 2 GB). The HTTP
  timeout is 230 s.
- **Build:** publish with `--no-build`: the directory already holds the
  production `node_modules` built by Lasm (a remote `npm install` would
  reinstall the same pinned versions).
- **Windows plans:** untested; Lasm deployments run on Linux.

**Tested in CI** (`.github/workflows/serverless.yml`, Linux x64; no Azure
account): for every server template, Azure Functions Core Tools 4.16.0 (npm
`azure-functions-core-tools`) runs `func start` on the packaged app, and the
templates' HTTP checks pass through the Functions host and the Node.js worker.
Azure itself (plans, scaling, storage) is not emulated.
