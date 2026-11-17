## Templates

- **Fixed: the fullstack template builds again.** `JsSite.lean` and `Client.lean` imported `Lasm.JS.Web`, the umbrella module that 0.3-18 removed; they import `Lasm.JS.Web.Fetch` now.
