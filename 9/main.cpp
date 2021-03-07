#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
int ans;

int main(){
    for(i=1;i<=30;i++){
        for(j=1;j<=30;j++){
            if(2*i*(i+j)==1000){
                cout << abs(i*i-j*j)*2*i*j*(i*i+j*j) << endl;
                break;
                }
        }
    }
}