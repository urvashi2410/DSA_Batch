#include<iostream>
using namespace std;

int fact(int n){
    // base case 
    if(n < 0){
        return -1;
    }

    if(n == 1 || n == 0){
        return 1;
    }
    // n = 5 
    // n-1 = 4 
    // 5! = 5*4! 
    int ans = n * fact(n-1);
    return ans;
}

int main(){
    int n;
    cin >> n;
    if(fact(n) == -1){
        cout << "negative input!";
    }
    else{
        cout << "ans is " << fact(n);
    }

}