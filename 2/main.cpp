#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll i,j,ans;

int main(){
    ll f,s,t;
    f = 0;
    s = 1;
    t = 0;
    while (t<=4*pow(10, 6)){
        t = f+s;
        if(t%2==0){
            ans += t;
        }
        f = s;
        s = t;
    }
    cout << ans << endl;
}