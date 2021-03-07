#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ans;
ll mod=pow(10, 9)+9;

int divisions(ll x){
    ll j=1;//x = 1 return flase value though
    int cnt=0;
    while (j*j<=x){
        if(x%j==0){
            if(x%j==j) cnt++;
            else cnt+=2;
        };
        j++;
    }
    return cnt;
}

int main(){
    ll num=1;
    ll ans=1;
    while(divisions(ans)<=500){
        num++;
        ans+=num;
    }
    cout << num << "|" << ans <<endl;
    cout << divisions(7676500) << endl;
    ll a = 7676500;
    cout << divisions(a) << endl;
}