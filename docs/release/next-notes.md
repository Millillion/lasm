# Unreleased

## Templates

- **`lasm init --template fetch` no longer uses `Lasm.Fetch` except on Node.**
  `Main.lean` is a handler on the web's `Request` and `Response`
  (`Lasm.JS.Web`), served as the program's default export on Bun, Deno,
  Cloudflare Workers and the other edge targets; Node keeps `Lasm.Fetch`'s
  Node server until Lasm's Node server lands. Fastly, wasi:http and WASI each
  get their own program with the same routes on that platform's own
  interface: `--deploy fastly` adds `Fastly.lean` (`Lasm.Fastly`),
  `--deploy wasi-http` and `--deploy spin` add `WasiHttp.lean`
  (`Lasm.WASI.Http`), and `--deploy wasi` adds `Cgi.lean` (a CGI program in
  Lean's `IO`); their `build:<target>` scripts build them. Existing projects
  keep building: `Lasm.Fetch` still ships.
