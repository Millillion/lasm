# js-crud: a REST API with Postgres and JWT, on Express and on Hono

One Lean API (`App.lean`) served by two frameworks (`Express.lean`, `Hono.lean`),
using npm packages through `Lasm.JS` bindings: `pg` (Postgres) and `jose` (JWT).

| Route | Request | Answer |
| --- | --- | --- |
| `POST /login` | `{"user": "ada"}` | `{"token": "…"}` |
| `GET /todos` | `Authorization: Bearer <token>` | `[{"id", "title", "done"}]` |
| `POST /todos` | `{"title": "…"}` and the token | 201 `{"id", "title", "done"}` |
| `GET /health` | | `{"ok": true}` |

```sh
cd examples/js-crud
npm install
DATABASE_URL=postgres://user:pass@localhost:5432/db JWT_SECRET=change-me npx @lasm/cli Express.lean   # or Hono.lean
npx @lasm/cli build Express.lean       # dist/ with production node_modules
```

`PORT` (default 3000) and `HOST` (default `0.0.0.0`) are read from the environment.
Handlers run in `Async`: while one awaits Postgres or jose, it holds no Lean thread.
CI builds and runs both servers against Postgres ([js-interop-examples.yml](../../.github/workflows/js-interop-examples.yml)).
