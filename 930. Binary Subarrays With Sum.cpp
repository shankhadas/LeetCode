//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> count;
        count[0] = 1;
        int curr_sum = 0;
        int total_subarrays = 0;

        for (int num : nums) {
            curr_sum += num;
            if (count.find(curr_sum - goal) != count.end()) {
                total_subarrays += count[curr_sum - goal];
            }
            count[curr_sum]++;
        }
        return total_subarrays;
    }
};

int main()
{
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;

    Solution sol;
    int res=sol.numSubarraysWithSum(nums, goal);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
