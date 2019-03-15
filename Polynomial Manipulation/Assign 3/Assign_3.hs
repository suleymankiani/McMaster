{- Assignment 3
 - Name: Suleyman Kiani
 - Date: Nov 4th, 2018
 -}
module Assign_3 where

macid :: String
macid = "kianis4"


data Poly a = X
            | Coef a
            | Sum (Poly a) (Poly a)
            | Prod (Poly a) (Poly a)
  deriving Show

{- -----------------------------------------------------------------
 - polyValue
 - -----------------------------------------------------------------
 - Description: polyValue is a function created to insert a given number into a polynomial and get the value at that point back. Ex. if the function f(x) = x^2,
  poly value will take a given value (2 for example) and take the function at that value --> f(2) = (2)^2 or 4. This function was created to work recursivley when the
  polynomial is a Sum or Prod and has 2 base cases. When poly ia just X then the function returns then inputed value n, and when the poly is a Coef x, no matter what value is given 
  for n, it returns x
 -}
polyValue :: Num a => Poly a -> a -> a
polyValue X n          = n 
polyValue (Coef x)_    = x
polyValue (Sum x y) n  = polyValue x n + polyValue y n
polyValue (Prod x y) n = polyValue x n * polyValue y n

{- -----------------------------------------------------------------
 - polyDegree
 - -----------------------------------------------------------------
 - Description: polyDegree is a function that is designed to return the Largest degree of a given polynomial. The highest degree of a polynomial is alsi the highest exponent 
 in the given polynomial. This function also works recursivley. When poly is just x the degree of the fucntion is 1 so the function returns 1. When the poly is a constant then
  the degree is one so it returns 0. Prod x y adds the degrees of x and y. Sum x y however finds the highest degree between x and y and returns it.
 -}
polyDegree :: (Num a, Eq a) => Poly a -> Integer
polyDegree X            = 1
polyDegree (Coef _)     = 0
polyDegree (Prod x y)   = polyDegree x + polyDegree y
polyDegree (Sum x y)
                    | (polyDegree x) >= (polyDegree y) = polyDegree x
                    | otherwise                        = polyDegree y

{- -----------------------------------------------------------------
 - polyDeriv
 - -----------------------------------------------------------------
 - Description: polyDeriv is a function created to Compute the Derivative of a given Polynomial by using product Rule to differentiate when required. 
 It returns 0 of the poly is a constant, 1 if it is just x. If the polynomial happens to be the Derivative of Sum x y then the derivative is the sum of deriv a and b.
 If the polynomial is a Prod then polyDeriv calcuates the Derivative using product rule.
 -}
polyDeriv :: Num a => Poly a -> Poly a
polyDeriv X          = Coef 1 -- The Derivative of X by its self id equal to 1
polyDeriv (Coef _)   = Coef 0 -- The derivative of constants, in this case a Coefficient is 0
polyDeriv (Sum x y)  = Sum (polyDeriv x) (polyDeriv y) --Is used in order to take the Derivative of each section of each term in the polynomial individually
polyDeriv (Prod x y) = Sum (Prod(polyDeriv x) y) (Prod x (polyDeriv y)) -- Using product Rule in order to differentiate. Product rule states if f(x)=x*y f'(x) = x'*y + x*y' 



{- -----------------------------------------------------------------
 - Test Cases
 - -----------------------------------------------------------------
 -
polyValue :: Num a => Poly a -> a -> a
polyValue X n          = n 
polyValue (Coef x)_    = x
polyValue (Sum x y) n  = polyValue x n + polyValue y n
polyValue (Prod x y) n = polyValue x n * polyValue y n
 _______________________________________________________________________________________________
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 1
 - - Input: (Coef 3) 5
 - - Expected Output: 3
 - - Acutal Output: 3
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 2
 - - Input: (Sum X X) 3
 - - Expected Output: 6
 - - Acutal Output: 6
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 3
 - - Input: (Prod X X) 3
 - - Expected Output: 9
 - - Acutal Output: 9
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 4
 - - Input: (Prod X X) (-2)
 - - Expected Output: 0
 - - Acutal Output: 0
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 5
 - - Input: (Sum X X) 0
 - - Expected Output: 0
 - - Acutal Output: 0
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 6
 - - Input: Sum(Prod(Coef 2)(Prod X X))(Prod(Coef 2)(Prod X X))) 2 ---- same as f(2)=2x^2 + 2x^2
 - - Expected Output: 16
 - - Acutal Output: 16
 - -----------------------------------------------------------------
 - - Function: polyValue
 - - Test Case Number: 6
 - - Input: Sum(Prod(Coef 2)(Prod X X))(Prod(Coef 2)(Prod X X))) (-2) ---- same as f(2)=2x^2 + 2x^2
 - - Expected Output: 16
 - - Acutal Output: 16
 - -----------------------------------------------------------------

polyDegree :: (Num a, Eq a) => Poly a -> Integer
polyDegree X            = 1
polyDegree (Coef _)     = 0
polyDegree (Prod x y)   = polyDegree x + polyDegree y
polyDegree (Sum x y)
                    | (polyDegree x) >= (polyDegree y) = polyDegree x
                    | otherwise                        = polyDegree y
 _______________________________________________________________________________________________
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 1
 - - Input: X
 - - Expected Output: 1
 - - Acutal Output: 1
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 2
 - - Input: Coef 4
 - - Expected Output: 0
 - - Acutal Output: 0
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 3
 - - Input: Sum X (Prod X X)
 - - Expected Output: 2
 - - Acutal Output: 2
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 4
 - - Input: Prod X X
 - - Expected Output: 2
 - - Acutal Output: 2
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 5
 - - Input: Sum X X
 - - Expected Output: 1
 - - Acutal Output: 1
 - -----------------------------------------------------------------
 - - Function: polyDegree
 - - Test Case Number: 6
 - - Input: Sum(Prod(Coef 2)(Prod X X))(Prod(Coef 2)(Prod X X)) -- same as 2x^2 + 2x^2 
 - - Expected Output: 2
 - - Acutal Output: 2
 - -----------------------------------------------------------------


polyDeriv :: Num a => Poly a -> Poly a
polyDeriv X          = Coef 1 
polyDeriv (Coef _)   = Coef 0 
polyDeriv (Sum x y)  = Sum (polyDeriv x) (polyDeriv y) 
polyDeriv (Prod x y) = Sum (Prod(polyDeriv x) y) (Prod x (polyDeriv y))
 _______________________________________________________________________________________________
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 1
 - - Input: X
 - - Expected Output: Coef 1
 - - Acutal Output: Coef 1
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 2
 - - Input: Coef 3
 - - Expected Output: Coef 0
 - - Acutal Output: Coef 0
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 3
 - - Input: (Prod X X)
 - - Expected Output: Prod X Coef 2                         -- Equivelent to Acctual Output
 - - Acutal Output: Sum (Prod (Coef 1) X) (Prod X (Coef 1))
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 4
 - - Input: (Sum X X)
 - - Expected Output: Sum ((Coef 1)(Coef 1))
 - - Acutal Output: Sum (Coef 1) (Coef 1)
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 5
 - - Input: Sum X (Prod X X) -- x + x^2
 - - Expected Output: Sum X (Prod X X)  --- is equal to 2x + 1
 - - Acutal Output: Sum (Coef 1) (Sum (Prod (Coef 1) X) (Prod X (Coef 1))) -- is equal to 2x + 1
 - -----------------------------------------------------------------
 - - Function: polyDeriv
 - - Test Case Number: 6
 - - Input: Sum(Prod(Coef 2)(Prod X X))(Prod(Coef 2)(Prod X X))
 - - Expected Output: Prod((Coef 8) X) --- Both Acctual and expected are both 8x
 - - Acutal Output: Sum (Sum (Prod (Coef 0) (Prod X X)) (Prod (Coef 2) (Sum (Prod (Coef 1) X) (Prod X (Coef 1))))) (Sum (Prod (Coef 0) (Prod X X)) (Prod (Coef 2) (Sum (Prod (Coef 1) X) (Prod X (Coef 1)))))
 - -----------------------------------------------------------------
 -}