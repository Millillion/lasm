# Conduit's Node server in a container: Docker, Kubernetes, Cloud Run, Fly.io,
# Railway, Render and similar platforms.
#   npm run build:docker          (npm run build, then docker build -t conduit .)
#   docker run -p 3000:3000 -v conduit-data:/data -e JWT_SECRET=… conduit
# The database is /data/conduit.db: keep /data on a volume. Tested in CI
# read-only (--read-only, /tmp as tmpfs) with a 512 MB memory limit
# (.github/workflows/conduit.yml).
ARG NODE_IMAGE=node:24-bookworm-slim
FROM ${NODE_IMAGE}
WORKDIR /app
# npm run build's output: the program, the Lean runtime and the browser app.
COPY dist/server/ /app/
RUN mkdir /data && chown node:node /data
ENV NODE_ENV=production HOST=0.0.0.0 PORT=3000 DATABASE_PATH=/data/conduit.db
VOLUME /data
EXPOSE 3000
USER node
CMD ["node", "/app/main.mjs"]
