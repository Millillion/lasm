/-
The pages, as `Lasm.UI` views, with the RealWorld templates' markup and
classes (https://docs.realworld.show/specifications/frontend/templates/).
Pure: the server renders them to HTML for the first page, the browser app
renders and patches them afterwards.
-/
import Lasm.UI.Elements
import Conduit.Markdown
import Frontend.Model
open Lasm.UI

namespace Conduit.Frontend

abbrev H := Html Msg

def defaultAvatar : String := "/client/default-avatar.svg"

/-- A user's picture, or the default avatar when they have none. (Avatars
carry the username as `alt`: WebKit draws a picture that fails to load with an
empty `alt` as nothing at all, whatever its CSS size.) -/
def avatar (image : Option String) : String :=
  match image with
  | some i => if i.trimAscii.isEmpty then defaultAvatar else i
  | none => defaultAvatar

def months : List String :=
  ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]

/-- `2026-10-27T…` → `October 27, 2026`. -/
def formatDate (iso : String) : String :=
  match (iso.take 10).toString.splitOn "-" with
  | [y, m, d] =>
    match m.toNat?, d.toNat? with
    | some mi, some di => s!"{months.getD (mi - 1) m} {di}, {y}"
    | _, _ => iso
  | _ => iso

def link (url : String) (attrs : List (Attr Msg)) (children : List H) : H := a (href url :: attrs) children

def errorList (errors : List String) : List H :=
  if errors.isEmpty then [] else [ul [class_ "error-messages"] (errors.map fun e => li [] [text e])]

/-! ## Layout -/

/-- Navigation items are keyed by their target: when the viewer becomes known
and items appear (Your Feed, New Article, …), the existing links keep their
elements instead of being rewritten into other links under a pending click. -/
def navItem (current : Route) (target : Route) (children : List H) : H :=
  keyed target.href <| li [class_ "nav-item"] [link target.href [class_ (if current == target then "nav-link active" else "nav-link")] children]

def header (m : Model) : H :=
  nav [class_ "navbar navbar-light"] [
    div [class_ "container"] [
      link "/" [class_ "navbar-brand"] [text "conduit"],
      ul [class_ "nav navbar-nav pull-xs-right"] (
        navItem m.route (.home .global 1) [text "Home"] ::
        match m.auth with
        | .user u => [
            navItem m.route (.editor none) [i [class_ "ion-compose"] [], text " New Article"],
            navItem m.route .settings [i [class_ "ion-gear-a"] [], text " Settings"],
            navItem m.route (.profile u.username false 1) [img [class_ "user-pic", src (avatar u.image), alt u.username], text u.username]]
        | _ => [navItem m.route .login [text "Sign in"], navItem m.route .register [text "Sign up"]])]]

def footer_ : H :=
  footer [] [div [class_ "container"] [
    link "/" [class_ "logo-font"] [text "conduit"],
    span [class_ "attribution"] [text "An interactive learning project from ",
      a [href "https://github.com/gothinkster/realworld"] [text "RealWorld"],
      text ", written in Lean and compiled to WebAssembly by ",
      a [href "https://github.com/Millillion/lasm"] [text "Lasm"], text ". Code & design licensed under MIT."]]]

/-! ## Articles -/

def tagList (tags : List String) : H :=
  ul [class_ "tag-list"] (tags.map fun t => li [class_ "tag-default tag-pill tag-outline"] [text t])

/-- Favorite buttons wait until the app knows the viewer and has their view of the article. -/
def canAct (m : Model) : Bool := m.ready && !m.stale && !m.busy

def favoriteButton (m : Model) (art : Article) (label : Option String) (extra : String) : H :=
  button [class_ ((if art.favorited then "btn btn-sm btn-primary" else "btn btn-sm btn-outline-primary") ++ extra),
          disabled (!canAct m), onClick (.toggleFavorite art.slug art.favorited)]
    (match label with
     | none => [i [class_ "ion-heart"] [], text s!" {art.favoritesCount}"]
     | some l => [i [class_ "ion-heart"] [], text s!" {if art.favorited then "Unfavorite" else "Favorite"} {l} ",
                  span [class_ "counter"] [text s!"({art.favoritesCount})"]])

def preview (m : Model) (art : Article) : H :=
  keyed art.slug <| div [class_ "article-preview"] [
    div [class_ "article-meta"] [
      link (Route.profile art.author.username false 1).href [] [img [src (avatar art.author.image), alt art.author.username]],
      div [class_ "info"] [
        link (Route.profile art.author.username false 1).href [class_ "author"] [text art.author.username],
        span [class_ "date"] [text (formatDate art.createdAt)]],
      favoriteButton m art none " pull-xs-right"],
    link (Route.article art.slug).href [class_ "preview-link"] [
      h1 [] [text art.title],
      p [] [text art.description],
      span [] [text "Read more..."],
      tagList art.tagList]]

/-- Page links for a list, `page` highlighted. -/
def pagination (count page : Nat) (hrefOf : Nat → String) : List H :=
  let pages := (count + pageSize - 1) / pageSize
  if pages ≤ 1 then []
  else [ul [class_ "pagination"] ((List.range pages).map fun k =>
    li [class_ (if k + 1 == page then "page-item active" else "page-item")] [
      link (hrefOf (k + 1)) [class_ "page-link"] [text (toString (k + 1))]])]

def articleList (m : Model) (emptyMessage : List H) (hrefOf : Nat → String) (page : Nat) : List H :=
  match m.articles with
  | .loading => [div [class_ "article-preview"] [text "Loading articles..."]]
  | .failed e => [div [class_ "article-preview"] (errorList [e])]
  | .ready list =>
    if list.articles.isEmpty then [div [class_ "article-preview empty-feed-message"] emptyMessage]
    else list.articles.map (preview m) ++ pagination list.articlesCount page hrefOf

/-! ## Pages -/

def homePage (m : Model) (feed : Feed) (page : Nat) : H :=
  let tab (f : Feed) (label : List H) : H :=
    keyed (Route.home f 1).href <| li [class_ "nav-item"] [link (Route.home f 1).href [class_ (if feed == f then "nav-link active" else "nav-link")] label]
  let tabs :=
    (if (m.auth.user?).isSome then [tab .following [text "Your Feed"]] else []) ++
    [tab .global [text "Global Feed"]] ++
    (match feed with
     | .tag t => [tab (.tag t) [i [class_ "ion-pound"] [], text s!" {t}"]]
     | _ => [])
  let empty := match feed with
    | .following => [text "Your feed is empty. Follow some authors, or browse the ", link "/" [] [text "Global Feed"], text "."]
    | _ => [text "No articles are here... yet."]
  div [class_ "home-page"] [
    div [class_ "banner"] [div [class_ "container"] [
      h1 [class_ "logo-font"] [text "conduit"],
      p [] [text "A place to share your knowledge."]]],
    div [class_ "container page"] [div [class_ "row"] [
      div [class_ "col-md-9"] (
        div [class_ "feed-toggle"] [ul [class_ "nav nav-pills outline-active"] tabs] ::
        articleList m empty (fun n => (Route.home feed n).href) page),
      div [class_ "col-md-3"] [div [class_ "sidebar"] [
        p [] [text "Popular Tags"],
        match m.tags with
        | .ready ts => div [class_ "tag-list"] ((ts.take 20).map fun t =>
            link (Route.home (.tag t) 1).href [class_ "tag-pill tag-default"] [text t])
        | .loading => div [] [text "Loading tags..."]
        | .failed _ => div [] [text "Tags are not available."]]]]]]

def authPage (m : Model) (signUp : Bool) : H :=
  let field (f : Field) (nm type : String) (ph : String) (v : String) : H :=
    fieldset [class_ "form-group"] [input [class_ "form-control form-control-lg", type_ type, name nm, placeholder ph,
      value v, disabled (!m.ready || m.busy), onInput (.set f)]]
  div [class_ "auth-page"] [div [class_ "container page"] [div [class_ "row"] [
    div [class_ "col-md-6 offset-md-3 col-xs-12"] ([
      h1 [class_ "text-xs-center"] [text (if signUp then "Sign up" else "Sign in")],
      p [class_ "text-xs-center"] [if signUp then link "/login" [] [text "Have an account?"]
                                   else link "/register" [] [text "Need an account?"]]] ++
      errorList m.errors ++ [
      form [onSubmit (if signUp then .submitRegister else .submitLogin)] (
        (if signUp then [field .username "username" "text" "Username" m.form.username] else []) ++ [
        field .email "email" "text" "Email" m.form.email,
        field .password "password" "password" "Password" m.form.password,
        button [class_ "btn btn-lg btn-primary pull-xs-right", type_ "submit", disabled (!m.ready || m.busy)]
          [text (if signUp then "Sign up" else "Sign in")]])])]]]

def settingsPage (m : Model) : H :=
  let off := !m.ready || m.busy || !m.form.loaded
  div [class_ "settings-page"] [div [class_ "container page"] [div [class_ "row"] [
    div [class_ "col-md-6 offset-md-3 col-xs-12"] ([
      h1 [class_ "text-xs-center"] [text "Your Settings"]] ++ errorList m.errors ++ [
      form [onSubmit .submitSettings] [fieldset [] [
        fieldset [class_ "form-group"] [input [class_ "form-control", type_ "text", name "image",
          placeholder "URL of profile picture", value m.form.image, disabled off, onInput (.set .image)]],
        fieldset [class_ "form-group"] [input [class_ "form-control form-control-lg", type_ "text", name "username",
          placeholder "Your Name", value m.form.username, disabled off, onInput (.set .username)]],
        fieldset [class_ "form-group"] [textarea [class_ "form-control form-control-lg", rows "8", name "bio",
          placeholder "Short bio about you", value m.form.bio, disabled off, onInput (.set .bio)] []],
        fieldset [class_ "form-group"] [input [class_ "form-control form-control-lg", type_ "text", name "email",
          placeholder "Email", value m.form.email, disabled off, onInput (.set .email)]],
        fieldset [class_ "form-group"] [input [class_ "form-control form-control-lg", type_ "password", name "password",
          placeholder "New Password", value m.form.password, disabled off, onInput (.set .password)]],
        button [class_ "btn btn-lg btn-primary pull-xs-right", type_ "submit", disabled off] [text "Update Settings"]]],
      hr [],
      button [class_ "btn btn-outline-danger", disabled (!m.ready), onClick .logout] [text "Or click here to logout."]])]]]

def editorPage (m : Model) : H :=
  let off := !m.ready || m.busy || !m.form.loaded
  div [class_ "editor-page"] [div [class_ "container page"] [div [class_ "row"] [
    div [class_ "col-md-10 offset-md-1 col-xs-12"] (errorList m.errors ++ [
      form [onSubmit .ignore] [fieldset [] [
        fieldset [class_ "form-group"] [input [class_ "form-control form-control-lg", type_ "text", name "title",
          placeholder "Article Title", value m.form.title, disabled off, onInput (.set .title)]],
        fieldset [class_ "form-group"] [input [class_ "form-control", type_ "text", name "description",
          placeholder "What's this article about?", value m.form.description, disabled off, onInput (.set .description)]],
        fieldset [class_ "form-group"] [textarea [class_ "form-control", rows "8", name "body",
          placeholder "Write your article (in markdown)", value m.form.body, disabled off, onInput (.set .body)] []],
        fieldset [class_ "form-group"] [
          input [class_ "form-control", type_ "text", placeholder "Enter tags", value m.form.tagInput, disabled off,
            onInput (.set .tagInput), onEnter .addTag],
          div [class_ "tag-list"] (m.form.tags.map fun t =>
            keyed t <| span [class_ "tag-default tag-pill"] [i [class_ "ion-close-round", onClick (.removeTag t)] [], text s!" {t}"])],
        button [class_ "btn btn-lg pull-xs-right btn-primary", type_ "button", disabled off, onClick .publish]
          [text "Publish Article"]]]])]]]

/-! ## The article page -/

def inlineView : Markdown.Inline → H
  | .text s => text s
  | .strong cs => strong [] (cs.attach.map fun ⟨c, _⟩ => inlineView c)
  | .em cs => em [] (cs.attach.map fun ⟨c, _⟩ => inlineView c)
  | .code s => code [] [text s]
  | .link h cs => a [href h, rel "nofollow noopener"] (cs.attach.map fun ⟨c, _⟩ => inlineView c)

def blockView : Markdown.Block → H
  | .para cs => p [] (cs.map inlineView)
  | .heading n cs =>
    -- One level down: the page's own title is the only h1.
    node s!"h{min 6 (n + 1)}" [] (cs.map inlineView)
  | .list ordered items =>
    (if ordered then ol else ul) [] (items.map fun cs => li [] (cs.map inlineView))
  | .quote cs => blockquote [] [p [] (cs.map inlineView)]
  | .code s => pre [] [code [] [text s]]
  | .rule => hr []

def followButton (m : Model) (author : Profile) (extra : String) : H :=
  button [class_ ("btn btn-sm action-btn " ++ (if author.following then "btn-secondary" else "btn-outline-secondary") ++ extra),
          disabled (!canAct m), onClick (.toggleFollow author.username author.following)] [
    i [class_ "ion-plus-round"] [],
    text s!" {if author.following then "Unfollow" else "Follow"} {author.username}"]

def articleMeta (m : Model) (art : Article) : H :=
  let mine := match m.auth with
    | .user u => u.username == art.author.username
    | _ => false
  div [class_ "article-meta"] ([
    link (Route.profile art.author.username false 1).href [] [img [src (avatar art.author.image), alt art.author.username]],
    div [class_ "info"] [
      link (Route.profile art.author.username false 1).href [class_ "author"] [text art.author.username],
      span [class_ "date"] [text (formatDate art.createdAt)]]] ++
    -- Keyed: the author's buttons and a reader's are different elements.
    (if mine then [
      keyed "edit" <| link (Route.editor (some art.slug)).href [class_ "btn btn-sm btn-outline-secondary"] [i [class_ "ion-edit"] [], text " Edit Article"],
      keyed "delete" <| button [class_ "btn btn-sm btn-outline-danger", disabled (!canAct m), onClick (.deleteArticle art.slug)]
        [i [class_ "ion-trash-a"] [], text " Delete Article"]]
    else [keyed "follow" <| followButton m art.author "", keyed "favorite" <| favoriteButton m art (some "Article") ""]))

def commentCard (m : Model) (c : Comment) : H :=
  let mine := match m.auth with
    | .user u => u.username == c.author.username
    | _ => false
  keyed (toString c.id) <| div [class_ "card"] [
    div [class_ "card-block"] [p [class_ "card-text"] [text c.body]],
    div [class_ "card-footer"] ([
      link (Route.profile c.author.username false 1).href [class_ "comment-author"]
        [img [class_ "comment-author-img", src (avatar c.author.image), alt c.author.username]],
      text " ",
      link (Route.profile c.author.username false 1).href [class_ "comment-author"] [text c.author.username],
      span [class_ "date-posted"] [text (formatDate c.createdAt)]] ++
      (if mine then [span [class_ "mod-options"] [i [class_ "ion-trash-a", onClick (.deleteComment c.id)] []]] else []))]

def commentSection (m : Model) (art : Article) : H :=
  div [class_ "row"] [div [class_ "col-xs-12 col-md-8 offset-md-2"] (
    (match m.auth with
     | .user u => [form [class_ "card comment-form", onSubmit .postComment] [
         div [class_ "card-block"] [textarea [class_ "form-control", placeholder "Write a comment...", rows "3",
           value m.form.comment, disabled (!m.ready), onInput (.set .comment)] []],
         div [class_ "card-footer"] [
           img [class_ "comment-author-img", src (avatar u.image), alt u.username],
           button [class_ "btn btn-sm btn-primary", type_ "submit", disabled (!m.ready || m.busy)] [text "Post Comment"]]]]
     | .guest => [p [] [
         link (Route.login.href ++ "?next=" ++ (Route.article art.slug).href) [] [text "Sign in"], text " or ",
         link (Route.register.href ++ "?next=" ++ (Route.article art.slug).href) [] [text "sign up"],
         text " to add comments on this article."]]
     | .loading => []) ++
    errorList m.errors ++
    (match m.comments with
     | .ready cs => cs.map (commentCard m)
     | .loading => [p [] [text "Loading comments..."]]
     | .failed e => errorList [e])
    )]

def articlePage (m : Model) : H :=
  match m.article with
  | .loading => div [class_ "article-page"] [div [class_ "container page"] [text "Loading article..."]]
  | .failed e => div [class_ "article-page"] [div [class_ "container page"] (errorList [e])]
  | .ready art =>
    div [class_ "article-page"] [
      div [class_ "banner"] [div [class_ "container"] [h1 [] [text art.title], articleMeta m art]],
      div [class_ "container page"] [
        div [class_ "row article-content"] [div [class_ "col-md-12"]
          ((Markdown.parse (art.body.getD "")).map blockView ++ [tagList art.tagList])],
        hr [],
        div [class_ "article-actions"] [articleMeta m art],
        commentSection m art]]

def profilePage (m : Model) (username : String) (favorites : Bool) (page : Nat) : H :=
  let mine := match m.auth with
    | .user u => u.username == username
    | _ => false
  let info : List H := match m.profile with
    | .ready prof => [
        img [class_ "user-img", src (avatar prof.image), alt prof.username],
        h4 [] [text prof.username],
        p [] [text (prof.bio.getD "")],
        if mine then link "/settings" [class_ "btn btn-sm btn-outline-secondary action-btn"]
          [i [class_ "ion-gear-a"] [], text " Edit Profile Settings"]
        else followButton m prof ""]
    | .loading => [h4 [] [text username], p [] []]
    | .failed e => errorList [e]
  let tab (fav : Bool) (label : String) :=
    keyed (Route.profile username fav 1).href <| li [class_ "nav-item"] [link (Route.profile username fav 1).href
      [class_ (if favorites == fav then "nav-link active" else "nav-link")] [text label]]
  div [class_ "profile-page"] [
    div [class_ "user-info"] [div [class_ "container"] [div [class_ "row"] [
      div [class_ "col-xs-12 col-md-10 offset-md-1"] info]]],
    div [class_ "container"] [div [class_ "row"] [div [class_ "col-xs-12 col-md-10 offset-md-1"] (
      div [class_ "articles-toggle"] [ul [class_ "nav nav-pills outline-active"]
        [tab false "My Articles", tab true "Favorited Articles"]] ::
      articleList m [text "No articles are here... yet."] (fun n => (Route.profile username favorites n).href) page)]]]

def notFoundPage : H :=
  div [class_ "container page"] [h1 [] [text "Page not found"], p [] [link "/" [] [text "Back to the home page"]]]

def view (m : Model) : H :=
  div [] [
    header m,
    match m.route with
    | .home feed page => homePage m feed page
    | .login => authPage m false
    | .register => authPage m true
    | .settings => settingsPage m
    | .editor _ => editorPage m
    | .article _ => articlePage m
    | .profile u fav page => profilePage m u fav page
    | .notFound => notFoundPage,
    footer_]

end Conduit.Frontend
