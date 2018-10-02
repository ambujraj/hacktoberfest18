perfectSquare :: [Int]
perfectSquare = [x*x | x <- [1..]]

listNPerfectSquare :: Int -> [Int]
listNPerfectSquare n = take n perfectSquare


