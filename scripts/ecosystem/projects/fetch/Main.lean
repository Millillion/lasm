import FetchTests

/-! Millillion/fetch's own suite against its local test server, plus HTTPS:
Node's fetch under Lasm; libcurl and the curl tool natively. -/
def main (args : List String) : IO UInt32 := FetchTests.main (args ++ ["--online"])
