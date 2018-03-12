#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector <int> arr) {
    // Complete this function
    float n = arr.size();
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positive++;
        } else if (arr[i] < 0){
            negative++;
        } else {
            zero++;
        }  
    }
    
    float p = positive / n;
    float neg = negative / n;
    float z = zero / n;
    cout << p <<endl<< neg <<endl<< z;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
