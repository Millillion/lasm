#!/usr/bin/env bash
# Runs an apt install command so that the job does not need an apt mirror
# when the .deb files are cached (.github/actions/apt-cache; docs/CI.md#apt-packages).
#   bash scripts/ci/apt-cache.sh DIR ATTEMPTS -- COMMAND...
# DIR holds the .deb files COMMAND installed on an earlier run on the same
# runner image, plus `manifest` (the packages, one Package:Arch=Version per
# line). When DIR has a manifest, those .deb files are installed with dpkg and
# no network is used; a package the image already has at that version or newer
# is skipped. Otherwise (or when dpkg fails) COMMAND runs, up to ATTEMPTS
# times, with apt keeping what it downloads; the .deb files of every package it
# installed or upgraded are then copied into DIR and `save=true` is written to
# GITHUB_OUTPUT so the action saves DIR. When the image's Azure apt mirror
# does not resolve, or an attempt fails, apt is pointed at archive.ubuntu.com
# and security.ubuntu.com directly. Not Linux: COMMAND runs as is.
set -euo pipefail
dir="$1"; attempts="$2"; shift 2; [ "${1:-}" = -- ] && shift
out="${GITHUB_OUTPUT:-/dev/null}"
[ "$(uname -s)" = Linux ] || exec "$@"
mkdir -p "$dir"

installed() { dpkg-query -W -f='${db:Status-Abbrev} ${Package}:${Architecture}=${Version}\n' | awk '$1 == "ii" { print $2 }' | sort; }

from_cache() {
  local todo=() deb pkg ver arch have
  for deb in "$dir"/*.deb; do
    [ -e "$deb" ] || continue
    pkg=$(dpkg-deb -f "$deb" Package); ver=$(dpkg-deb -f "$deb" Version); arch=$(dpkg-deb -f "$deb" Architecture)
    have=$(dpkg-query -W -f='${db:Status-Abbrev}|${Version}' "$pkg:$arch" 2>/dev/null || true)
    if [[ "$have" == ii* ]] && dpkg --compare-versions "${have#*|}" ge "$ver"; then continue; fi
    todo+=("$deb")
  done
  echo "apt-cache: $(grep -c . "$dir/manifest" || true) cached packages, ${#todo[@]} to install with dpkg (no network)"
  [ "${#todo[@]}" -eq 0 ] && return 0
  sudo dpkg -i "${todo[@]}"
}

if [ -f "$dir/manifest" ]; then
  if from_cache; then
    # A cache restored from another runner image version worked here: save it under this one's key.
    [ "${CACHE_HIT:-}" = true ] || echo save=true >> "$out"
    exit 0
  fi
  echo "::warning::apt-cache: installing the cached .deb files failed; using the apt mirror"
  sudo dpkg --configure -a || true
fi
rm -rf "$dir"; mkdir -p "$dir"

# The runner image points apt at azure.archive.ubuntu.com (through
# /etc/apt/apt-mirrors.txt). When that host does not resolve (2026-11-11),
# point apt at archive.ubuntu.com and security.ubuntu.com directly.
direct_mirrors() {
  echo "apt-cache: using archive.ubuntu.com and security.ubuntu.com directly"
  printf 'http://archive.ubuntu.com/ubuntu/\tpriority:1\nhttp://security.ubuntu.com/ubuntu/\tpriority:2\n' | sudo tee /etc/apt/apt-mirrors.txt >/dev/null
  for f in /etc/apt/sources.list /etc/apt/sources.list.d/*.sources /etc/apt/sources.list.d/*.list; do
    [ -f "$f" ] || continue
    sudo sed -i -E 's#mirror\+file:/etc/apt/apt-mirrors\.txt/?#http://archive.ubuntu.com/ubuntu/#g; s#https?://azure\.archive\.ubuntu\.com/ubuntu/?#http://archive.ubuntu.com/ubuntu/#g' "$f"
  done
  grep -rh '^URIs:\|^deb ' /etc/apt/sources.list /etc/apt/sources.list.d/ 2>/dev/null | sort | uniq -c || true
  sudo apt-get update || true
  mirrors_switched=1
}
mirrors_switched=0
for host in azure.archive.ubuntu.com archive.ubuntu.com security.ubuntu.com; do
  echo "apt-cache: $host -> $(getent ahosts "$host" | awk 'NR==1 { print $1 }' || true)"
done
getent hosts azure.archive.ubuntu.com >/dev/null || direct_mirrors

before=$(installed)
sudo apt-get clean
printf 'APT::Keep-Downloaded-Packages "true";\nBinary::apt::APT::Keep-Downloaded-Packages "true";\nAcquire::Retries "5";\n' | sudo tee /etc/apt/apt.conf.d/81-lasm-apt-cache >/dev/null
for attempt in $(seq 1 "$attempts"); do
  if "$@"; then break; fi
  [ "$attempt" = "$attempts" ] && { echo "::error::apt-cache: the install failed $attempts times and no cached .deb files exist for this runner image"; exit 1; }
  echo "::warning::apt-cache: install attempt $attempt of $attempts failed; retrying"
  sleep $((attempt * 20))
  if [ "$mirrors_switched" = 0 ]; then direct_mirrors; else sudo apt-get update || true; fi
done

new=$(comm -13 <(echo "$before") <(installed))
missing=0
for entry in $new; do
  pkg=${entry%%=*}; ver=${entry#*=}; name=${pkg%%:*}; arch=${pkg#*:}
  # Archive file names encode the epoch's ':' as %3a.
  deb=/var/cache/apt/archives/${name}_${ver//:/%3a}_${arch}.deb
  if [ -f "$deb" ]; then cp "$deb" "$dir/"; else echo "apt-cache: no downloaded .deb for $entry"; missing=1; fi
done
if [ "$missing" = 1 ]; then
  echo "::warning::apt-cache: not every installed package's .deb was kept; nothing is cached"
  rm -rf "$dir"; exit 0
fi
echo "$new" | sed '/^$/d' > "$dir/manifest"
echo "apt-cache: cached $(grep -c . "$dir/manifest" || true) packages ($(du -sh "$dir" | cut -f1))"
echo save=true >> "$out"
