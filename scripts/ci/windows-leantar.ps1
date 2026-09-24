$ErrorActionPreference = 'Stop'
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
$installation = & $vswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.ARM64 -property installationPath
if ($LASTEXITCODE -ne 0 -or !$installation) { throw 'A native ARM64 Visual Studio toolchain is required' }
$developerShell = Join-Path $installation 'Common7/Tools/Launch-VsDevShell.ps1'
& $developerShell -Arch arm64 -HostArch arm64 -SkipAutomaticLocation
if ($env:VSCMD_ARG_TGT_ARCH -ne 'arm64' -or $env:VSCMD_ARG_HOST_ARCH -ne 'arm64') {
  throw 'Require native ARM64 host and target compiler tools'
}
node --max-old-space-size=512 scripts/ci/windows-leantar.mjs
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
