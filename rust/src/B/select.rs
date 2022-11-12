const fn abs(v: i32) -> i32 {
    [-v, v][(v >= 0) as usize]
}

fn main() {
    proconio::input! {
        mut n: i32,
        mut k: i32,
    }

    let mut a: Vec<i32> = Vec::new();
    let mut b: Vec<i32> = Vec::new();
    for i in 0..n {
        proconio::input! {
            mut inp: i32, 
        }
        a.push(inp);
    }
    for i in 0..n {
        proconio::input! {
            mut inp: i32,
        }
        b.push(inp)
    }

    let mut sum_b: i32 = 0;
    for i in 0..n {
        sum_b += abs(a[i as usize] - b[i as usize]);
    }

    if k >= sum_b && (abs(k%2) == abs(sum_b%2)) {
        println!("Yes");
    } else {
        println!("No");
    }
}