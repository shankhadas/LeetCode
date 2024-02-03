//
// Created by das on 3/2/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int N = arr.size();

        int dp[N + 1];
        memset(dp, 0, sizeof(dp));

        for (int start = N - 1; start >= 0; start--) {
            int currMax = 0;
            int end = min(N, start + k);

            for (int i = start; i < end; i++) {
                currMax = max(currMax, arr[i]);
                // Store the maximum of all options for the current subarray.
                dp[start] = max(dp[start], dp[i + 1] + currMax * (i - start + 1));
            }
        }
        return dp[0];
    }
};

int main() {
    vector<int> arr = {1,15,7,9,2,5,10};
    int k = 3;

    Solution sol;
    int res=sol.maxSumAfterPartitioning(arr, k);

    cout << res << endl;

    cout<<endl;
    return 0;
}