//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; --i) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        vector<int> answer(n);

        for (int i = 0; i < n; ++i) {
            answer[i] = prefix[i] * suffix[i];
        }
        return answer;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4};

    Solution sol;
    vector<int> ans=sol.productExceptSelf(nums);

    for (auto res : ans) {
        cout << res <<" ";
    }

    cout<<endl;
    return 0;
}
