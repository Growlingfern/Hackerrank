#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int n = a.size();
    int sum1 =0;
    int sum2 =0;
    int count=n-1;
    
    
    for(int i=0; i<n; i++){ 
        sum1+=a.at(i).at(i);
        sum2+=a.at(count).at(i);
        count--;
    }
 
    return abs(sum1-sum2);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
