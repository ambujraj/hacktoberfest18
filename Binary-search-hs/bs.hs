module Bs where
  
  binarySearch :: (Ord  a) => [a] -> a -> Maybe a
  binarySearch [] _ = Nothing
  binarySearch list value | p == value = Just value
                          | p > value = binarySearch left value
                          | p < value = binarySearch right value
    where
      (left, p:right) = splitAt (length list `div` 2) list
