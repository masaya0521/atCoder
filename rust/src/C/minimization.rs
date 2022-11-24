fn main() {
    proconio::input! {
        mut n: i128,
        mut k: i128,
        mut a: [i128;n],
    }

    // 1回目をカウントする
    let mut sum: i128 = 1;

    // 2回目以降の操作は最小の数とk-1個の組が変換されるので
    // (n-k)/(k-1)回操作が繰り返される
    for _i in 0..(n-k)/(k-1) {
        sum += 1;
    }

    // 上記のfor文だと余りの数がカウントされないので
    // ここでカウント
    if (n-k)%(k-1) > 0  {
        sum += 1;
    }

    println!("{}", sum);
}