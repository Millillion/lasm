@[extern "shim_curl_version"] opaque curlVersion : Unit → String
def main : IO Unit := IO.println (curlVersion ())
