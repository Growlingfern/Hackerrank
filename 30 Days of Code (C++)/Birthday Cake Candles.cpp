#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int highest = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(highest < ar[i]){
            highest = ar[i];
        }
    }
    
    for (int x = 0; x < n; x++){
        if(ar[x] == highest){
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
