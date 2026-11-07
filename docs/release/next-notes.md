# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Example apps

- **Porter keeps the reply of a commit that landed but reported an error (#138).** A token request whose commit succeeded and then threw (a lost reply from D1, a timeout after `COMMIT`) used to run again, find its own code used or its refresh token rotated, answer `invalid_grant` and revoke the tokens it had just issued: one transient database error signed a user out. Each commit now also inserts a commit receipt (`commits (id, at)`, the id a SHA-256 of the request's random values, the same on a rerun); after a failed commit the server looks it up, and if it is there the first reply stands. If the receipt cannot be read, the version decides as before, but the rerun's commit fails on the receipt's key, so nothing is revoked. Receipts older than a day are deleted in each commit. The table is created on start on SQLite and D1 alike. New proposition `Spec.landed_commit_stands` (28 propositions, 197 theorems); the deterministic simulation now fails on such a refusal instead of counting it.
