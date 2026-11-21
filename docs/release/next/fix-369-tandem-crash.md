## Example apps

- **Tandem: two sync bugs found by the DST nightly's heavy faults (#369).**
  - The server pushes a request's operations that were already in the log (an ambiguous commit's, answered 503) from where the log holds them. It pushed the reply (the log from the client's cursor), which missed them when the client was already past them (it had them from a long-poll) or more than a chunk behind them.
  - The editor syncs again when a WebSocket opens while a sync is in flight, since the server may have answered that sync before the socket opened.
  - Seeds 311319686, 509005383 and 766346062 are regression seeds in `tandem.yml`.
