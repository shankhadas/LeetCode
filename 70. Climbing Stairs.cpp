//
// Created by das on 18/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 1;
        int prev = 1;
        for(int i=2; i<=n; i++){
            int curri = prev + prev2;
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};

int main() {
    int n = 2;

    Solution sol;
    int res=sol.climbStairs(n);

    cout << res << endl;

    cout<<endl;
    return 0;
}