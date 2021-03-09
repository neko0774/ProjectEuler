#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
ll ans=1;
ll mod=pow(10, 9)+9;

//40!/(20!*20!)
int main(){
    for(i=21;i<=40;i++){
        ans *= i;
        ans /= (i-20);
    }
    
    cout << ans << endl;
}
