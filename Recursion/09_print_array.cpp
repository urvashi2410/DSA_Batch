#include<bits/stdc++.h>
using namespace std;

// 0  1  2 3  4
// 11 21 3 14 5 
// n = 5
void printArray(int arr[], int n){
    if(n == 0){
        return;
    }
    if(n == 1){
        cout << arr[0] << " ";
        return;
    }
    printArray(arr, n - 1);
    cout << arr[n-1] << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printArray(arr, n);
}