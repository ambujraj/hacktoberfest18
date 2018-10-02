use std::io::{self, Read};

fn factorial(n: i32) -> i32{
    if n == 0 {return 1;}
        else {return n * factorial(n - 1);}
}

fn main(){
    println!("Input number to calculate the factorial for:");
    let mut input_text = String::new();
    io::stdin()
        .read_line(&mut input_text)
        .expect("Failed reading from stdin.");

    let trimmed = input_text.trim();
    match trimmed.parse::<i32>() {
        Ok(n) => println!("Result is: {}.", factorial(n)),
        Err(..) => println!("No integer given."),
    };
}
