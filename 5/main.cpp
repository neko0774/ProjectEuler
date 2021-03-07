#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
int ans=1;
ll mod=pow(10, 9)+9;

int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    else if(a%b==0) return b;
    else return gcd(b,a%b);
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}


int main(){
    for(i=1;i<20;i++){
        ans = lcm(ans, i);
    }
    cout << ans << endl;
}
