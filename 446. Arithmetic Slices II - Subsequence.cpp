//
// Created by das on 7/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int totalCount = 0;

        // dp[i][d] represents the number of arithmetic subsequences ending at index i with common difference d
        vector<unordered_map<long long, int>> dp(n);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = (long long)nums[i] - nums[j];

                // Check for possible integer overflow
                if (diff < INT_MIN || diff > INT_MAX)
                    continue;

                int count = dp[j].count(diff) ? dp[j][diff] : 0;

                // Add the count to the total and update dp[i][diff]
                totalCount += count;
                dp[i][diff] += count + 1;
            }
        }

        return totalCount;
    }
};

int main()
{
    vector<int> nums = {2,4,6,8,10};

    Solution sol;
    int res=sol.numberOfArithmeticSlices(nums);

    cout << res << "";

    cout<<endl;
    return 0;
}