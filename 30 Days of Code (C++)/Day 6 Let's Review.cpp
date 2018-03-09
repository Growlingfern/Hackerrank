#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T = 0;
    string s1; 
    string s2;
    
    //how many test cases are there?
    cin >> T;
    cin >> s1;
    cin >> s2;
    
   
    for(int i = 0; i < s1.length(); i=i+2){
        // Print each sequential character on the same line
        cout << (s1[i]);
    }   
    
    cout << " ";
    
    for(int x = 1;  x < s1.length(); x=x+2){
        // Print each sequential character on the same line
        cout << (s1[x]); 
    } 
    
    ////////////
    cout << "\n";
    ////////////
    
     for(int i = 0; i < s2.length(); i=i+2){
        // Print each sequential character on the same line
        cout << (s2[i]);
    }   
    
    cout << " ";
    
    for(int x = 1;  x < s2.length(); x=x+2){
        // Print each sequential character on the same line
        cout << (s2[x]); 
    } 
   
}
    
