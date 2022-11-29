
-- Assignment 1

mult2 x y = x*y

mult3 x y z = x*y*z

first_a :: Int -> [Int]
first_a n = [x | x <- [1..n], mod x 6 == 0 || mod x 11 == 0]

isMult6Or11 :: Int -> Bool
isMult6Or11 x = mod x 6 == 0 || mod x 11 == 0

first_b :: Int -> [Int]
first_b n = [x | x <- [1..n], isMult6Or11 x]

second_a:: Int -> [Int]
second_a n = [ x | x <- [1..n], show x == reverse (show x) && mod (read (reverse (show x))) 10 == 3]

second_b :: Int -> [Int]
second_b n = [x | x <- [1..n], isPalindromeThatStartsWithDigit3 x]

isPalindrome:: Int -> Bool
isPalindrome x = show x == reverse (show x)

beginsWith3:: Int -> Bool
beginsWith3 x = mod y 10 == 3
    where y = read (reverse (show x))

isPalindromeThatStartsWithDigit3 :: Int -> Bool
isPalindromeThatStartsWithDigit3 x = isPalindrome x && beginsWith3 x


-- Assignment 2

isPrime n = prime n (n-1)
    where
    prime f s
        | f == 1 = False
        | s < 2 = True
        | mod f s == 0 = False
        | otherwise = prime f (s-1)

nextPrime :: Integer -> Integer
nextPrime n = prime (n+1)
    where
    prime v
       | isPrime v = v
       | otherwise = prime (v+1)


pList 0 _ = return []
pList n np =
    do
      ns <- pList (n-1) (nextPrime np)
      return (np:ns)
-- DON'T TOUCH! This works great! START AT (n 2) EACH TIME (1 is not a prime??)

nthPrime n =  take n primes !! (n-1)

primes = sieve [2..]
sieve (p : xs) = p : sieve [ x | x <- xs, x `mod` p > 0 ]
-- another way to get primes

problem1 n = [nthPrime x | x <- [1, 3..n*2]]
-- works and is kinda bad lol

-- idea: n = iterations of prime numbers until we get the nth prime. IE: n = 10, return 29 (not a list!)

fib 0 = 1
fib 1 = 1
fib n = fib (n-1) + fib (n-2)


fibCount n c = count n 0
    where
        count f c
           | fib c > f = c
           | otherwise = count f (c+1)
-- this returns how far we should do a fib sequence to reach "n" 

endsWith3 f n = (mod f 10 == 3) && (f <= n)

problem2 n = [fib x | x <- [1..y], endsWith3 (fib x) n]
    where
        y = fibCount n 0



isqrt = floor.sqrt.fromInteger
-- this doesn't work because it fucking makes everything isPrime


factorOf3orMod5 :: Integer -> Bool
factorOf3orMod5 n = (isPrime(isqrt n) && isqrt n * isqrt n == n) || mod n 5 == 0
-- a factor of 3 is iff the sqrt of the original number is prime

problem3 n = [x | x <- [1..n], factorOf3orMod5 x]


-- Assignment 3

double = print (map (*2) [1,5,-18,99])
-- problem 1

doubleN n = print (map (*2) [1..n])
-- this is just for fun and as a proof of concept


extractEven = print (filter even [1..100])
-- problem 2


triple = print (map (*3) [1,3..77])
-- problem 3


calcSumSquare = print (sum (map (^2) (filter odd [1,2,3,4,5,7,8,1,43,25,65,22])))
-- problem 4