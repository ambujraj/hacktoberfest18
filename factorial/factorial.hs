factorial :: Int -> Int
factorial n = product [1..n]

main = do
        x <- readLn
        print (factorial x)
