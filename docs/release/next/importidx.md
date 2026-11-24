## CLI

- **Missing-import hints for the whole library** (decision 0.3-20.1). The hint
  under Lean's "Unknown identifier" now covers every public `Lasm.*` module,
  not only the generated `Lasm.JS.*` bindings. For example, `div` gives
  `import Lasm.UI`, `HttpReq.new` gives `import Lasm.Fastly`, and `Value`
  gives `import Lasm.JS`.
