// `lasm init`: scaffold a new Lean-on-Node project from a template.
// Writes files only: no network access, no Lean toolchain, no npm install.
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync } from 'node:fs';
import { basename, dirname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../', import.meta.url));
const templateRoot = join(root, 'templates');

// Exact npm versions tested together in CI (scripts/templates/run-templates.mjs).
const npm = {
  express: { express: '5.2.1' },
  hono: { '@hono/node-server': '2.1.3', hono: '4.13.13' },
};
export const templateDependencies = npm;

// `--deploy` targets. Function platforms run the server through `lasm package`
// (src/package.mjs); azure and gcf also deploy the platform's npm package.
export const deployTargets = {
  lambda: { summary: 'AWS Lambda container image (Dockerfile.lambda, AWS Lambda Web Adapter)' },
  'lambda-zip': { summary: 'AWS Lambda .zip for nodejs24.x (npm run build:lambda)', package: 'lambda' },
  'lambda-edge': { summary: 'Lambda@Edge .zip for CloudFront origin requests (npm run build:lambda-edge)', package: 'lambda-edge' },
  vercel: { summary: 'Vercel Function (vercel.json; Vercel runs the build)', package: 'vercel' },
  netlify: { summary: 'Netlify Function (netlify.toml; Netlify runs the build)', package: 'netlify' },
  azure: { summary: 'Azure Functions app (npm run build:azure)', package: 'azure', dependencies: { '@azure/functions': '4.17.0' } },
  gcf: { summary: 'Google Cloud Functions gen2 (npm run build:gcf)', package: 'gcf', dependencies: { '@google-cloud/functions-framework': '5.0.5' } },
};

export const templates = {
  plain: { summary: 'a Lean program (IO only)', server: false, interop: false },
  express: { summary: 'Express 5 with Lean request handlers (Lasm.JS)', server: true, interop: true },
  hono: { summary: 'Hono on @hono/node-server with Lean request handlers (Lasm.JS)', server: true, interop: true },
  'std-http': { summary: "an HTTP server in pure Lean (Std.Http)", server: true, interop: false },
};

export const initUsage = `Usage: lasm init <directory> [--template ${Object.keys(templates).join('|')}] [--deploy TARGET]…

Creates a Lean project for Lasm: lakefile, lean-toolchain, package.json,
Main.lean, README.md, Dockerfile, .dockerignore and .gitignore.
The directory must be new or empty. The default template is plain.
--deploy (server templates; repeatable) adds a deployment target's files and
npm scripts (build:<target> runs lasm build --target <target>). Lasm never
installs or starts a platform's own tools; use the platform's CLI for that:
${Object.entries(deployTargets).map(([name, t]) => `  ${name.padEnd(12)} ${t.summary}`).join('\n')}

Templates:
${Object.entries(templates).map(([name, t]) => `  ${name.padEnd(9)} ${t.summary}`).join('\n')}

Example: npx @lasm/cli init my-app --template hono`;

export function parseInitArguments(tokens) {
  const result = { command: 'init', template: 'plain', deploy: [] };
  const positional = [];
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--help' || token === '-h') return { command: 'init-help' };
    const match = /^(?:--template|-t)(?:=(.*))?$/.exec(token);
    if (match) {
      const value = match[1] ?? tokens[++i];
      if (!value || value.startsWith('-')) throw new Error('--template requires a value\n\n' + initUsage);
      result.template = value; continue;
    }
    const deploy = /^--deploy(?:=(.*))?$/.exec(token);
    if (deploy) {
      const value = deploy[1] ?? tokens[++i];
      if (!deployTargets[value]) throw new Error(`--deploy accepts ${Object.keys(deployTargets).join(', ')}\n\n` + initUsage);
      if (!result.deploy.includes(value)) result.deploy.push(value);
      continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown lasm init option: ${token}\n\n${initUsage}`);
    positional.push(token);
  }
  if (positional.length !== 1) throw new Error(initUsage);
  if (!templates[result.template])
    throw new Error(`Unknown template "${result.template}". Choose one of: ${Object.keys(templates).join(', ')}`);
  if (result.deploy.length && !templates[result.template].server)
    throw new Error(`--deploy ${result.deploy[0]} needs a server template (express, hono or std-http), not ${result.template}`);
  result.directory = positional[0];
  return result;
}

function lasmPackage() {
  const pkg = JSON.parse(readFileSync(join(root, 'package.json'), 'utf8'));
  return { name: pkg.name, version: pkg.version };
}

function defaultLean() {
  return JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8')).defaultLean;
}

/** npm package name from a directory name: lower case, URL-safe. */
export function packageName(directory) {
  const name = basename(resolve(directory)).toLowerCase().replace(/[^a-z0-9._-]+/g, '-').replace(/^[._-]+|[-]+$/g, '');
  return name || 'lean-app';
}

/** Lake package name: a plain Lean identifier. */
export function lakeName(name) {
  const id = name.replace(/[^A-Za-z0-9_]+/g, '_').replace(/^_+|_+$/g, '');
  return /^[A-Za-z]/.test(id) ? id : 'app' + (id ? '_' + id : '');
}

function lakefile(name) {
  return `name = "${lakeName(name)}"
version = "0.1.0"
defaultTargets = ["app"]

# Pure Lean modules (App.lean).
[[lean_lib]]
name = "App"

# The program: Main.lean. Lasm builds it with \`lasm build Main.lean\`.
[[lean_exe]]
name = "app"
root = "Main"
`;
}

function packageJson(name, template, deploy = []) {
  const lasm = lasmPackage();
  const pkg = {
    name, version: '0.1.0', private: true,
    description: `${templates[template].summary}, compiled to WebAssembly by Lasm`,
    scripts: {
      // `npm run dev -- a b` passes a and b to main.
      dev: 'lasm Main.lean --',
      build: 'lasm build Main.lean',
      start: 'node dist/main.mjs',
    },
    engines: { node: '>=24' },
  };
  for (const target of deploy) {
    const { package: platform } = deployTargets[target];
    // Build and package in one step; Vercel's and Netlify's builds run these too.
    if (platform) pkg.scripts[`build:${platform}`] = `lasm build Main.lean --target ${platform}`;
  }
  const dependencies = Object.assign({}, npm[template], ...deploy.map(target => deployTargets[target].dependencies));
  if (Object.keys(dependencies).length) pkg.dependencies = Object.fromEntries(Object.entries(dependencies).sort(([a], [b]) => a < b ? -1 : 1));
  pkg.devDependencies = { [lasm.name]: lasm.version };
  return JSON.stringify(pkg, null, 2) + '\n';
}

function dockerfile(template) {
  const server = templates[template].server;
  return `# syntax=docker/dockerfile:1
# Multi-stage build: Lasm compiles the Lean program in the first stage; the
# image you deploy contains only Node and dist/ (Wasm, launcher and the
# production node_modules).
#   docker build -t ${template === 'plain' ? 'lean-app' : 'lean-server'} .
#   docker run --rm ${server ? '-p 8080:8080 ' : ''}${template === 'plain' ? 'lean-app' : 'lean-server'}

FROM node:24-trixie AS build
WORKDIR /app
# The whole project (see .dockerignore), so local file: dependencies resolve too.
COPY . .
RUN if [ -f package-lock.json ]; then npm ci; else npm install; fi
# The first build downloads Lean and Lasm's build tools into the cache mount.
RUN --mount=type=cache,target=/root/.cache/lasm npx lasm build Main.lean --output dist

FROM node:24-bookworm-slim
WORKDIR /app
ENV NODE_ENV=production
COPY --from=build /app/dist ./dist
USER node
${server ? `# Listen on every interface; platforms such as Cloud Run set PORT themselves.
ENV HOST=0.0.0.0 PORT=8080
EXPOSE 8080
` : ''}CMD ["node", "dist/main.mjs"]
`;
}

// AWS Lambda: the template's build stage plus the tested recipe of
// deploy/lambda/Dockerfile and docs/deploy/lambda.md (Phase 5.1).
function lambdaDockerfile() {
  return `# syntax=docker/dockerfile:1
# AWS Lambda container image: Lambda's managed Node 24 image, with the AWS Lambda
# Web Adapter forwarding each invocation to the server's HTTP port.
#   docker build --platform linux/amd64 -f Dockerfile.lambda -t my-app-lambda .
# Give the function at least 512 MB of memory. See docs/deploy/lambda.md.

FROM node:24-trixie AS build
WORKDIR /app
# The whole project (see .dockerignore), so local file: dependencies resolve too.
COPY . .
RUN if [ -f package-lock.json ]; then npm ci; else npm install; fi
RUN --mount=type=cache,target=/root/.cache/lasm npx lasm build Main.lean --output dist

FROM public.ecr.aws/lambda/nodejs:24
COPY --from=public.ecr.aws/awsguru/aws-lambda-adapter:1.1.0 /lambda-adapter /opt/extensions/lambda-adapter
COPY --from=build /app/dist \${LAMBDA_TASK_ROOT}/
RUN printf '#!/bin/sh\\nexec node "$LAMBDA_TASK_ROOT/main.mjs"\\n' > /opt/lasm-start && chmod 755 /opt/lasm-start
# The server listens on PORT (not 8080: the local emulator uses it); the adapter
# forwards requests once GET /health answers.
ENV AWS_LAMBDA_EXEC_WRAPPER=/opt/lasm-start PORT=3000 AWS_LWA_PORT=3000 AWS_LWA_READINESS_CHECK_PATH=/health
CMD ["main.mjs"]
`;
}

const gitignore = `node_modules/
dist/
.lake/
`;

// Vercel and Netlify run `npm run build` on their build machines (Linux x64),
// then `lasm package` writes the function exactly as tested in CI.
// `routes` sends every path to the function first: `vercel build` puts these
// ahead of the zero-config routes it adds to .vercel/output/config.json.
const vercelJson = JSON.stringify({
  $schema: 'https://openapi.vercel.sh/vercel.json',
  framework: null,
  installCommand: 'npm install',
  buildCommand: 'npm run build:vercel',
  routes: [{ src: '/(.*)', dest: '/index' }],
}, null, 2) + '\n';

const netlifyToml = `# Netlify runs the build: lasm build --target netlify writes a v2 function
# that serves every path from the Lean server (netlify/functions/lasm).
[build]
  command = "npm run build:netlify"
  publish = "public"

[functions]
  directory = "netlify/functions"
  # The function loads program.wasm, host/** and native pieces at run time.
  included_files = ["netlify/functions/lasm/**"]
`;

function deployGitignore(deploy) {
  const extra = { 'lambda-zip': 'lambda.zip', 'lambda-edge': 'lambda-edge.zip', vercel: '.vercel/', netlify: '.netlify/\nnetlify/functions/lasm/', azure: 'azure-functions/', gcf: 'gcf/' };
  return gitignore + deploy.map(target => extra[target]).filter(Boolean).map(line => line + '\n').join('');
}

const dockerignore = `node_modules
dist
.lake
.git
`;

function readme(name, template, deploy) {
  const t = templates[template];
  const lasm = lasmPackage();
  const tryIt = template === 'plain'
    ? `\`\`\`sh
npm run dev -- Ada          # build and run: Hello, Ada, from Lean!
npm run build               # write dist/
node dist/main.mjs Ada      # run the build: only Node is needed
\`\`\``
    : `\`\`\`sh
npm run dev                 # build and run: Listening on http://0.0.0.0:3000
curl http://localhost:3000/hello/Ada
# {"message":"Hello, Ada, from Lean!"}
curl -X POST http://localhost:3000/echo -H 'content-type: application/json' -d '{"n":1}'
# {"echo":{"n":1}}
npm run build               # write dist/
PORT=8080 npm start         # run the build (node dist/main.mjs): only Node is needed
\`\`\`

The server listens on \`$HOST\` (default \`0.0.0.0\`) and \`$PORT\` (default 3000) and
exits cleanly on SIGTERM or SIGINT.`;
  const native = t.interop
    ? `\`App.lean\` is pure Lean: \`lake build App\` checks it natively. \`Main.lean\` imports
\`Lasm.JS\`, which only Lasm provides, so it builds and runs only with Lasm (the Lean
editor marks \`import Lasm.JS\` as unknown).`
    : `This is an ordinary Lake project: \`lake build\` also builds it natively.`;
  return `# ${name}

${t.summary[0].toUpperCase() + t.summary.slice(1)}, compiled ahead of time to WebAssembly by
[Lasm](https://github.com/Millillion/lasm) and run by Node.js.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean ${defaultLean()} and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

\`\`\`sh
npm install
\`\`\`

${tryIt}

Files:

| File | What it is |
| --- | --- |
| \`Main.lean\` | The program${t.interop ? ': routes and Lean request handlers' : ''}. |
| \`App.lean\` | Pure Lean logic used by \`Main.lean\`. |
| \`lakefile.toml\`, \`lean-toolchain\` | The Lake project, pinned to Lean ${defaultLean()}. |
| \`package.json\` | npm scripts${t.interop ? ', the npm packages Lean calls' : ''} and Lasm (\`${lasm.name}\`) as a dev dependency. |
| \`Dockerfile\` | Builds with Lasm, runs on \`node:24-bookworm-slim\`. |

${native}

## Deploy

\`dist/\` is the whole deployment${t.interop ? ', including the production `node_modules`' : ''}: copy it to a machine
with Node 24+ and the same OS and architecture, and run \`node dist/main.mjs\`.

With Docker:

\`\`\`sh
docker build -t ${name} .
docker run --rm ${t.server ? '-p 8080:8080 ' : ''}${name}
\`\`\`${t.server ? `

The image sets \`PORT=8080\`; platforms that assign a port override it.` : ''}

${deploy.some(target => deployTargets[target].package) ? `Lasm builds for each platform; it does not install or start the platform's tools. Test and deploy
with your platform's own CLI (\`vercel\`, \`netlify\`, \`func\`, \`gcloud\`, \`aws\` or \`sam\`), installed as its docs say.

` : ''}${deploy.filter(target => target !== 'lambda').map(target => deployReadme[target](name) + '\n').join('')}${deploy.includes('lambda') ? `\`Dockerfile.lambda\` builds an AWS Lambda container image (Lambda's Node 24 image behind the
AWS Lambda Web Adapter): \`docker build -f Dockerfile.lambda -t ${name}-lambda .\`; see the
[Lambda guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/lambda.md).

` : ''}The image runs on any container platform (Docker, Kubernetes, Cloud Run, Fly.io,
Railway, Render, Heroku); give it at least 512 MB of memory. Build on the
platform's architecture (\`docker build --platform linux/amd64\` for amd64-only
platforms). Platform recipes: [Lasm deployment guides](https://github.com/Millillion/lasm/blob/main/docs/deploy/README.md).
`;
}

const guide = page => `https://github.com/Millillion/lasm/blob/main/docs/deploy/${page}.md`;
const deployReadme = {
  'lambda-zip': () => `**AWS Lambda (.zip):** \`npm run build:lambda\` writes \`lambda.zip\` for the
\`nodejs24.x\` runtime with handler \`lasm-lambda.handler\` (x86_64 or arm64, 512 MB or more); see the
[Lambda guide](${guide('lambda')}).
`,
  'lambda-edge': () => `**Lambda@Edge:** \`npm run build:lambda-edge\` writes \`lambda-edge.zip\` (x86_64,
handler \`lasm-lambda.handler\`) for a CloudFront origin-request trigger; see the
[Lambda@Edge guide](${guide('lambda-edge')}).
`,
  vercel: () => `**Vercel:** \`vercel.json\` makes Vercel run \`npm run build:vercel\`, which writes
the function to \`.vercel/output\`; deploy with \`vercel deploy\` (or push to a connected Git
repository). See the [Vercel guide](${guide('vercel')}).
`,
  netlify: () => `**Netlify:** \`netlify.toml\` makes Netlify run \`npm run build:netlify\`, which
writes the function to \`netlify/functions/lasm\`; deploy with \`netlify deploy --build\`.
See the [Netlify guide](${guide('netlify')}).
`,
  azure: () => `**Azure Functions:** \`npm run build:azure\` writes the function app to
\`azure-functions/\`; test it with \`func start\` there and publish with
\`func azure functionapp publish APP_NAME\`. See the [Azure guide](${guide('azure-functions')}).
`,
  gcf: () => `**Google Cloud Functions:** \`npm run build:gcf\` writes \`gcf/\`; deploy with
\`gcloud functions deploy my-app --gen2 --runtime nodejs24 --trigger-http --entry-point lasm --source gcf\`.
See the [Cloud Functions guide](${guide('cloud-functions')}).
`,
};

/** Creates the project; returns { directory, files }. */
export function initProject({ directory, template, deploy = [] }) {
  if (!templates[template]) throw new Error(`Unknown template "${template}"`);
  const target = resolve(directory);
  if (existsSync(target)) {
    const entries = readdirSync(target).filter(entry => entry !== '.git');
    if (entries.length) throw new Error(`${directory} is not empty. Choose a new or empty directory.`);
  }
  const name = packageName(target);
  const files = {
    'lean-toolchain': `leanprover/lean4:v${defaultLean()}\n`,
    'lakefile.toml': lakefile(name),
    'package.json': packageJson(name, template, deploy),
    'App.lean': readFileSync(join(templateRoot, 'common/App.lean'), 'utf8'),
    'Main.lean': readFileSync(join(templateRoot, template, 'Main.lean'), 'utf8'),
    'README.md': readme(name, template, deploy),
    'Dockerfile': dockerfile(template),
    '.dockerignore': dockerignore,
    '.gitignore': deployGitignore(deploy),
  };
  if (deploy.includes('lambda')) files['Dockerfile.lambda'] = lambdaDockerfile();
  if (deploy.includes('vercel')) files['vercel.json'] = vercelJson;
  if (deploy.includes('netlify')) { files['netlify.toml'] = netlifyToml; files['public/.gitkeep'] = ''; }
  mkdirSync(target, { recursive: true });
  for (const [file, text] of Object.entries(files)) {
    mkdirSync(dirname(join(target, file)), { recursive: true });
    writeFileSync(join(target, file), text, { flag: 'wx' });
  }
  return { directory: target, name, files: Object.keys(files) };
}

export function runInit(options) {
  const result = initProject(options);
  const near = relative(process.cwd(), result.directory) || '.';
  const where = near.startsWith('..') ? result.directory : near;
  const cd = where === '.' ? '' : `  cd ${/\s/.test(where) ? JSON.stringify(where) : where}\n`;
  console.log(`Created ${result.name} (template ${options.template}) in ${where}:
  ${result.files.join(', ')}

Next:
${cd}  npm install
  npm run dev${options.template === 'plain' ? '' : '          # then: curl http://localhost:3000/hello/Ada'}`);
  return 0;
}
