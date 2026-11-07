#!/bin/sh
# The native fuzz targets (test/fuzz/native/build.mjs) need clang with the
# libFuzzer, ASan and UBSan runtimes. GitHub's Ubuntu images have clang; this
# installs the runtimes when that clang cannot link a fuzzer.
set -eu
probe=$(mktemp -d)
printf 'int LLVMFuzzerTestOneInput(const unsigned char *d, unsigned long n) { (void)d; (void)n; return 0; }\n' > "$probe/probe.c"
if clang -fsanitize=fuzzer,address,undefined "$probe/probe.c" -o "$probe/probe" 2>/dev/null; then
  clang --version | head -1
else
  version=$(clang --version | sed -n 's/.*clang version \([0-9]*\).*/\1/p' | head -1)
  echo "Installing libclang-rt-$version-dev"
  sudo apt-get install -y --no-install-recommends "libclang-rt-$version-dev"
  clang -fsanitize=fuzzer,address,undefined "$probe/probe.c" -o "$probe/probe"
fi
rm -rf "$probe"
