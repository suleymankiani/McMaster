 - Name: Suleyman Kiani
 - Date: Sunday, September 30, 2018
 -}
module Assign_1 where
macid :: String
macid = "kianis4"

{- -----------------------------------------------------------------
 - cuberootfunc
 - ----------------------------------------------------------------- -
 - Calculates the cube root of positive and negative numbers. 
 -}
cuberootfunc :: Double -> Double
cuberootfunc x = 
  if x == 0 then 0
  else (abs x)**(1/3) * (x/abs x)

{- -----------------------------------------------------------------
 - cubicQ
 - -----------------------------------------------------------------
 - Calculate Q from the inputed a b and c values of a cubic function (ax^3 + bx^2 + cx +d) 
 -}
cubicQ :: Double -> Double -> Double -> Double
cubicQ a b c = (3 * a * c - b**2)/(9 * a**2)

{- -----------------------------------------------------------------
 - cubicR
 - -----------------------------------------------------------------
 -  Calculate R from the inputed a b c and d values of a cubic function (ax^3 + bx^2 + cx +d)
 -}
cubicR :: Double -> Double -> Double -> Double -> Double
cubicR a b c d = ((9 * a * b * c) - (27 * a**2 * d) - (2 * b**3)) / (54 * a**3)

{- -----------------------------------------------------------------
 - cubicDisc
 - -----------------------------------------------------------------
 - Use the calculated Q and R values in order to determine the discriminant. This determines how many roots there are on the function.
 -}
cubicDisc :: Double -> Double -> Double
cubicDisc q r = q**3 + r**2

{- -----------------------------------------------------------------
 - cubicS
 - -----------------------------------------------------------------
 - Calculate S from calculated Q and R values of a cubic function  
 -}
cubicS :: Double -> Double -> Double
cubicS q r = cuberootfunc (r + sqrt((q**3 + r**2)))

{- -----------------------------------------------------------------
 - cubicT
 - -----------------------------------------------------------------
 - Calculate T from calculated Q and R values of a cubic function
 -}
cubicT :: Double -> Double -> Double
cubicT q r = cuberootfunc (r - sqrt((q**3 + r**2)))

{- -----------------------------------------------------------------
 - cubicRealSolutions
 - -----------------------------------------------------------------
 - Calculate the real roots of a cubic function from calulated values of Q, R, S, T and the Disc to determine how many roots and where they are located. 
 -}
cubicRealSolutions :: Double -> Double -> Double -> Double -> [Double]
cubicRealSolutions a b c d = 
    if abs(discriminant) < 1e-8 then [x1,x2,x2]
    else if(discriminant > 0) then [x1]
    else []
    where
    discriminant = cubicDisc q r
    q = cubicQ a b c
    r = cubicR a b c d
    s = cubicS q r
    t = cubicT q r
    x1 = s + t - b/(3*a)
    x2 = (-(s+t)/2) - b/(3*a)