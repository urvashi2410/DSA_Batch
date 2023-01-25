#include<bits/stdc++.h>
using namespace std;

// pow(2, 6) = 
// 2^6 
int powerLog(int b, int e){
    // base condition 
    if(e == 0){
        return 1;
    }
    if(e == 1){
        return b;
    }
    int ans = 0;
    // even exponent 
    int smallAns = powerLog(b, e/2);
    if(e % 2 == 0){
        ans = smallAns*smallAns;
    }
    else{
        ans = smallAns*smallAns*b;
    }
    return ans;
}

int main(){
    int b, e;
    cin >> b >> e;
    cout << powerLog(b, e);
}