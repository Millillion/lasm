#!/usr/bin/env bash
# Installs a pinned Playwright browser (playwright-core in .work/pw) with its
# system packages on Linux. The Azure apt mirror is sometimes slow for many
# minutes (libavcodec60): the system packages are installed in one apt run,
# with apt giving up on a stalled connection after 60 s and retrying, since a
# killed apt-get keeps the dpkg lock (later runs wait for it instead of failing
# at once). The browser download itself is retried up to three times.
# Every attempt is bounded by what remains of one overall budget
# (PLAYWRIGHT_INSTALL_BUDGET seconds, default 1500 = 25 min), which fits
# inside the workflows' 30-minute step timeout with room for the step's other
# downloads: the script fails with a clear
# message instead of the step being killed mid-attempt.
#   bash scripts/ci/playwright-install.sh BROWSER
set -euo pipefail
browser="$1"
cli=.work/pw/node_modules/playwright-core/cli.js
budget="${PLAYWRIGHT_INSTALL_BUDGET:-1500}"
deadline=$(( $(date +%s) + budget ))
# Seconds for the next attempt: at most $1, never past the deadline.
slot() { local left=$(( deadline - $(date +%s) )); [ "$left" -lt "$1" ] && echo "$left" || echo "$1"; }
# GNU timeout (Linux; gtimeout where Homebrew coreutils is installed); unbounded otherwise.
bound() { if command -v timeout >/dev/null; then timeout "$@"; elif command -v gtimeout >/dev/null; then gtimeout "$@"; else shift; "$@"; fi; }
out_of_time() { echo "::error::Playwright install of $browser ran out of its ${budget}s budget ($1)"; exit 1; }
if [ "$(uname -s)" = Linux ]; then
  printf 'Acquire::Retries "5";\nAcquire::http::Timeout "60";\nAcquire::https::Timeout "60";\nDPkg::Lock::Timeout "900";\n' | sudo tee /etc/apt/apt.conf.d/80-lasm-retries >/dev/null
  for attempt in 1 2; do
    # Leave at least 5 minutes of the budget for the browser download.
    s=$(( $(slot 1200) - 300 )); [ "$s" -gt 60 ] || out_of_time "system packages"
    if bound "$s" node "$cli" install-deps "$browser"; then break; fi
    echo "::warning::Playwright system packages for $browser failed or stalled (attempt $attempt of 2, ${s}s)"
    [ "$attempt" = 2 ] && exit 1
    sleep 15
  done
fi
for attempt in 1 2 3; do
  s=$(slot 420); [ "$s" -gt 30 ] || out_of_time "browser download"
  if bound "$s" node "$cli" install "$browser"; then exit 0; fi
  echo "::warning::Playwright install of $browser failed or stalled (attempt $attempt of 3, ${s}s)"
  sleep $((attempt * 10))
done
exit 1
