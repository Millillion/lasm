# Unreleased changes

Each pull request adds its release note as its own file here,
`docs/release/next/<branch-name>.md`, written as sections of the next
release's notes (`## Area`, then bullets: the change, the PR, and a
migration note for anything breaking). One file per branch means parallel
pull requests never conflict on release notes.

The release's version-bump PR concatenates every file here except this
README, in the order of the PRs' merges, into
`docs/release/<version>-notes.md`, then deletes them.
