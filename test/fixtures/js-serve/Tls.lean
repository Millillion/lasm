/-
A TLS certificate for the js-serve fixture (Deno.serve with cert and key): a test CA and a
certificate for localhost and 127.0.0.1 that it signed, valid until 2126, made with OpenSSL
for this fixture only. The private key protects nothing: it is public test data.
-/
namespace Tls

/-- The test CA (trusted by the fixture's client). -/
def ca : String := r#"-----BEGIN CERTIFICATE-----
MIIBvjCCAWOgAwIBAgIUbY+TUXOTL10Y1lFslEnUBvdZesAwCgYIKoZIzj0EAwIw
KzEpMCcGA1UEAwwgTGFzbSB0ZXN0IENBICh0ZXN0IGZpeHR1cmUgb25seSkwIBcN
MjYxMTEwMjExNDAwWhgPMjEyNjEwMTcyMTE0MDBaMCsxKTAnBgNVBAMMIExhc20g
dGVzdCBDQSAodGVzdCBmaXh0dXJlIG9ubHkpMFkwEwYHKoZIzj0CAQYIKoZIzj0D
AQcDQgAEUXBLbZOm0emYN1HJ9ttJmytmIehpFAaj3xTTrV152hvJTvL9U8xXSKM7
P8vnXCzK5X3zO337zYprfBRV4xqqG6NjMGEwHQYDVR0OBBYEFP6YX0ks1qCdPmDQ
5H9hZn7TS11VMB8GA1UdIwQYMBaAFP6YX0ks1qCdPmDQ5H9hZn7TS11VMA8GA1Ud
EwEB/wQFMAMBAf8wDgYDVR0PAQH/BAQDAgEGMAoGCCqGSM49BAMCA0kAMEYCIQCO
gWsFY1H8+rWd1A5Lc4N0glr8ryg8Gpn3K8SQqtrI8AIhAP1XwePap427p3cQRM4H
vo3twQzN2T8RoXUR9Z7TN7eR
-----END CERTIFICATE-----
"#

/-- The server certificate (CN=localhost; SAN localhost, 127.0.0.1), signed by `ca`. -/
def cert : String := r#"-----BEGIN CERTIFICATE-----
MIIB0zCCAXmgAwIBAgIULH3AcqYl/sTcSytycplhBwowkzswCgYIKoZIzj0EAwIw
KzEpMCcGA1UEAwwgTGFzbSB0ZXN0IENBICh0ZXN0IGZpeHR1cmUgb25seSkwIBcN
MjYxMTEwMjExNDAwWhgPMjEyNjEwMTcyMTE0MDBaMBQxEjAQBgNVBAMMCWxvY2Fs
aG9zdDBZMBMGByqGSM49AgEGCCqGSM49AwEHA0IABAqtCw3XeD/9wDFow48ux4OB
zkwaq67beV5LM5D5ltdM/d47yVbO90Dap29Rwi82VCPaqiLXMfU1JJ/oxuid35ij
gY8wgYwwGgYDVR0RBBMwEYIJbG9jYWxob3N0hwR/AAABMAkGA1UdEwQCMAAwDgYD
VR0PAQH/BAQDAgeAMBMGA1UdJQQMMAoGCCsGAQUFBwMBMB0GA1UdDgQWBBTo1Y+b
tMVJCn4TzQXv6EiK6c07njAfBgNVHSMEGDAWgBT+mF9JLNagnT5g0OR/YWZ+00td
VTAKBggqhkjOPQQDAgNIADBFAiBwQEK+4t1+zheT6pkCmDPkY9jeopZjHGQ0CXl5
PA/wswIhAL59gyEx6Ya8Lb88dou0s7P0qXMFz4Xd0/Wu/T2FBnAC
-----END CERTIFICATE-----
"#

/-- The server certificate's private key (PKCS #8, P-256). Test data only. -/
def key : String := r#"-----BEGIN PRIVATE KEY-----
MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgi1YzqJqBf5pkDisM
7kqZ/2NA9x4QzN6DLCYaqX3TSS6hRANCAAQKrQsN13g//cAxaMOPLseDgc5MGquu
23leSzOQ+ZbXTP3eO8lWzvdA2qdvUcIvNlQj2qoi1zH1NSSf6Mbond+Y
-----END PRIVATE KEY-----
"#

end Tls
