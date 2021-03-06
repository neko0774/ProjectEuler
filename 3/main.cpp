#include <bits/stdc++.h>
#include <queue>
#include <iostream>
using namespace std;
using ll = long long;
int i,j;
ll ans;
ll mod=pow(10, 9)+9;

int main(){
    ll N=6857;
    i = 1;
    while (i*i<=N)
    {
        if (N%i==0){
            N/=i;
            ans=i;
            }
        i++;
    }
    cout << max(ans, N) << endl;
}