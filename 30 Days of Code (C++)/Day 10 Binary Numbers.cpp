#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int num; cin >> num;
    int counter = 0, maxCounter = 0;
    
    while (num)
    {
        const auto rem = num % 2;        
        counter = (counter + rem) * rem;
        maxCounter = max(counter, maxCounter);        
        num >>= 1;
    }
    
    cout << maxCounter << endl;
        
    return 0;
}
