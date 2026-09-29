param([ValidateSet('create', 'remove')][string]$Mode)
$ErrorActionPreference = 'Stop'
# Only this workflow-owned 64 MiB expandable VHD is ever selected. Never select
# a physical disk. Standard hosted runners are disposable and administrators.
$volumePath = Join-Path $env:RUNNER_TEMP "lasm-installer-$env:GITHUB_RUN_ID-$env:GITHUB_RUN_ATTEMPT.vhdx"
$scriptPath = Join-Path $env:RUNNER_TEMP 'lasm-installer-diskpart.txt'
if ($Mode -eq 'create') {
    if (Test-Path -LiteralPath $volumePath) { throw 'Refuse to overwrite an existing fixture volume' }
    $letter = @('Z','Y','X','W','V') | Where-Object { !(Test-Path "${_}:\") } | Select-Object -First 1
    if (!$letter) { throw 'No unused fixture drive letter' }
    @"
create vdisk file="$volumePath" maximum=64 type=expandable
select vdisk file="$volumePath"
attach vdisk
create partition primary
format fs=ntfs quick label=LasmFixture
assign letter=$letter
"@ | Set-Content -LiteralPath $scriptPath -Encoding ascii
    & diskpart.exe /s $scriptPath
    if ($LASTEXITCODE -ne 0 -or !(Test-Path "${letter}:\")) { throw 'Could not create the disposable NTFS fixture' }
    "LASM_TEST_OTHER_VOLUME=${letter}:\" >> $env:GITHUB_ENV
} elseif (Test-Path -LiteralPath $volumePath) {
    @"
select vdisk file="$volumePath"
detach vdisk
"@ | Set-Content -LiteralPath $scriptPath -Encoding ascii
    & diskpart.exe /s $scriptPath
    if ($LASTEXITCODE -ne 0) { throw 'Could not detach the workflow-owned fixture volume' }
    Remove-Item -LiteralPath $volumePath
}
Remove-Item -LiteralPath $scriptPath -ErrorAction SilentlyContinue
