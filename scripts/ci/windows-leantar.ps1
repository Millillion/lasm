$ErrorActionPreference = 'Stop'
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
$installation = & $vswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.ARM64 -property installationPath
if ($LASTEXITCODE -ne 0 -or !$installation) { throw 'A native ARM64 Visual Studio toolchain is required' }
$developerShell = Join-Path $installation 'Common7/Tools/Launch-VsDevShell.ps1'
# The installed Developer PowerShell supports only x86/amd64 hosts. Its x64
# C tool helpers are emulated here; Rust, Cargo and the resulting leantar are
# verified ARM64 executables. This is not an all-native compiler-tool claim.
& $developerShell -Arch arm64 -HostArch amd64 -SkipAutomaticLocation
if ($env:VSCMD_ARG_TGT_ARCH -ne 'arm64' -or @('x64','amd64') -notcontains $env:VSCMD_ARG_HOST_ARCH) {
  throw 'Require the declared x64-host / ARM64-target C tool configuration'
}
node --max-old-space-size=512 scripts/ci/windows-leantar.mjs
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
