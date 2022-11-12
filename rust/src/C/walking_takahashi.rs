const fn abs(v: i128) -> i128 {
    [-v, v][(v >= 0) as usize]
}

fn main() {
    proconio::input! {
        mut x: i128,
        mut k: i128,
        mut d: i128,
    }

    x = abs(x);
    let mut flag: bool = true;

    if x/d > k {
        x -= k*d;
        flag = false;
        println!("{}",x);
    }

    k -= x/d;
    x %= d;
    
    if k%2 == 1 {
        x = abs(x-d);
    }

    if flag {
        println!("{}",x);
    }
}