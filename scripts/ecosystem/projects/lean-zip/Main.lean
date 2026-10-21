import Zip.Native.Gzip

open Zip.Native

def sample : ByteArray :=
  String.toUTF8 (String.join (List.replicate 200 "Lean on Node: the quick brown fox jumps over the lazy dog. "))

def hex (b : ByteArray) : String := String.join (b.toList.map fun x => (Nat.toDigits 16 x.toNat).asString)

def main : IO Unit := do
  for level in [0, 1, 6, 9] do
    let gz := GzipEncode.compress sample level.toUInt8
    let zl := ZlibEncode.compress sample level.toUInt8
    let back := GzipDecode.decompress gz
    let back2 := ZlibDecode.decompress zl
    IO.println s!"level {level}: gzip {gz.size} bytes, zlib {zl.size} bytes, round trip {back.toOption == some sample && back2.toOption == some sample}"
  IO.println s!"crc32 {Crc32.Native.crc32 0 sample} adler32 {Adler32.Native.adler32 1 sample}"
