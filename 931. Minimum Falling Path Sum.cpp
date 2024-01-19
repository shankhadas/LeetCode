//
// Created by das on 19/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if (matrix.size() == 1) {
            return matrix[0][0];
        }
        int n = matrix.size();
        vector<vector<int>> dp(matrix);
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                int minPath = dp[i + 1][j];
                if (j > 0) {
                    minPath = min(minPath, dp[i + 1][j - 1]);
                }
                if (j < n - 1) {
                    minPath = min(minPath, dp[i + 1][j + 1]);
                }
                dp[i][j] += minPath;
            }
        }

        int result = INT_MAX;
        for (int num : dp[0]) {
            result = min(result, num);
        }
        return result;
    }
};

int main() {
    vector<vector<int>> matrix = {{2,1,3},{6,5,4},{7,8,9}};

    Solution sol;
    int res=sol.minFallingPathSum(matrix);

    cout << res << endl;

    cout<<endl;
    return 0;
}