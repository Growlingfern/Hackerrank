#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int a[3] = {a0,a1,a2};
    int b[3] = {b0,b1,b2};
    int alice = 0;
    int bob = 0;
   
    for (int i=0; i<3; i++){
       
        if (a[i] > b[i]){
            alice++;
            
        } else if (b[i] > a[i]){
            bob++;   
        
        }
       
    }  
    vector<int> r = {alice, bob};
    return r;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
