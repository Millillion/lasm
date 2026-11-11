// In the repository, the shims' lasm-node-serve.mjs is Lasm's builtin module
// lasm:node-serve (Node.serve's req/res ↔ Request/Response translation);
// `lasm package` copies src/lasm-modules/node-serve.mjs itself under this name.
export * from '../lasm-modules/node-serve.mjs';
