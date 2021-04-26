fn main(){
    let mut ans: u128 = 0;
    for i in 1..=1000 {
        let mut cnt = 1;
        for _ in 0..i{
        cnt *= i%1000;
        cnt %= 10_000_000_000;
        }
        ans += cnt;
        //println!("{} {}", cnt, ans);
        ans %= 10_000_000_000;
   }
   println!("{}", ans);
}