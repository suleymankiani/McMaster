{- Assignment 2
 - Name: Suleyman Kiani
 - Date: October 21st, 2018
 -}
module Assign_2 where

macid :: String
macid = "kianis4"

type Vector = (Double,Double,Double)

{- -----------------------------------------------------------------
 - vecZero
 - -----------------------------------------------------------------
 - Description: This function implements the Zero Vector Constant
 -}
vecZero :: Vector
vecZero = (0,0,0)

{- -----------------------------------------------------------------
 - vecScalarProd
 - -----------------------------------------------------------------
 - Description: The Scalar Product of a given vector is calculated using a real number x and multiplying it by each value in the vector
 -}
vecScalarProd :: Double -> Vector -> Vector
vecScalarProd x (a,b,c) = (x*a, x*b, x*c)

{- -----------------------------------------------------------------
 - vecSum
 - -----------------------------------------------------------------
 - Description: The sum of 2 given vectors is calculated simply by taking the x coord of the first vector and adding it to the x value of the second. The same method is followed for the y's and z's.
 -}
vecSum :: Vector -> Vector -> Vector
vecSum (a,b,c) (a',b',c') = (a + a',b + b',c + c')

{- -----------------------------------------------------------------
 - vecMagnitude
 - -----------------------------------------------------------------
 - Description: The magbnitude of a given vector us Calculated. The magnitude is commonly reffered to as the 'size' or 'quantity of a vector. The ** operator is used to exponentiate because since the value is in
   double, the ^ operator wouldnt work.
 -}
vecMagnitude :: Vector -> Double
vecMagnitude (a,b,c) = sqrt(a**2 + b**2 + c**2)

{- -----------------------------------------------------------------
 - vecInnerProd
 - -----------------------------------------------------------------
 - Description: The Vector Inner Product, also commonly known as the DOT product of two inputed vectorss is calculated with the formula for calculating the dot product of 2 vectors.
 -}
vecInnerProd :: Vector -> Vector -> Double
vecInnerProd (a,b,c) (a',b',c') = (a*a' + b*b' + c*c')

{- -----------------------------------------------------------------
 - vecDistance
 - -----------------------------------------------------------------
 - Description: The distance between 2 vectors is calculated by taking to vectors and suntracting vector 1 from vector 2 and taking the magnitude of the resulting vector.
 -}
vecDistance :: Vector -> Vector -> Double
vecDistance (a,b,c) (a',b',c') = vecMagnitude (a-a',b-b',c-c')

{- -----------------------------------------------------------------
 - vecFarthest
 - -----------------------------------------------------------------
 - Description: The Farthest Vec from an inputed initial vector is returned. The base case returns vMax when the list is empty meaning it already went through the entire list so it will take the second input which is vMax
 the furthest vector that was found so it will return that.
 -}
vecFarthest :: Vector -> Vector -> Double -> [Vector] -> Vector
vecFarthest _ vMax _ [] = vMax
vecFarthest v0 vMax dMax (x:xs)
     |d > dMax   = vecFarthest v0 x d xs
     |otherwise  = vecFarthest v0 vMax dMax xs
     where d = (vecDistance v0 x)

{- -----------------------------------------------------------------
 - vecNearest
 - -----------------------------------------------------------------
 - Description: The Nearest Vec from an inputed initial vector is returned. The base case returns vMin when the list is empty meaning it already went through the entire list so it will take the second input which is 
 vMin the nearest vector that was found so it will return that.
 -}
vecNearest :: Vector -> Vector -> Double -> [Vector] -> Vector
vecNearest _ vMin _ [] = vMin
vecNearest v0 vMin dMin (x:xs)
     |d < dMin || dMin == (-1) = vecNearest v0 x d xs
     |otherwise                = vecNearest v0 vMin dMin xs
     where d = (vecDistance v0 x)


{- -----------------------------------------------------------------
 - vecF
 - -----------------------------------------------------------------
 - Description: The vecF function takes an initial Vectoe (v0) and a list of vectors [(v1),(v2),(v3),...(vn] and returns the Nearest vector followed by the farthest Vector.
 -}
vecF :: Vector -> [Vector] -> (Vector,Vector)
vecF v0 vS =  (vecNearest v0 vecZero (-1) vS , vecFarthest v0 vecZero 0 vS)
{- -----------------------------------------------------------------
 - Test Cases
 - -----------------------------------------------------------------
 ____________________________________________________________________________________
vecScalarProd x (a,b,c) = (x*a, x*b, x*c)
 - -----------------------------------------------------------------
 - - Function: vecScalarProd
 - - Test Case Number: 1
 - - Input: vecScalarProd 4 (5,32,(-453.2))
 - - Expected Output: (20.0,128.0,-1812.8)
 - - Acutal Output: (20.0,128.0,-1812.8)
 - -----------------------------------------------------------------
 - - Function: vecScalarProd 
 - - Test Case Number: 2
 - - Input: vecScalarProd 34.435423543525 vecZero 
 - - Expected Output: (0.0, 0.0, 0.0)
 - - Acutal Output: (0.0, 0.0, 0.0)
 - -----------------------------------------------------------------
 - - Function: vecScalarProd 
 - - Test Case Number: 3
 - - Input: vecScalarProd (-2) (4,5,6)
 - - Expected Output: (-8.0,-10.0,-12.0)
 - - Acutal Output: (-8.0,-10.0,-12.0)
 - -----------------------------------------------------------------
 - - Function: vecScalarProd 
 - - Test Case Number: 4
 - - Input: vecScalarProd (-2) ((-4),(-5),(-6))
 - - Expected Output: (8.0,10.0,12.0)
 - - Acutal Output: (8.0,10.0,12.0)
____________________________________________________________________________________
vecSum (a,b,c) (a',b',c') = (a + a',b + b',c + c')
 - -----------------------------------------------------------------
 - - Function: vecSum 
 - - Test Case Number: 1
 - - Input: vecSum vecZero (1,2,3)
 - - Expected Output: (1.0,2.0,3.0)
 - - Acutal Output: (1.0,2.0,3.0)
 - -----------------------------------------------------------------
 - - Function: vecSum 
 - - Test Case Number: 2
 - - Input: vecSum (1,2,3) (45,55,65)
 - - Expected Output: (46.0,57.0,68.0)
 - - Acutal Output: (46.0,57.0,68.0)
 - -----------------------------------------------------------------
 - - Function: vecSum 
 - - Test Case Number: 3
 - - Input: vecSum ((-1),(-2),(-3)) (45.324213,52354.3243,(-654.5435))
 - - Expected Output: (44.324213,52352.3243,-657.5435)
 - - Acutal Output: (44.324213,52352.3243,-657.5435)
   - -----------------------------------------------------------------
 - - Function: vecSum 
 - - Test Case Number: 4
 - - Input: vecSum ((-1),(-2),(-3)) ((-45.324213),(-52354.3243),(-654.5435))
 - - Expected Output: (-46.324213,-52356.3243,-657.5435)
 - - Acutal Output: (-46.324213,-52356.3243,-657.5435)
____________________________________________________________________________________
vecMagnitude (a,b,c) = sqrt(a**2 + b**2 + c**2)
 - -----------------------------------------------------------------
 - - Function: vecMagnitude 
 - - Test Case Number: 1
 - - Input: vecMagnitude vecZero 
 - - Expected Output: 0.0
 - - Acutal Output: 0.0
 - -----------------------------------------------------------------
 - - Function: vecMagnitude 
 - - Test Case Number: 2
 - - Input: vecMagnitude (4,78,76) 
 - - Expected Output: 108.97706180660222
 - - Acutal Output: 108.97706180660222
 - -----------------------------------------------------------------
 - - Function: vecMagnitude 
 - - Test Case Number: 3
 - - Input: vecMagnitude ((-2),2,1) 
 - - Expected Output: 3.0
 - - Acutal Output: 3.0
 - -----------------------------------------------------------------
 - - Function: vecMagnitude 
 - - Test Case Number: 4
 - - Input: vecMagnitude ((-2),(-2),(-1)) 
 - - Expected Output: 3.0
 - - Acutal Output: 3.0
____________________________________________________________________________________
vecInnerProd (a,b,c) (a',b',c') = (a*a' + b*b' + c*c')
 - -----------------------------------------------------------------
 - - Function: vecInnerProd 
 - - Test Case Number: 1
 - - Input: vecInnerProd (1,2,3) vecZero
 - - Expected Output: 0.0
 - - Acutal Output: 0.0
 - -----------------------------------------------------------------
 - - Function: vecInnerProd 
 - - Test Case Number: 2
 - - Input: vecInnerProd (1,2,3) (3,4,5)
 - - Expected Output: 26.0
 - - Acutal Output: 26.0
 - -----------------------------------------------------------------
 - - Function: vecInnerProd 
 - - Test Case Number: 3
 - - Input: vecInnerProd ((-100),2,3) (1,78,56)
 - - Expected Output: 224.0
 - - Acutal Output: 224.0
 - -----------------------------------------------------------------
 - - Function: vecInnerProd 
 - - Test Case Number: 4
 - - Input: vecInnerProd ((-100),(-2),(-3)) ((-1),(-78),(-56))
 - - Expected Output: 424.0
 - - Acutal Output: 424.0
 ____________________________________________________________________________________
vecF v0 vS =  (vecNearest v0 vecZero (-1) vS , vecFarthest v0 vecZero 0 vS)
 - -----------------------------------------------------------------
 - - Function: vecF 
 - - Test Case Number: 1
 - - Input: vecF vecZero [(1,2,3),(4,5,6),(7,8,9),(10,11,12)]
 - - Expected Output: ((1.0,2.0,3.0),(10.0,11.0,12.0))
 - - Acutal Output: ((1.0,2.0,3.0),(10.0,11.0,12.0))
 vecF v0 vS =  (vecNearest v0 vecZero (-1) vS , vecFarthest v0 vecZero 0 vS)
 - -----------------------------------------------------------------
 - - Function: vecF 
 - - Test Case Number: 2
 - - Input: vecF (1,2,3) [(1,2,3),(4,5,6),(10,11,12),(7,8,9)]
 - - Expected Output: ((1.0,2.0,3.0),(10.0,11.0,12.0))
 - - Acutal Output: ((1.0,2.0,3.0),(10.0,11.0,12.0))
 - -----------------------------------------------------------------
 - - Function: vecF 
 - - Test Case Number: 3
 - - Input: vecF ((-1),(-45),3) [(1,2,3),(4,55,66),(10,171,12),(7,8,9)]
 - - Expected Output: ((1.0,2.0,3.0),(10.0,171.0,12.0))
 - - Acutal Output: ((1.0,2.0,3.0),(10.0,171.0,12.0))
 - -----------------------------------------------------------------
 - - Function: vecF 
 - - Test Case Number: 4
 - - Input: vecF ((-1),(-45),(-3)) []
 - - Expected Output: ((0.0,0.0,0.0),(0.0,0.0,0.0))
 - - Acutal Output: ((0.0,0.0,0.0),(0.0,0.0,0.0))
 -}