reverseNum :: Integer -> Integer
reverseNum n =
  let rev x
        | x < 10 = [x]
        | otherwise = x `mod` 10 : rev (x `div` 10)
   in foldl (\acc x -> acc * 10 + x) 0 (rev n)
