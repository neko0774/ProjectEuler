#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll i,j,ans;


int main(){
    //brute force
    for (i = 1; i < 1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            ans += i;
        }
    }
    cout << ans << endl;

    //calculation
    //x < 1000
    int n3,n5,n15,ans2;
    n3 = 1000/3;
    n5 = 1000/5-1;
    n15 = 1000/15;
    ans2 = (3*n3*(n3+1)+5*n5*(n5+1)-15*n15*(n15+1))/2;
    cout << ans2 << endl;
}