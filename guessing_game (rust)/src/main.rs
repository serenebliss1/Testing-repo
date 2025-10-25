use std::io;
use rand;

fn main()
{
    println!("Guess the number!");

    println!("Please input your guess.");

    
    let mut guess = String::new();
    io::stdin().read_line(&mut guess)
        .expect("Failed to read line");
    let mut value:String = guess.trim().parse().to_lowercase().expect("Error");
    
    
    if value == value
    {
        println!("You guessed {}", guess);
    }
    else
    {
        println!("Try again");
    }

    
}