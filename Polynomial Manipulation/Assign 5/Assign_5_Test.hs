{- Assignment 5 Tests
 - Name: Suleyman Kiani
 - Date: December 1st, 2018
 -}

import Assign_5

import Test.QuickCheck

main :: IO ()
main = do print "Performing Test 1: (definiteIntegral on OddFunctions)"
          quickCheck definiteIntegralPropOddFunctions
          print "Performing Test 2: (funH)"
          quickCheck funHProp
          print "Performing Test 3: (funK)"
          quickCheck funKProp
          

definiteIntegralPropOddFunctions :: Double -> Integer -> Bool
definiteIntegralPropOddFunctions a n = n<=0 || (abs(definiteIntegral (-a) a (\x->x) n) < 10E-5)

funHProp :: Integer -> Bool
funHProp a = a<=1 || funH a > 0

funKProp :: Double -> Bool
funKProp a = a<=0 || funK (1/a) - funK a < 10e-5

 {- -----------------------------------------------------------------
     - Test Cases
     - -----------------------------------------------------------------
     -
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 1
     - - Input: definiteIntegral 0 10 (\x->x) 10
     - - Expected Output: 50.0
     - - Acutal Output: 50.0
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 2
     - - Input: definiteIntegral 10 0 (\x->x) 10
     - - Expected Output: -50.0
     - - Acutal Output: -50.0
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 3
     - - Input: definiteIntegral 0 10 (\x->(-x)) 10
     - - Expected Output: -50.0
     - - Acutal Output: -50.0
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 4
     - - Input: definiteIntegral 0 10 (\x->(2*x^2)) 100
     - - Expected Output: 666.6666666667
     - - Acutal Output: 666.7000000000043
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 5
     - - Input: definiteIntegral 0 10 (\x->(2*x^2)) 100
     - - Expected Output: 666.6666666667
     - - Acutal Output: 666.7000000000043
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 5
     - - Input: definiteIntegral 0 10 (\x->x) (-100)
     - - Expected Output: undefined
     - - Acutal Output: undefined
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: definiteIntegral
     - - Test Case Number: 6
     - - Input: definiteIntegral 0 10 (\x->(-2)*x^2) 100
     - - Expected Output: -666.6666666667
     - - Acutal Output: -666.7000000000043
     - -----------------------------------------------------------------

    Function: definiteIntegral
    Property: definiteIntegralPropOddFunctions :: Double -> Integer -> Bool
              definiteIntegralPropOddFunctions a n = n<=0 || (abs(definiteIntegral (-a) a (\x->x) n) < 10E-5)
    Actual Test Result: Pass 
_________________________________________________________________________________
     - -----------------------------------------------------------------
     - - Function: funH
     - - Test Case Number: 1
     - - Input: funH 2
     - - Expected Output: 1/3 (0.33333333)
     - - Acutal Output: 0.33333332674734495
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funH
     - - Test Case Number: 2
     - - Input: funH (-2)
     - - Expected Output: undefined
     - - Acutal Output: undefined
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funH
     - - Test Case Number: 3
     - - Input: funH 1
     - - Expected Output: 0.0
     - - Acutal Output: 0.0
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funH
     - - Test Case Number: 4
     - - Input: funH 0
     - - Expected Output: undefined
     - - Acutal Output: undefined
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funH
     - - Test Case Number: 5
     - - Input: funH 1000000
     - - Expected Output: value approaching 1 as input gets larger (0.99999)
     - - Acutal Output: 0.9999889996229135
     - -----------------------------------------------------------------
    
    Function: funH
    Property: funHProp :: Integer -> Bool
              funHProp a = a<=1 || funH a > 0
    Actual Test Result: Pass 
_________________________________________________________________________________
     - -----------------------------------------------------------------
     - - Function: funK
     - - Test Case Number: 1
     - - Input: funK 2
     - - Expected Output: 2.16404
     - - Acutal Output: 2.164042561369918
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funK
     - - Test Case Number: 2
     - - Input: funK 1
     - - Expected Output: 2
     - - Acutal Output: 2.0
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funK
     - - Test Case Number: 3
     - - Input: funK (-1)
     - - Expected Output: undefined
     - - Acutal Output: undefined
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funK
     - - Test Case Number: 4
     - - Input: funK 0
     - - Expected Output: undefined
     - - Acutal Output: undefined
     - -----------------------------------------------------------------
     - -----------------------------------------------------------------
     - - Function: funK
     - - Test Case Number: 5
     - - Input: funK 0.5
     - - Expected Output: 2.164
     - - Acutal Output: 2.1640425613669176
     - -----------------------------------------------------------------


    Function: funH
    Property: funKProp :: Double -> Bool
              funKProp a = a<=0 || funK (1/a) - funK a < 10e-5
    Actual Test Result: Pass
-}