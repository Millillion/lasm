# A Lasm application in a container: Docker, Kubernetes, Google Cloud Run,
# Fly.io, Railway, Render, Heroku (container stack) and similar platforms.
#   npx lasm build Main.lean --output dist
#   docker build -t my-app .            (add --platform linux/amd64 on a Mac for
#                                         amd64-only platforms such as Cloud Run)
#   docker run -p 8080:8080 my-app
# Tested in CI with node:24-bookworm-slim and node:26-bookworm-slim on x64 and
# arm64, read-only, with a 512 MB memory limit; see docs/DEPLOYMENT.md.
ARG NODE_IMAGE=node:24-bookworm-slim
FROM ${NODE_IMAGE}
WORKDIR /app
# The output of `lasm build`: one self-contained directory, including the npm
# packages the Lean code uses (production dependencies only).
COPY dist/ /app/
ENV NODE_ENV=production \
    HOST=0.0.0.0 \
    PORT=8080
EXPOSE 8080
USER node
CMD ["node", "/app/main.mjs"]
