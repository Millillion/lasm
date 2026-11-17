## Proofs

- **`Lasm.Serverless` left Lasm's library** (API decisions A23 and 0.2-7). It
  had no runtime API: it was a Lean model of the function-platform files
  (src/serverless/) and its 20 proved propositions. The files moved unchanged
  to `verification/cli/Lasm/Serverless/`, beside the other models of the CLI's
  JavaScript, and `verification/cli/README.md` lists the propositions instead
  of `library/PROOFS.md`. No program imported it; nothing changes for users.
