#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    string name;
    string find;
    long number;
    int n;
    
    cin >> n;
    map<string, long> PhoneBook;
    while(0 < n){
        cin >> name >> number;
        PhoneBook[name] = number;
        n--;
    }   
    
    while(cin >> name){
        if(PhoneBook.find(name) != PhoneBook.end()){
            cout<<name<<"="<<PhoneBook.find(name)->second<<endl;
        }
        else if(PhoneBook.find(find) == PhoneBook.end()){
            cout << "Not found"<<endl;
        }
    }
}
