`create-installer-certificate.mjs` generates a fresh test-only certificate/key for
loopback HTTPS and CONNECT-proxy controls. It authenticates `installer.invalid`,
`localhost` and `127.0.0.1`; it is never used for production trust or signing.
The key stays in memory, never on disk or in logs. Only the short-lived public
certificate is written into the temporary test directory. Child Node processes
use `NODE_EXTRA_CA_CERTS` pointing there. No machine trust store or TLS verification
setting is changed; cleanup removes the temporary certificate.
