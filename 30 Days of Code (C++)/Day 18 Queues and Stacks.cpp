#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
    public:
        stack<char> s;
        queue<char> q;

        void pushCharacter(char ch){
            s.push(ch);
        } //method that pushes a character onto a stack.

        void enqueueCharacter(char ch){
            q.push(ch);
        } //method that enqueues a character in the  instance variable.

        char popCharacter(){
            char c = s.top();
            s.pop();
            return c;
        } //method that pops and returns the character at the top of the  instance variable.

        char dequeueCharacter(){
            char c = q.front();
            q.pop(); 
            return c;
        }// method that dequeues and returns the first character in the  instance variable.

};
