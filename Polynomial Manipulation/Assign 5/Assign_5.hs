{- Assignment 5
 - Name: Suleyman Kiani
 - Date: December 1st, 2018
 -}
 module Assign_5 where
    import Test.QuickCheck
    macid :: String
    macid = "kianis4"
    
    
    {- -----------------------------------------------------------------
     - definiteIntegral
     - -----------------------------------------------------------------
     - Description: The purpose of the definiteIntegral funtction is to Calculate the Area under a given function using Trapazoidal sums when
     given a set of constraints, and the total number of sections used. The nature of definite Integration is that the greater out 'n' value
     is, the more precise our approximation will be. The function is given a lower bound, an upper bound, and the width of each sectio, (delX)
     and computes the area under the inputed function and the x-axis.
     -}
    definiteIntegral :: Double -> Double -> (Double -> Double) -> Integer -> Double
    definiteIntegral a b g n   -- a and b represent the bounds and n is the number of partitions. g represnts the function.
                        |n <= 0      = undefined
                        |a == b      = 0                              
                        |a < b       = - definiteIntegral b a g n  --If intgration of a higher to lower bound occurs the area is negative
                        |otherwise   = delX * sum [(g x + g (x-delX)) / 2 | x <- [b, b - delX .. a + delX]]
                    where
                        delX = (b-a) / fromIntegral n    --calculating Delta X value, value needs to be converted with 'fromIntegral' so we
                                                         -- can use it in the calculation
    
    
    
    {- -----------------------------------------------------------------
     - funH
     - -----------------------------------------------------------------
     - Description: The purpose of funH is to calculate the area between a function x^(1/n) and another function x^n between 0,1 using
     the definiteIntegral function. In there perameteres, the x^(1/n) function will always be greater so by subtacting the greater area from
     the smaller one, we can calculate the area between the two.
     -}
    funH :: Integer -> Double
    funH n  
        |n <= 0     = undefined -- n cannot beless than or equal to 0. 
        |otherwise  = (definiteIntegral 0 1 (\x -> x ** (1/fromIntegral n)) big) - (definiteIntegral 0 1 (\x -> x ^ n) big)  --subtracting smaller integral from larger one to calculate area between the two.
        where big = 100000  --large value represents the number of paritions, we use a large number so our computaion is precise.
    
    
    {- -----------------------------------------------------------------
     - funK
     - -----------------------------------------------------------------
     - Description: The purpose of funK is to calculate the area between the x-axis and a function n^x between -1 and 1. This is done using the
     definiteIntegral Function.
     -}
    funK :: Double -> Double
    funK a
        | a <= 0   = undefined  -- a canot be a negative value or equal to 0
        |otherwise = (definiteIntegral (-1) 1 (\x -> a ** x) big)  --Computing the area between the perametres, big represents the number if paritions. 
        where big = 100000 -- the larger the value of parititions the more precise the approximation.

    
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