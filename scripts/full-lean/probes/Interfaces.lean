import Std.Net.Addr

def main : IO Unit := do
  for address in ← Std.Net.interfaceAddresses do
    IO.println s!"{address.name}|{repr address.physicalAddress.octets}|{address.isLoopback}|{address.address}|{address.netMask}"
