#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ans=1;

int is_prime(ll x){
    int j = 2;
    while(j*j<=x){
        if(x%j==0) return 0;
        j += 1;
    }
    return 1;
}

int main(){
    ll cnt=1;
    while(ans<10001){
        cnt += 2;
        ans += is_prime(cnt);
    }
    cout << cnt << endl;
}
