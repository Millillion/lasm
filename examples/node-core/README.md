# node-core: a file tool on the generated Node bindings

`import Lasm.JS.Node` and nothing else: for each file of a directory, its size, its
SHA-256 (`crypto.createHash`), its gzip size (`zlib.gzipSync`) and a gunzip round trip
(`zlib.gunzip`, awaited in `Async`), listed with `fsPromises.readdir`.

```sh
cd examples/node-core
npx @lasm/cli Main.lean                 # makes sample files in a temporary directory
npx @lasm/cli Main.lean -- some/dir     # or reports on a directory you name
```

```
empty.txt	0 bytes	sha256 e3b0c442…	gzip 20 bytes
hello.txt	13 bytes	sha256 853ff93…	gzip 33 bytes
repeat.txt	5000 bytes	sha256 …	gzip 41 bytes
node v26.13.1 on linux: ok
```

The bindings are generated from Node's own documentation ([docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md#standard-bindings-for-node-lasmjsnode)).
CI builds and runs this example on Node 26 and Node 24 (`web-bindings.yml`, `node-conformance`).
