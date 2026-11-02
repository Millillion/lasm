# Porter's Node server in a container: Docker, Kubernetes, Cloud Run, Fly.io,
# Railway, Render and similar platforms.
#   npm run build:docker          (npm run build, then docker build -t porter .)
#   docker run -p 3000:3000 -v porter-data:/data -e ISSUER=https://id.example.com porter
# The database (codes, tokens, sessions and the signing keys) is
# /data/porter.db: keep /data on a volume. Tested in CI read-only (--read-only,
# /tmp as tmpfs) with a 512 MB memory limit (porter-platforms.yml).
ARG NODE_IMAGE=node:24-bookworm-slim
FROM ${NODE_IMAGE}
WORKDIR /app
COPY dist/server/ /app/
RUN mkdir /data && chown node:node /data
ENV NODE_ENV=production HOST=0.0.0.0 PORT=3000 DATABASE_PATH=/data/porter.db
VOLUME /data
EXPOSE 3000
USER node
CMD ["node", "/app/main.mjs"]
