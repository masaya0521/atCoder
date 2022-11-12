fn main() {
    let mut flag: bool = false;
    proconio::input! {
        a: i32,
        b: i32,
    }

    for i in 0..3 {
        if a*b*i%2 == 1 {
            flag = true;
        }
    }

    if flag {
        println!("Yes")
    } else {
        println!("No")
    }
}