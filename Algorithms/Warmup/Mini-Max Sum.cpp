#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <int> arr) {
    int n = arr.size();
    long sum = 0;
    long highestint = 0;
    long lowestint = 1000000000;
    
    for(int i = 0; i<n; i++){
        if(arr[i]> highestint){
            highestint = arr[i];
        }
        if(arr[i]< lowestint){
            lowestint = arr[i];
        }
        sum+= arr[i];
    }
    
    long anslow = sum - highestint;
    long anshigh = sum - lowestint;
    cout<< anslow<<" "<<anshigh;
    
   
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
