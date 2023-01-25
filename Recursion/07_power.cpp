#include<bits/stdc++.h>
using namespace std;

// b^e = 3^2 = 9 
// 2^2 = 4 + 5 = wrong base-- 
// 3^1 = 3 = 3*3 = 9 

// 2^6 = 64 
// 2^5 = 32*2 = 64 (e--) 
long long power(int b, int e){
    if(e == 0){
        return 1;
    }
    if(e == 1){
        return b;
    }

    // power(2, 6) = power(2, 5) * 2 
    long long ans = power(b, e-1) * b;
    return ans;
}

int main(){
    long b;
    int e;
    cin >> b >> e;
    long long ans = power(b, e);
    cout << ans;
}