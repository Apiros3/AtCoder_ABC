

ft :: Int -> Int 
ft 0 = 1
ft n = n * ft (n-1) 

main :: IO ()
main = do 
    line <- getLine 
    let x = (read line :: Int)
    print (ft x)