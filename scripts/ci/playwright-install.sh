#!/usr/bin/env bash
# Installs a pinned Playwright browser (playwright-core in .work/pw) with its
# system packages on Linux. The Azure apt mirror sometimes stalls on a large
# package (libavcodec60) until the step's 15-minute limit; apt now gives up on
# a stalled connection after 30 s and retries, and the whole install is
# retried up to three times, each bounded. A retry waits for the dpkg lock
# (an earlier attempt's apt-get can outlive its timeout) instead of failing.
#   bash scripts/ci/playwright-install.sh BROWSER
set -euo pipefail
browser="$1"
cli=.work/pw/node_modules/playwright-core/cli.js
args=(install "$browser")
if [ "$(uname -s)" = Linux ]; then
  printf 'Acquire::Retries "5";\nAcquire::http::Timeout "30";\nAcquire::https::Timeout "30";\nDPkg::Lock::Timeout "600";\n' | sudo tee /etc/apt/apt.conf.d/80-lasm-retries >/dev/null
  args=(install --with-deps "$browser")
fi
# GNU timeout (Linux; gtimeout where Homebrew coreutils is installed); unbounded otherwise.
bound=(); if command -v timeout >/dev/null; then bound=(timeout 420); elif command -v gtimeout >/dev/null; then bound=(gtimeout 420); fi
for attempt in 1 2 3; do
  if ${bound[@]+"${bound[@]}"} node "$cli" "${args[@]}"; then exit 0; fi
  echo "::warning::Playwright install of $browser failed or stalled (attempt $attempt of 3)"
  sleep $((attempt * 10))
done
exit 1
