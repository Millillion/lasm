import SQLite
open SQLite

/-- Uses a database file in the working directory (Node file access). -/
def main : IO Unit := do
  let path : System.FilePath := "ecosystem.db"
  if ← path.pathExists then IO.FS.removeFile path
  let db ← SQLite.open path
  (← db.prepare "CREATE TABLE items (id INTEGER PRIMARY KEY, name TEXT NOT NULL, price REAL, data BLOB);").exec
  let insert ← db.prepare "INSERT INTO items (name, price, data) VALUES (?, ?, ?);"
  for (name, price) in [("apple", 1.25), ("pear", 2.5), ("plum", 0.75)] do
    insert.reset
    insert.bindText 1 name
    insert.bindFloat 2 price
    insert.bindBlob 3 name.toUTF8
    discard insert.step
  let query ← db.prepare "SELECT id, name, price, length(data) FROM items ORDER BY price DESC;"
  while (← query.step) do
    IO.println s!"{← query.columnInt64 0} {← query.columnText 1} {← query.columnDouble 2} {← query.columnInt64 3}"
  let stats ← db.prepare "SELECT count(*), sum(price), sqlite_version() IS NOT NULL FROM items;"
  discard stats.step
  IO.println s!"rows {← stats.columnInt64 0}, total {← stats.columnDouble 1}, version {← stats.columnInt64 2}"
  -- Reopen: the data persisted in the file.
  let again ← SQLite.open path
  let count ← again.prepare "SELECT group_concat(name, ',') FROM items;"
  discard count.step
  IO.println s!"reopened: {← count.columnText 0}"
  IO.println s!"file exists: {← path.pathExists}"
