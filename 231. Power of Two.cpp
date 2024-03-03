//
// Created by das on 20/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        return(!(n&(n-1)));
    }
};

int main() {
    int n = 1;

    Solution sol;
    bool res = sol.isPowerOfTwo(n);

    cout << res << " ";

    cout<<endl;
    return 0;
}