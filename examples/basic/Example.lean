module
prelude
public import Support

public section
namespace Example

def square (n : Nat) : Nat := Nat.mul n n
def signed (n : Int) : Int := Int.sub (Int.mul n 3) 7
def array (n : Nat) : Nat :=
  let a := Array.push (Array.push (Array.emptyWithCapacity 0) n) (Nat.mul n n)
  Array.get!Internal a 1

@[noinline] def twice (f : Nat → Nat) (n : Nat) : Nat := f (f n)
def closure (n : Nat) : Nat := twice (fun x => Nat.add x n) n
def tree (n : Nat) : Nat :=
  Support.total (.branch (.leaf n) (.leaf Support.offset))
def unicode (s : String) : String := String.push s 'λ'
def bytes (b : ByteArray) : ByteArray := b
def add32 (a b : UInt32) : UInt32 := UInt32.add a b
def negate (b : Bool) : Bool := !b
def unit (_ : Unit) : Unit := ()

def panicProbe (n : Nat) : Nat := if Nat.beq n 0 then panic! "intentional Lasm test panic" else n

end Example
