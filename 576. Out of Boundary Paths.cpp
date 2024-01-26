//
// Created by das on 26/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int M = 1e9 + 7;
        int dp[m][n];
        memset(dp, 0 , sizeof dp); // Initialize dp with zeros
        dp[startRow][startColumn] = 1;
        int count = 0;

        for (int moves = 1; moves <= maxMove; moves++) {
            int temp[m][n];
            memset(temp, 0, sizeof temp); // Initialize temp with zeros

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == m - 1) count = (count + dp[i][j]) % M;
                    if (j == n - 1) count = (count + dp[i][j]) % M;
                    if (i == 0) count = (count + dp[i][j]) % M;
                    if (j == 0) count = (count + dp[i][j]) % M;
                    temp[i][j] = (
                        ((i > 0 ? dp[i - 1][j] : 0) + (i < m - 1 ? dp[i + 1][j] : 0)) % M +
                        ((j > 0 ? dp[i][j - 1] : 0) + (j < n - 1 ? dp[i][j + 1] : 0)) % M
                    ) % M;
                }
            }
            // Copy values from temp to dp
            memcpy(dp, temp, sizeof(temp));
        }
        return count;
    }
};

int main() {
    int m = 2, n = 2, maxMove = 2, startRow = 0, startColumn = 0;

    Solution sol;
    int res=sol.findPaths(m, n, maxMove, startRow, startColumn);

    cout << res << endl;

    cout<<endl;
    return 0;
}