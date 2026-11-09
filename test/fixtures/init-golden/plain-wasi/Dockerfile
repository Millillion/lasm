# syntax=docker/dockerfile:1
# Multi-stage build: Lasm compiles the Lean program in the first stage; the
# image you deploy contains only Node and dist/ (Wasm, launcher and the
# production node_modules).
#   docker build -t lean-app .
#   docker run --rm lean-app

FROM node:24-trixie AS build
WORKDIR /app
# The whole project (see .dockerignore), so local file: dependencies resolve too.
COPY . .
RUN if [ -f package-lock.json ]; then npm ci; else npm install; fi
# The first build downloads Lean and Lasm's build tools into the cache mount.
RUN --mount=type=cache,target=/root/.cache/lasm npx lasm build Main.lean --output dist

FROM node:24-bookworm-slim
WORKDIR /app
ENV NODE_ENV=production
COPY --from=build /app/dist ./dist
USER node
CMD ["node", "dist/main.mjs"]
