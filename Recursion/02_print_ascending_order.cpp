// head recursion 

#include<iostream>
using namespace std;

// iterative method 
// void printAscending(int n){
//     for(int i = 1; i <= n; i++){
//         cout << i << " ";
//     }
// }

void printAscending(int n){
    // base condition 
    if(n <= 0){
        return;
    }

    printAscending(n-1);
    cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    printAscending(n);
}