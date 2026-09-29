import { generateKeyPairSync, randomBytes, sign, X509Certificate } from 'node:crypto';

// Minimal test-only DER certificate construction, using Node's crypto primitives
// so the native fault suite does not require an openssl executable. The private
// key lives only in this test process and is never serialized to disk or logs.
const der = (tag, value) => {
  const bytes = Buffer.isBuffer(value) ? value : Buffer.concat(value);
  let length;
  if (bytes.length < 128) length = Buffer.from([bytes.length]);
  else {
    let hex = bytes.length.toString(16); if (hex.length % 2) hex = '0' + hex;
    const encoded = Buffer.from(hex, 'hex'); length = Buffer.concat([Buffer.from([0x80 | encoded.length]), encoded]);
  }
  return Buffer.concat([Buffer.from([tag]), length, bytes]);
};
const sequence = (...items) => der(0x30, items);
const oid = hex => der(0x06, Buffer.from(hex, 'hex'));
const integer = bytes => der(0x02, bytes);
const algorithm = () => sequence(oid('2a864886f70d01010b'), Buffer.from([0x05, 0]));
const name = () => sequence(der(0x31, [sequence(oid('550403'), der(0x0c, Buffer.from('Lasm ephemeral installer test')))]));
const utc = date => der(0x17, Buffer.from(date.toISOString().replace(/[-:]/g, '').slice(2, 15).replace('T', '') + 'Z'));

export function createInstallerCertificate() {
  const { publicKey, privateKey } = generateKeyPairSync('rsa', { modulusLength: 2048 });
  const serial = randomBytes(16); serial[0] &= 0x7f; serial[0] ||= 1;
  const constraints = sequence(oid('551d13'), Buffer.from([0x01, 0x01, 0xff]),
    der(0x04, sequence(Buffer.from([0x01, 0x01, 0xff]))));
  const alternatives = sequence(oid('551d11'), der(0x04, sequence(
    der(0x82, Buffer.from('installer.invalid')), der(0x82, Buffer.from('localhost')),
    der(0x87, Buffer.from([127, 0, 0, 1])))));
  const tbs = sequence(der(0xa0, integer(Buffer.from([2]))), integer(serial), algorithm(), name(),
    sequence(utc(new Date(Date.now() - 86400_000)), utc(new Date(Date.now() + 86400_000))), name(),
    publicKey.export({ type: 'spki', format: 'der' }), der(0xa3, sequence(constraints, alternatives)));
  const certificate = sequence(tbs, algorithm(), der(0x03, Buffer.concat([Buffer.from([0]), sign('sha256', tbs, privateKey)])));
  const pem = '-----BEGIN CERTIFICATE-----\n' + certificate.toString('base64').match(/.{1,64}/g).join('\n') + '\n-----END CERTIFICATE-----\n';
  const checked = new X509Certificate(pem);
  if (!checked.verify(publicKey) || checked.checkHost('installer.invalid') !== 'installer.invalid' || checked.checkIP('127.0.0.1') !== '127.0.0.1')
    throw new Error('Invalid ephemeral test certificate');
  return { privateKey, certificate: pem };
}
