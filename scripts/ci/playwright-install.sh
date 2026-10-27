#!/usr/bin/env bash
# Installs a pinned Playwright browser (playwright-core in .work/pw) with its
# system packages on Linux. The Azure apt mirror is sometimes slow for many
# minutes (libavcodec60): the system packages are installed in one apt run,
# with apt giving up on a stalled connection after 60 s and retrying, and
# bounded at 20 minutes, since a killed apt-get keeps the dpkg lock (later
# runs wait for it instead of failing at once). The browser download itself
# is retried up to three times, each bounded.
#   bash scripts/ci/playwright-install.sh BROWSER
set -euo pipefail
browser="$1"
cli=.work/pw/node_modules/playwright-core/cli.js
# GNU timeout (Linux; gtimeout where Homebrew coreutils is installed); unbounded otherwise.
bound() { if command -v timeout >/dev/null; then timeout "$@"; elif command -v gtimeout >/dev/null; then gtimeout "$@"; else shift; "$@"; fi; }
if [ "$(uname -s)" = Linux ]; then
  printf 'Acquire::Retries "5";\nAcquire::http::Timeout "60";\nAcquire::https::Timeout "60";\nDPkg::Lock::Timeout "900";\n' | sudo tee /etc/apt/apt.conf.d/80-lasm-retries >/dev/null
  for attempt in 1 2; do
    if bound 1200 node "$cli" install-deps "$browser"; then break; fi
    echo "::warning::Playwright system packages for $browser failed or stalled (attempt $attempt of 2)"
    [ "$attempt" = 2 ] && exit 1
    sleep 15
  done
fi
for attempt in 1 2 3; do
  if bound 420 node "$cli" install "$browser"; then exit 0; fi
  echo "::warning::Playwright install of $browser failed or stalled (attempt $attempt of 3)"
  sleep $((attempt * 10))
done
exit 1
