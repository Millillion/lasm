# Ledger's Node server in a container: Docker, Kubernetes, Cloud Run, Fly.io,
# Railway, Render and similar platforms.
#   npm run build:docker          (npm run build, then docker build -t ledger .)
#   docker run -p 3000:3000 -v ledger-data:/data ledger
# The database is /data/ledger.db: keep /data on a volume. Tested in CI
# read-only (--read-only, /tmp as tmpfs) with a 512 MB memory limit
# (.github/workflows/ledger.yml).
ARG NODE_IMAGE=node:24-bookworm-slim
FROM ${NODE_IMAGE}
WORKDIR /app
# npm run build's output: the program, the Lean runtime and the browser app.
COPY dist/server/ /app/
RUN mkdir /data && chown node:node /data
ENV NODE_ENV=production HOST=0.0.0.0 PORT=3000 DATABASE_PATH=/data/ledger.db
VOLUME /data
EXPOSE 3000
USER node
CMD ["node", "/app/main.mjs"]
