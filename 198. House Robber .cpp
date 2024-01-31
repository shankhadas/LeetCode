//
// Created by das on 21/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int noRob = 0;
        for(int i=0; i<nums.size(); i++) {
            int newRob = noRob + nums[i];
            int newNoRob = max(rob, noRob);
            rob = newRob;
            noRob = newNoRob;
        }
        return max(rob, noRob);
    }
};

int main() {
    vector<int> nums = {2,7,9,3,1};

    Solution sol;
    int res=sol.rob(nums);

    cout << res << endl;

    cout<<endl;
    return 0;
}