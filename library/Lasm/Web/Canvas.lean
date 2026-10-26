/-
Lasm.Web canvas: a `<canvas>` element's 2D context. Drawing commands are sent
in batches (`Context2D.draw`): one JavaScript call per frame, not per command.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- One 2D drawing command (the `CanvasRenderingContext2D` method or property of the same name). -/
inductive DrawCommand where
  | fillStyle (style : String)
  | strokeStyle (style : String)
  | lineWidth (width : Float)
  | font (font : String)
  | textAlign (align : String)
  | textBaseline (baseline : String)
  | globalAlpha (alpha : Float)
  | lineCap (cap : String)
  | lineJoin (join : String)
  | fillRect (x y width height : Float)
  | strokeRect (x y width height : Float)
  | clearRect (x y width height : Float)
  | beginPath
  | closePath
  | moveTo (x y : Float)
  | lineTo (x y : Float)
  | rect (x y width height : Float)
  | arc (x y radius startAngle endAngle : Float) (counterclockwise : Bool := false)
  | quadraticCurveTo (cpx cpy x y : Float)
  | bezierCurveTo (cp1x cp1y cp2x cp2y x y : Float)
  | fill
  | stroke
  | fillText (text : String) (x y : Float)
  | strokeText (text : String) (x y : Float)
  | save
  | restore
  | translate (x y : Float)
  | rotate (angle : Float)
  | scale (x y : Float)
  | setTransform (a b c d e f : Float)
  | resetTransform
  /-- An image, canvas or video element at (x, y). -/
  | drawImage (image : Element) (x y : Float)
  | drawImageScaled (image : Element) (x y width height : Float)

instance : ToJS DrawCommand where
  toJS
    | .fillStyle s => .array #[.string "fillStyle", .string s]
    | .strokeStyle s => .array #[.string "strokeStyle", .string s]
    | .lineWidth w => .array #[.string "lineWidth", .number w]
    | .font f => .array #[.string "font", .string f]
    | .textAlign a => .array #[.string "textAlign", .string a]
    | .textBaseline b => .array #[.string "textBaseline", .string b]
    | .globalAlpha a => .array #[.string "globalAlpha", .number a]
    | .lineCap c => .array #[.string "lineCap", .string c]
    | .lineJoin j => .array #[.string "lineJoin", .string j]
    | .fillRect x y w h => .array #[.string "fillRect", .number x, .number y, .number w, .number h]
    | .strokeRect x y w h => .array #[.string "strokeRect", .number x, .number y, .number w, .number h]
    | .clearRect x y w h => .array #[.string "clearRect", .number x, .number y, .number w, .number h]
    | .beginPath => .array #[.string "beginPath"]
    | .closePath => .array #[.string "closePath"]
    | .moveTo x y => .array #[.string "moveTo", .number x, .number y]
    | .lineTo x y => .array #[.string "lineTo", .number x, .number y]
    | .rect x y w h => .array #[.string "rect", .number x, .number y, .number w, .number h]
    | .arc x y r a b ccw => .array #[.string "arc", .number x, .number y, .number r, .number a, .number b, .bool ccw]
    | .quadraticCurveTo a b x y => .array #[.string "quadraticCurveTo", .number a, .number b, .number x, .number y]
    | .bezierCurveTo a b c d x y => .array #[.string "bezierCurveTo", .number a, .number b, .number c, .number d, .number x, .number y]
    | .fill => .array #[.string "fill"]
    | .stroke => .array #[.string "stroke"]
    | .fillText t x y => .array #[.string "fillText", .string t, .number x, .number y]
    | .strokeText t x y => .array #[.string "strokeText", .string t, .number x, .number y]
    | .save => .array #[.string "save"]
    | .restore => .array #[.string "restore"]
    | .translate x y => .array #[.string "translate", .number x, .number y]
    | .rotate a => .array #[.string "rotate", .number a]
    | .scale x y => .array #[.string "scale", .number x, .number y]
    | .setTransform a b c d e f => .array #[.string "setTransform", .number a, .number b, .number c, .number d, .number e, .number f]
    | .resetTransform => .array #[.string "resetTransform"]
    | .drawImage i x y => .array #[.string "drawImage", toJS i, .number x, .number y]
    | .drawImageScaled i x y w h => .array #[.string "drawImageScaled", toJS i, .number x, .number y, .number w, .number h]

/-- `measureText`: the width, and the ascent and descent above and below the baseline. -/
structure TextMetrics where
  width : Float
  ascent : Float
  descent : Float
  deriving FromJS, Inhabited, Repr

namespace Raw
@[js "lasm:web" "context2d"] opaque context2d : Element → Bool → IO Context2D
@[js "lasm:web" "draw"] opaque draw : Context2D → Array DrawCommand → IO Unit
@[js "lasm:web" "measureText"] opaque measureText : Context2D → String → IO TextMetrics
@[js "lasm:web" "imageData"] opaque imageData : Context2D → Float → Float → Float → Float → IO ByteArray
@[js "lasm:web" "putImageData"] opaque putImageData : Context2D → ByteArray → Float → Float → Float → Float → IO Unit
end Raw

/-- The 2D context of a `<canvas>` element (`alpha := false` for an opaque canvas). -/
def Element.context2d (canvas : Element) (alpha : Bool := true) : IO Context2D := Raw.context2d canvas alpha

namespace Context2D
/-- Runs drawing commands in order, in one call. -/
def draw (ctx : Context2D) (commands : Array DrawCommand) : IO Unit := Raw.draw ctx commands
def measureText (ctx : Context2D) (text : String) : IO TextMetrics := Raw.measureText ctx text
/-- RGBA bytes of a rectangle (`getImageData`), row by row. -/
def imageData (ctx : Context2D) (x y width height : Nat) : IO ByteArray :=
  Raw.imageData ctx x.toFloat y.toFloat width.toFloat height.toFloat
/-- Writes RGBA bytes (`width × height × 4`) at (x, y) (`putImageData`). -/
def putImageData (ctx : Context2D) (bytes : ByteArray) (x y width height : Nat) : IO Unit :=
  Raw.putImageData ctx bytes x.toFloat y.toFloat width.toFloat height.toFloat
end Context2D

end Lasm.Web
