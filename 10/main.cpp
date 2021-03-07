#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
ll mod=pow(10, 9)+9;

int is_prime(int x){
   int i=2;
   while(i*i<=x){
       if(x%i==0) return 0;
       i++;
   }
   return x;
}


int main(){
    ll ans = 0;
    for(j=2;j<=2*pow(10,6);j++){
        ans += is_prime(j);
    }
    cout << ans << endl;
}

