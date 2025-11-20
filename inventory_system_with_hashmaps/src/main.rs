use std::collections::HashMap;
use std::io;

fn main()
{
    let mut inventory = HashMap::new();

inventory.insert("l", 550000);
inventory.insert("m", 120000);
inventory.insert("k", 15000 );
inventory.insert("h", 25000);

println!("Welcome user!");
println!("Choose an item code from the menu below");

println!("{:?}", inventory);
let mut option = String::new();
io::stdin().read_line(&mut option).expect("Failed to read line");
let option = option.trim().to_lowercase(); // keep as String

let price
if let Some(price) = inventory.get(option.as_str())
 {
    println!("Price: {}", price);
} 
else
 {
    println!("Item not found");
}
}