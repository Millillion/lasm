#!/usr/bin/env bash
# Installs a pinned Playwright browser (playwright-core in .work/pw) with its
# system packages on Linux. The Azure apt mirror is sometimes slow for many
# minutes (libavcodec60): the system packages are installed in one apt run,
# with apt giving up on a stalled connection after 60 s and retrying. When an
# attempt times out, `timeout` kills only node; the `sudo apt-get` it started
# keeps running and holds /var/lib/apt/lists/lock, which DPkg::Lock::Timeout
# does not cover (#129). So before the next attempt the leftover apt-get is
# stopped, its stale lists lock removed, and an interrupted dpkg finished.
# The browser download itself is retried up to three times. --deps-only
# installs only the system packages and --no-deps only the browser: the
# playwright action runs the first through .github/actions/apt-cache, which
# installs cached .deb files instead when it has them.
# Every attempt is bounded by what remains of one overall budget
# (PLAYWRIGHT_INSTALL_BUDGET seconds, default 1500 = 25 min), which fits
# inside the workflows' 30-minute step timeout with room for the step's other
# downloads: the script fails with a clear
# message instead of the step being killed mid-attempt.
#   bash scripts/ci/playwright-install.sh [--deps-only | --no-deps] BROWSER
set -euo pipefail
mode=all
case "$1" in --deps-only) mode=deps; shift ;; --no-deps) mode=browser; shift ;; esac
browser="$1"
cli=.work/pw/node_modules/playwright-core/cli.js
budget="${PLAYWRIGHT_INSTALL_BUDGET:-1500}"
deadline=$(( $(date +%s) + budget ))
# Seconds for the next attempt: at most $1, never past the deadline.
slot() { local left=$(( deadline - $(date +%s) )); [ "$left" -lt "$1" ] && echo "$left" || echo "$1"; }
# GNU timeout (Linux; gtimeout where Homebrew coreutils is installed); unbounded otherwise.
bound() { if command -v timeout >/dev/null; then timeout "$@"; elif command -v gtimeout >/dev/null; then gtimeout "$@"; else shift; "$@"; fi; }
# Stop apt-get processes a timed-out attempt left behind, then make apt usable again.
apt_cleanup() {
  sudo pkill -TERM -x apt-get || true
  for _ in $(seq 1 30); do pgrep -x apt-get >/dev/null || break; sleep 1; done
  sudo pkill -KILL -x apt-get || true
  sudo rm -f /var/lib/apt/lists/lock
  sudo dpkg --configure -a || true
}
out_of_time() { echo "::error::Playwright install of $browser ran out of its ${budget}s budget ($1)"; exit 1; }
if [ "$(uname -s)" = Linux ] && [ "$mode" != browser ]; then
  printf 'Acquire::Retries "5";\nAcquire::http::Timeout "60";\nAcquire::https::Timeout "60";\nDPkg::Lock::Timeout "900";\n' | sudo tee /etc/apt/apt.conf.d/80-lasm-retries >/dev/null
  for attempt in 1 2; do
    # Leave at least 5 minutes of the budget for the browser download.
    s=$(( $(slot 1200) - 300 )); [ "$s" -gt 60 ] || out_of_time "system packages"
    if bound "$s" node "$cli" install-deps "$browser"; then break; fi
    echo "::warning::Playwright system packages for $browser failed or stalled (attempt $attempt of 2, ${s}s)"
    [ "$attempt" = 2 ] && exit 1
    apt_cleanup
    sleep 15
  done
fi
[ "$mode" = deps ] && exit 0
for attempt in 1 2 3; do
  s=$(slot 420); [ "$s" -gt 30 ] || out_of_time "browser download"
  if bound "$s" node "$cli" install "$browser"; then exit 0; fi
  echo "::warning::Playwright install of $browser failed or stalled (attempt $attempt of 3, ${s}s)"
  sleep $((attempt * 10))
done
exit 1
