//
// Created by das on 26/12/23.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int recursion(vector<vector<int>>& dp, int n ,int k, int target) {
        int mod = (int)pow(10, 9) + 7;

        if(target == 0 && n == 0) return 1;
        if(target <= 0 || n == 0) return 0;
        if(dp[n][target] != -1) return dp[n][target] % mod;

        int res = 0;
        for (int i=1; i<=k; i++) {
            res = (res + recursion(dp, n-1, k, target-i)) % mod;
        }
        dp[n][target] = res % mod;
        return dp[n][target];
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return recursion(dp, n, k, target);
    }
};

int main() {
    int  n = 1, k = 6, target = 3;

    Solution sol;
    int res=sol.numRollsToTarget(n, k ,target);

    cout << res << endl;

    cout<<endl;
    return 0;
}