## Fixes

- **Lasm's tar reader refuses a malformed number in an extended header.** A GNU long-name or pax header whose mode, owner, time or device number is not a number was accepted, since those fields mean nothing on an extended header. Python's tarfile and GNU tar refuse such archives, and now Lasm does too: `Invalid tar archive: a mode is not a number` (or `a device number`, and so on). No archive that npm, GNU tar or Lasm writes is affected. Found by the nightly `tar` fuzz campaign.
