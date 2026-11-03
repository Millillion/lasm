# Tandem's Node server in a container: Docker, Kubernetes, Cloud Run, Fly.io,
# Railway, Render and similar platforms.
#   npm run build:docker          (npm run build, then docker build -t tandem .)
#   docker run -p 3000:3000 -v tandem-data:/data tandem
# The documents' logs are /data/tandem.db: keep /data on a volume. Tested in
# CI read-only (--read-only, /tmp as tmpfs) with a 512 MB memory limit
# (tandem-platforms.yml).
ARG NODE_IMAGE=node:24-bookworm-slim
FROM ${NODE_IMAGE}
WORKDIR /app
COPY dist/server/ /app/
RUN mkdir /data && chown node:node /data
ENV NODE_ENV=production HOST=0.0.0.0 PORT=3000 DATABASE_PATH=/data/tandem.db
VOLUME /data
EXPOSE 3000
USER node
CMD ["node", "/app/main.mjs"]
