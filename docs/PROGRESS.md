**Milestone:** Basic ordinary Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. x86-64 complete; ARM64 running.

**Estimated finish:** Not yet estimable until the first complete ARM64 result; x86-64 acceptance took about twelve minutes.

**Verified:** [Native x86-64 acceptance passed](https://github.com/Millillion/lasm/actions/runs/36221743804/job/108348340717): all 24 command checks, three startup samples, six recovery controls and three independently copied deployments. Exact candidate SHA-256 is `0b2451cd8ef21ebd145a1da9214694cc1c2ea4f86843b5dae41cad4d9e9e9374`. Cold run 224.70 seconds; offline cached run 17.17 seconds; median first output 1.90 seconds. Peak 4.48 GiB, zero OOM/resource abort. CI memory advice and unchanged guards are recorded. All 83 focused controls pass.

**Remaining:** ARM64 must pass this same tarball, then retain the tested draft candidate and finalize acceptance/support documentation. No npm publication is authorized.
