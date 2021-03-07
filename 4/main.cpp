#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int i,j;
int ans=0;
ll mod=pow(10, 9)+9;

int judge(unsigned int x){
    string str = to_string(x);
    int num=str.size();
    for(int k=0; k<(num/2);k++){
        if(str.at(k)!=str.at(num-k-1)){
            return 0;
        }
    }
    return 1;
}




int main(){
    for(i=100;i<1000;i++){
        for(j=100;j<1000;j++){
            if(judge(i*j)){
                ans = max(ans, i*j);
            }
        }
    }
    cout << ans << endl;
}
