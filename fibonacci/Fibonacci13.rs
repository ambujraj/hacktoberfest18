fn fibonacci_match(n: u32) -> u32{
    match n{
        0 => 0,
        1 => 1,
        _ => fibonacci_match(n - 1) + fibonacci_match(n-2),
    }
}

fn fibonacci_loop(n: u32) -> u32{
    let mut sum: u32 = 0;
    let mut n1: u32 = 0;
    let mut n2: u32 = 1;
    for _i in 1..n {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return sum;
}
