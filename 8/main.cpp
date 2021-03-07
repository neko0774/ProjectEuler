#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
ll ans=0;
ll mod=pow(10, 9)+9;

int main(){
    for(i=1;i<=100;i++){
        ans += i*(5050-i);
    }
    cout << ans << endl;
}
