**Windows packaging selector corrected — 2026-09-27.** Fifteen controls passed through the application host copier and deployment loader. Real vendor measurements reduced native payloads from 13.34 MB to 1.07 MB on Windows x64 and 1.36 MB on ARM64, preserving loaders and licenses. Complete deployment-size and native execution checks remain unchanged and must pass in `.43`.

The physical compiler prefix passed native long-path Lean/Lake checks in run `36291957364`. Candidate `.42` passed prerequisites and reached installed application checks; it predates the packaging correction. The ARM64 Lean build is still running. Archive and source-notice evidence is linked in [Windows implementation](WINDOWS_TOOLCHAINS.md).

README reviewed against actual CLI options and support evidence. Retained `.37` remains accepted; Windows is still unsupported. Next: installed `.43`, ARM64 distribution and the complete native matrix. No npm publication. Completion ETA is not yet estimable.
