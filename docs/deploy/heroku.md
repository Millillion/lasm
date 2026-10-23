# Heroku

Use the container stack: Heroku builds the `Dockerfile` and sets `PORT`. Add
`heroku.yml` to the project root:

```yaml
build:
  docker:
    web: Dockerfile
```

Then, with the [Heroku CLI](https://devcenter.heroku.com/articles/heroku-cli),
from the project's Git repository:

```sh
heroku create my-app
heroku stack:set container
git add heroku.yml && git commit -m "Heroku container build"
git push heroku main
```

Alternatively build locally and push the image (amd64):

```sh
heroku container:login
docker build --platform linux/amd64 -t registry.heroku.com/my-app/web .
docker push registry.heroku.com/my-app/web
heroku container:release web
```

Use a dyno with at least 512 MB (Basic or larger). Heroku sends SIGTERM and
waits 30 seconds before SIGKILL; the templates exit as soon as open requests
finish. Heroku runs the image as a non-root user, which the image already uses.
