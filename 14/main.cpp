#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
ll ans=0;

int count(ll x){
    int cnt=0;
    while(x!=1){
        if(x%2==0){
            x /= 2;
            cnt++;
        }else{
            x = x*3+1;
            cnt++;
        }
    }
    return cnt;
}




int main(){
    int counter=0;
    for(ll i=1;i<pow(10,6);i++){
        if(counter<count(i)){
            counter=count(i);
            ans = i;
        }
    }
    cout << ans << endl;

}
