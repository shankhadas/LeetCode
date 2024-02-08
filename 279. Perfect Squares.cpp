//
// Created by das on 8/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0] = 0;

        for(int i=1; i<=n; ++i){
            dp[i] = INT_MAX;
            for(int j=1; j*j <= i; ++j){
                dp[i] = min(dp[i], dp[i-j*j] + 1);
            }
        }
        return dp[n];
    }
};

int main()
{
    int n = 12;

    Solution sol;
    int res = sol.numSquares(n);

    cout<< res << " " << endl;

    cout<<endl;
    return 0;
}