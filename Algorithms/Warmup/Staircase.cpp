#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    for(int row = 1; row < (n+1); row++){
        for (int spaces = n - row; spaces > 0; spaces--){
                cout << " ";
        }
        for (int hash = row; hash > 0; hash--){
            cout << "#";
        }
        
    cout << "\n";  
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
